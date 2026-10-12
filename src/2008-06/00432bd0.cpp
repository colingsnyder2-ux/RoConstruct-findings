// from server: 37% by colin
struct S {
    void destroy();
};

extern "C" void __stdcall EnterCriticalSection(void*);
extern "C" void __stdcall LeaveCriticalSection(void*);
extern "C" int __stdcall DestroyWindow(void*);

struct CritSect {
    char pad[0x28];
};

struct S2 {
    int refcount;
    char pad[0x20];
    void* hwnd;
    CritSect cs;
};

void sub_405ce0(void*, void*);

void S::destroy()
{
    EnterCriticalSection((void*)0x96d17c);
    S2* p = (S2*)this;
    if (--p->refcount == 0) {
        sub_405ce0((void*)0x96d15c, &p->cs);
        DestroyWindow(p->hwnd);
    }
    LeaveCriticalSection((void*)0x96d17c);
}
