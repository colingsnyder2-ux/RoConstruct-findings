// from server: 15% by atomic.potato
struct S {
    void f();
};

extern "C" void __stdcall InitializeCriticalSection(void*);

void S::f()
{
    InitializeCriticalSection((char*)this + 4);
}
