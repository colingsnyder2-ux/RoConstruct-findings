// from server: 100% by king_originala
// roc 2008-06 004aa8a0  unit: RBX::VNetworkSettings::?$FactoryProduct  size: 255 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004aa8a0
//
// 004aa8a0  6aff                 push -1
// 004aa8a2  68ca807c00           push 0x7c80ca
// 004aa8a7  64a100000000         mov eax, dword ptr fs:[0]
// 004aa8ad  50                   push eax
// 004aa8ae  64892500000000       mov dword ptr fs:[0], esp
// 004aa8b5  83ec48               sub esp, 0x48
// 004aa8b8  56                   push esi
// 004aa8b9  8bf1                 mov esi, ecx
// 004aa8bb  89742404             mov dword ptr [esp + 4], esi
// 004aa8bf  e8bcfeffff           call 0x4aa780
// 004aa8c4  68c03e8200           push 0x823ec0
// 004aa8c9  8d4c240c             lea ecx, [esp + 0xc]
// 004aa8cd  c744245800000000     mov dword ptr [esp + 0x58], 0
// 004aa8d5  c70674408200         mov dword ptr [esi], 0x824074
// 004aa8db  c7461068408200       mov dword ptr [esi + 0x10], 0x824068
// 004aa8e2  c7461460408200       mov dword ptr [esi + 0x14], 0x824060
// 004aa8e9  c7462058408200       mov dword ptr [esi + 0x20], 0x824058
// 004aa8f0  c7462448408200       mov dword ptr [esi + 0x24], 0x824048
// 004aa8f7  c7464438408200       mov dword ptr [esi + 0x44], 0x824038
// 004aa8fe  c7466428408200       mov dword ptr [esi + 0x64], 0x824028
// 004aa905  c7868400000018408200 mov dword ptr [esi + 0x84], 0x824018
// 004aa90f  c786a400000008408200 mov dword ptr [esi + 0xa4], 0x824008
// 004aa919  c786c4000000f83f8200 mov dword ptr [esi + 0xc4], 0x823ff8
// 004aa923  ff1558248000         call dword ptr [0x802458]
// 004aa929  8d442408             lea eax, [esp + 8]
// 004aa92d  50                   push eax
// 004aa92e  8bce                 mov ecx, esi
// 004aa930  c644245801           mov byte ptr [esp + 0x58], 1
// 004aa935  e856060b00           call 0x55af90
// 004aa93a  8d4c2408             lea ecx, [esp + 8]
// 004aa93e  c644245400           mov byte ptr [esp + 0x54], 0
// 004aa943  ff1568248000         call dword ptr [0x802468]
// 004aa949  833dd006970000       cmp dword ptr [0x9706d0], 0
// 004aa950  7435                 je 0x4aa987
// 004aa952  68c03e8200           push 0x823ec0
// 004aa957  8d4c240c             lea ecx, [esp + 0xc]
// 004aa95b  68c4c78000           push 0x80c7c4
// 004aa960  51                   push ecx
// 004aa961  e8aaf10500           call 0x509b10
// 004aa966  83c40c               add esp, 0xc
// 004aa969  50                   push eax
// 004aa96a  8d4c2428             lea ecx, [esp + 0x28]
// 004aa96e  c644245802           mov byte ptr [esp + 0x58], 2
// 004aa973  e8d8f3f5ff           call 0x409d50
// 004aa978  68c81b8d00           push 0x8d1bc8
// 004aa97d  8d542428             lea edx, [esp + 0x28]
// 004aa981  52                   push edx
// 004aa982  e8056c1f00           call 0x6a158c
// 004aa987  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 004aa98b  8935d0069700         mov dword ptr [0x9706d0], esi
// 004aa991  8bc6                 mov eax, esi
// 004aa993  5e                   pop esi
// 004aa994  64890d00000000       mov dword ptr fs:[0], ecx
// 004aa99b  83c454               add esp, 0x54
// 004aa99e  c3                   ret 

struct String;
extern void (__thiscall *constructString)(String*, const char*);
extern void (__thiscall *destroyString)(String*);

struct String {
    char storage[28];
    String(const char* text) { constructString(this, text); }
    ~String() { destroyString(this); }
};

extern String __cdecl formatString(const char*, ...);

struct Exception {
    char storage[40];
    Exception(const String&);
    Exception(const Exception&);
    ~Exception();
};

struct Base {
    unsigned long table00;
    char padding04[12];
    unsigned long table10;
    unsigned long table14;
    char padding18[8];
    unsigned long table20;
    unsigned long table24;
    char padding28[28];
    unsigned long table44;
    char padding48[28];
    unsigned long table64;
    char padding68[28];
    unsigned long table84;
    char padding88[28];
    unsigned long tableA4;
    char paddingA8[28];
    unsigned long tableC4;

    Base();
    ~Base();
    void setValue(const String&);
};

struct S : Base {
    S();
};

extern S* singleton;

S::S()
{
    table00 = 0x824074;
    table10 = 0x824068;
    table14 = 0x824060;
    table20 = 0x824058;
    table24 = 0x824048;
    table44 = 0x824038;
    table64 = 0x824028;
    table84 = 0x824018;
    tableA4 = 0x824008;
    tableC4 = 0x823ff8;

    {
        String name("NetworkSettings");
        setValue(name);
    }

    if (singleton)
        throw Exception(formatString("singleton %s already exists",
                                     "NetworkSettings"));

    singleton = this;
}
