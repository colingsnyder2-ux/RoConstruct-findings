// from server: 100% by tester
// roc 2008-06 0064f4b0  unit: RBX::ImageButton  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064f4b0
//
// 0064f4b0  6aff                 push -1
// 0064f4b2  68b8b47d00           push 0x7db4b8
// 0064f4b7  64a100000000         mov eax, dword ptr fs:[0]
// 0064f4bd  50                   push eax
// 0064f4be  64892500000000       mov dword ptr fs:[0], esp
// 0064f4c5  51                   push ecx
// 0064f4c6  56                   push esi
// 0064f4c7  8bf1                 mov esi, ecx
// 0064f4c9  89742404             mov dword ptr [esp + 4], esi
// 0064f4cd  8d8e4c010000         lea ecx, [esi + 0x14c]
// 0064f4d3  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0064f4db  e880fef7ff           call 0x5cf360
// 0064f4e0  8bce                 mov ecx, esi
// 0064f4e2  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0064f4ea  e8b12fffff           call 0x6424a0
// 0064f4ef  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0064f4f3  5e                   pop esi
// 0064f4f4  64890d00000000       mov dword ptr fs:[0], ecx
// 0064f4fb  83c410               add esp, 0x10
// 0064f4fe  c3                   ret 

struct Base {
    char data[0x14c];
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
