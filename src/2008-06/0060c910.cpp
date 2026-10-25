// from server: 100% by king_originala
// roc 2008-06 0060c910  unit: RBX::VHole::?$FactoryProduct  size: 197 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060c910
//
// 0060c910  6aff                 push -1
// 0060c912  68b18b7d00           push 0x7d8bb1
// 0060c917  64a100000000         mov eax, dword ptr fs:[0]
// 0060c91d  50                   push eax
// 0060c91e  64892500000000       mov dword ptr fs:[0], esp
// 0060c925  83ec20               sub esp, 0x20
// 0060c928  56                   push esi
// 0060c929  8bf1                 mov esi, ecx
// 0060c92b  89742404             mov dword ptr [esp + 4], esi
// 0060c92f  e80cfdffff           call 0x60c640
// 0060c934  6898368400           push 0x843698
// 0060c939  8d4c240c             lea ecx, [esp + 0xc]
// 0060c93d  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0060c945  c70654368400         mov dword ptr [esi], 0x843654
// 0060c94b  c7461044368400       mov dword ptr [esi + 0x10], 0x843644
// 0060c952  c746143c368400       mov dword ptr [esi + 0x14], 0x84363c
// 0060c959  c7462034368400       mov dword ptr [esi + 0x20], 0x843634
// 0060c960  c7462424368400       mov dword ptr [esi + 0x24], 0x843624
// 0060c967  c7464414368400       mov dword ptr [esi + 0x44], 0x843614
// 0060c96e  c7466404368400       mov dword ptr [esi + 0x64], 0x843604
// 0060c975  c78684000000f4358400 mov dword ptr [esi + 0x84], 0x8435f4
// 0060c97f  c786a4000000e4358400 mov dword ptr [esi + 0xa4], 0x8435e4
// 0060c989  c786c4000000d4358400 mov dword ptr [esi + 0xc4], 0x8435d4
// 0060c993  c78630010000bc358400 mov dword ptr [esi + 0x130], 0x8435bc
// 0060c99d  ff1558248000         call dword ptr [0x802458]
// 0060c9a3  8d442408             lea eax, [esp + 8]
// 0060c9a7  50                   push eax
// 0060c9a8  8bce                 mov ecx, esi
// 0060c9aa  c644243001           mov byte ptr [esp + 0x30], 1
// 0060c9af  e8dce5f4ff           call 0x55af90
// 0060c9b4  8d4c2408             lea ecx, [esp + 8]
// 0060c9b8  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0060c9bd  ff1568248000         call dword ptr [0x802468]
// 0060c9c3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0060c9c7  8bc6                 mov eax, esi
// 0060c9c9  5e                   pop esi
// 0060c9ca  64890d00000000       mov dword ptr fs:[0], ecx
// 0060c9d1  83c42c               add esp, 0x2c
// 0060c9d4  c3                   ret 

typedef void (__thiscall *StringConstruct)(void *, const char *);
typedef void (__thiscall *StringDestroy)(void *);

extern StringConstruct const constructString;
extern StringDestroy const destroyString;

extern const char table0[], table10[], table14[], table20[], table24[];
extern const char table44[], table64[], table84[], tableA4[], tableC4[];
extern const char table130[];

struct String {
    char storage[28];
    String(const char *);
    ~String();
};

inline String::String(const char *text)
{
    constructString(this, text);
}

inline String::~String()
{
    destroyString(this);
}

struct Base {
    unsigned long storage[77];
    Base();
    ~Base();
    void setName(const String &);
};

struct S : Base {
    S();
};

S::S()
{
    storage[0]  = reinterpret_cast<unsigned long>(table0);
    storage[4]  = reinterpret_cast<unsigned long>(table10);
    storage[5]  = reinterpret_cast<unsigned long>(table14);
    storage[8]  = reinterpret_cast<unsigned long>(table20);
    storage[9]  = reinterpret_cast<unsigned long>(table24);
    storage[17] = reinterpret_cast<unsigned long>(table44);
    storage[25] = reinterpret_cast<unsigned long>(table64);
    storage[33] = reinterpret_cast<unsigned long>(table84);
    storage[41] = reinterpret_cast<unsigned long>(tableA4);
    storage[49] = reinterpret_cast<unsigned long>(tableC4);
    storage[76] = reinterpret_cast<unsigned long>(table130);
    setName(String("MotorFeature"));
}
