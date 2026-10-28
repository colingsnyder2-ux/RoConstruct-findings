// from server: 0% by atomic.potato
extern "C" __declspec(dllimport) void __stdcall InitializeCriticalSection(void*);

struct S {
    void* f();
};

void* S::f()
{
    InitializeCriticalSection((char*)this + 4);
    return 0;
}
