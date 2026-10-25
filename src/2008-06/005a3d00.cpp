// from server: 100% by tester
// roc 2008-06 005a3d00  unit: RBX::VWorkspace::?$RefPropDescriptor  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a3d00
//
// 005a3d00  8b442408             mov eax, dword ptr [esp + 8]
// 005a3d04  56                   push esi
// 005a3d05  8bf1                 mov esi, ecx
// 005a3d07  85c0                 test eax, eax
// 005a3d09  740b                 je 0x5a3d16
// 005a3d0b  50                   push eax
// 005a3d0c  e89fffffff           call 0x5a3cb0
// 005a3d11  83c404               add esp, 4
// 005a3d14  eb02                 jmp 0x5a3d18
// 005a3d16  33c0                 xor eax, eax
// 005a3d18  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005a3d1b  8d54240c             lea edx, [esp + 0xc]
// 005a3d1f  8944240c             mov dword ptr [esp + 0xc], eax
// 005a3d23  8b01                 mov eax, dword ptr [ecx]
// 005a3d25  8b400c               mov eax, dword ptr [eax + 0xc]
// 005a3d28  52                   push edx
// 005a3d29  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005a3d2d  52                   push edx
// 005a3d2e  ffd0                 call eax
// 005a3d30  5e                   pop esi
// 005a3d31  c20800               ret 8

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
