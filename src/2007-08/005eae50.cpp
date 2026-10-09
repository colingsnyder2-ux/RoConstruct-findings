// from server: 22% by colin
// roc 2007-08 005eae50  unit: RBX::FlagStand  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005eae50
//
// 005eae50  6aff                 push -1
// 005eae52  6868b17500           push 0x75b168
// 005eae57  64a100000000         mov eax, dword ptr fs:[0]
// 005eae5d  50                   push eax
// 005eae5e  64892500000000       mov dword ptr fs:[0], esp
// 005eae65  51                   push ecx
// 005eae66  56                   push esi
// 005eae67  8bf1                 mov esi, ecx
// 005eae69  89742404             mov dword ptr [esp + 4], esi
// 005eae6d  8d8e80020000         lea ecx, [esi + 0x280]
// 005eae73  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005eae7b  e820d71300           call 0x7285a0
// 005eae80  8bce                 mov ecx, esi
// 005eae82  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005eae8a  e8a1e9ffff           call 0x5e9830
// 005eae8f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005eae93  5e                   pop esi
// 005eae94  64890d00000000       mov dword ptr fs:[0], ecx
// 005eae9b  83c410               add esp, 0x10
// 005eae9e  c3                   ret 

struct FlagStand {
    void sub_5eae50();
};

extern "C" void __stdcall sub_7285a0(int);
extern "C" void __stdcall sub_5e9830();

void FlagStand::sub_5eae50() {
    sub_7285a0(*(int*)((char*)this + 0x280));
    sub_5e9830();
}
