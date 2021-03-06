#include <ximage.h>

static uint8_t gaussian_sharpen_16x16_data[] =
{
    0xA8, 0xBD, 0xC8, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 
    0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 
    0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 
    0xA8, 0xBD, 0xC8, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 
    0xA5, 0xDC, 0xA4, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 
    0x5B, 0xC9, 0x58, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 
    0xA5, 0xDC, 0xA4, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 
    0x5B, 0xC9, 0x58, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 
    0xA5, 0xDC, 0xA4, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 
    0xA5, 0xDC, 0xA4, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 
    0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 
    0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 
    0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0xA8, 0xBD, 0xC8, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 
    0xA5, 0xDC, 0xA4, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xA8, 0xBD, 0xC8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xA8, 0xBD, 0xC8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xA8, 0xBD, 0xC8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xA8, 0xBD, 0xC8, 0xFF, 
    0x5B, 0xC9, 0x58, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xA8, 0xBD, 0xC8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xA8, 0xBD, 0xC8, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xA8, 0xBD, 0xC8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xA8, 0xBD, 0xC8, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 
    0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 
    0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 
    0x5B, 0xC9, 0x58, 0xFF, 0xA8, 0xBD, 0xC8, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 
    0x5B, 0xC9, 0x58, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 
    0xA5, 0xDC, 0xA4, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 
    0xA5, 0xDC, 0xA4, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 
    0xA5, 0xDC, 0xA4, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 
    0xA5, 0xDC, 0xA4, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 
    0x5B, 0xC9, 0x58, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0xA8, 0xBD, 0xC8, 0xFF, 
    0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 
    0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 
    0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 
    0xA8, 0xBD, 0xC8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xA8, 0xBD, 0xC8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xA8, 0xBD, 0xC8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xA8, 0xBD, 0xC8, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 
    0x5B, 0xC9, 0x58, 0xFF, 0xA8, 0xBD, 0xC8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xA8, 0xBD, 0xC8, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xA8, 0xBD, 0xC8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xA8, 0xBD, 0xC8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 
    0xA5, 0xDC, 0xA4, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0xA8, 0xBD, 0xC8, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 
    0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 
    0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 
    0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 
    0xA5, 0xDC, 0xA4, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 
    0xA5, 0xDC, 0xA4, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 
    0x5B, 0xC9, 0x58, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 
    0xA5, 0xDC, 0xA4, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 
    0x5B, 0xC9, 0x58, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 
    0xA5, 0xDC, 0xA4, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 0xA5, 0xDC, 0xA4, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 
    0xA8, 0xBD, 0xC8, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 
    0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 
    0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 0x5B, 0xC9, 0x58, 0xFF, 
    0xA8, 0xBD, 0xC8, 0xFF, 
};

static const ximage image_gaussian_sharpen_16x16 =
{
    &gaussian_sharpen_16x16_data[0],
    16, 16,
    64,
    XPixelFormatRGBA32
};
