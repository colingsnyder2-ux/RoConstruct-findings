// roc 2010-06 00438600  unit: std::D::DU?$char_traits::V?$basic_string::?$XItem  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00438600
//
// 00438600  6aff                 push -1
// 00438602  6888289800           push 0x982888
// 00438607  64a100000000         mov eax, dword ptr fs:[0]
// 0043860d  50                   push eax
// 0043860e  64892500000000       mov dword ptr fs:[0], esp
// 00438615  51                   push ecx
// 00438616  56                   push esi
// 00438617  8bf1                 mov esi, ecx
// 00438619  83ec1c               sub esp, 0x1c
// 0043861c  8d442440             lea eax, [esp + 0x40]
// 00438620  89642420             mov dword ptr [esp + 0x20], esp
// 00438624  8bcc                 mov ecx, esp
// 00438626  50                   push eax
// 00438627  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0043862f  ff150ca49e00         call dword ptr [0x9ea40c]
// 00438635  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00438639  8b542438             mov edx, dword ptr [esp + 0x38]
// 0043863d  8b442434             mov eax, dword ptr [esp + 0x34]
// 00438641  51                   push ecx
// 00438642  52                   push edx
// 00438643  50                   push eax
// 00438644  8bce                 mov ecx, esi
// 00438646  e845ffffff           call 0x438590
// 0043864b  8d4c2424             lea ecx, [esp + 0x24]
// 0043864f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00438657  ff1500a49e00         call dword ptr [0x9ea400]
// 0043865d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00438661  8bc6                 mov eax, esi
// 00438663  64890d00000000       mov dword ptr fs:[0], ecx
// 0043866a  5e                   pop esi
// 0043866b  83c410               add esp, 0x10
// 0043866e  c22800               ret 0x28
// copied from an identical function in another client (function ?f@S@@QAEPAU1@HHHUString@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct String
{
    char data[28];
    String(const String&);
    ~String();
};

extern void (__thiscall *stringCopy)(String*, const String&);
extern void (__thiscall *stringDestroy)(String*);

__forceinline String::String(const String& value)
{
    stringCopy(this, value);
}

__forceinline String::~String()
{
    stringDestroy(this);
}

struct S
{
    S* f(int, int, int, String);
    void g(int, int, int, String);
};

S* S::f(int a, int b, int c, String value)
{
    g(a, b, c, value);
    return this;
}