// from server: 58% by atomic.potato
extern "C" {
    void __stdcall EnterCriticalSection(void*);
    void __stdcall LeaveCriticalSection(void*);
    long __stdcall InterlockedIncrement(long*);
    void* __cdecl sub_448FA0();
    void __cdecl sub_4C5D60();
    void __cdecl sub_719A4A(void*, void*);
    void __cdecl sub_89E1A8(void*);
    void* __cdecl sub_89E1AC(void*);
    void __cdecl sub_89E1D0(void*);
    void __cdecl sub_89E9C4(void*, void*);
}

struct S {
    void f();
};

void S::f() {
    char buf[16];
    void* p = sub_448FA0();
    sub_89E1A8(p);
    void** slot = (void**)((char*)p + 0x18);
    if (*slot) {
        *slot = *(void**)*slot;
    } else {
        sub_4C5D60();
    }
    void* q = sub_89E1AC(p);
    if (!q) {
        *(void**)(buf + 4) = (void*)0x8c5078;
        sub_89E9C4(buf + 8, buf + 4);
        *(void**)(buf + 8) = (void*)0x8ac938;
        sub_719A4A(buf + 8, (void*)0x979188);
    }
    sub_89E1D0((void*)0xa3b178);
}
