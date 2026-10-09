// roc 2007-03 005e9f70  unit: seg_005e0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e9f70
//
// 005e9f70  64a100000000         mov eax, dword ptr fs:[0]
// 005e9f76  6aff                 push -1
// 005e9f78  688ec37500           push 0x75c38e
// 005e9f7d  50                   push eax
// 005e9f7e  b801000000           mov eax, 1
// 005e9f83  64892500000000       mov dword ptr fs:[0], esp
// 005e9f8a  84050c0f8c00         test byte ptr [0x8c0f0c], al
// 005e9f90  7530                 jne 0x5e9fc2
// 005e9f92  09050c0f8c00         or dword ptr [0x8c0f0c], eax
// 005e9f98  6aff                 push -1
// 005e9f9a  6818fc7b00           push 0x7bfc18
// 005e9f9f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005e9fa7  e83439f4ff           call 0x52d8e0
// 005e9fac  83c408               add esp, 8
// 005e9faf  a3080f8c00           mov dword ptr [0x8c0f08], eax
// 005e9fb4  8b0c24               mov ecx, dword ptr [esp]
// 005e9fb7  64890d00000000       mov dword ptr fs:[0], ecx
// 005e9fbe  83c40c               add esp, 0xc
// 005e9fc1  c3                   ret 
// 005e9fc2  8b0c24               mov ecx, dword ptr [esp]
// 005e9fc5  a1080f8c00           mov eax, dword ptr [0x8c0f08]
// 005e9fca  64890d00000000       mov dword ptr fs:[0], ecx
// 005e9fd1  83c40c               add esp, 0xc
// 005e9fd4  c3                   ret 
// library openrbx-client/App\humanoid\FallingDown.cpp (function ??$doDeclare@$1?sFallingDown@RBX@@3QBDB@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/FallingDown.cpp
