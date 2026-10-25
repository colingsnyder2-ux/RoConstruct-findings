// from server: 100% by tester
// roc 2008-06 00491720  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00491720
//
// 00491720  8b442408             mov eax, dword ptr [esp + 8]
// 00491724  56                   push esi
// 00491725  8bf1                 mov esi, ecx
// 00491727  85c0                 test eax, eax
// 00491729  740b                 je 0x491736
// 0049172b  50                   push eax
// 0049172c  e8bffdffff           call 0x4914f0
// 00491731  83c404               add esp, 4
// 00491734  eb02                 jmp 0x491738
// 00491736  33c0                 xor eax, eax
// 00491738  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0049173b  8d54240c             lea edx, [esp + 0xc]
// 0049173f  8944240c             mov dword ptr [esp + 0xc], eax
// 00491743  8b01                 mov eax, dword ptr [ecx]
// 00491745  8b400c               mov eax, dword ptr [eax + 0xc]
// 00491748  52                   push edx
// 00491749  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0049174d  52                   push edx
// 0049174e  ffd0                 call eax
// 00491750  5e                   pop esi
// 00491751  c20800               ret 8

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
