// from server: 100% by tester
// roc 2008-06 0064f2f0  unit: RBX::UnifiedImageWidget  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064f2f0
//
// 0064f2f0  6aff                 push -1
// 0064f2f2  6888827d00           push 0x7d8288
// 0064f2f7  64a100000000         mov eax, dword ptr fs:[0]
// 0064f2fd  50                   push eax
// 0064f2fe  64892500000000       mov dword ptr fs:[0], esp
// 0064f305  51                   push ecx
// 0064f306  56                   push esi
// 0064f307  8bf1                 mov esi, ecx
// 0064f309  89742404             mov dword ptr [esp + 4], esi
// 0064f30d  8d8e48010000         lea ecx, [esi + 0x148]
// 0064f313  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0064f31b  e84000f8ff           call 0x5cf360
// 0064f320  8bce                 mov ecx, esi
// 0064f322  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0064f32a  e81122dcff           call 0x411540
// 0064f32f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0064f333  5e                   pop esi
// 0064f334  64890d00000000       mov dword ptr fs:[0], ecx
// 0064f33b  83c410               add esp, 0x10
// 0064f33e  c3                   ret 

struct Base {
    char data[0x148];
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
