// from server: 100% by king_originala
// roc 2008-06 0064f600  unit: RBX::ImageKeyButton  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064f600
//
// 0064f600  6aff                 push -1
// 0064f602  6888827d00           push 0x7d8288
// 0064f607  64a100000000         mov eax, dword ptr fs:[0]
// 0064f60d  50                   push eax
// 0064f60e  64892500000000       mov dword ptr fs:[0], esp
// 0064f615  51                   push ecx
// 0064f616  56                   push esi
// 0064f617  8bf1                 mov esi, ecx
// 0064f619  89742404             mov dword ptr [esp + 4], esi
// 0064f61d  8d8e50010000         lea ecx, [esi + 0x150]
// 0064f623  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0064f62b  e830fdf7ff           call 0x5cf360
// 0064f630  8bce                 mov ecx, esi
// 0064f632  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0064f63a  e8011fdcff           call 0x411540
// 0064f63f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0064f643  5e                   pop esi
// 0064f644  64890d00000000       mov dword ptr fs:[0], ecx
// 0064f64b  83c410               add esp, 0x10
// 0064f64e  c3                   ret 

struct Base {
    char data[0x150];
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
