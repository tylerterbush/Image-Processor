#include "image.h"
#include <stdlib.h>
#include <math.h>

////////////////////////////
// Image processing stuff //
////////////////////////////
Pixel::Pixel(const Pixel32& p)
{
    this->r = (float) p.r / 255.0;
    this->g = (float) p.g / 255.0;
    this->b = (float) p.b / 255.0;
    this->a = (float) p.a / 255.0;
}
Pixel32::Pixel32(const Pixel& p)
{
    float r = p.r * 255.0;
    float g = p.g * 255.0;
    float b = p.b * 255.0;
    float a = p.a * 255.0;
    
    this-> r = r;
    this-> g = g;
    this-> b = b;
    this-> a = a;
}

int Image32::AddRandomNoise(const float& noise,Image32& outputImage) const
{
    float random_noise;
    float range = 2 * noise;
    int x,y;
    
    outputImage.setSize(this->width(), this->height());
    for (y = 0; y < this->h; y++) {
        for(x = 0; x < this->w; x++){
            random_noise = -noise + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/(range)));
            Pixel p = Pixel(this->pixel(x,y));
            p.r += random_noise;
            if(p.r < 0){
                p.r = 0;
            }
            if(p.r > 1){
                p.r = 1;
            }
            p.g += random_noise;
            if(p.g < 0){
                p.g = 0;
            }
            if(p.g > 1){
                p.g = 1;
            }
            p.b += random_noise;
            if(p.b < 0){
                p.b = 0;
            }
            if(p.b > 1){
                p.b = 1;
            }
            outputImage(x,y) = Pixel32(p);
        }
    }
    
	return 1;
}

int Image32::Brighten(const float& brightness,Image32& outputImage) const
{
    int x,y;
    
    outputImage.setSize(this->width(), this->height());
    for (y = 0; y < this->h; y++) {
        for(x = 0; x < this->w; x++){
            Pixel p = Pixel(this->pixel(x,y));
            p.r *= brightness;
            if(p.r > 1){
                p.r = 1;
            }
            p.b *= brightness;
            if(p.b > 1){
                p.b = 1;
            }
            p.g *= brightness;
            if(p.g > 1){
                p.g = 1;
            }
            p.a = 1;
            outputImage(x,y) = Pixel32(p);
        }
    }
	return 1;
}

int Image32::Luminance(Image32& outputImage) const
{
    int x,y;
    float luminace;

    outputImage.setSize(this->width(), this->height());
    for (y = 0; y < this->h; y++) {
        for(x = 0; x < this->w; x++){
            Pixel p = Pixel(this->pixel(x,y));
            luminace = p.r * .30 + p.g * .59 + p.b * .11;
            p.r = luminace;
            p.g = luminace;
            p.b = luminace;
            p.a = 1;
            outputImage(x,y) = Pixel32(p);
            
        }
    }
	return 1;
}

int Image32::Contrast(const float& contrast,Image32& outputImage) const
{
    int x,y;
    float total_luminance=0.0;
    float luminace;
    float avg_luminance = 0;
    int pixels = 0;
    
    outputImage.setSize(this->width(), this->height());
    for (y = 0; y < this->h; y++) {
        for(x = 0; x < this->w; x++){
            Pixel p = this->pixel(x,y);
            luminace = p.r * .30 + p.g * .59 + p.b * .11;
            total_luminance += luminace;
            pixels++;
        }
    }
    avg_luminance = total_luminance / (this->width() * this-> height());
    
    for (y = 0; y < this->h; y++) {
        for(x = 0; x < this->w; x++){
            Pixel p = this->pixel(x,y);
            p.r = ((p.r - avg_luminance) * contrast) + avg_luminance;
            if(p.r < 0){
                p.r = 0;
            }
            if(p.r > 1){
                p.r = 1;
            }
            p.g = ((p.g - avg_luminance) * contrast) + avg_luminance;
            if(p.g < 0){
                p.g = 0;
            }
            if(p.g > 1){
                p.g = 1;
            }
            p.b = ((p.b - avg_luminance) * contrast) + avg_luminance;
            if(p.b < 0){
                p.b = 0;
            }
            if(p.b > 1){
                p.b = 1;
            }
            outputImage(x,y) = Pixel32(p);
        }
    }

    
	return 1;
}

