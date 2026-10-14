// from server: 100% by colin
// roc 2008-06 005655b0  unit: RBX::VDebugSettings::?$FactoryProduct  size: 255 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005655b0
//
// 005655b0  6aff                 push -1
// 005655b2  68eaf37c00           push 0x7cf3ea
// 005655b7  64a100000000         mov eax, dword ptr fs:[0]
// 005655bd  50                   push eax
// 005655be  64892500000000       mov dword ptr fs:[0], esp
// 005655c5  83ec48               sub esp, 0x48
// 005655c8  56                   push esi
// 005655c9  8bf1                 mov esi, ecx
// 005655cb  89742404             mov dword ptr [esp + 4], esi
// 005655cf  e8dcfeffff           call 0x5654b0
// 005655d4  68b8df8200           push 0x82dfb8
// 005655d9  8d4c240c             lea ecx, [esp + 0xc]
// 005655dd  c744245800000000     mov dword ptr [esp + 0x58], 0
// 005655e5  c706ace28200         mov dword ptr [esi], 0x82e2ac
// 005655eb  c746109ce28200       mov dword ptr [esi + 0x10], 0x82e29c
// 005655f2  c7461494e28200       mov dword ptr [esi + 0x14], 0x82e294
// 005655f9  c746208ce28200       mov dword ptr [esi + 0x20], 0x82e28c
// 00565600  c746247ce28200       mov dword ptr [esi + 0x24], 0x82e27c
// 00565607  c746446ce28200       mov dword ptr [esi + 0x44], 0x82e26c
// 0056560e  c746645ce28200       mov dword ptr [esi + 0x64], 0x82e25c
// 00565615  c786840000004ce28200 mov dword ptr [esi + 0x84], 0x82e24c
// 0056561f  c786a40000003ce28200 mov dword ptr [esi + 0xa4], 0x82e23c
// 00565629  c786c40000002ce28200 mov dword ptr [esi + 0xc4], 0x82e22c
// 00565633  ff1558248000         call dword ptr [0x802458]
// 00565639  8d442408             lea eax, [esp + 8]
// 0056563d  50                   push eax
// 0056563e  8bce                 mov ecx, esi
// 00565640  c644245801           mov byte ptr [esp + 0x58], 1
// 00565645  e84659ffff           call 0x55af90
// 0056564a  8d4c2408             lea ecx, [esp + 8]
// 0056564e  c644245400           mov byte ptr [esp + 0x54], 0
// 00565653  ff1568248000         call dword ptr [0x802468]
// 00565659  833d18c3960000       cmp dword ptr [0x96c318], 0
// 00565660  7435                 je 0x565697
// 00565662  68b8df8200           push 0x82dfb8
// 00565667  8d4c240c             lea ecx, [esp + 0xc]
// 0056566b  68c4c78000           push 0x80c7c4
// 00565670  51                   push ecx
// 00565671  e89a44faff           call 0x509b10
// 00565676  83c40c               add esp, 0xc
// 00565679  50                   push eax
// 0056567a  8d4c2428             lea ecx, [esp + 0x28]
// 0056567e  c644245802           mov byte ptr [esp + 0x58], 2
// 00565683  e8c846eaff           call 0x409d50
// 00565688  68c81b8d00           push 0x8d1bc8
// 0056568d  8d542428             lea edx, [esp + 0x28]
// 00565691  52                   push edx
// 00565692  e8f5be1300           call 0x6a158c
// 00565697  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0056569b  893518c39600         mov dword ptr [0x96c318], esi
// 005656a1  8bc6                 mov eax, esi
// 005656a3  5e                   pop esi
// 005656a4  64890d00000000       mov dword ptr fs:[0], ecx
// 005656ab  83c454               add esp, 0x54
// 005656ae  c3                   ret 

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
