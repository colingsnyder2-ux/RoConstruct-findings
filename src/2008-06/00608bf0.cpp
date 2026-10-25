// from server: 100% by king_originala
// roc 2008-06 00608bf0  unit: RBX::VModelInstance::?$FactoryProduct  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00608bf0
//
// 00608bf0  8b8104010000         mov eax, dword ptr [ecx + 0x104]
// 00608bf6  6a00                 push 0
// 00608bf8  681c7f9400           push 0x947f1c
// 00608bfd  687c909200           push 0x92907c
// 00608c02  6a00                 push 0
// 00608c04  50                   push eax
// 00608c05  e8bc8b0900           call 0x6a17c6
// 00608c0a  83c414               add esp, 0x14
// 00608c0d  85c0                 test eax, eax
// 00608c0f  7409                 je 0x608c1a
// 00608c11  8b10                 mov edx, dword ptr [eax]
// 00608c13  8bc8                 mov ecx, eax
// 00608c15  8b4250               mov eax, dword ptr [edx + 0x50]
// 00608c18  ffe0                 jmp eax
// 00608c1a  c3                   ret 

extern char instanceType;
extern char pvInstanceType;

extern "C" void* __cdecl __RTDynamicCast(
    void*, long, void*, void*, int);

struct PVInstance {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void action();
};

struct S {
    char padding[0x104];
    void* instance;
    void f();
};

void S::f()
{
    PVInstance* p = (PVInstance*)__RTDynamicCast(
        instance, 0, &instanceType, &pvInstanceType, 0);
    if (p)
        p->action();
}
