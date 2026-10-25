// from server: 100% by king_originala
// roc 2008-06 005e44f0  unit: RBX::VMotor::?$FactoryProduct  size: 204 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e44f0
//
// 005e44f0  6aff                 push -1
// 005e44f2  68e1667d00           push 0x7d66e1
// 005e44f7  64a100000000         mov eax, dword ptr fs:[0]
// 005e44fd  50                   push eax
// 005e44fe  64892500000000       mov dword ptr fs:[0], esp
// 005e4505  83ec20               sub esp, 0x20
// 005e4508  8b442430             mov eax, dword ptr [esp + 0x30]
// 005e450c  56                   push esi
// 005e450d  8bf1                 mov esi, ecx
// 005e450f  50                   push eax
// 005e4510  89742408             mov dword ptr [esp + 8], esi
// 005e4514  e847f9ffff           call 0x5e3e60
// 005e4519  68acf18300           push 0x83f1ac
// 005e451e  8d4c240c             lea ecx, [esp + 0xc]
// 005e4522  c744243000000000     mov dword ptr [esp + 0x30], 0
// 005e452a  c7066cf18300         mov dword ptr [esi], 0x83f16c
// 005e4530  c7461060f18300       mov dword ptr [esi + 0x10], 0x83f160
// 005e4537  c7461458f18300       mov dword ptr [esi + 0x14], 0x83f158
// 005e453e  c7462050f18300       mov dword ptr [esi + 0x20], 0x83f150
// 005e4545  c7462440f18300       mov dword ptr [esi + 0x24], 0x83f140
// 005e454c  c7464430f18300       mov dword ptr [esi + 0x44], 0x83f130
// 005e4553  c7466420f18300       mov dword ptr [esi + 0x64], 0x83f120
// 005e455a  c7868400000010f18300 mov dword ptr [esi + 0x84], 0x83f110
// 005e4564  c786a400000000f18300 mov dword ptr [esi + 0xa4], 0x83f100
// 005e456e  c786c4000000f0f08300 mov dword ptr [esi + 0xc4], 0x83f0f0
// 005e4578  c78630010000d8f08300 mov dword ptr [esi + 0x130], 0x83f0d8
// 005e4582  ff1558248000         call dword ptr [0x802458]
// 005e4588  8d4c2408             lea ecx, [esp + 8]
// 005e458c  51                   push ecx
// 005e458d  8bce                 mov ecx, esi
// 005e458f  c644243001           mov byte ptr [esp + 0x30], 1
// 005e4594  e8f769f7ff           call 0x55af90
// 005e4599  8d4c2408             lea ecx, [esp + 8]
// 005e459d  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005e45a2  ff1568248000         call dword ptr [0x802468]
// 005e45a8  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005e45ac  8bc6                 mov eax, esi
// 005e45ae  5e                   pop esi
// 005e45af  64890d00000000       mov dword ptr fs:[0], ecx
// 005e45b6  83c42c               add esp, 0x2c
// 005e45b9  c20400               ret 4

struct String;

extern void (__thiscall *string_construct)(String *, const char *);
extern void (__thiscall *string_destroy)(String *);

struct String
{
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

struct Base
{
    unsigned long words[77];

    Base(int);
    ~Base();
    void setName(const String &);
};

struct S : Base
{
    S(int);
};

S::S(int argument) : Base(argument)
{
    words[0]  = 0x0083f16c;
    words[4]  = 0x0083f160;
    words[5]  = 0x0083f158;
    words[8]  = 0x0083f150;
    words[9]  = 0x0083f140;
    words[17] = 0x0083f130;
    words[25] = 0x0083f120;
    words[33] = 0x0083f110;
    words[41] = 0x0083f100;
    words[49] = 0x0083f0f0;
    words[76] = 0x0083f0d8;

    setName(String("Snap"));
}
