// roc 2007-08 00626fc0  unit: RBX::GettingUp  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00626fc0
//
// 00626fc0  64a100000000         mov eax, dword ptr fs:[0]
// 00626fc6  6aff                 push -1
// 00626fc8  68fed27500           push 0x75d2fe
// 00626fcd  50                   push eax
// 00626fce  b801000000           mov eax, 1
// 00626fd3  64892500000000       mov dword ptr fs:[0], esp
// 00626fda  8405f0828c00         test byte ptr [0x8c82f0], al
// 00626fe0  7530                 jne 0x627012
// 00626fe2  0905f0828c00         or dword ptr [0x8c82f0], eax
// 00626fe8  6aff                 push -1
// 00626fea  68f84a7c00           push 0x7c4af8
// 00626fef  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00626ff7  e84459f0ff           call 0x52c940
// 00626ffc  83c408               add esp, 8
// 00626fff  a3ec828c00           mov dword ptr [0x8c82ec], eax
// 00627004  8b0c24               mov ecx, dword ptr [esp]
// 00627007  64890d00000000       mov dword ptr fs:[0], ecx
// 0062700e  83c40c               add esp, 0xc
// 00627011  c3                   ret 
// 00627012  8b0c24               mov ecx, dword ptr [esp]
// 00627015  a1ec828c00           mov eax, dword ptr [0x8c82ec]
// 0062701a  64890d00000000       mov dword ptr fs:[0], ecx
// 00627021  83c40c               add esp, 0xc
// 00627024  c3                   ret 
// library openrbx-client/App\humanoid\GettingUp.cpp (function ??$doDeclare@$1?sGettingUp@RBX@@3QBDB@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/GettingUp.cpp
