// from server: 35% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct S;

struct Registry {
    void remove(S* const* object);
};

struct Inner1 {
    void release();
};

struct Inner2 {
    void release();
};

struct Inner3 {
    void release();
};

struct S {
    unsigned long vtable;
    char pad[0x50];
    unsigned long vtable2;
    char pad2[0x138];
    unsigned long vtable3;
    unsigned long vtable4;
    char pad3[0x20];
    Inner1* ptr1b8;
    Inner2* ptr1bc;
    Inner3* ptr1c0;
    Inner2* ptr1c4;
    void f();
};

void S::f()
{
    vtable = 0x81bbc4;
    *(unsigned long*)((char*)this + 0x54) = 0x81bbb0;
    *(unsigned long*)((char*)this + 0x190) = 0x81bba8;
    *(unsigned long*)((char*)this + 0x194) = 0x81bb90;

    Inner1* p1 = ptr1b8;
    Inner2* p2 = ptr1bc;
    if (p2 != 0) {
        _InterlockedExchangeAdd((volatile long*)((char*)p2 + 4), 1);
    }

    // call 0x411b40 with ecx = &local
    // This is likely a constructor for a local object
    // We'll declare it as a function taking a pointer
    extern void __cdecl func_411b40(void*);
    char local[8];
    func_411b40(local);

    Inner3* p3 = ptr1c0;
    if (p3 != 0) {
        // call 0x5e5a80 with ecx = p3 + 0x130, arg = &vtable4
        extern void __cdecl func_5e5a80(void*, void*);
        func_5e5a80((char*)p3 + 0x130, &vtable4);
    }

    // call 0x5773c0 with ecx = &local2
    extern long __cdecl func_5773c0(void*);
    char local2[8];
    func_5773c0(local2);

    Inner2* p4 = ptr1c4;
    if (p4 != 0) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)p4 + 4), -1) == 1) {
            // call virtual function at vtable+4
            void** vt = *(void***)p4;
            void (*fn)(void*) = (void (*)(void*))vt[1];
            fn(p4);
            if (_InterlockedExchangeAdd((volatile long*)((char*)p4 + 8), -1) == 1) {
                void** vt2 = *(void***)p4;
                void (*fn2)(void*) = (void (*)(void*))vt2[2];
                fn2(p4);
            }
        }
    }

    Inner2* p5 = ptr1bc;
    if (p5 != 0) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)p5 + 4), -1) == 1) {
            void** vt = *(void***)p5;
            void (*fn)(void*) = (void (*)(void*))vt[1];
            fn(p5);
            if (_InterlockedExchangeAdd((volatile long*)((char*)p5 + 8), -1) == 1) {
                void** vt2 = *(void***)p5;
                void (*fn2)(void*) = (void (*)(void*))vt2[2];
                fn2(p5);
            }
        }
    }

    // call 0x4663c0 with ecx = &vtable4
    extern void __cdecl func_4663c0(void*);
    func_4663c0(&vtable4);

    // call 0x405d80 with ecx = &vtable3
    extern void __cdecl func_405d80(void*);
    func_405d80(&vtable3);

    // call 0x718a20 with ecx = this
    extern void __cdecl func_718a20(void*);
    func_718a20(this);
}
