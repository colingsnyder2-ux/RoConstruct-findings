// from server: 100% by king_originala
// roc 2008-06 004666b0  unit: CSelectionCaption  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004666b0
//
// 004666b0  64a100000000         mov eax, dword ptr fs:[0]
// 004666b6  6aff                 push -1
// 004666b8  6808357c00           push 0x7c3508
// 004666bd  50                   push eax
// 004666be  64892500000000       mov dword ptr fs:[0], esp
// 004666c5  81c16cfeffff         add ecx, 0xfffffe6c
// 004666cb  c744240800000000     mov dword ptr [esp + 8], 0
// 004666d3  e868f7ffff           call 0x465e40
// 004666d8  8d4c2414             lea ecx, [esp + 0x14]
// 004666dc  c7442408ffffffff     mov dword ptr [esp + 8], 0xffffffff
// 004666e4  e877c5fbff           call 0x422c60
// 004666e9  8b0c24               mov ecx, dword ptr [esp]
// 004666ec  64890d00000000       mov dword ptr fs:[0], ecx
// 004666f3  83c40c               add esp, 0xc
// 004666f6  c21400               ret 0x14

struct Argument
{
    unsigned char storage[16];
    ~Argument();
};

struct Owner
{
    void g();
};

struct CSelectionCaption
{
    void f(int, Argument);
};

void CSelectionCaption::f(int, Argument)
{
    reinterpret_cast<Owner*>(
        reinterpret_cast<char*>(this) - 0x194)->g();
}
