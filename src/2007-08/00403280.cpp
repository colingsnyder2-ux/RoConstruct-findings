// from server: 32% by colin
struct S_func_00403280 {
    char pad0[0x14];
    int count;
    char pad18[4];
    void* items;
    int f(void* a1);
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);
extern "C" void __stdcall SysFreeString(void*);
extern "C" unsigned int __stdcall SysStringLen(void*);
extern "C" void __cdecl construct_array(void*, unsigned int, void*, void*);

int S_func_00403280::f(void* a1)
{
    int hr;
    void* pv;
    int i;
    int n;
    void* pv2;
    void* pv3;
    int tmp;

    hr = (*(int (__thiscall**)(void*, void**))(*(int*)a1 + 0xc))(a1, &pv);
    if (hr < 0)
        return 0;

    n = *(unsigned short*)((char*)pv + 0x2c);
    this->count = n;
    this->items = 0;

    if (n != 0) {
        unsigned int sz = (unsigned int)n * 0xc;
        void* mem = operator_new(sz + 4);
        if (mem != 0) {
            *(unsigned int*)mem = n;
            construct_array((char*)mem + 4, n, (void*)0x402390, (void*)0x4023b0);
            pv2 = (char*)mem + 4;
        } else {
            pv2 = 0;
        }
        if (pv2 == 0)
            return 0;
        this->items = pv2;
    }

    i = 0;
    if (this->count > 0) {
        char* cur = (char*)this->items;
        do {
            hr = (*(int (__thiscall**)(void*, int, void**))(*(int*)a1 + 0x14))(a1, i, &pv3);
            if (hr >= 0) {
                tmp = 0;
                hr = (*(int (__thiscall**)(void*, void*, int*, int, int, int))(*(int*)a1 + 0x30))(a1, *(void**)pv3, &tmp, 0, 0, 0);
                if (hr >= 0) {
                    void* old = *(void**)cur;
                    if (old != (void*)tmp) {
                        SysFreeString(old);
                        *(void**)cur = (void*)tmp;
                    }
                    *(unsigned int*)(cur + 4) = SysStringLen(*(void**)cur);
                    *(unsigned int*)(cur + 8) = *(unsigned int*)pv3;
                }
                (*(int (__thiscall**)(void*, void*))(*(int*)a1 + 0x50))(a1, pv3);
                SysFreeString((void*)tmp);
            }
            i++;
            cur += 0xc;
        } while (i < this->count);
    }

    (*(int (__thiscall**)(void*, void*))(*(int*)a1 + 0x4c))(a1, pv);
    return 0;
}
