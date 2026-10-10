// from server: 61% by colin
struct S_func_006a6070 {
    bool f(void* p);
};

extern "C" void* __stdcall sub_006301c0(void*);
extern "C" void* __stdcall sub_006306be(void*);
extern "C" void* __stdcall sub_00630202(void*);
extern "C" void* __stdcall sub_0063000a(void*);
extern "C" void* __stdcall sub_0073886e(void*);
extern "C" void* __stdcall sub_00738be0(void*);

bool S_func_006a6070::f(void* p)
{
    void* a = sub_006301c0(p);
    void* b = sub_006306be(a);
    void* c = sub_00630202(b);
    void* d = 0;
    if (c) {
        void* e = sub_0063000a(c);
        if (e) {
            void* g = sub_0063000a(c);
            d = *(void**)((char*)g + 0x54);
        }
    }
    void* h = sub_0073886e(d);
    void* i = sub_00630202(h);
    if (!i)
        return false;
    void* j = *(void**)i;
    void* k = sub_0063000a(c);
    void* l = ((void* (__stdcall*)(void*, void*))*(void**)((char*)j + 0xb8))(i, k);
    void* m = sub_00738be0(l);
    void* n = sub_00630202(m);
    return n != 0;
}
