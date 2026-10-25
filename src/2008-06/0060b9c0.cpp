// from server: 100% by tester
// roc 2008-06 0060b9c0  unit: RBX::VVelocityMotor::?$RefPropDescriptor  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060b9c0
//
// 0060b9c0  8b442408             mov eax, dword ptr [esp + 8]
// 0060b9c4  56                   push esi
// 0060b9c5  8bf1                 mov esi, ecx
// 0060b9c7  85c0                 test eax, eax
// 0060b9c9  740b                 je 0x60b9d6
// 0060b9cb  50                   push eax
// 0060b9cc  e89fffffff           call 0x60b970
// 0060b9d1  83c404               add esp, 4
// 0060b9d4  eb02                 jmp 0x60b9d8
// 0060b9d6  33c0                 xor eax, eax
// 0060b9d8  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0060b9db  8d54240c             lea edx, [esp + 0xc]
// 0060b9df  8944240c             mov dword ptr [esp + 0xc], eax
// 0060b9e3  8b01                 mov eax, dword ptr [ecx]
// 0060b9e5  8b400c               mov eax, dword ptr [eax + 0xc]
// 0060b9e8  52                   push edx
// 0060b9e9  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0060b9ed  52                   push edx
// 0060b9ee  ffd0                 call eax
// 0060b9f0  5e                   pop esi
// 0060b9f1  c20800               ret 8

struct Base {
    virtual ~Base();
};

struct Derived : Base {
};

Derived* polymorphic_cast(Base* x);

inline Derived* maybe(Base* x)
{
    if (x)
        return polymorphic_cast(x);
    return 0;
}

struct Setter {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void set(Base* target, Derived* const& value);
};

struct Descriptor {
    char padding[0x1c];
    Setter* setter;
    void set(Base* target, Base* value);
};

void Descriptor::set(Base* target, Base* value)
{
    setter->set(target, maybe(value));
}
