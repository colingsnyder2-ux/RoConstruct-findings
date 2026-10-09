// from server: 28% by colin
// roc 2007-08 0061c0f0  unit: RBX::ImageButton  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061c0f0
//
// 0061c0f0  6aff                 push -1
// 0061c0f2  6878c67500           push 0x75c678
// 0061c0f7  64a100000000         mov eax, dword ptr fs:[0]
// 0061c0fd  50                   push eax
// 0061c0fe  64892500000000       mov dword ptr fs:[0], esp
// 0061c105  51                   push ecx
// 0061c106  56                   push esi
// 0061c107  8bf1                 mov esi, ecx
// 0061c109  89742404             mov dword ptr [esp + 4], esi
// 0061c10d  8d8e04010000         lea ecx, [esi + 0x104]
// 0061c113  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0061c11b  e8800af8ff           call 0x59cba0
// 0061c120  8bce                 mov ecx, esi
// 0061c122  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0061c12a  e8c147feff           call 0x6008f0
// 0061c12f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0061c133  5e                   pop esi
// 0061c134  64890d00000000       mov dword ptr fs:[0], ecx
// 0061c13b  83c410               add esp, 0x10
// 0061c13e  c3                   ret 

struct Sub1 {
    void sub1();
};

struct Sub2 {
    void sub2();
};

struct RBX_ImageButton {
    char pad[0x104];
    Sub1 sub1;
    void sub2();
    ~RBX_ImageButton();
};

void RBX_ImageButton::sub2() {
    sub1.sub1();
    sub2();
}

RBX_ImageButton::~RBX_ImageButton() {
    sub1.sub1();
    sub2();
}
