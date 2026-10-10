// from server: 22% by colin
// roc 2007-08 0058f780  unit: RBX::PAVRunService::?$sp_counted_impl_pd  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058f780

extern "C" void* __cdecl malloc(unsigned int);

struct Inner {
    void ctor();
};

struct S {
    void f(void* a, void* b);
};

void S::f(void* a, void* b)
{
    void* p = malloc(0x128);
    Inner* q = 0;
    if (p) {
        q = (Inner*)p;
        q->ctor();
    }
    Inner* r = q;
    void* saved = a;
    void* self = b;
    ((void (__thiscall*)(void*, void*, void*))0x58f6d0)(self, r, saved);
}
