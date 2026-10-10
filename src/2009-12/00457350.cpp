// from server: 59% by atomic.potato
typedef unsigned long DWORD;

struct C {
    void f(void*, void*, void*, void*, void*);
};

extern "C" void sub_406dd0(
    C*, void*, void*, void*, void*);

struct S {
    void f(void*, void*, void*, void*, void*);
};

void S::f(void* a, void* b, void* c, void* d, void* e)
{
    sub_406dd0((C*)0x00b09bb4, a, b, c, d);
}
