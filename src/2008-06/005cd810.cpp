// from server: 100% by tester
// roc 2008-06 005cd810  unit: RBX::VInstance::?$RefPropDescriptor  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cd810
//
// 005cd810  8b442408             mov eax, dword ptr [esp + 8]
// 005cd814  56                   push esi
// 005cd815  8bf1                 mov esi, ecx
// 005cd817  85c0                 test eax, eax
// 005cd819  740b                 je 0x5cd826
// 005cd81b  50                   push eax
// 005cd81c  e8afc1f8ff           call 0x5599d0
// 005cd821  83c404               add esp, 4
// 005cd824  eb02                 jmp 0x5cd828
// 005cd826  33c0                 xor eax, eax
// 005cd828  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005cd82b  8d54240c             lea edx, [esp + 0xc]
// 005cd82f  8944240c             mov dword ptr [esp + 0xc], eax
// 005cd833  8b01                 mov eax, dword ptr [ecx]
// 005cd835  8b400c               mov eax, dword ptr [eax + 0xc]
// 005cd838  52                   push edx
// 005cd839  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005cd83d  52                   push edx
// 005cd83e  ffd0                 call eax
// 005cd840  5e                   pop esi
// 005cd841  c20800               ret 8

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
