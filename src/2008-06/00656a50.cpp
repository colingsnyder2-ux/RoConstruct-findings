// from server: 100% by king_originala
// roc 2008-06 00656a50  unit: RBX::EquationDisplay  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00656a50
//
// 00656a50  6aff                 push -1
// 00656a52  6898bb7d00           push 0x7dbb98
// 00656a57  64a100000000         mov eax, dword ptr fs:[0]
// 00656a5d  50                   push eax
// 00656a5e  64892500000000       mov dword ptr fs:[0], esp
// 00656a65  51                   push ecx
// 00656a66  8b442414             mov eax, dword ptr [esp + 0x14]
// 00656a6a  56                   push esi
// 00656a6b  50                   push eax
// 00656a6c  8bf1                 mov esi, ecx
// 00656a6e  50                   push eax
// 00656a6f  8974240c             mov dword ptr [esp + 0xc], esi
// 00656a73  e828daf1ff           call 0x5744a0
// 00656a78  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00656a7c  50                   push eax
// 00656a7d  8d8e88010000         lea ecx, [esi + 0x188]
// 00656a83  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00656a8b  c706ccbe8400         mov dword ptr [esi], 0x84becc
// 00656a91  c74610bcbe8400       mov dword ptr [esi + 0x10], 0x84bebc
// 00656a98  c74614b4be8400       mov dword ptr [esi + 0x14], 0x84beb4
// 00656a9f  c74620acbe8400       mov dword ptr [esi + 0x20], 0x84beac
// 00656aa6  c746249cbe8400       mov dword ptr [esi + 0x24], 0x84be9c
// 00656aad  c746448cbe8400       mov dword ptr [esi + 0x44], 0x84be8c
// 00656ab4  c746647cbe8400       mov dword ptr [esi + 0x64], 0x84be7c
// 00656abb  c786840000006cbe8400 mov dword ptr [esi + 0x84], 0x84be6c
// 00656ac5  c786a40000005cbe8400 mov dword ptr [esi + 0xa4], 0x84be5c
// 00656acf  c786c40000004cbe8400 mov dword ptr [esi + 0xc4], 0x84be4c
// 00656ad9  c7863001000044be8400 mov dword ptr [esi + 0x130], 0x84be44
// 00656ae3  ff155c248000         call dword ptr [0x80245c]
// 00656ae9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00656aed  8bc6                 mov eax, esi
// 00656aef  5e                   pop esi
// 00656af0  64890d00000000       mov dword ptr fs:[0], ecx
// 00656af7  83c410               add esp, 0x10
// 00656afa  c20800               ret 8

struct String;
extern String * (__thiscall *string_copy)(String *, const String &);

struct String
{
    char storage[28];
    String(const String &);
};

inline String::String(const String &other)
{
    string_copy(this, other);
}

struct Base
{
    unsigned long table0;
    char pad04[12];
    unsigned long table10;
    unsigned long table14;
    char pad18[8];
    unsigned long table20;
    unsigned long table24;
    char pad28[28];
    unsigned long table44;
    char pad48[28];
    unsigned long table64;
    char pad68[28];
    unsigned long table84;
    char pad88[28];
    unsigned long tableA4;
    char padA8[28];
    unsigned long tableC4;
    char padC8[104];
    unsigned long table130;
    char pad134[84];

    Base(int, int);
    ~Base();
};

struct S : Base
{
    String value;
    S(int, const String &);
};

S::S(int argument, const String &text)
    : Base(argument, argument),
      value((table0   = 0x84becc,
             table10  = 0x84bebc,
             table14  = 0x84beb4,
             table20  = 0x84beac,
             table24  = 0x84be9c,
             table44  = 0x84be8c,
             table64  = 0x84be7c,
             table84  = 0x84be6c,
             tableA4  = 0x84be5c,
             tableC4  = 0x84be4c,
             table130 = 0x84be44,
             text))
{
}
