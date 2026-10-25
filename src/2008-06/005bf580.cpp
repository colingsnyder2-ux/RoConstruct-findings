// from server: 100% by colin
// roc 2008-06 005bf580  unit: RBX::VGameSettings::?$FactoryProduct  size: 255 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bf580
//
// 005bf580  6aff                 push -1
// 005bf582  684a407d00           push 0x7d404a
// 005bf587  64a100000000         mov eax, dword ptr fs:[0]
// 005bf58d  50                   push eax
// 005bf58e  64892500000000       mov dword ptr fs:[0], esp
// 005bf595  83ec48               sub esp, 0x48
// 005bf598  56                   push esi
// 005bf599  8bf1                 mov esi, ecx
// 005bf59b  89742404             mov dword ptr [esp + 4], esi
// 005bf59f  e8ecfeffff           call 0x5bf490
// 005bf5a4  6878848300           push 0x838478
// 005bf5a9  8d4c240c             lea ecx, [esp + 0xc]
// 005bf5ad  c744245800000000     mov dword ptr [esp + 0x58], 0
// 005bf5b5  c706f4858300         mov dword ptr [esi], 0x8385f4
// 005bf5bb  c74610e8858300       mov dword ptr [esi + 0x10], 0x8385e8
// 005bf5c2  c74614e0858300       mov dword ptr [esi + 0x14], 0x8385e0
// 005bf5c9  c74620d8858300       mov dword ptr [esi + 0x20], 0x8385d8
// 005bf5d0  c74624c8858300       mov dword ptr [esi + 0x24], 0x8385c8
// 005bf5d7  c74644b8858300       mov dword ptr [esi + 0x44], 0x8385b8
// 005bf5de  c74664a8858300       mov dword ptr [esi + 0x64], 0x8385a8
// 005bf5e5  c7868400000098858300 mov dword ptr [esi + 0x84], 0x838598
// 005bf5ef  c786a400000088858300 mov dword ptr [esi + 0xa4], 0x838588
// 005bf5f9  c786c400000078858300 mov dword ptr [esi + 0xc4], 0x838578
// 005bf603  ff1558248000         call dword ptr [0x802458]
// 005bf609  8d442408             lea eax, [esp + 8]
// 005bf60d  50                   push eax
// 005bf60e  8bce                 mov ecx, esi
// 005bf610  c644245801           mov byte ptr [esp + 0x58], 1
// 005bf615  e876b9f9ff           call 0x55af90
// 005bf61a  8d4c2408             lea ecx, [esp + 8]
// 005bf61e  c644245400           mov byte ptr [esp + 0x54], 0
// 005bf623  ff1568248000         call dword ptr [0x802468]
// 005bf629  833d10dd960000       cmp dword ptr [0x96dd10], 0
// 005bf630  7435                 je 0x5bf667
// 005bf632  6878848300           push 0x838478
// 005bf637  8d4c240c             lea ecx, [esp + 0xc]
// 005bf63b  68c4c78000           push 0x80c7c4
// 005bf640  51                   push ecx
// 005bf641  e8caa4f4ff           call 0x509b10
// 005bf646  83c40c               add esp, 0xc
// 005bf649  50                   push eax
// 005bf64a  8d4c2428             lea ecx, [esp + 0x28]
// 005bf64e  c644245802           mov byte ptr [esp + 0x58], 2
// 005bf653  e8f8a6e4ff           call 0x409d50
// 005bf658  68c81b8d00           push 0x8d1bc8
// 005bf65d  8d542428             lea edx, [esp + 0x28]
// 005bf661  52                   push edx
// 005bf662  e8251f0e00           call 0x6a158c
// 005bf667  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 005bf66b  893510dd9600         mov dword ptr [0x96dd10], esi
// 005bf671  8bc6                 mov eax, esi
// 005bf673  5e                   pop esi
// 005bf674  64890d00000000       mov dword ptr fs:[0], ecx
// 005bf67b  83c454               add esp, 0x54
// 005bf67e  c3                   ret 

struct String;
typedef void (__thiscall *StringCtor)(String *, const char *);
typedef void (__thiscall *StringDtor)(String *);

extern StringCtor constructString;
extern StringDtor destroyString;

struct String {
    unsigned char data[28];

    String(const char *s) { constructString(this, s); }
    ~String() { destroyString(this); }
};

extern String __cdecl format(const char *, ...);

struct Error {
    unsigned char data[40];

    Error(const String &);
    Error(const Error &);
    ~Error();
};

struct Base {
    unsigned long slots[76];

    Base();
    ~Base();
    void setName(const String &);
};

struct S : Base {
    S();
};

extern S *singleton;

extern unsigned long table0[];
extern unsigned long table10[];
extern unsigned long table14[];
extern unsigned long table20[];
extern unsigned long table24[];
extern unsigned long table44[];
extern unsigned long table64[];
extern unsigned long table84[];
extern unsigned long tableA4[];
extern unsigned long tableC4[];

extern const char authoring[];
extern const char duplicateFormat[];

S::S() : Base()
{
    slots[0]  = reinterpret_cast<unsigned long>(table0);
    slots[4]  = reinterpret_cast<unsigned long>(table10);
    slots[5]  = reinterpret_cast<unsigned long>(table14);
    slots[8]  = reinterpret_cast<unsigned long>(table20);
    slots[9]  = reinterpret_cast<unsigned long>(table24);
    slots[17] = reinterpret_cast<unsigned long>(table44);
    slots[25] = reinterpret_cast<unsigned long>(table64);
    slots[33] = reinterpret_cast<unsigned long>(table84);
    slots[41] = reinterpret_cast<unsigned long>(tableA4);
    slots[49] = reinterpret_cast<unsigned long>(tableC4);

    setName(String(authoring));

    if (singleton)
        throw Error(format(duplicateFormat, authoring));

    singleton = this;
}
