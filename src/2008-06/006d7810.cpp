// from server: 43% by atomic.potato
extern "C" int __stdcall GetValue();
extern "C" void __stdcall CallA(void*, int);
extern "C" void __stdcall CallB(void*, int);

struct S {
    char padding[64];
    int field40;
    void f(void*, void*);
};

void S::f(void* a, void* b)
{
    int value = GetValue();
    if (field40 == 0)
        CallA(a, value);
    else
        CallB(a, value);
}
