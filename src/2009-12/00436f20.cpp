// roc 2009-12 00436f20  unit: std::D::DU?$char_traits::V?$basic_string::?$XItem  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00436f20
//
// 00436f20  6aff                 push -1
// 00436f22  6838a19200           push 0x92a138
// 00436f27  64a100000000         mov eax, dword ptr fs:[0]
// 00436f2d  50                   push eax
// 00436f2e  64892500000000       mov dword ptr fs:[0], esp
// 00436f35  51                   push ecx
// 00436f36  56                   push esi
// 00436f37  8bf1                 mov esi, ecx
// 00436f39  83ec1c               sub esp, 0x1c
// 00436f3c  8d442440             lea eax, [esp + 0x40]
// 00436f40  89642420             mov dword ptr [esp + 0x20], esp
// 00436f44  8bcc                 mov ecx, esp
// 00436f46  50                   push eax
// 00436f47  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00436f4f  ff15f0b69800         call dword ptr [0x98b6f0]
// 00436f55  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00436f59  8b542438             mov edx, dword ptr [esp + 0x38]
// 00436f5d  8b442434             mov eax, dword ptr [esp + 0x34]
// 00436f61  51                   push ecx
// 00436f62  52                   push edx
// 00436f63  50                   push eax
// 00436f64  8bce                 mov ecx, esi
// 00436f66  e845ffffff           call 0x436eb0
// 00436f6b  8d4c2424             lea ecx, [esp + 0x24]
// 00436f6f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00436f77  ff15e4b69800         call dword ptr [0x98b6e4]
// 00436f7d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00436f81  8bc6                 mov eax, esi
// 00436f83  64890d00000000       mov dword ptr fs:[0], ecx
// 00436f8a  5e                   pop esi
// 00436f8b  83c410               add esp, 0x10
// 00436f8e  c22800               ret 0x28
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