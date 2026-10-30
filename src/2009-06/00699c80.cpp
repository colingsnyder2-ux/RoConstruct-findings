// roc 2009-06 00699c80  unit: RBX::VVelocityMotor::?$RefPropDescriptor  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00699c80
//
// 00699c80  8b442408             mov eax, dword ptr [esp + 8]
// 00699c84  56                   push esi
// 00699c85  8bf1                 mov esi, ecx
// 00699c87  85c0                 test eax, eax
// 00699c89  740b                 je 0x699c96
// 00699c8b  50                   push eax
// 00699c8c  e89fffffff           call 0x699c30
// 00699c91  83c404               add esp, 4
// 00699c94  eb02                 jmp 0x699c98
// 00699c96  33c0                 xor eax, eax
// 00699c98  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00699c9b  8d54240c             lea edx, [esp + 0xc]
// 00699c9f  8944240c             mov dword ptr [esp + 0xc], eax
// 00699ca3  8b01                 mov eax, dword ptr [ecx]
// 00699ca5  8b400c               mov eax, dword ptr [eax + 0xc]
// 00699ca8  52                   push edx
// 00699ca9  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00699cad  52                   push edx
// 00699cae  ffd0                 call eax
// 00699cb0  5e                   pop esi
// 00699cb1  c20800               ret 8
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