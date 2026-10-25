// from server: 100% by tester
// roc 2008-06 00459af0  unit: VCRobloxView::?$VerbBinder  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00459af0
//
// 00459af0  6aff                 push -1
// 00459af2  6828317c00           push 0x7c3128
// 00459af7  64a100000000         mov eax, dword ptr fs:[0]
// 00459afd  50                   push eax
// 00459afe  64892500000000       mov dword ptr fs:[0], esp
// 00459b05  51                   push ecx
// 00459b06  56                   push esi
// 00459b07  8bf1                 mov esi, ecx
// 00459b09  89742404             mov dword ptr [esp + 4], esi
// 00459b0d  8d4e58               lea ecx, [esi + 0x58]
// 00459b10  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00459b18  e863a20f00           call 0x553d80
// 00459b1d  8bce                 mov ecx, esi
// 00459b1f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00459b27  e86c742400           call 0x6a0f98
// 00459b2c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00459b30  5e                   pop esi
// 00459b31  64890d00000000       mov dword ptr fs:[0], ecx
// 00459b38  83c410               add esp, 0x10
// 00459b3b  c3                   ret 

struct Base {
    char data[0x58];
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
