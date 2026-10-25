// from server: 100% by king_originala
// roc 2008-06 0059fd70  unit: RBX::SpecialShape  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059fd70
//
// 0059fd70  6aff                 push -1
// 0059fd72  68c6287d00           push 0x7d28c6
// 0059fd77  64a100000000         mov eax, dword ptr fs:[0]
// 0059fd7d  50                   push eax
// 0059fd7e  64892500000000       mov dword ptr fs:[0], esp
// 0059fd85  51                   push ecx
// 0059fd86  56                   push esi
// 0059fd87  8bf1                 mov esi, ecx
// 0059fd89  89742404             mov dword ptr [esp + 4], esi
// 0059fd8d  8d8e60010000         lea ecx, [esi + 0x160]
// 0059fd93  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0059fd9b  ff1568248000         call dword ptr [0x802468]
// 0059fda1  8d8e40010000         lea ecx, [esi + 0x140]
// 0059fda7  c644241000           mov byte ptr [esp + 0x10], 0
// 0059fdac  ff1568248000         call dword ptr [0x802468]
// 0059fdb2  8bce                 mov ecx, esi
// 0059fdb4  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0059fdbc  e81fefffff           call 0x59ece0
// 0059fdc1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059fdc5  5e                   pop esi
// 0059fdc6  64890d00000000       mov dword ptr fs:[0], ecx
// 0059fdcd  83c410               add esp, 0x10
// 0059fdd0  c3                   ret 

extern void (__thiscall *destroyString)(void *);

struct String {
    char storage[0x20];
    ~String() { destroyString(this); }
};

struct Base {
    char storage[0x140];
    ~Base();
};

struct S : Base {
    String first;
    String second;
    ~S();
};

S::~S()
{
}
