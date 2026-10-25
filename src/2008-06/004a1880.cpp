// from server: 100% by king_originala
// roc 2008-06 004a1880  unit: RBX::Network::VServer::?$FactoryProduct  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a1880
//
// 004a1880  56                   push esi
// 004a1881  8bf1                 mov esi, ecx
// 004a1883  8b8e40010000         mov ecx, dword ptr [esi + 0x140]
// 004a1889  8b01                 mov eax, dword ptr [ecx]
// 004a188b  8b502c               mov edx, dword ptr [eax + 0x2c]
// 004a188e  ffd2                 call edx
// 004a1890  84c0                 test al, al
// 004a1892  7414                 je 0x4a18a8
// 004a1894  8b8e40010000         mov ecx, dword ptr [esi + 0x140]
// 004a189a  8b01                 mov eax, dword ptr [ecx]
// 004a189c  8b542408             mov edx, dword ptr [esp + 8]
// 004a18a0  8b4028               mov eax, dword ptr [eax + 0x28]
// 004a18a3  6a00                 push 0
// 004a18a5  52                   push edx
// 004a18a6  ffd0                 call eax
// 004a18a8  8bce                 mov ecx, esi
// 004a18aa  e821970b00           call 0x55afd0
// 004a18af  5e                   pop esi
// 004a18b0  c20400               ret 4

struct Interface {
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
    virtual void apply(void*, int);
    virtual bool ready();
};

struct S {
    char padding[0x140];
    Interface* object;

    void finish();
    void f(void*);
};

void S::f(void* argument) {
    if (object->ready())
        object->apply(argument, 0);
    finish();
}