int Image32::Saturate(const float& saturation,Image32& outputImage) const
{
    int x,y;
    float luminance;
    
    outputImage.setSize(this->width(), this->height());
    for (y = 0; y < this->h; y++) {
        for(x = 0; x < this->w; x++){
            Pixel p = this->pixel(x,y);
            luminance = p.r * .30 + p.g * .59 + p.b * .11;
            p.r = ((p.r - luminance) * saturation) + luminance;
            if(p.r < 0){
                p.r = 0;
            }
            if(p.r > 1){
                p.r = 1;
            }
            p.g = ((p.g - luminance) * saturation) + luminance;
            if(p.g < 0){
                p.g = 0;
            }
            if(p.g > 1){
                p.g = 1;
            }
            p.b = ((p.b - luminance) * saturation) + luminance;
            if(p.b < 0){
                p.b = 0;
            }
            if(p.b > 1){
                p.b = 1;
            }
            //p.a = contrast;
            outputImage(x,y) = Pixel32(p);
        }
    }

	return 1;
}

int Image32::Quantize(const int& bits,Image32& outputImage) const
{
    int x,y,power;
    outputImage.setSize(this->width(), this->height());
    power = pow(2,bits);
    for (y = 0; y < this->h; y++) {
        for(x = 0; x < this->w; x++){
            Pixel p = this->pixel(x,y);
            p.r = floor(p.r * (power)) / (power-1);
            if(p.r < 0){
                p.r = 0;
            }
            if(p.r > 1){
                p.r = 1;
            }
            p.g = floor(p.g * (power)) / (power-1);
            if(p.g < 0){
                p.g = 0;
            }
            if(p.g > 1){
                p.g = 1;
            }
            p.b = floor(p.b * (power)) / (power -1);
            if(p.b < 0){
                p.b = 0;
            }
            if(p.b > 1){
                p.b = 1;
            }
            outputImage(x,y) = Pixel32(p);
        }
    }
	return 1;
}

int Image32::RandomDither(const int& bits,Image32& outputImage) const
{
    int x,y;
    float range = 2;//.5
    float random_noise;
    int power = pow(2, bits);
    outputImage.setSize(this->width(), this->height());
    
    for (y = 0; y < this->h; y++) {
        for(x = 0; x < this->w; x++){
            Pixel p = Pixel(this->pixel(x,y));
            
            random_noise = -1 + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/(range)));
            
            p.r = floor(power * (p.r + random_noise)) / static_cast <float>(power -1);

            if(p.r > 1){
                p.r = 1;
            }
            if(p.r < 0){
                p.r = 0;
            }
            p.g = floor(power * (p.g + random_noise)) / static_cast <float>(power -1);
            if(p.g > 1){
                p.g = 1;
            }
            if(p.g < 0){
                p.g = 0;
            }
            p.b = floor(power * (p.b + random_noise)) / static_cast <float>(power -1);
            if(p.b > 1){
                p.b = 1;
            }
            if(p.b < 0){
                p.b = 0;
            }
            outputImage(x,y) = Pixel32(p);
        }
    }
	return 1;
}

int Image32::OrderedDither2X2(const int& bits,Image32& outputImage) const
{
    int i,j,x,y;
    float cRed, cGreen, cBlue, redError, greenError, blueError;
    Pixel p;
    float mask[2][2] = {{.2,.6}, {.8, .4}};
    outputImage.setSize(this->width(), this->height());
    
    for (y = 0; y < this->height(); y++) {
        for(x = 0; x < this->width(); x++){
            i = x%2;
            j = y%2;
            p = Pixel(this->pixel(x,y));
            cRed = p.r * (pow(2,bits) - 1);
            redError = cRed - floor(cRed);
            if(redError > mask[i][j]){
                p.r = ceil(cRed) / (pow(2,bits) - 1);
            }
            else{
                p.r = floor(cRed)/ (pow(2,bits) - 1);
            }
            
            cGreen = p.g * (pow(2,bits) - 1);
            greenError = cGreen - floor(cGreen);
            if(greenError > mask[i][j]){
                p.g = ceil(cGreen)/ (pow(2,bits) - 1);
            }
            else{
                p.g = floor(cGreen)/ (pow(2,bits) - 1);
            }
            
            cBlue = p.b * (pow(2,bits) - 1);
            blueError = cBlue - floor(cBlue);
            if(blueError > mask[i][j]){
                p.b = ceil(cBlue)/ (pow(2,bits) - 1);
            }
            else{
                p.b = floor(cBlue)/ (pow(2,bits) - 1);
            }
            
            outputImage(x,y) = Pixel32(p);
        }
    }
	return 1;
}

