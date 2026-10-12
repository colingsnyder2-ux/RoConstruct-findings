// from server: 98% by king_originala
// roc 2008-06 0044a950  unit: CRbxPlayDocTemplate  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044a950
//
// 0044a950  6aff                 push -1
// 0044a952  6809b77d00           push 0x7db709
// 0044a957  64a100000000         mov eax, dword ptr fs:[0]
// 0044a95d  50                   push eax
// 0044a95e  64892500000000       mov dword ptr fs:[0], esp
// 0044a965  51                   push ecx
// 0044a966  56                   push esi
// 0044a967  8bf1                 mov esi, ecx
// 0044a969  83ec1c               sub esp, 0x1c
// 0044a96c  8d442434             lea eax, [esp + 0x34]
// 0044a970  8bcc                 mov ecx, esp
// 0044a972  89642420             mov dword ptr [esp + 0x20], esp
// 0044a976  50                   push eax
// 0044a977  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0044a97f  ff155c248000         call dword ptr [0x80245c]
// 0044a985  8bce                 mov ecx, esi
// 0044a987  e864f8ffff           call 0x44a1f0
// 0044a98c  33c9                 xor ecx, ecx
// 0044a98e  85c0                 test eax, eax
// 0044a990  0f94c1               sete cl
// 0044a993  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0044a99b  8bf1                 mov esi, ecx
// 0044a99d  8d4c2418             lea ecx, [esp + 0x18]
// 0044a9a1  ff1568248000         call dword ptr [0x802468]
// 0044a9a7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0044a9ab  8bc6                 mov eax, esi
// 0044a9ad  64890d00000000       mov dword ptr fs:[0], ecx
// 0044a9b4  5e                   pop esi
// 0044a9b5  83c410               add esp, 0x10
// 0044a9b8  c21c00               ret 0x1c

struct String {
    char data[28];
    String(const String&);
    ~String();
};

extern void (__thiscall *string_copy)(String*, const String&);
extern void (__thiscall *string_destroy)(String*);

__forceinline String::String(const String& other)
{
    string_copy(this, other);
}

__forceinline String::~String()
{
    string_destroy(this);
}

struct CRbxPlayDocTemplate {
    int method(String value);
    int forward(String value);
};

int CRbxPlayDocTemplate::method(String value)
{
    return !forward(value);
}
