// from server: 100% by tester
// roc 2008-06 0062cc50  unit: RBX::FlagStand  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062cc50
//
// 0062cc50  6aff                 push -1
// 0062cc52  68289a7d00           push 0x7d9a28
// 0062cc57  64a100000000         mov eax, dword ptr fs:[0]
// 0062cc5d  50                   push eax
// 0062cc5e  64892500000000       mov dword ptr fs:[0], esp
// 0062cc65  51                   push ecx
// 0062cc66  56                   push esi
// 0062cc67  8bf1                 mov esi, ecx
// 0062cc69  89742404             mov dword ptr [esp + 4], esi
// 0062cc6d  8d8ee8030000         lea ecx, [esi + 0x3e8]
// 0062cc73  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0062cc7b  e83088f6ff           call 0x5954b0
// 0062cc80  8bce                 mov ecx, esi
// 0062cc82  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0062cc8a  e8e1ecffff           call 0x62b970
// 0062cc8f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0062cc93  5e                   pop esi
// 0062cc94  64890d00000000       mov dword ptr fs:[0], ecx
// 0062cc9b  83c410               add esp, 0x10
// 0062cc9e  c3                   ret 

struct Base {
    char data[0x3e8];
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
