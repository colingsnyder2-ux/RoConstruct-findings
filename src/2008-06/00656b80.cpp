// from server: 100% by tester
// roc 2008-06 00656b80  unit: RBX::EquationDisplay  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00656b80
//
// 00656b80  6aff                 push -1
// 00656b82  6898bb7d00           push 0x7dbb98
// 00656b87  64a100000000         mov eax, dword ptr fs:[0]
// 00656b8d  50                   push eax
// 00656b8e  64892500000000       mov dword ptr fs:[0], esp
// 00656b95  51                   push ecx
// 00656b96  56                   push esi
// 00656b97  8bf1                 mov esi, ecx
// 00656b99  89742404             mov dword ptr [esp + 4], esi
// 00656b9d  8d8e88010000         lea ecx, [esi + 0x188]
// 00656ba3  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00656bab  ff1568248000         call dword ptr [0x802468]
// 00656bb1  8bce                 mov ecx, esi
// 00656bb3  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00656bbb  e870daf1ff           call 0x574630
// 00656bc0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00656bc4  5e                   pop esi
// 00656bc5  64890d00000000       mov dword ptr fs:[0], ecx
// 00656bcc  83c410               add esp, 0x10
// 00656bcf  c3                   ret 

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
    char storage[0x188];
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
