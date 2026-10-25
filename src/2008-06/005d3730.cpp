// from server: 100% by tester
// roc 2008-06 005d3730  unit: RBX::SpawnLocation  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d3730
//
// 005d3730  6aff                 push -1
// 005d3732  6898597d00           push 0x7d5998
// 005d3737  64a100000000         mov eax, dword ptr fs:[0]
// 005d373d  50                   push eax
// 005d373e  64892500000000       mov dword ptr fs:[0], esp
// 005d3745  51                   push ecx
// 005d3746  56                   push esi
// 005d3747  8bf1                 mov esi, ecx
// 005d3749  89742404             mov dword ptr [esp + 4], esi
// 005d374d  8d8eec030000         lea ecx, [esi + 0x3ec]
// 005d3753  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005d375b  e8501dfcff           call 0x5954b0
// 005d3760  8bce                 mov ecx, esi
// 005d3762  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005d376a  e841e4ffff           call 0x5d1bb0
// 005d376f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d3773  5e                   pop esi
// 005d3774  64890d00000000       mov dword ptr fs:[0], ecx
// 005d377b  83c410               add esp, 0x10
// 005d377e  c3                   ret 

struct Base {
    char data[0x3ec];
    ~Base();
};

struct Member {
    ~Member();
};

struct ImageKeyButton : Base {
    Member member;
    ~ImageKeyButton();
};

ImageKeyButton::~ImageKeyButton()
{
}
