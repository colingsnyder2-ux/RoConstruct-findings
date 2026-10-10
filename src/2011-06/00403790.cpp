// from server: 75% by atomic.potato
typedef unsigned long DWORD;
typedef int BOOL;

extern "C" void* __stdcall OpenEventA(DWORD, BOOL, const char*);

struct S
{
    void* value;
    int f(void*, void*, void*);
};

int S::f(void* a, void* b, void* c)
{
    void* p = OpenEventA((DWORD)a, 0, (const char*)c);
    value = p;
    return p != 0;
}