int Image32::FloydSteinbergDither(const int& bits,Image32& outputImage) const
{
    int x,y;
    int temp;
    double a = 7.0/16.0,b = 3.0/16.0,c = 5.0/16.0,d = 1.0/16.0;
    double errorRed, errorGreen, errorBlue, power;
    Pixel originalPixel, quantizedPixel;
    Pixel32 p;
    Image32 img;
    power = static_cast <double> (pow(2.0,bits));
    outputImage.setSize(this->width(),this->height());
    img.setSize(this->width(),this->height());
    //puts all pixels from source image in output image
    for (y = 0; y < this->h; y++) {
        for(x = 0; x < this->w; x++){
            p = this->pixel(x,y);
            img(x,y).r = p.r;
            img(x,y).g = p.g;
            img(x,y).b = p.b;
            img(x,y).a = p.a;
        }
    }
    
    for (y = 0; y < this->h; y++) {
        for(x = 0; x < this->w; x++){
            originalPixel = Pixel(img(x,y));
            quantizedPixel = Pixel();
            
            //quantize the pixel
            
            quantizedPixel.r = static_cast <double> (floor(originalPixel.r * power)) / (power - 1.0);
            if(quantizedPixel.r < 0){
                quantizedPixel.r = 0;
            }
            if(quantizedPixel.r > 1){
                quantizedPixel.r = 1;
            }
            quantizedPixel.g = static_cast <double> (floor(originalPixel.g * power)) / (power - 1.0);
            if(quantizedPixel.g < 0){
                quantizedPixel.g = 0;
            }
            if(quantizedPixel.g > 1){
                quantizedPixel.g = 1;
            }
            quantizedPixel.b = static_cast <double> (floor(originalPixel.b * power)) / (power - 1.0);
            if(quantizedPixel.b < 0){
                quantizedPixel.b = 0;
            }
            if(quantizedPixel.b > 1){
                quantizedPixel.b = 1;
            }
            quantizedPixel.a = originalPixel.a;
            
            errorRed = static_cast <int> ((originalPixel.r - quantizedPixel.r) * 255.0);
            errorGreen = static_cast <int> ((originalPixel.g - quantizedPixel.g)*255.0);
            errorBlue = static_cast <int> ((originalPixel.b - quantizedPixel.b)* 255.0);
            
            outputImage(x,y) = Pixel32(quantizedPixel);
            
            if(x < this->w - 1){
            //right pixel
                temp = img(x+1,y).r + static_cast <int>(a * errorRed);
                if(temp > 255){
                    temp = 255;
                }
                else if(temp < 0){
                    temp = 0;
                }
                img(x+1,y).r = temp;
                
                temp = img(x+1,y).g + static_cast <int>(a * errorGreen);
                if(temp > 255){
                    temp = 255;
                }
                else if(temp < 0){
                    temp = 0;
                }
                img(x+1,y).g = temp;
                
                temp = img(x+1,y).b + static_cast <int>(a * errorBlue);
                if(temp > 255){
                    temp = 255;
                }
                else if(temp < 0){
                    temp = 0;
                }
                img(x+1,y).b = temp;
            }
            if(x > 0 && y < this->h - 1){
                //bottom left pixel
                temp = img(x-1,y+1).r + static_cast <int> (b * errorRed);
                if(temp > 255){
                    temp = 255;
                }
                else if(temp < 0){
                    temp = 0;
                }
                img(x-1,y+1).r = temp;
                
                temp = img(x-1,y+1).g + static_cast <int>(b * errorGreen);
                if(temp > 255){
                    temp = 255;
                }
                else if(temp < 0){
                    temp = 0;
                }
                img(x-1,y+1).g = temp;
                
                temp = img(x-1,y+1).b + static_cast <int>(b * errorBlue);
                if(temp > 255){
                    temp = 255;
                }
                else if(temp < 0){
                    temp = 0;
                }
                img(x-1,y+1).b = temp;
            }
            if(y < this->h - 1){
                //bottom pixel
                temp = img(x,y+1).r + static_cast <int>(c * errorRed);
                if(temp > 255){
                    temp = 255;
                }
                else if(temp < 0){
                    temp = 0;
                }
                img(x,y+1).r = temp;
                
                temp = img(x,y+1).g + static_cast <int>(c * errorGreen);
                if(temp > 255){
                    temp = 255;
                }
                else if(temp < 0){
                    temp = 0;
                }
                img(x,y+1).g = temp;
                
                temp = img(x,y+1).b + static_cast <int>(c * errorBlue);
                if(temp > 255){
                    temp = 255;
                }
                else if(temp < 0){
                    temp = 0;
                }
                img(x,y+1).b = temp;
            }
            if(y < this->h - 1 && x < this->w - 1){
                //bottom right pixel
                temp = img(x+1,y+1).r + static_cast <int>(d * errorRed);
                if(temp > 255){
                    temp = 255;
                }
                else if(temp < 0){
                    temp = 0;
                }
                img(x+1,y+1).r = temp;
                
                temp = img(x+1,y+1).g + static_cast <int>(d * errorGreen);
                if(temp > 255){
                    temp = 255;
                }
                else if(temp < 0){
                    temp = 0;
                }
                img(x+1,y+1).g = temp;
                
                temp = img(x+1,y+1).b + static_cast <int>(d * errorBlue);
                if(temp > 255){
                    temp = 255;
                }
                else if(temp < 0){
                    temp = 0;
                }
                img(x+1,y+1).b = temp;
            }
            
        }
    }
     
	return 1;
}

