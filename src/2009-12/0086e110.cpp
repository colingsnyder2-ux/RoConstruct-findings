// from server: 82% by atomic.potato
extern "C" void* __stdcall LoadResource(void*, void*);

extern void* G1_func_0086e0c0();
extern void* G1_func_007f41de(void*, int);

typedef void* (__stdcall *FnType)(void*, void*, int);

void* __stdcall func_0086e110(void* param)
{
    void* h = G1_func_0086e0c0();
    FnType fn = *(FnType*)0x98b1ec;
    void* res = fn(h, param, 5);
    if (res == 0)
    {
        void* h2 = G1_func_007f41de(param, 5);
        if (h2 == 0)
            return 0;
        res = fn(h, param, 5);
        if (res == 0)
            return 0;
    }
    return LoadResource(h, res);
}
