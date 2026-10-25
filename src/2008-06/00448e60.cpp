// from server: 100% by tester
// roc 2008-06 00448e60  unit: CRenderSettings  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00448e60
//
// 00448e60  6aff                 push -1
// 00448e62  68e80f7c00           push 0x7c0fe8
// 00448e67  64a100000000         mov eax, dword ptr fs:[0]
// 00448e6d  50                   push eax
// 00448e6e  64892500000000       mov dword ptr fs:[0], esp
// 00448e75  51                   push ecx
// 00448e76  56                   push esi
// 00448e77  8bf1                 mov esi, ecx
// 00448e79  89742404             mov dword ptr [esp + 4], esi
// 00448e7d  8d8e58010000         lea ecx, [esi + 0x158]
// 00448e83  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00448e8b  ff1568248000         call dword ptr [0x802468]
// 00448e91  8bce                 mov ecx, esi
// 00448e93  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00448e9b  e870cdffff           call 0x445c10
// 00448ea0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00448ea4  5e                   pop esi
// 00448ea5  64890d00000000       mov dword ptr fs:[0], ecx
// 00448eac  83c410               add esp, 0x10
// 00448eaf  c3                   ret 

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
    char storage[0x158];
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
