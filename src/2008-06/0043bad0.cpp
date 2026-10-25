// from server: 100% by king_originala
// roc 2008-06 0043bad0  unit: std::D::DU?$char_traits::V?$basic_string::?$XItem  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043bad0
//
// 0043bad0  6aff                 push -1
// 0043bad2  6888067c00           push 0x7c0688
// 0043bad7  64a100000000         mov eax, dword ptr fs:[0]
// 0043badd  50                   push eax
// 0043bade  64892500000000       mov dword ptr fs:[0], esp
// 0043bae5  51                   push ecx
// 0043bae6  56                   push esi
// 0043bae7  8bf1                 mov esi, ecx
// 0043bae9  83ec1c               sub esp, 0x1c
// 0043baec  8d442440             lea eax, [esp + 0x40]
// 0043baf0  89642420             mov dword ptr [esp + 0x20], esp
// 0043baf4  8bcc                 mov ecx, esp
// 0043baf6  50                   push eax
// 0043baf7  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0043baff  ff155c248000         call dword ptr [0x80245c]
// 0043bb05  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0043bb09  8b542438             mov edx, dword ptr [esp + 0x38]
// 0043bb0d  8b442434             mov eax, dword ptr [esp + 0x34]
// 0043bb11  51                   push ecx
// 0043bb12  52                   push edx
// 0043bb13  50                   push eax
// 0043bb14  8bce                 mov ecx, esi
// 0043bb16  e845ffffff           call 0x43ba60
// 0043bb1b  8d4c2424             lea ecx, [esp + 0x24]
// 0043bb1f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0043bb27  ff1568248000         call dword ptr [0x802468]
// 0043bb2d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0043bb31  8bc6                 mov eax, esi
// 0043bb33  64890d00000000       mov dword ptr fs:[0], ecx
// 0043bb3a  5e                   pop esi
// 0043bb3b  83c410               add esp, 0x10
// 0043bb3e  c22800               ret 0x28

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
