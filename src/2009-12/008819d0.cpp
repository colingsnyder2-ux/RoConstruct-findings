// from server: 32% by atomic.potato
extern "C" void* __stdcall G1_func_0098b778(unsigned int);
extern "C" void __stdcall G1_func_0098b740(void*);
extern "C" void* __stdcall G1_func_0098b0b8();
extern "C" void __stdcall G1_func_007f4ce6(void*, void*, unsigned int);
extern "C" void __stdcall G1_func_007f3b2a(unsigned int);
extern "C" void __stdcall G1_func_007f3e2a(void*, void*);
extern "C" int __stdcall G1_func_008eb970();
extern "C" int __stdcall G1_func_00926472();
extern "C" int __stdcall G1_func_0092656e();
extern "C" void __stdcall G1_func_0040f230();

struct CXTPOffice2007Theme
{
    int GetThemeColor(int a, int b, int c);
};

int CXTPOffice2007Theme::GetThemeColor(int a, int b, int c)
{
    void* p;
    unsigned int size;
    int flag;
    int result;
    int v1, v2, v3, v4;
    char buf[0x50];
    char buf2[0x40];
    int local;

    G1_func_007f3b2a(*(unsigned int*)(a + 8));
    G1_func_00926472();
    if (G1_func_00926472() & 0x1000000)
        return 0;

    v1 = b;
    v2 = c;
    v3 = v1 - 1;
    v4 = v2 - 4;

    G1_func_008eb970();
    if (G1_func_008eb970() != 0 && *(int*)(a + 0x40) > 3)
        flag = 1;
    else
        flag = 0;

    size = (flag ? 0x20 : 0) + 0x10 + 0x50;
    p = G1_func_0098b778(size + 0x20);
    if (p == 0)
        return 0;

    G1_func_007f4ce6((char*)p + 0x20, buf, 0x50);
    if (flag == 0)
        G1_func_007f4ce6((char*)p + 0x70, buf2, 0x10);
    else
        G1_func_007f4ce6((char*)p + 0x70, buf2, 0x10);

    *(int*)((char*)p + 0x10) = 0;
    *(int*)((char*)p + 0x14) = 0;
    *(int*)((char*)p + 0x18) = v3;
    *(int*)p = 0x20;
    *(int*)((char*)p + 4) = 1;
    *(int*)((char*)p + 8) = size >> 4;
    *(int*)((char*)p + 0xc) = 0;
    *(int*)((char*)p + 0x1c) = v4;

    local = 0;
    G1_func_007f3e2a(&local, p);
    G1_func_0098b740(p);
    result = G1_func_0092656e();
    G1_func_0040f230();
    return result;
}
