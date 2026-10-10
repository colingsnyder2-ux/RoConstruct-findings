// from server: 44% by colin
struct CXTPTabClientWnd {
    void f(int, int);
};

extern "C" {
    int __stdcall ClientToScreen(void*, void*);
    void* __cdecl sub_677390(void*);
    void* __cdecl sub_62fef6(unsigned int);
    void __cdecl sub_6ca460(void*);
    void __cdecl sub_67d1e0(void*, void*, int, int, int, int);
    void* __cdecl sub_67d2a0(void*, int, int, int, int, int);
    void __cdecl sub_63a120(void*, int);
    void __cdecl sub_6342d0(void*, void*, int, int, int, int, int);
    void __cdecl sub_6301e4(void*);
}

void CXTPTabClientWnd::f(int, int)
{
    void* vtable = *(void**)this;
    void* (*get)(void*) = *(void* (**)(void*))((char*)vtable + 0x14c);
    void* a = get(this);
    void* esi = sub_677390(a);

    char buf[16];
    ClientToScreen(*(void**)((char*)this + 0x20), buf);

    void* edi = sub_62fef6(0x168);
    if (edi) {
        sub_6ca460(edi);
        *(void**)edi = (void*)0x7ce3f4;
        *(void**)((char*)edi + 0x20) = (void*)0x7ce394;
    } else {
        edi = 0;
    }

    void* ecx1 = *(void**)((char*)esi + 0xf8);
    sub_67d1e0(ecx1, edi, 0, 0, -1, 0);

    void* ecx2 = *(void**)((char*)esi + 0xf8);
    void* edi2 = sub_67d2a0(ecx2, 1, 0x23c7, 0, -1, 0);

    void* edx = *(void**)edi2;
    void (*fn)(void*, int) = *(void (**)(void*, int))((char*)edx + 0x64);
    fn(edi2, 1);

    sub_63a120(edi2, 8);

    int c = *(int*)((char*)this + 0x84);
    int b = *(int*)(buf + 4);
    int a2 = *(int*)buf;
    sub_6342d0(esi, 0, a2, b, c, 0, 0);

    sub_6301e4(esi);
}
