#include <ximage.h>

static uint8_t edge_detector_plugin_16x16_data[] =
{
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 
    0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 
    0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0x00, 0x00, 0x00, 0xFF, 0xE7, 0xE7, 0xE7, 0xFF, 0xE7, 0xE7, 0xE7, 0xFF, 0xE7, 0xE7, 0xE7, 0xFF, 0xE7, 0xE7, 0xE7, 0xFF, 
    0xE7, 0xE7, 0xE7, 0xFF, 0xE7, 0xE7, 0xE7, 0xFF, 0xE7, 0xE7, 0xE7, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xE7, 0xE7, 0xE7, 0xFF, 0xE7, 0xE7, 0xE7, 0xFF, 0xE7, 0xE7, 0xE7, 0xFF, 
    0xE7, 0xE7, 0xE7, 0xFF, 0xE7, 0xE7, 0xE7, 0xFF, 0xE7, 0xE7, 0xE7, 0xFF, 0xE7, 0xE7, 0xE7, 0xFF, 0x00, 0x00, 0x00, 0xFF, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xE7, 0xE7, 0xE7, 0xFF, 0xE7, 0xE7, 0xE7, 0xFF, 
    0xE7, 0xE7, 0xE7, 0xFF, 0xE7, 0xE7, 0xE7, 0xFF, 0xE7, 0xE7, 0xE7, 0xFF, 0xE7, 0xE7, 0xE7, 0xFF, 0xE7, 0xE7, 0xE7, 0xFF, 
    0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xE7, 0xE7, 0xE7, 0xFF, 
    0xE7, 0xE7, 0xE7, 0xFF, 0xE7, 0xE7, 0xE7, 0xFF, 0xE7, 0xE7, 0xE7, 0xFF, 0xE7, 0xE7, 0xE7, 0xFF, 0xE7, 0xE7, 0xE7, 0xFF, 
    0xE7, 0xE7, 0xE7, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 
    0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 
    0xE7, 0xE7, 0xE7, 0xFF, 0xE7, 0xE7, 0xE7, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 
    0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x85, 0x85, 0x85, 0xFF, 
    0x85, 0x85, 0x85, 0xFF, 0x85, 0x85, 0x85, 0xFF, 0x85, 0x85, 0x85, 0xFF, 0x85, 0x85, 0x85, 0xFF, 0x85, 0x85, 0x85, 0xFF, 
    0x00, 0x00, 0x00, 0xFF, 0xE7, 0xE7, 0xE7, 0xFF, 0xE7, 0xE7, 0xE7, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xB8, 0xB8, 0xB8, 0xFF, 
    0xB8, 0xB8, 0xB8, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 
    0x85, 0x85, 0x85, 0xFF, 0x85, 0x85, 0x85, 0xFF, 0x85, 0x85, 0x85, 0xFF, 0x85, 0x85, 0x85, 0xFF, 0x85, 0x85, 0x85, 0xFF, 
    0x85, 0x85, 0x85, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 
    0xB8, 0xB8, 0xB8, 0xFF, 0xB8, 0xB8, 0xB8, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0x00, 0x00, 0x00, 0xFF, 0x85, 0x85, 0x85, 0xFF, 0x85, 0x85, 0x85, 0xFF, 0x85, 0x85, 0x85, 0xFF, 0x85, 0x85, 0x85, 0xFF, 
    0x85, 0x85, 0x85, 0xFF, 0x85, 0x85, 0x85, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xB8, 0xB8, 0xB8, 0xFF, 0xB8, 0xB8, 0xB8, 0xFF, 
    0xB8, 0xB8, 0xB8, 0xFF, 0xB8, 0xB8, 0xB8, 0xFF, 0xB8, 0xB8, 0xB8, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x85, 0x85, 0x85, 0xFF, 0x85, 0x85, 0x85, 0xFF, 0x85, 0x85, 0x85, 0xFF, 
    0x85, 0x85, 0x85, 0xFF, 0x85, 0x85, 0x85, 0xFF, 0x85, 0x85, 0x85, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xB8, 0xB8, 0xB8, 0xFF, 
    0xB8, 0xB8, 0xB8, 0xFF, 0xB8, 0xB8, 0xB8, 0xFF, 0xB8, 0xB8, 0xB8, 0xFF, 0xB8, 0xB8, 0xB8, 0xFF, 0x00, 0x00, 0x00, 0xFF, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x85, 0x85, 0x85, 0xFF, 0x85, 0x85, 0x85, 0xFF, 
    0x85, 0x85, 0x85, 0xFF, 0x85, 0x85, 0x85, 0xFF, 0x85, 0x85, 0x85, 0xFF, 0x85, 0x85, 0x85, 0xFF, 0x00, 0x00, 0x00, 0xFF, 
    0xB8, 0xB8, 0xB8, 0xFF, 0xB8, 0xB8, 0xB8, 0xFF, 0xB8, 0xB8, 0xB8, 0xFF, 0xB8, 0xB8, 0xB8, 0xFF, 0xB8, 0xB8, 0xB8, 0xFF, 
    0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x85, 0x85, 0x85, 0xFF, 
    0x85, 0x85, 0x85, 0xFF, 0x85, 0x85, 0x85, 0xFF, 0x85, 0x85, 0x85, 0xFF, 0x85, 0x85, 0x85, 0xFF, 0x85, 0x85, 0x85, 0xFF, 
    0x00, 0x00, 0x00, 0xFF, 0xB8, 0xB8, 0xB8, 0xFF, 0xB8, 0xB8, 0xB8, 0xFF, 0xB8, 0xB8, 0xB8, 0xFF, 0xB8, 0xB8, 0xB8, 0xFF, 
    0xB8, 0xB8, 0xB8, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 
    0x85, 0x85, 0x85, 0xFF, 0x85, 0x85, 0x85, 0xFF, 0x85, 0x85, 0x85, 0xFF, 0x85, 0x85, 0x85, 0xFF, 0x85, 0x85, 0x85, 0xFF, 
    0x85, 0x85, 0x85, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 
    0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 
    0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0x00, 0x00, 0x00, 0x00, 
};

static const ximage image_edge_detector_plugin_16x16 =
{
    &edge_detector_plugin_16x16_data[0],
    16, 16,
    64,
    XPixelFormatRGBA32
};