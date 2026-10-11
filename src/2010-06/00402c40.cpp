// from server: 23% by atomic.potato
struct S {
    int f();
};

extern "C" void __stdcall InitializeCriticalSection(void*);

int S::f()
{
    InitializeCriticalSection((void*)0x00b01db8);
    return 0;
}
