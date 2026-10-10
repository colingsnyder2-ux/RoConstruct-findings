// from server: 42% by colin
extern "C" int __stdcall sub_630D60(float);

struct CXTPControlSelector
{
    unsigned int method(unsigned int color1, unsigned int color2, unsigned int color3);
};

unsigned int CXTPControlSelector::method(unsigned int color1, unsigned int color2, unsigned int color3)
{
    unsigned char r1 = (unsigned char)color1;
    unsigned char g1 = (unsigned char)(color1 >> 8);
    unsigned char b1 = (unsigned char)(color1 >> 16);

    unsigned char r2 = (unsigned char)color2;
    unsigned char g2 = (unsigned char)(color2 >> 8);
    unsigned char b2 = (unsigned char)(color2 >> 16);

    unsigned char r3 = (unsigned char)color3;
    unsigned char g3 = (unsigned char)(color3 >> 8);
    unsigned char b3 = (unsigned char)(color3 >> 16);

    float t = 1.0f - (float)r1;
    float v1 = (float)g1 * t + (float)r2;
    int c1 = sub_630D60(v1);
    unsigned char out1;
    if (c1 > 0xff)
        out1 = 0xff;
    else
        out1 = (unsigned char)c1;

    float v2 = (float)b1 * t + (float)g2;
    int c2 = sub_630D60(v2);
    unsigned char out2;
    if (c2 > 0xff)
        out2 = 0xff;
    else
        out2 = (unsigned char)c2;

    float v3 = (float)b2 * t + (float)r3;
    int c3 = sub_630D60(v3);
    unsigned char out3;
    if (c3 > 0xff)
        out3 = 0xff;
    else
        out3 = (unsigned char)c3;

    unsigned int result = 0;
    result |= (unsigned int)out1;
    result |= ((unsigned int)out2) << 8;
    result |= ((unsigned int)out3) << 16;
    return result;
}
