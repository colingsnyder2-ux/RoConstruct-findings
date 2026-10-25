// from server: 100% by king_originala
// roc 2008-06 006299a0  unit: RBX::ClickDetector  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006299a0
//
// 006299a0  6aff                 push -1
// 006299a2  6818987d00           push 0x7d9818
// 006299a7  64a100000000         mov eax, dword ptr fs:[0]
// 006299ad  50                   push eax
// 006299ae  64892500000000       mov dword ptr fs:[0], esp
// 006299b5  51                   push ecx
// 006299b6  56                   push esi
// 006299b7  8bf1                 mov esi, ecx
// 006299b9  8d8e30010000         lea ecx, [esi + 0x130]
// 006299bf  89742404             mov dword ptr [esp + 4], esi
// 006299c3  c706fc5a8400         mov dword ptr [esi], 0x845afc
// 006299c9  c74610f05a8400       mov dword ptr [esi + 0x10], 0x845af0
// 006299d0  c74614e85a8400       mov dword ptr [esi + 0x14], 0x845ae8
// 006299d7  c74620e05a8400       mov dword ptr [esi + 0x20], 0x845ae0
// 006299de  c74624d05a8400       mov dword ptr [esi + 0x24], 0x845ad0
// 006299e5  c74644c05a8400       mov dword ptr [esi + 0x44], 0x845ac0
// 006299ec  c74664b05a8400       mov dword ptr [esi + 0x64], 0x845ab0
// 006299f3  c78684000000a05a8400 mov dword ptr [esi + 0x84], 0x845aa0
// 006299fd  c786a4000000905a8400 mov dword ptr [esi + 0xa4], 0x845a90
// 00629a07  c786c4000000805a8400 mov dword ptr [esi + 0xc4], 0x845a80
// 00629a11  c701685a8400         mov dword ptr [ecx], 0x845a68
// 00629a17  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00629a1f  e8ec39e5ff           call 0x47d410
// 00629a24  8bce                 mov ecx, esi
// 00629a26  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00629a2e  e80df9ffff           call 0x629340
// 00629a33  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00629a37  5e                   pop esi
// 00629a38  64890d00000000       mov dword ptr fs:[0], ecx
// 00629a3f  83c410               add esp, 0x10
// 00629a42  c3                   ret 

template<int Tag, int Size>
struct Part {
    virtual void f();
    char padding[Size - 4];
};

template<int Tag>
struct Part<Tag, 4> {
    virtual void f();
};

struct Base :
    Part<0, 16>,
    Part<1, 4>,
    Part<2, 12>,
    Part<3, 4>,
    Part<4, 32>,
    Part<5, 32>,
    Part<6, 32>,
    Part<7, 32>,
    Part<8, 32> {
    ~Base();
};

struct Member {
    virtual void f();
    ~Member();
};

struct S : Base, Part<9, 108>, Member {
    virtual void f();
    ~S();
};

S::~S()
{
}
