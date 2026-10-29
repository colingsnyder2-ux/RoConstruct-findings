// roc 2009-06 005cf4d0  unit: RBX::VInstance::?$RefPropDescriptor  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005cf4d0
//
// 005cf4d0  8b442408             mov eax, dword ptr [esp + 8]
// 005cf4d4  56                   push esi
// 005cf4d5  8bf1                 mov esi, ecx
// 005cf4d7  85c0                 test eax, eax
// 005cf4d9  740b                 je 0x5cf4e6
// 005cf4db  50                   push eax
// 005cf4dc  e86fffffff           call 0x5cf450
// 005cf4e1  83c404               add esp, 4
// 005cf4e4  eb02                 jmp 0x5cf4e8
// 005cf4e6  33c0                 xor eax, eax
// 005cf4e8  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005cf4eb  8d54240c             lea edx, [esp + 0xc]
// 005cf4ef  8944240c             mov dword ptr [esp + 0xc], eax
// 005cf4f3  8b01                 mov eax, dword ptr [ecx]
// 005cf4f5  8b400c               mov eax, dword ptr [eax + 0xc]
// 005cf4f8  52                   push edx
// 005cf4f9  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005cf4fd  52                   push edx
// 005cf4fe  ffd0                 call eax
// 005cf500  5e                   pop esi
// 005cf501  c20800               ret 8
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