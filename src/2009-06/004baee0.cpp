// roc 2009-06 004baee0  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004baee0
//
// 004baee0  8b442408             mov eax, dword ptr [esp + 8]
// 004baee4  56                   push esi
// 004baee5  8bf1                 mov esi, ecx
// 004baee7  85c0                 test eax, eax
// 004baee9  740b                 je 0x4baef6
// 004baeeb  50                   push eax
// 004baeec  e87ffeffff           call 0x4bad70
// 004baef1  83c404               add esp, 4
// 004baef4  eb02                 jmp 0x4baef8
// 004baef6  33c0                 xor eax, eax
// 004baef8  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 004baefb  8d54240c             lea edx, [esp + 0xc]
// 004baeff  8944240c             mov dword ptr [esp + 0xc], eax
// 004baf03  8b01                 mov eax, dword ptr [ecx]
// 004baf05  8b400c               mov eax, dword ptr [eax + 0xc]
// 004baf08  52                   push edx
// 004baf09  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004baf0d  52                   push edx
// 004baf0e  ffd0                 call eax
// 004baf10  5e                   pop esi
// 004baf11  c20800               ret 8
// copied from an identical function in another client (function ?set@Descriptor@@QAEXPAUBase@@0@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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