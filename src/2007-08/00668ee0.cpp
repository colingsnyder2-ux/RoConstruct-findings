// from server: 62% by colin
struct CXTPPaintManagerColorGradient
{
    void SetGradientColor(int, unsigned long);
};

struct CXTPGradientColor
{
    void SetColor(unsigned long);
};

struct CXTPGradientColorArray
{
    void Add(float);
};

struct CXTPGradient
{
    int field_0;
    CXTPGradientColor color1;
    int field_8;
    int field_c;
    CXTPGradientColor color2;
    int field_14;
    int field_18;
    float field_1c;
};

extern "C" void __stdcall sub_73842A(void*);

void CXTPPaintManagerColorGradient::SetGradientColor(int param, unsigned long color)
{
    CXTPGradient* pGradient = (CXTPGradient*)this;
    pGradient->color1.SetColor(color);
    pGradient->color2.SetColor(color);

    if ((~*(unsigned long*)((char*)param + 0x18) & 1) != 0)
    {
        float f = pGradient->field_1c;
        unsigned long* pEnd = *(unsigned long**)((char*)param + 0x28);
        pEnd = (unsigned long*)((char*)pEnd + 4);
        if (pEnd > *(unsigned long**)((char*)param + 0x2c))
        {
            sub_73842A((void*)param);
        }
        unsigned long* pDst = *(unsigned long**)((char*)param + 0x28);
        *(float*)pDst = f;
        *(unsigned long**)((char*)param + 0x28) = (unsigned long*)((char*)pDst + 4);
    }
    else
    {
        float* pSrc = &pGradient->field_1c;
        ((CXTPGradientColorArray*)param)->Add(*pSrc);
    }
}
