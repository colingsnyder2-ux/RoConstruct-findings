// from server: 100% by king_originala
// roc 2008-06 005d1a80  unit: RBX::VBackpack::?$FactoryProduct  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d1a80
//
// 005d1a80  6aff                 push -1
// 005d1a82  6841587d00           push 0x7d5841
// 005d1a87  64a100000000         mov eax, dword ptr fs:[0]
// 005d1a8d  50                   push eax
// 005d1a8e  64892500000000       mov dword ptr fs:[0], esp
// 005d1a95  83ec20               sub esp, 0x20
// 005d1a98  56                   push esi
// 005d1a99  8bf1                 mov esi, ecx
// 005d1a9b  89742404             mov dword ptr [esp + 4], esi
// 005d1a9f  e8ecfeffff           call 0x5d1990
// 005d1aa4  6820ba8300           push 0x83ba20
// 005d1aa9  8d4c240c             lea ecx, [esp + 0xc]
// 005d1aad  c744243000000000     mov dword ptr [esp + 0x30], 0
// 005d1ab5  c706bcb98300         mov dword ptr [esi], 0x83b9bc
// 005d1abb  c74610acb98300       mov dword ptr [esi + 0x10], 0x83b9ac
// 005d1ac2  c74614a4b98300       mov dword ptr [esi + 0x14], 0x83b9a4
// 005d1ac9  c746209cb98300       mov dword ptr [esi + 0x20], 0x83b99c
// 005d1ad0  c746248cb98300       mov dword ptr [esi + 0x24], 0x83b98c
// 005d1ad7  c746447cb98300       mov dword ptr [esi + 0x44], 0x83b97c
// 005d1ade  c746646cb98300       mov dword ptr [esi + 0x64], 0x83b96c
// 005d1ae5  c786840000005cb98300 mov dword ptr [esi + 0x84], 0x83b95c
// 005d1aef  c786a40000004cb98300 mov dword ptr [esi + 0xa4], 0x83b94c
// 005d1af9  c786c40000003cb98300 mov dword ptr [esi + 0xc4], 0x83b93c
// 005d1b03  c7863001000034b98300 mov dword ptr [esi + 0x130], 0x83b934
// 005d1b0d  c7866801000024b98300 mov dword ptr [esi + 0x168], 0x83b924
// 005d1b17  ff1558248000         call dword ptr [0x802458]
// 005d1b1d  8d442408             lea eax, [esp + 8]
// 005d1b21  50                   push eax
// 005d1b22  8bce                 mov ecx, esi
// 005d1b24  c644243001           mov byte ptr [esp + 0x30], 1
// 005d1b29  e86294f8ff           call 0x55af90
// 005d1b2e  8d4c2408             lea ecx, [esp + 8]
// 005d1b32  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005d1b37  ff1568248000         call dword ptr [0x802468]
// 005d1b3d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005d1b41  8bc6                 mov eax, esi
// 005d1b43  5e                   pop esi
// 005d1b44  64890d00000000       mov dword ptr fs:[0], ecx
// 005d1b4b  83c42c               add esp, 0x2c
// 005d1b4e  c3                   ret 

struct String;

typedef void (__thiscall *StringConstructor)(String *, const char *);
typedef void (__thiscall *StringDestructor)(String *);

extern StringConstructor const stringConstructor;
extern StringDestructor const stringDestructor;

struct String
{
    unsigned char data[28];
    String(const char *);
    ~String();
};

__forceinline String::String(const char *text)
{
    stringConstructor(this, text);
}

__forceinline String::~String()
{
    stringDestructor(this);
}

struct Base
{
    unsigned int data[91];

    Base();
    ~Base();
    void setName(const String &);
};

struct S : Base
{
    S();
};

S::S() : Base()
{
    data[0] = 0x83b9bc;
    data[4] = 0x83b9ac;
    data[5] = 0x83b9a4;
    data[8] = 0x83b99c;
    data[9] = 0x83b98c;
    data[17] = 0x83b97c;
    data[25] = 0x83b96c;
    data[33] = 0x83b95c;
    data[41] = 0x83b94c;
    data[49] = 0x83b93c;
    data[76] = 0x83b934;
    data[90] = 0x83b924;

    String name(reinterpret_cast<const char *>(0x83ba20));
    setName(name);
}
