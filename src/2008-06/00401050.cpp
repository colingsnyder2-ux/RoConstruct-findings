// from server: 100% by tester
// roc 2008-06 00401050  unit: CAboutRobloxDialog  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00401050
//
// 00401050  6aff                 push -1
// 00401052  6898ca7b00           push 0x7bca98
// 00401057  64a100000000         mov eax, dword ptr fs:[0]
// 0040105d  50                   push eax
// 0040105e  64892500000000       mov dword ptr fs:[0], esp
// 00401065  51                   push ecx
// 00401066  56                   push esi
// 00401067  8bf1                 mov esi, ecx
// 00401069  89742404             mov dword ptr [esp + 4], esi
// 0040106d  8d8e14010000         lea ecx, [esi + 0x114]
// 00401073  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0040107b  ff1568248000         call dword ptr [0x802468]
// 00401081  8bce                 mov ecx, esi
// 00401083  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0040108b  e8fcf52900           call 0x6a068c
// 00401090  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00401094  5e                   pop esi
// 00401095  64890d00000000       mov dword ptr fs:[0], ecx
// 0040109c  83c410               add esp, 0x10
// 0040109f  c3                   ret 

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
    char storage[0x114];
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
