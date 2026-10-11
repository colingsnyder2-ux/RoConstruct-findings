// from server: 28% by atomic.potato
extern "C" {
    typedef void (__stdcall *PFN_0xb22644)(void*, void*);
    typedef void (__stdcall *PFN_0xb2263c)(void*);
}

struct S {
    void f(int, int);
};

extern "C" void* __stdcall sub_00791490(void*, void*);
extern "C" void __stdcall sub_006929b0(void*);

void S::f(int a, int b)
{
    char buf[0x20];
    void* p = sub_00791490(&buf, (void*)a);
    char buf2[0x20];
    ((PFN_0xb22644)0xb22644)(buf2, p);
    *(int*)(buf2 + 0x1c) = *(int*)((char*)p + 0x1c);
    sub_006929b0((char*)this + 0x10);
    ((PFN_0xb2263c)0xb2263c)(buf);
}
