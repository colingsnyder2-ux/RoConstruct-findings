// from server: 100% by tester
// roc 2008-06 006385f0  unit: std::D::DU?$char_traits::V?$basic_string::?$Value  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006385f0
//
// 006385f0  6aff                 push -1
// 006385f2  6888a37d00           push 0x7da388
// 006385f7  64a100000000         mov eax, dword ptr fs:[0]
// 006385fd  50                   push eax
// 006385fe  64892500000000       mov dword ptr fs:[0], esp
// 00638605  51                   push ecx
// 00638606  56                   push esi
// 00638607  8bf1                 mov esi, ecx
// 00638609  89742404             mov dword ptr [esp + 4], esi
// 0063860d  8d8e30010000         lea ecx, [esi + 0x130]
// 00638613  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0063861b  ff1568248000         call dword ptr [0x802468]
// 00638621  8bce                 mov ecx, esi
// 00638623  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0063862b  e870d1ffff           call 0x6357a0
// 00638630  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00638634  5e                   pop esi
// 00638635  64890d00000000       mov dword ptr fs:[0], ecx
// 0063863c  83c410               add esp, 0x10
// 0063863f  c3                   ret 

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
    char storage[0x130];
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
