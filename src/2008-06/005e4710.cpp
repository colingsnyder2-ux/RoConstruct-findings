// from server: 100% by king_originala
// roc 2008-06 005e4710  unit: RBX::VSnap::?$FactoryProduct  size: 204 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e4710
//
// 005e4710  6aff                 push -1
// 005e4712  6831677d00           push 0x7d6731
// 005e4717  64a100000000         mov eax, dword ptr fs:[0]
// 005e471d  50                   push eax
// 005e471e  64892500000000       mov dword ptr fs:[0], esp
// 005e4725  83ec20               sub esp, 0x20
// 005e4728  8b442430             mov eax, dword ptr [esp + 0x30]
// 005e472c  56                   push esi
// 005e472d  8bf1                 mov esi, ecx
// 005e472f  50                   push eax
// 005e4730  89742408             mov dword ptr [esp + 8], esi
// 005e4734  e8d7f7ffff           call 0x5e3f10
// 005e4739  688cf28300           push 0x83f28c
// 005e473e  8d4c240c             lea ecx, [esp + 0xc]
// 005e4742  c744243000000000     mov dword ptr [esp + 0x30], 0
// 005e474a  c7064cf28300         mov dword ptr [esi], 0x83f24c
// 005e4750  c7461040f28300       mov dword ptr [esi + 0x10], 0x83f240
// 005e4757  c7461438f28300       mov dword ptr [esi + 0x14], 0x83f238
// 005e475e  c7462030f28300       mov dword ptr [esi + 0x20], 0x83f230
// 005e4765  c7462420f28300       mov dword ptr [esi + 0x24], 0x83f220
// 005e476c  c7464410f28300       mov dword ptr [esi + 0x44], 0x83f210
// 005e4773  c7466400f28300       mov dword ptr [esi + 0x64], 0x83f200
// 005e477a  c78684000000f0f18300 mov dword ptr [esi + 0x84], 0x83f1f0
// 005e4784  c786a4000000e0f18300 mov dword ptr [esi + 0xa4], 0x83f1e0
// 005e478e  c786c4000000d0f18300 mov dword ptr [esi + 0xc4], 0x83f1d0
// 005e4798  c78630010000b8f18300 mov dword ptr [esi + 0x130], 0x83f1b8
// 005e47a2  ff1558248000         call dword ptr [0x802458]
// 005e47a8  8d4c2408             lea ecx, [esp + 8]
// 005e47ac  51                   push ecx
// 005e47ad  8bce                 mov ecx, esi
// 005e47af  c644243001           mov byte ptr [esp + 0x30], 1
// 005e47b4  e8d767f7ff           call 0x55af90
// 005e47b9  8d4c2408             lea ecx, [esp + 8]
// 005e47bd  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005e47c2  ff1568248000         call dword ptr [0x802468]
// 005e47c8  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005e47cc  8bc6                 mov eax, esi
// 005e47ce  5e                   pop esi
// 005e47cf  64890d00000000       mov dword ptr fs:[0], ecx
// 005e47d6  83c42c               add esp, 0x2c
// 005e47d9  c20400               ret 4

struct String;

extern void (__thiscall *string_construct)(String *, const char *);
extern void (__thiscall *string_destroy)(String *);

struct String {
    char storage[28];
    String(const char *);
    ~String();
};

__forceinline String::String(const char *text)
{
    string_construct(this, text);
}

__forceinline String::~String()
{
    string_destroy(this);
}

struct Base {
    unsigned long slots[77];

    Base(int);
    ~Base();
    void setName(const String &);
};

struct S : Base {
    S(int);
};

S::S(int arg) : Base(arg)
{
    slots[0] = 0x83f24c;
    slots[4] = 0x83f240;
    slots[5] = 0x83f238;
    slots[8] = 0x83f230;
    slots[9] = 0x83f220;
    slots[17] = 0x83f210;
    slots[25] = 0x83f200;
    slots[33] = 0x83f1f0;
    slots[41] = 0x83f1e0;
    slots[49] = 0x83f1d0;
    slots[76] = 0x83f1b8;

    String name(reinterpret_cast<const char *>(0x83f28c));
    setName(name);
}
