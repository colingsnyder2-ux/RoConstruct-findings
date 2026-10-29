// roc 2009-06 00435ba0  unit: MVCXTPPropertyGridItem::?$XItem  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00435ba0
//
// 00435ba0  6aff                 push -1
// 00435ba2  6898fb8400           push 0x84fb98
// 00435ba7  64a100000000         mov eax, dword ptr fs:[0]
// 00435bad  50                   push eax
// 00435bae  64892500000000       mov dword ptr fs:[0], esp
// 00435bb5  51                   push ecx
// 00435bb6  56                   push esi
// 00435bb7  8bf1                 mov esi, ecx
// 00435bb9  83ec1c               sub esp, 0x1c
// 00435bbc  8d442440             lea eax, [esp + 0x40]
// 00435bc0  89642420             mov dword ptr [esp + 0x20], esp
// 00435bc4  8bcc                 mov ecx, esp
// 00435bc6  50                   push eax
// 00435bc7  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00435bcf  ff15b8e48900         call dword ptr [0x89e4b8]
// 00435bd5  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00435bd9  8b542438             mov edx, dword ptr [esp + 0x38]
// 00435bdd  8b442434             mov eax, dword ptr [esp + 0x34]
// 00435be1  51                   push ecx
// 00435be2  52                   push edx
// 00435be3  50                   push eax
// 00435be4  8bce                 mov ecx, esi
// 00435be6  e845ffffff           call 0x435b30
// 00435beb  8d4c2424             lea ecx, [esp + 0x24]
// 00435bef  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00435bf7  ff15c4e48900         call dword ptr [0x89e4c4]
// 00435bfd  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00435c01  8bc6                 mov eax, esi
// 00435c03  64890d00000000       mov dword ptr fs:[0], ecx
// 00435c0a  5e                   pop esi
// 00435c0b  83c410               add esp, 0x10
// 00435c0e  c22800               ret 0x28
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