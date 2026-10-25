// from server: 100% by tester
// roc 2008-06 0049ab10  unit: RBX::Network::VPlayers::?$RefPropDescriptor  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049ab10
//
// 0049ab10  8b442408             mov eax, dword ptr [esp + 8]
// 0049ab14  56                   push esi
// 0049ab15  8bf1                 mov esi, ecx
// 0049ab17  85c0                 test eax, eax
// 0049ab19  740b                 je 0x49ab26
// 0049ab1b  50                   push eax
// 0049ab1c  e86f7fffff           call 0x492a90
// 0049ab21  83c404               add esp, 4
// 0049ab24  eb02                 jmp 0x49ab28
// 0049ab26  33c0                 xor eax, eax
// 0049ab28  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0049ab2b  8d54240c             lea edx, [esp + 0xc]
// 0049ab2f  8944240c             mov dword ptr [esp + 0xc], eax
// 0049ab33  8b01                 mov eax, dword ptr [ecx]
// 0049ab35  8b400c               mov eax, dword ptr [eax + 0xc]
// 0049ab38  52                   push edx
// 0049ab39  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0049ab3d  52                   push edx
// 0049ab3e  ffd0                 call eax
// 0049ab40  5e                   pop esi
// 0049ab41  c20800               ret 8

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
