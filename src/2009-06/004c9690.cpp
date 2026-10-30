// roc 2009-06 004c9690  unit: RBX::Network::VPlayers::?$RefPropDescriptor  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004c9690
//
// 004c9690  8b442408             mov eax, dword ptr [esp + 8]
// 004c9694  56                   push esi
// 004c9695  8bf1                 mov esi, ecx
// 004c9697  85c0                 test eax, eax
// 004c9699  740b                 je 0x4c96a6
// 004c969b  50                   push eax
// 004c969c  e81f6bffff           call 0x4c01c0
// 004c96a1  83c404               add esp, 4
// 004c96a4  eb02                 jmp 0x4c96a8
// 004c96a6  33c0                 xor eax, eax
// 004c96a8  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 004c96ab  8d54240c             lea edx, [esp + 0xc]
// 004c96af  8944240c             mov dword ptr [esp + 0xc], eax
// 004c96b3  8b01                 mov eax, dword ptr [ecx]
// 004c96b5  8b400c               mov eax, dword ptr [eax + 0xc]
// 004c96b8  52                   push edx
// 004c96b9  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004c96bd  52                   push edx
// 004c96be  ffd0                 call eax
// 004c96c0  5e                   pop esi
// 004c96c1  c20800               ret 8
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