int Image32::Blur3X3(Image32& outputImage) const
{
    int x,y;
    Pixel pixels[9];
    float mask[9] = {.0625, .125, .0625, .125, .25, .125, .0625, .125, .0625};
    float case_mask[9];
    float sum;
    Pixel p;
    float red=0;
    float blue=0;
    float green=0;
    outputImage.setSize(this->width(), this->height());
    
    for (y = 0; y < this->h; y++) {
        for(x = 0; x < this->w; x++){
            
            sum = 0.0;
            //clear the case mask
            for(int i = 0; i < 9; i++){
                case_mask[i] = 0.0;
            }
            
            //Need to check if each index in "matrix" is within the picture
            
            if(x > 0 && y < this->h - 1){
                pixels[0] = Pixel(this->pixel(x-1,y+1));
                sum += mask[0];
                case_mask[0] = mask[0];
            }
            if(y < this->h - 1){
                pixels[1] = Pixel(this->pixel(x,y+1));
                sum += mask[1];
                case_mask[1] = mask[1];
            }
            if(x < this->w - 1 && y < this->h-1){
                pixels[2] = Pixel(this->pixel(x+1,y+1));
                sum += mask[2];
                case_mask[2] = mask[2];
            }
            if(x > 0){
                pixels[3] = Pixel(this->pixel(x-1,y));
                sum += mask[3];
                case_mask[3] = mask[3];
            }
            //this will always be set...it's the current pixel
            pixels[4] = Pixel(this->pixel(x,y));
            sum += mask[4];
            case_mask[4] = mask[4];
            
            if(x < this->w - 1){
                pixels[5] = Pixel(this->pixel(x+1,y));
                sum += mask[5];
                case_mask[5] = mask[5];
            }
            if(x > 0 && y > 0){
                pixels[6] = Pixel(this->pixel(x-1,y-1));
                sum += mask[6];
                case_mask[6] = mask[6];
            }
            if(y > 0){
                pixels[7] = Pixel(this->pixel(x,y-1));
                sum += mask[7];
                case_mask[7] = mask[7];
            }
            if(y > 0 && x < this->w - 1){
                pixels[8] = Pixel(this->pixel(x+1,y-1));
                sum += mask[8];
                case_mask[8] = mask[8];
            }
            //end of cases
            
            p = Pixel(this->pixel(x,y));
            red = 0;
            blue = 0;
            green = 0;
            
            for(int i=0; i<9; i++){
                case_mask[i] /= sum;
            }
            
            for(int i=0;i < 9; i++){
                if(case_mask[i] == 0){
                    continue;
                }
                red += case_mask[i] * pixels[i].r;
                blue += case_mask[i] * pixels[i].b;
                green += case_mask[i] * pixels[i].g;
            }
            p.r = red;
            p.g = green;
            p.b = blue;
            
            outputImage(x,y) = Pixel32(p);
        }
    }
	return 1;
}

