// from server: 100% by king_originala
// roc 2008-06 00418680  unit: VCContent::?$CComContainedObject  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00418680
//
// 00418680  6aff                 push -1
// 00418682  68f8dc7b00           push 0x7bdcf8
// 00418687  64a100000000         mov eax, dword ptr fs:[0]
// 0041868d  50                   push eax
// 0041868e  64892500000000       mov dword ptr fs:[0], esp
// 00418695  51                   push ecx
// 00418696  56                   push esi
// 00418697  8bf1                 mov esi, ecx
// 00418699  89742404             mov dword ptr [esp + 4], esi
// 0041869d  8d4e14               lea ecx, [esi + 0x14]
// 004186a0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004186a8  ff1568248000         call dword ptr [0x802468]
// 004186ae  8bce                 mov ecx, esi
// 004186b0  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004186b8  e8a3a50000           call 0x422c60
// 004186bd  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004186c1  5e                   pop esi
// 004186c2  64890d00000000       mov dword ptr fs:[0], ecx
// 004186c9  83c410               add esp, 0x10
// 004186cc  c3                   ret 

extern "C" void (__thiscall *string_destroy)(void *);

struct String {
    char storage[28];
    ~String();
};

__forceinline String::~String()
{
    string_destroy(this);
}

struct Base {
    char storage[20];
    ~Base();
};

struct S : Base {
    String text;
    ~S();
};

S::~S()
{
}
