// from server: 71% by colin
struct CXTPPaintManagerColor;

struct CXTPPaintManagerColor
{
    void AddColor(CXTPPaintManagerColor* other);
};

extern "C" int __stdcall sub_630688(int, int);
extern "C" int __stdcall sub_64ada0(void*, void*);
extern "C" int __stdcall sub_73842a(void*);
extern "C" int __stdcall sub_77dd98(void*);

void CXTPPaintManagerColor::AddColor(CXTPPaintManagerColor* other)
{
    if ((~*(int*)((char*)other + 0x18)) & 1)
    {
        int* p = *(int**)((char*)other + 0x28);
        if ((char*)p + 4 > *(char**)((char*)other + 0x2c))
        {
            sub_73842a(other);
        }
        p = *(int**)((char*)other + 0x28);
        *p = *(int*)((char*)this + 4);
        *(int*)((char*)other + 0x28) += 4;

        int v = *(int*)((char*)this + 8);
        if (!((~*(int*)((char*)other + 0x18)) & 1))
        {
            int r = sub_77dd98((char*)other + 0x14);
            sub_630688(2, r);
        }
        int* q = *(int**)((char*)other + 0x28);
        if ((char*)q + 4 > *(char**)((char*)other + 0x2c))
        {
            sub_73842a(other);
        }
        q = *(int**)((char*)other + 0x28);
        *q = v;
        *(int*)((char*)other + 0x28) += 4;
    }
    else
    {
        sub_64ada0(other, (char*)this + 4);
        sub_64ada0(other, (char*)this + 8);
    }
}