int Image32::EdgeDetect3X3(Image32& outputImage) const
{
	int x,y,count;
    Pixel pixels[9];
    float mask[9] = {-1, -1, -1, -1, 8, -1, -1, -1, -1};
    float case_mask[9];
    Pixel p;
    float red=0;
    float blue=0;
    float green=0;
    outputImage.setSize(this->width(), this->height());
    
    for (y = 0; y < this->h; y++) {
        for(x = 0; x < this->w; x++){
            //clear the case mask
            for(int i = 0; i < 9; i++){
                case_mask[i] = 0;
            }
            
            count = 0;
            if(x > 0 && y < this->h - 1){
                pixels[0] = Pixel(this->pixel(x-1,y+1));
                count++;
                case_mask[0] = mask[0];
            }
            if(y < this->h - 1){
                pixels[1] = Pixel(this->pixel(x,y+1));
                count++;
                case_mask[1] = mask[1];
            }
            if(x < this->w - 1 && y < this->h-1){
                pixels[2] = Pixel(this->pixel(x+1,y+1));
                count++;
                case_mask[2] = mask[2];
            }
            if(x > 0){
                pixels[3] = Pixel(this->pixel(x-1,y));
                count++;
                case_mask[3] = mask[3];
            }
            //this will always be set...it's the current pixel
            pixels[4] = Pixel(this->pixel(x,y));
            if(x < this->w - 1){
                pixels[5] = Pixel(this->pixel(x+1,y));
                count++;
                case_mask[5] = mask[5];
            }
            if(x > 0 && y > 0){
                pixels[6] = Pixel(this->pixel(x-1,y-1));
                count++;
                case_mask[6] = mask[6];
            }
            if(y > 0){
                pixels[7] = Pixel(this->pixel(x,y-1));
                count++;
                case_mask[7] = mask[7];
            }
            if(y > 0 && x < this->w - 1){
                pixels[8] = Pixel(this->pixel(x+1,y-1));
                count++;
                case_mask[8] = mask[8];
            }
            
            p = Pixel(this -> pixel(x,y));
            red = 0;
            blue = 0;
            green = 0;
            case_mask[4] = count;
            
            for(int i=0;i < 9; i++){
                if(case_mask[i] == 0){
                    continue;
                }
                else{
                    red += case_mask[i] * pixels[i].r;
                    blue += case_mask[i] * pixels[i].b;
                    green += case_mask[i] * pixels[i].g;
                }
            }
            p.r = red;
            if(p.r > 1){
                p.r = 1;
            }
            if(p.r < 0){
                p.r = 0;
            }
            
            p.g = green;
            if(p.g > 1){
                p.g = 1;
            }
            if(p.g < 0){
                p.g = 0;
            }
            
            p.b = blue;
            if(p.b > 1){
                p.b = 1;
            }
            if(p.b < 0){
                p.b = 0;
            }
            
            outputImage(x,y) = Pixel32(p);
        }
    }
	return 1;
}
int Image32::ScaleNearest(const float& scaleFactor,Image32& outputImage) const
{
    int x,y;
    Pixel32 p;
    
    outputImage.setSize(this->width() * scaleFactor, this->height() * scaleFactor);
    for (y = 0; y < outputImage.height()-1; y++) {
        for(x = 0; x < outputImage.width()-1; x++){
            p = this->NearestSample((float) x/scaleFactor,(float) y/scaleFactor);
            outputImage(x,y) = p;
        }
    }
	return 1;
}

int Image32::ScaleBilinear(const float& scaleFactor,Image32& outputImage) const
{
    int x,y;
    Pixel32 p;
    outputImage.setSize(this->width() * scaleFactor, this->height() * scaleFactor);
    
    for (y = 0; y < outputImage.height(); y++) {
        for(x = 0; x < outputImage.width(); x++){
            p = this->BilinearSample((float) x/scaleFactor,(float) y/scaleFactor);
            outputImage(x,y) = p;
        }
    }
	return 1;
}

int Image32::ScaleGaussian(const float& scaleFactor,Image32& outputImage) const
{
	int x,y;
    Pixel32 p;
    int var, rad;
    if(scaleFactor >= 1){
        var = 1;
        rad = 3;
    }
    else{
        var = 2;
        rad = 1;
    }
    outputImage.setSize(this->width() * scaleFactor, this->height() * scaleFactor);
    
    for (y = 0; y < outputImage.height(); y++) {
        for(x = 0; x < outputImage.width(); x++){
            p = this->GaussianSample((float) x/scaleFactor,(float) y/scaleFactor,var,rad);
            outputImage(x,y) = p;
        }
    }
	return 1;
}

int Image32::RotateNearest(const float& angle,Image32& outputImage) const
{

    int w,h,x,y;
    double midX,midY, outMidX, outMidY;//midpoints of input and output images
    double u,v;//value after subtracting output midpoint
    double a,b;
    Pixel32 p;
    h = (int) abs((this->width() * sin(angle * M_PI / 180)))
    + (int) abs((this->height() * cos(angle * M_PI / 180)));
    w = (int) abs((this->width() * cos(angle * M_PI / 180)))
    + (int) abs((this->height() * sin(angle* M_PI / 180)));
    midX = this->w / 2.0;
    midY = this->h / 2.0;
    outMidX = w / 2.0;
    outMidY = h / 2.0;
    outputImage.setSize(w,h);
    
    for (y = 0; y < outputImage.height(); y++) {
        for(x = 0; x < outputImage.width(); x++){
            u = x - outMidX;
            v = y - outMidY;
            a = u * cos(angle * M_PI / 180) - v * sin(angle * M_PI / 180);
            b = u * sin(angle * M_PI / 180) + v * cos(angle * M_PI / 180);
            a += midX;
            b += midY;
            outputImage(x,y) = this->NearestSample(a,b);
        }
    }
    
	return 1;
}

