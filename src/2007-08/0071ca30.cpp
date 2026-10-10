// from server: 61% by colin
struct CXTPTabPaintManager_CColorSetOffice2007;

struct CXTPTabPaintManager_CColorSetOffice2007
{
    int DrawTab(int, int, int);
};

extern "C" void* __stdcall sub_710F20();
extern "C" void* __stdcall sub_70F5F0(void*);
extern "C" void* __stdcall sub_710E40(void*, const char*);
extern "C" void* __stdcall sub_70FFE0(void*, int, int, void*);
extern "C" void* __stdcall sub_710520(void*, void*, void*, int, void*, int);
extern "C" void __stdcall sub_71BC70(void*, int, int, int);

int CXTPTabPaintManager_CColorSetOffice2007::DrawTab(int a1, int a2, int a3)
{
    void* p = sub_710F20();
    void* q = sub_70F5F0(p);
    if (q == 0)
    {
        sub_71BC70(this, a1, a2, a3);
        return 0;
    }

    int v = *(int*)((char*)this + 0xac);
    if (v == -1)
        v = *(int*)((char*)this + 0xa8);

    void** vtbl = *(void***)a1;
    void (*fn)(void*, int) = (void (*)(void*, int))vtbl[0x38 / 4];
    fn((void*)a1, v);

    if (*(int*)((char*)a2 + 0x20) != 0)
    {
        if (*(int*)((char*)a2 + 0x24) != 0 ||
            *(void**)(*(int*)((char*)a2 + 0xc) + 0x10) == (void*)a2)
        {
            void* r = sub_710E40(sub_710F20(), (const char*)0x7d5b74);
            if (r != 0)
            {
                int flag = (*(int*)((char*)a2 + 0x24) != 0) ? 1 : 0;
                int arr[4];
                arr[0] = 8;
                arr[1] = 8;
                arr[2] = 8;
                arr[3] = 8;
                void* s = sub_70FFE0(r, flag, 4, arr);
                int tmp[4];
                tmp[0] = *(int*)((char*)s + 0);
                tmp[1] = *(int*)((char*)s + 4);
                tmp[2] = *(int*)((char*)s + 8);
                tmp[3] = *(int*)((char*)s + 12);
                sub_710520(r, (void*)a1, tmp, -1, arr, a3);
                void** vtbl2 = *(void***)a1;
                void (*fn2)(void*, int) = (void (*)(void*, int))vtbl2[0x38 / 4];
                fn2((void*)a1, 0);
            }
        }
    }
    return 0;
}
