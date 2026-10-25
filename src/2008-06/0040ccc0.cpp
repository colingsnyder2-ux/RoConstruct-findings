// from server: 100% by king_originala
// roc 2008-06 0040ccc0  unit: RBX::Reflection::Metadata::VEvents::?$FactoryProduct  size: 255 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040ccc0
//
// 0040ccc0  6aff                 push -1
// 0040ccc2  68aad37b00           push 0x7bd3aa
// 0040ccc7  64a100000000         mov eax, dword ptr fs:[0]
// 0040cccd  50                   push eax
// 0040ccce  64892500000000       mov dword ptr fs:[0], esp
// 0040ccd5  83ec48               sub esp, 0x48
// 0040ccd8  56                   push esi
// 0040ccd9  8bf1                 mov esi, ecx
// 0040ccdb  89742404             mov dword ptr [esp + 4], esi
// 0040ccdf  e8ecfaffff           call 0x40c7d0
// 0040cce4  6820b78000           push 0x80b720
// 0040cce9  8d4c240c             lea ecx, [esp + 0xc]
// 0040cced  c744245800000000     mov dword ptr [esp + 0x58], 0
// 0040ccf5  c70614bb8000         mov dword ptr [esi], 0x80bb14
// 0040ccfb  c7461004bb8000       mov dword ptr [esi + 0x10], 0x80bb04
// 0040cd02  c74614fcba8000       mov dword ptr [esi + 0x14], 0x80bafc
// 0040cd09  c74620f4ba8000       mov dword ptr [esi + 0x20], 0x80baf4
// 0040cd10  c74624e4ba8000       mov dword ptr [esi + 0x24], 0x80bae4
// 0040cd17  c74644d4ba8000       mov dword ptr [esi + 0x44], 0x80bad4
// 0040cd1e  c74664c4ba8000       mov dword ptr [esi + 0x64], 0x80bac4
// 0040cd25  c78684000000b4ba8000 mov dword ptr [esi + 0x84], 0x80bab4
// 0040cd2f  c786a4000000a4ba8000 mov dword ptr [esi + 0xa4], 0x80baa4
// 0040cd39  c786c400000094ba8000 mov dword ptr [esi + 0xc4], 0x80ba94
// 0040cd43  ff1558248000         call dword ptr [0x802458]
// 0040cd49  8d442408             lea eax, [esp + 8]
// 0040cd4d  50                   push eax
// 0040cd4e  8bce                 mov ecx, esi
// 0040cd50  c644245801           mov byte ptr [esp + 0x58], 1
// 0040cd55  e836e21400           call 0x55af90
// 0040cd5a  8d4c2408             lea ecx, [esp + 8]
// 0040cd5e  c644245400           mov byte ptr [esp + 0x54], 0
// 0040cd63  ff1568248000         call dword ptr [0x802468]
// 0040cd69  833d9cc3960000       cmp dword ptr [0x96c39c], 0
// 0040cd70  7435                 je 0x40cda7
// 0040cd72  6820b78000           push 0x80b720
// 0040cd77  8d4c240c             lea ecx, [esp + 0xc]
// 0040cd7b  68c4c78000           push 0x80c7c4
// 0040cd80  51                   push ecx
// 0040cd81  e88acd0f00           call 0x509b10
// 0040cd86  83c40c               add esp, 0xc
// 0040cd89  50                   push eax
// 0040cd8a  8d4c2428             lea ecx, [esp + 0x28]
// 0040cd8e  c644245802           mov byte ptr [esp + 0x58], 2
// 0040cd93  e8b8cfffff           call 0x409d50
// 0040cd98  68c81b8d00           push 0x8d1bc8
// 0040cd9d  8d542428             lea edx, [esp + 0x28]
// 0040cda1  52                   push edx
// 0040cda2  e8e5472900           call 0x6a158c
// 0040cda7  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0040cdab  89359cc39600         mov dword ptr [0x96c39c], esi
// 0040cdb1  8bc6                 mov eax, esi
// 0040cdb3  5e                   pop esi
// 0040cdb4  64890d00000000       mov dword ptr fs:[0], ecx
// 0040cdbb  83c454               add esp, 0x54
// 0040cdbe  c3                   ret 

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
