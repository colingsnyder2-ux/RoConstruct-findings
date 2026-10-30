// roc 2009-06 0062e7b0  unit: RBX::VWorkspace::?$RefPropDescriptor  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0062e7b0
//
// 0062e7b0  8b442408             mov eax, dword ptr [esp + 8]
// 0062e7b4  56                   push esi
// 0062e7b5  8bf1                 mov esi, ecx
// 0062e7b7  85c0                 test eax, eax
// 0062e7b9  740b                 je 0x62e7c6
// 0062e7bb  50                   push eax
// 0062e7bc  e89fffffff           call 0x62e760
// 0062e7c1  83c404               add esp, 4
// 0062e7c4  eb02                 jmp 0x62e7c8
// 0062e7c6  33c0                 xor eax, eax
// 0062e7c8  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0062e7cb  8d54240c             lea edx, [esp + 0xc]
// 0062e7cf  8944240c             mov dword ptr [esp + 0xc], eax
// 0062e7d3  8b01                 mov eax, dword ptr [ecx]
// 0062e7d5  8b400c               mov eax, dword ptr [eax + 0xc]
// 0062e7d8  52                   push edx
// 0062e7d9  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0062e7dd  52                   push edx
// 0062e7de  ffd0                 call eax
// 0062e7e0  5e                   pop esi
// 0062e7e1  c20800               ret 8
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