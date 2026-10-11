// from server: 53% by colin
// roc 2008-06 00716680  unit: CXTPPropertyGridView::UWNDRECT::?$CArray  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00716680

extern "C" void __stdcall sub_6A0944();
extern "C" int __stdcall sub_6A1124(int, int);
extern "C" int __stdcall sub_6A112A(void*, int);
extern "C" int __stdcall sub_6A1130(void*, int);

struct CArray
{
    int f(void* dst, unsigned int count, unsigned int elemSize);
};

int CArray::f(void* dst, unsigned int count, unsigned int elemSize)
{
    char* d = (char*)dst;
    unsigned int n = count;
    if (n != 0 && d == 0)
        sub_6A0944();

    if (!(*(unsigned int*)((char*)this + 0x18) ^ 0xFFFFFFFF & 1))
    {
        while (n > 0)
        {
            unsigned int chunk = n;
            if (n >= 0x6666666)
                chunk = 0x6666666;
            unsigned int bytes = chunk * 20;
            if (sub_6A112A(d, bytes) != bytes)
            {
                sub_6A1124(3, 0);
            }
            n -= chunk;
            d += bytes;
        }
    }
    else
    {
        while (n > 0)
        {
            unsigned int chunk = n;
            if (n >= 0x6666666)
                chunk = 0x6666666;
            unsigned int bytes = chunk * 20;
            sub_6A1130(d, bytes);
            n -= chunk;
            d += bytes;
        }
    }
    return 0;
}
