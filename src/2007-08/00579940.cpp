// from server: 100% by colin
// roc 2007-08 00579940  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00579940
//
// 00579940  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 00579943  8b01                 mov eax, dword ptr [ecx]
// 00579945  8b10                 mov edx, dword ptr [eax]
// 00579947  ffe2                 jmp edx

struct Inner {
    virtual void v();
};

struct S {
    char pad[24];
    Inner* m_p;
    void f();
};

void S::f()
{
    Inner* p = m_p;
    p->v();
}
