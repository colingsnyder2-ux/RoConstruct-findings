// from server: 94% by colin
// roc 2007-08 0049c6a0  unit: RBX::Network::VServer::?$FactoryProduct  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0049c6a0
//
// 0049c6a0  56                   push esi
// 0049c6a1  8bf1                 mov esi, ecx
// 0049c6a3  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 0049c6a9  8b01                 mov eax, dword ptr [ecx]
// 0049c6ab  8b502c               mov edx, dword ptr [eax + 0x2c]
// 0049c6ae  ffd2                 call edx
// 0049c6b0  84c0                 test al, al
// 0049c6b2  7414                 je 0x49c6c8
// 0049c6b4  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 0049c6ba  8b01                 mov eax, dword ptr [ecx]
// 0049c6bc  8b542408             mov edx, dword ptr [esp + 8]
// 0049c6c0  8b4028               mov eax, dword ptr [eax + 0x28]
// 0049c6c3  6a00                 push 0
// 0049c6c5  52                   push edx
// 0049c6c6  ffd0                 call eax
// 0049c6c8  8bce                 mov ecx, esi
// 0049c6ca  e861550a00           call 0x541c30
// 0049c6cf  5e                   pop esi
// 0049c6d0  c20400               ret 4

struct Sub {
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
    virtual bool v11();
    virtual void v12(int, int);
};

struct S {
    char pad[0xf8];
    Sub* ptr;
    void func(int);
};

void S::func(int a)
{
    if (ptr->v11()) {
        ptr->v12(a, 0);
    }
    extern void f_541c30();
    f_541c30();
}
