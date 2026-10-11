// from server: 26% by atomic.potato
struct S {
    char pad[0x100];
    void* f(void*, void*, void*, void*, void*, void*);
};

extern "C" void* __stdcall sub_5cfaf0(void*, void*, void*, void*);
extern "C" void* __stdcall sub_5d0420(void*, void*);
extern "C" void __stdcall sub_443230(void*, void*);
extern "C" void __stdcall sub_6a067a(void*);

void* S::f(void* a, void* b, void* c, void* d, void* e, void* g)
{
    void* v;
    void* r = sub_5cfaf0(&v, a, b, c);
    void* p = *(void**)r;
    *(void**)r = 0;
    void* q = &v;
    *(void**)q = p;
    void* h = sub_5d0420(d, e);
    sub_443230(this, h);
    if (v)
        sub_6a067a(v);
    *(void**)this = (void*)0x83b03c;
    return this;
}
