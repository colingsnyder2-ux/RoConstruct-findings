// roc 2009-06 00693020  unit: RBX::VModelInstance::?$RefPropDescriptor  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00693020
//
// 00693020  8b442408             mov eax, dword ptr [esp + 8]
// 00693024  56                   push esi
// 00693025  8bf1                 mov esi, ecx
// 00693027  85c0                 test eax, eax
// 00693029  740b                 je 0x693036
// 0069302b  50                   push eax
// 0069302c  e8cff9f7ff           call 0x612a00
// 00693031  83c404               add esp, 4
// 00693034  eb02                 jmp 0x693038
// 00693036  33c0                 xor eax, eax
// 00693038  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0069303b  8d54240c             lea edx, [esp + 0xc]
// 0069303f  8944240c             mov dword ptr [esp + 0xc], eax
// 00693043  8b01                 mov eax, dword ptr [ecx]
// 00693045  8b400c               mov eax, dword ptr [eax + 0xc]
// 00693048  52                   push edx
// 00693049  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0069304d  52                   push edx
// 0069304e  ffd0                 call eax
// 00693050  5e                   pop esi
// 00693051  c20800               ret 8
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