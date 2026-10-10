// from server: 71% by colin
struct XItem {
    virtual int getColor();
};

struct Color3 {
    float r;
    float g;
    float b;
};

struct VBrickColorXItem {
    XItem* item;
    Color3* color3(Color3* result);
};

extern "C" void __stdcall sub_586bf0(Color3* result, int packed);

Color3* VBrickColorXItem::color3(Color3* result)
{
    int packed = item->getColor();
    unsigned char r = (unsigned char)packed;
    unsigned char g = (unsigned char)(packed >> 8);
    unsigned char b = (unsigned char)(packed >> 16);
    float scale = 255.0f;
    result->r = (float)r / scale;
    result->g = (float)g / scale;
    result->b = (float)b / scale;
    sub_586bf0(result, packed);
    return result;
}