int Image32::RotateBilinear(const float& angle,Image32& outputImage) const
{
    int w,h,x,y;
    double midX,midY, outMidX, outMidY;//midpoints of input and output images
    double u,v;//value after subtracting output midpoint
    double a,b;
    Pixel32 p;
    h = (int) abs((this->width() * sin(angle * M_PI / 180)))
    + (int) abs((this->height() * cos(angle * M_PI / 180)));
    w = (int) abs((this->width() * cos(angle * M_PI / 180)))
    + (int) abs((this->height() * sin(angle* M_PI / 180)));
    midX = this->w / 2.0;
    midY = this->h / 2.0;
    outMidX = w / 2.0;
    outMidY = h / 2.0;
    outputImage.setSize(w,h);
    
    for (y = 0; y < outputImage.height(); y++) {
        for(x = 0; x < outputImage.width(); x++){
            p = Pixel32();
            u = x - outMidX;
            v = y - outMidY;
            a = u * cos(angle * M_PI / 180) - v * sin(angle * M_PI / 180);
            b = u * sin(angle * M_PI / 180) + v * cos(angle * M_PI / 180);
            a += midX;
            b += midY;
            outputImage(x,y) = this->BilinearSample(a,b);
        }
    }
	return 1;
}
	
int Image32::RotateGaussian(const float& angle,Image32& outputImage) const
{
	int w,h,x,y;
    double midX,midY, outMidX, outMidY;//midpoints of input and output images
    double u,v;//value after subtracting output midpoint
    double a,b;
    Pixel32 p;
    h = (int) abs((this->width() * sin(angle * M_PI / 180)))
    + (int) abs((this->height() * cos(angle * M_PI / 180)));
    w = (int) abs((this->width() * cos(angle * M_PI / 180)))
    + (int) abs((this->height() * sin(angle* M_PI / 180)));
    midX = this->w / 2.0;
    midY = this->h / 2.0;
    outMidX = w / 2.0;
    outMidY = h / 2.0;
    outputImage.setSize(w,h);
    
    for (y = 0; y < outputImage.height(); y++) {
        for(x = 0; x < outputImage.width(); x++){
            p = Pixel32();
            u = x - outMidX;
            v = y - outMidY;
            a = u * cos(angle * M_PI / 180) - v * sin(angle * M_PI / 180);
            b = u * sin(angle * M_PI / 180) + v * cos(angle * M_PI / 180);
            a += midX;
            b += midY;
            outputImage(x,y) = this->GaussianSample(a,b,1,1);
        }
    }
	return 1;
}


int Image32::SetAlpha(const Image32& matte)
{
    int x,y;
    Pixel p;
    for(y = 0; y < matte.height(); y++){
        for(x = 0; x<matte.width(); x++){
            p = Pixel(matte(x,y));
            if(p.b == 1){
                p.a = 0;
            }
            this->pixel(x,y) = p;
        }
    }
	return 1;
}

int Image32::Composite(const Image32& overlay,Image32& outputImage) const
{
    int x,y,alpha;
    Pixel32 overlayPixel,originalPixel;
    outputImage.setSize(this->width(),this->height());
    for (y = 0; y < outputImage.height(); y++) {
        for(x = 0; x < outputImage.width(); x++){
            overlayPixel = overlay.pixel(x,y);
            originalPixel = this->pixel(x,y);
            alpha = overlayPixel.a;
            outputImage(x,y).r = alpha * overlayPixel.r + (255 - alpha) * originalPixel.r;
            outputImage(x,y).g = alpha * overlayPixel.g + (255 - alpha) * originalPixel.g;
            outputImage(x,y).b = alpha * overlayPixel.b + (255 - alpha) * originalPixel.b;
        }
    }
	return 1;
}

