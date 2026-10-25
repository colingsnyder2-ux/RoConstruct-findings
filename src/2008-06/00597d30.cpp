// from server: 100% by king_originala
// roc 2008-06 00597d30  unit: RBX::VTextureId::?$TypedPropertyDescriptor  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00597d30
//
// 00597d30  6aff                 push -1
// 00597d32  6828247d00           push 0x7d2428
// 00597d37  64a100000000         mov eax, dword ptr fs:[0]
// 00597d3d  50                   push eax
// 00597d3e  64892500000000       mov dword ptr fs:[0], esp
// 00597d45  51                   push ecx
// 00597d46  56                   push esi
// 00597d47  8bf1                 mov esi, ecx
// 00597d49  89742404             mov dword ptr [esp + 4], esi
// 00597d4d  8d8e44010000         lea ecx, [esi + 0x144]
// 00597d53  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00597d5b  ff1568248000         call dword ptr [0x802468]
// 00597d61  8bce                 mov ecx, esi
// 00597d63  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00597d6b  e810f9ffff           call 0x597680
// 00597d70  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00597d74  5e                   pop esi
// 00597d75  64890d00000000       mov dword ptr fs:[0], ecx
// 00597d7c  83c410               add esp, 0x10
// 00597d7f  c3                   ret 

struct String;
extern void (__thiscall *string_destroy)(String *);

struct String
{
    char storage[28];
    ~String();
};

inline String::~String()
{
    string_destroy(this);
}

struct Base
{
    char storage[0x144];
    ~Base();
};

struct S : Base
{
    String value;
    ~S();
};

S::~S()
{
}
