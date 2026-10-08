// roc 2007-08 00602c30  unit: RBX::FallingDown  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00602c30
//
// 00602c30  64a100000000         mov eax, dword ptr fs:[0]
// 00602c36  6aff                 push -1
// 00602c38  68aec07500           push 0x75c0ae
// 00602c3d  50                   push eax
// 00602c3e  b801000000           mov eax, 1
// 00602c43  64892500000000       mov dword ptr fs:[0], esp
// 00602c4a  8405e47f8c00         test byte ptr [0x8c7fe4], al
// 00602c50  7530                 jne 0x602c82
// 00602c52  0905e47f8c00         or dword ptr [0x8c7fe4], eax
// 00602c58  6aff                 push -1
// 00602c5a  68a82b7c00           push 0x7c2ba8
// 00602c5f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00602c67  e8d49cf2ff           call 0x52c940
// 00602c6c  83c408               add esp, 8
// 00602c6f  a3e07f8c00           mov dword ptr [0x8c7fe0], eax
// 00602c74  8b0c24               mov ecx, dword ptr [esp]
// 00602c77  64890d00000000       mov dword ptr fs:[0], ecx
// 00602c7e  83c40c               add esp, 0xc
// 00602c81  c3                   ret 
// 00602c82  8b0c24               mov ecx, dword ptr [esp]
// 00602c85  a1e07f8c00           mov eax, dword ptr [0x8c7fe0]
// 00602c8a  64890d00000000       mov dword ptr fs:[0], ecx
// 00602c91  83c40c               add esp, 0xc
// 00602c94  c3                   ret 
// library openrbx-client/App\humanoid\FallingDown.cpp (function ??$doDeclare@$1?sFallingDown@RBX@@3QBDB@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/FallingDown.cpp