int Image32::CrossDissolve(const Image32& source,const Image32& destination,const float& blendWeight,Image32& outputImage)
{
    Pixel32 p;
    int x,y;
    outputImage.setSize(source.width(), source.height());
    for (y = 0; y < destination.height(); y++) {
        for(x = 0; x < destination.width(); x++){
            p = outputImage(x,y);
            p.r = (1 - blendWeight)*source(x,y).r + blendWeight * destination(x,y).r;
            p.g = (1 - blendWeight)*source(x,y).g + blendWeight * destination(x,y).g;
            p.b = (1 - blendWeight)*source(x,y).b + blendWeight * destination(x,y).b;
            outputImage(x,y) = p;
        }
    }
	return 1;
}
int Image32::Warp(const OrientedLineSegmentPairs& olsp,Image32& outputImage) const
{
	return 0;
}
//Swirls the input image a little bit
int Image32::FunFilter(Image32& outputImage) const
{
    int x,y,difX,difY;
    int rotate;
    double radian, theta;
    int spinX, spinY;
    outputImage.setSize(this->width(), this->height());
    for(y=0; y < this->h ; y++){
        for(x=0; x < this->w; x++){
            difX = x - this->w/2;
            difY = y - this->h/2;
            rotate = 100 * M_PI/180;
            radian = sqrt(difX * difX + difY * difY);
            theta = atan2(difY, difX) + rotate * ((this->h/2 - radian) / (this->h/2));
            spinX = this->w/2 + radian * cos(theta);
            spinY = this->h/2 + radian * sin(theta);
            
            if(spinX > this->w - 1){
                spinX = this->w - 1;
            }
            if (spinX < 0){
                spinX = 0;
            }
            if(spinY > this->h - 1){
                spinY = this->h - 1;
            }
            if (spinY < 0){
                spinY = 0;
            }
            outputImage(x,y) = this->pixel(spinX,spinY);
        }
    }
	return 1;
}
int Image32::Crop(const int& x1,const int& y1,const int& x2,const int& y2,Image32& outputImage) const
{
    int h,w,x,y;
    w = x2 - x1;
    h = y2 - y1;
    outputImage.setSize(w,h);
    
    for (y = 0; y < outputImage.height(); y++) {
        for(x = 0; x < outputImage.width(); x++){
            outputImage(x,y) = this->pixel(x + x1,y + x1);
        }
    }
	return 1;
}


Pixel32 Image32::NearestSample(const float& x,const float& y) const
{
    Pixel32 p;
    float u = x + .5;
    float v = y + .5;
    int iu = trunc(u);
    int iv = trunc(v);
    if(iu < 0 || iu > this->w-1 || iv < 0 || iv > this->h-1){
        p = Pixel32();
        p.r = 0;
        p.b = 0;
        p.g = 0;
        p.a = 1;
        return p;
    }
	return this->pixel(iu,iv);
}

Pixel32 Image32::BilinearSample(const float& x,const float& y) const
{
    int test;
    
    Pixel32 u1v1, u1v2, u2v1, u2v2;
    int u1 = floor(x);
    int u2 = u1 + 1;
    int v1 = floor(y);
    int v2 = v1 + 1;
    
    Pixel32 p = Pixel32();
    
    if(x < -1 || x >= this->w  ||
       y < -1 || y >= this->h ){
        p.r = 0;
        p.g = 0;
        p.b = 0;
        p.a = 1;
        return p;
    }
    //4 corners
    else if(x <= 0 && y <= 0){
        return this->pixel(0,0);
    }
    else if(x <= 0 && y >= this-> h - 1){
        return this->pixel(0,this->h-1);
    }
    else if(x >= this->w - 1 && y <= 0){
        return this->pixel(this->w - 1, 0);
    }
    else if(x >= this->w-1 && y >= this->h - 1){
        return this->pixel(this->w-1,this->h-1);
    }

    else if(y >= this->h - 1){
        u1v1 = this->pixel(u1,v1);
        u2v1 = this->pixel(u2,v1);
        float du = x - u1;
        float aRed = (u1v1.r * (1 - du)) + (u2v1.r * du);
        float aBlue = (u1v1.b * (1 - du)) + (u2v1.b * du);
        float aGreen = (u1v1.g * (1 - du)) + (u2v1.g * du);
        p.r = aRed;
        p.g = aGreen;
        p.b = aBlue;
        p.a = 1;
        return p;
    }
    else if(x >= this->w - 1){
        u1v1 = this->pixel(u1,v1);
        u1v2 = this->pixel(u1,v2);
        float dv = y - v1;
        float aRed = (u1v1.r * (1 - dv)) + (u1v2.r * dv);
        float aGreen = (u1v1.g * (1 - dv)) + (u1v2.g * dv);
        float aBlue = (u1v1.b * (1 - dv)) + (u1v2.b * dv);
        p.r = aRed;
        p.g = aGreen;
        p.b = aBlue;
        p.a = 1;
        return p;
    }
    else if(x < 0){
        u2v2 = this->pixel(u2,v2);
        u2v1 = this->pixel(u2,v1);
        float dv = y - v2;
        float aRed = (u2v1.r * (1 - dv)) + (u2v2.r * dv);
        float aGreen = (u2v1.g * (1 - dv)) + (u2v2.g * dv);
        float aBlue = (u2v1.b * (1 - dv)) + (u2v2.b * dv);
        p.r = aRed;
        p.g = aGreen;
        p.b = aBlue;
        p.a = 1;
        return p;
    }
    else if(y < 0){
        u1v2 = this->pixel(u1,v2);
        u2v2 = this->pixel(u2,v2);
        float du = x - u2;
        float aRed = (u1v2.r * (1 - du)) + (u2v2.r * du);
        float aBlue = (u1v2.b * (1 - du)) + (u2v2.b * du);
        float aGreen = (u1v2.g * (1 - du)) + (u2v2.g * du);
        p.r = aRed;
        p.g = aGreen;
        p.b = aBlue;
        p.a = 1;
        return p;
    }
    
    else{
        u1v1 = this->pixel(u1,v1);
        u1v2 = this->pixel(u1,v2);
        u2v1 = this->pixel(u2,v1);
        u2v2 = this->pixel(u2,v2);
        
        float du = x - u1;
        float dv = y - v1;
        
        float aRed = (u1v1.r * (1 - du)) + (u2v1.r * du);
        float aBlue = (u1v1.b * (1 - du)) + (u2v1.b * du);
        float aGreen = (u1v1.g * (1 - du)) + (u2v1.g * du);
        
        float bRed = (u1v2.r * (1 - du)) + (u2v2.r * du);
        float bBlue = (u1v2.b * (1 - du)) + (u2v2.b * du);
        float bGreen = (u1v2.g * (1 - du)) + (u2v2.g * du);
        
        float red = aRed * (1 - dv) + bRed * dv;
        float blue = aBlue * (1 - dv) + bBlue * dv;
        float green = aGreen * (1 - dv) + aGreen * dv;
        
        p.r = red;
        p.b = blue;
        p.g = green;
        p.a = 1;
        return p;
    }
}

