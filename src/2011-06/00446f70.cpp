// roc 2011-06 00446f70  unit: std::D::DU?$char_traits::V?$basic_string::?$XItem  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00446f70
//
// 00446f70  6aff                 push -1
// 00446f72  6808159d00           push 0x9d1508
// 00446f77  64a100000000         mov eax, dword ptr fs:[0]
// 00446f7d  50                   push eax
// 00446f7e  64892500000000       mov dword ptr fs:[0], esp
// 00446f85  51                   push ecx
// 00446f86  56                   push esi
// 00446f87  8bf1                 mov esi, ecx
// 00446f89  83ec1c               sub esp, 0x1c
// 00446f8c  8d442440             lea eax, [esp + 0x40]
// 00446f90  89642420             mov dword ptr [esp + 0x20], esp
// 00446f94  8bcc                 mov ecx, esp
// 00446f96  50                   push eax
// 00446f97  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00446f9f  ff15c804a400         call dword ptr [0xa404c8]
// 00446fa5  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00446fa9  8b542438             mov edx, dword ptr [esp + 0x38]
// 00446fad  8b442434             mov eax, dword ptr [esp + 0x34]
// 00446fb1  51                   push ecx
// 00446fb2  52                   push edx
// 00446fb3  50                   push eax
// 00446fb4  8bce                 mov ecx, esi
// 00446fb6  e845ffffff           call 0x446f00
// 00446fbb  8d4c2424             lea ecx, [esp + 0x24]
// 00446fbf  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00446fc7  ff15d004a400         call dword ptr [0xa404d0]
// 00446fcd  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00446fd1  8bc6                 mov eax, esi
// 00446fd3  64890d00000000       mov dword ptr fs:[0], ecx
// 00446fda  5e                   pop esi
// 00446fdb  83c410               add esp, 0x10
// 00446fde  c22800               ret 0x28
// copied from an identical function in another client (function ?f@S@ns_ROCX00001e@@QAEPAU12@HHHUString@2@@Z)

namespace ns_ROCX00001e {
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
}
