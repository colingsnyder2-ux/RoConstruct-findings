// from server: 39% by colin
struct CXTPCommandBar
{
    void* f(unsigned int* arg);
};

extern "C" void* __stdcall CreateCompatibleDC(void*);
extern "C" void* __stdcall CreateDIBSection(void*, void*, unsigned int, void**, void*, unsigned int);
extern "C" void __cdecl free(void*);
extern "C" void* __cdecl malloc(unsigned int);

void* __fastcall sub_6306A6(void*);
void __fastcall sub_63068E(void*, void*, unsigned int);
void __fastcall sub_647A90(void*, void*, unsigned int);
void __fastcall sub_7383E2(void*);
void __fastcall sub_7383D0(void*, void*);
void __fastcall sub_7383DC(void*);

void* CXTPCommandBar::f(unsigned int* arg)
{
    unsigned int n1;
    unsigned int n2;
    void* p1;
    void* p2;
    void* hdc;
    void* hbm;
    void* pbits;
    unsigned int sz;

    n1 = *(unsigned int*)sub_6306A6(arg);
    if (n1 == 0)
        return 0;

    p1 = malloc(n1);
    sub_63068E(arg, p1, n1);

    n2 = *(unsigned int*)sub_6306A6(arg);
    p2 = malloc(n2);
    sub_63068E(arg, p2, n2);

    if (p1 == 0 || p2 == 0)
    {
        if (p2 != 0)
            free(p2);
        if (p1 != 0)
            free(p1);
        return 0;
    }

    sub_7383E2(&hdc);
    sub_7383D0(&hdc, CreateCompatibleDC(0));

    if (*(unsigned int*)((char*)p1 + 0x14) == 0)
        *(unsigned int*)((char*)p1 + 0x14) = n2;

    pbits = 0;
    hbm = CreateDIBSection(hdc, 0, 0, &pbits, 0, 0);

    if (hdc != 0 && hbm != 0)
    {
        sz = *(unsigned int*)((char*)p1 + 0x14);
        if (n2 < sz)
            sz = n2;
        sub_647A90(hdc, p2, sz);
        if (p2 != 0)
            free(p2);
        free(p1);
        sub_7383DC(&hdc);
        return hbm;
    }

    if (p2 != 0)
        free(p2);
    free(p1);
    sub_7383DC(&hdc);
    return 0;
}
