// from server: 31% by colin
struct CArray {
    int f(int, int, int);
};

struct CArrayData {
    void* vftable;
    int count;
};

extern "C" void* __stdcall sub_6B3010();
extern "C" void* __stdcall sub_62FEF6(unsigned int);
extern "C" void __stdcall sub_63046C();
extern "C" void __stdcall sub_63B850(int, int, int, int);
extern "C" void __stdcall sub_676200(int, int);
extern "C" void __stdcall sub_67BF80(int, int, int);
extern "C" int __stdcall GetMenuItemCount(void*);
extern "C" void* __stdcall sub_77DD98(void*);
extern "C" void __stdcall sub_77DDAC(void*);
extern "C" void __stdcall sub_77DDBC(void*);
extern "C" int __stdcall sub_77EE04(void*);

int CArray::f(int a, int b, int c)
{
    CArrayData local;
    local.vftable = (void*)0x788318;
    local.count = 0;
    int flag = 0;
    int result = 0;

    void* p = sub_6B3010();
    int (__stdcall *fn)(void*, int*, int) = *(int (__stdcall **)(void*, int*, int))((*(int*)p) + 8);
    if (fn(p, &local.count, c) == 0)
    {
        local.vftable = (void*)0x788318;
        sub_63046C();
        return 0;
    }

    sub_77DDAC(&local);
    flag = 1;

    p = sub_6B3010();
    void (__stdcall *fn2)(void*, int*, int) = *(void (__stdcall **)(void*, int*, int))((*(int*)p) + 4);
    fn2(p, &local.count, c);

    CArrayData* arr = (CArrayData*)sub_62FEF6(8);
    flag = 2;
    int idx = 0;
    if (arr != 0)
    {
        void* menu = *(void**)((char*)this + 0x138);
        void* hmenu = *(void**)((char*)menu + 0xb8);
        void* h = sub_77DD98(hmenu);
        sub_676200((int)arr, (int)h);
        idx = (int)arr;
    }

    int n = c;
    if (n == -1)
        n = *(int*)((char*)this + 0x144);

    sub_63B850((int)((char*)this + 0x13c), n, idx, 1);

    int cnt = GetMenuItemCount((void*)local.count);
    int i = 0;
    if (cnt > 0)
    {
        do
        {
            sub_67BF80(*(int*)(idx + 4), (int)&local, i);
            i++;
        } while (i < cnt);
    }

    sub_77DDBC(&local);
    local.vftable = (void*)0x788318;
    sub_63046C();
    return 1;
}
