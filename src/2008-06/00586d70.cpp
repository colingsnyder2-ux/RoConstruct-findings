// from server: 100% by king_originala
// roc 2008-06 00586d70  unit: RBX::VLocalScript::?$FactoryProduct  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00586d70
//
// 00586d70  6aff                 push -1
// 00586d72  6801147d00           push 0x7d1401
// 00586d77  64a100000000         mov eax, dword ptr fs:[0]
// 00586d7d  50                   push eax
// 00586d7e  64892500000000       mov dword ptr fs:[0], esp
// 00586d85  83ec20               sub esp, 0x20
// 00586d88  56                   push esi
// 00586d89  8bf1                 mov esi, ecx
// 00586d8b  89742404             mov dword ptr [esp + 4], esi
// 00586d8f  e8ccfeffff           call 0x586c60
// 00586d94  68d4158300           push 0x8315d4
// 00586d99  8d4c240c             lea ecx, [esp + 0xc]
// 00586d9d  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00586da5  c70694158300         mov dword ptr [esi], 0x831594
// 00586dab  c7461088158300       mov dword ptr [esi + 0x10], 0x831588
// 00586db2  c7461480158300       mov dword ptr [esi + 0x14], 0x831580
// 00586db9  c7462078158300       mov dword ptr [esi + 0x20], 0x831578
// 00586dc0  c7462468158300       mov dword ptr [esi + 0x24], 0x831568
// 00586dc7  c7464458158300       mov dword ptr [esi + 0x44], 0x831558
// 00586dce  c7466448158300       mov dword ptr [esi + 0x64], 0x831548
// 00586dd5  c7868400000038158300 mov dword ptr [esi + 0x84], 0x831538
// 00586ddf  c786a400000028158300 mov dword ptr [esi + 0xa4], 0x831528
// 00586de9  c786c400000018158300 mov dword ptr [esi + 0xc4], 0x831518
// 00586df3  ff1558248000         call dword ptr [0x802458]
// 00586df9  8d442408             lea eax, [esp + 8]
// 00586dfd  50                   push eax
// 00586dfe  8bce                 mov ecx, esi
// 00586e00  c644243001           mov byte ptr [esp + 0x30], 1
// 00586e05  e88641fdff           call 0x55af90
// 00586e0a  8d4c2408             lea ecx, [esp + 8]
// 00586e0e  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00586e13  ff1568248000         call dword ptr [0x802468]
// 00586e19  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00586e1d  8bc6                 mov eax, esi
// 00586e1f  5e                   pop esi
// 00586e20  64890d00000000       mov dword ptr fs:[0], ecx
// 00586e27  83c42c               add esp, 0x2c
// 00586e2a  c3                   ret 

struct String {
    char storage[28];
    String(const char *);
    ~String();
};

extern void (__thiscall *constructString)(String *, const char *);
extern void (__thiscall *destroyString)(String *);

inline String::String(const char *text)
{
    constructString(this, text);
}

inline String::~String()
{
    destroyString(this);
}

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

struct Script {
    unsigned long data[0x110 / 4];
    String value;

    Script();
    ~Script();
    void setValue(const String &);
};

struct LocalScript : Script {
    LocalScript();
};

LocalScript::LocalScript()
{
    data[0] = reinterpret_cast<unsigned long>(table0);
    data[0x10 / 4] = reinterpret_cast<unsigned long>(table10);
    data[0x14 / 4] = reinterpret_cast<unsigned long>(table14);
    data[0x20 / 4] = reinterpret_cast<unsigned long>(table20);
    data[0x24 / 4] = reinterpret_cast<unsigned long>(table24);
    data[0x44 / 4] = reinterpret_cast<unsigned long>(table44);
    data[0x64 / 4] = reinterpret_cast<unsigned long>(table64);
    data[0x84 / 4] = reinterpret_cast<unsigned long>(table84);
    data[0xa4 / 4] = reinterpret_cast<unsigned long>(tableA4);
    data[0xc4 / 4] = reinterpret_cast<unsigned long>(tableC4);

    String name("LocalScript");
    setValue(name);
}