Pixel32 Image32::GaussianSample(const float& x,const float& y,const float& variance,const float& radius) const
{
    Pixel32 p = Pixel32();
    Pixel32 out = Pixel32();
    int sigmaRound = trunc(variance + .5);
    int i = 2*sigmaRound + 1, j = 2 * sigmaRound + 1;
    int floorX = floor(x);
    int floorY = floor(y);
    float mask[i][j];
    const Pixel32 *pixelMatrix [i][j];
    float gaussian;
    float sum = 0;
    float red,blue,green;
    
    //put all zeros in the mask
    for(int a = 0; a < i; a++){
        for(int b = 0; b < j;b++){
            mask[a][b] = 0;
        }
    }
    
    //get all the pixels that are valid
    for(int c=0; c < i; c++){
        for(int d=0; d<j; d++){
            int xDiff =  floorX - sigmaRound + c - floorX;
            int yDiff = floorY - sigmaRound + d - floorY;
            float distance = sqrt(static_cast <float>((xDiff*xDiff) + (yDiff*yDiff)));
            //if pixel is within picture and within radius
            //put pixel in pixel matrix and put value of Gaussian in mask
            //else put empty Pixel in pixel matrix and 0 in mask
            if(floorX - sigmaRound + c > 0 && floorX - sigmaRound + c < this->w
               && floorY - sigmaRound + d > 0 && floorY - sigmaRound + d < this->h
               && distance <= radius){
                
                pixelMatrix[c][d] = &this->pixel(floorX - sigmaRound + c,floorY - sigmaRound + d);
                gaussian = exp(-(static_cast <float>((xDiff*xDiff) + (yDiff*yDiff)) / static_cast <float> (2*sigmaRound*sigmaRound)));
                mask[c][d] = gaussian;
                sum += gaussian;
            }
            else{
                pixelMatrix[c][d] = &p;
            }
        }
    }
    
    //normalize the mask
    for(int c=0; c < i; c++){
        for(int d=0; d<j; d++){
            mask[c][d] /= sum;
        }
    }
    //add weighted pixel values together to get output pixel
    for(int c=0; c < i; c++){
        for(int d=0; d<j; d++){
            red = mask[c][d] * pixelMatrix[c][d]->r;
            if(out.r + red > 255){
                out.r = 255;
            }
            else{
                out.r += red;
            }
            green = mask[c][d] * pixelMatrix[c][d]->g;
            if(out.g + green > 255){
                out.g = 255;
            }
            else{
                out.g += green;
            }
            blue = mask[c][d] * pixelMatrix[c][d]->b;
            if(out.b + blue > 255){
                out.b = 255;
            }
            else{
                out.b += blue;
            }
        }
    }
	return out;
}
