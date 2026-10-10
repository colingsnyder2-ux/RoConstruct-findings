// from server: 46% by colin
// roc 2007-08 00649e50  unit: CXTPCommandBar  size: 329 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00649e50

extern "C" {
    void* __stdcall CreateCompatibleDC(void*);
    int __stdcall GetDIBits(void*, void*, unsigned int, unsigned int, void*, void*, unsigned int);
    int __cdecl memcpy_s(void*, unsigned int, const void*, unsigned int);
    void* __cdecl malloc(unsigned int);
    void* __cdecl memset(void*, int, unsigned int);
    void __cdecl sub_62fc6e();
}

struct CXTPCommandBar {
    void sub_649e50(unsigned int, int*, int*, int*, int*);
};

void CXTPCommandBar::sub_649e50(unsigned int a1, int* a2, int* a3, int* a4, int* a5)
{
    char buf[0x2c];
    int hdc;
    int hdc2;
    int bits;
    int size;
    int bpp;

    *a2 = 0;
    *a5 = 0;

    memset(buf, 0, 0x2c);
    *(int*)buf = 0x28;

    hdc = 0;
    hdc = (int)CreateCompatibleDC(0);
    hdc2 = 0;
    hdc2 = (int)CreateCompatibleDC(0);

    bits = 0;
    bits = (int)GetDIBits((void*)hdc, (void*)a1, 0, 0, 0, buf, 0);
    if (bits == 0)
        sub_62fc6e();

    if (*(int*)(buf + 0x14) == 0)
        size = *(int*)(buf + 4) * *(int*)(buf + 8) * 4;
    else
        size = *(int*)(buf + 0x14);

    *a3 = size;
    bits = (int)malloc(size);
    *a2 = bits;
    if (bits == 0)
        sub_62fc6e();

    if (*(unsigned short*)(buf + 0xe) == 4)
        bpp = 0x10;
    else
        bpp = 0x100;

    *a4 = bpp * 4 + 0x28;
    bits = (int)malloc(*a4);
    *a5 = bits;
    if (bits == 0)
        sub_62fc6e();

    memcpy_s((void*)bits, 0x28, buf, 0x28);

    GetDIBits((void*)hdc, (void*)a1, 0, *(unsigned int*)(buf + 8), (void*)*a2, (void*)*a5, 0);
    if (bits == 0)
        sub_62fc6e();
}
