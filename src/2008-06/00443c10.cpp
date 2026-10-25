// from server: 100% by king_originala
// roc 2008-06 00443c10  unit: RBX::Reflection::H::?$TypedPropertyDescriptor  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00443c10
//
// 00443c10  56                   push esi
// 00443c11  8bf1                 mov esi, ecx
// 00443c13  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00443c17  e844fdffff           call 0x443960
// 00443c1c  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00443c1f  8d54240c             lea edx, [esp + 0xc]
// 00443c23  8944240c             mov dword ptr [esp + 0xc], eax
// 00443c27  8b01                 mov eax, dword ptr [ecx]
// 00443c29  8b400c               mov eax, dword ptr [eax + 0xc]
// 00443c2c  52                   push edx
// 00443c2d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00443c31  52                   push edx
// 00443c32  ffd0                 call eax
// 00443c34  5e                   pop esi
// 00443c35  c20800               ret 8

struct Value {
    void* convert();
};

struct Accessor {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void* get(void*, void**);
};

struct S {
    unsigned char padding[24];
    Accessor* accessor;
    void* f(void* result, void* object);
};

void* S::f(void* result, void* object)
{
    object = static_cast<Value*>(object)->convert();
    return accessor->get(result, &object);
}
