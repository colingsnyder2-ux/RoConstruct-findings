// roc 2008-06 00667d80  unit: RBX::HUMAN::Jumping  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00667d80
//
// 00667d80  64a100000000         mov eax, dword ptr fs:[0]
// 00667d86  6aff                 push -1
// 00667d88  68fec27d00           push 0x7dc2fe
// 00667d8d  50                   push eax
// 00667d8e  b801000000           mov eax, 1
// 00667d93  64892500000000       mov dword ptr fs:[0], esp
// 00667d9a  8405f8d99700         test byte ptr [0x97d9f8], al
// 00667da0  7530                 jne 0x667dd2
// 00667da2  0905f8d99700         or dword ptr [0x97d9f8], eax
// 00667da8  6aff                 push -1
// 00667daa  6818cf8400           push 0x84cf18
// 00667daf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00667db7  e8d4c1eeff           call 0x553f90
// 00667dbc  83c408               add esp, 8
// 00667dbf  a3f4d99700           mov dword ptr [0x97d9f4], eax
// 00667dc4  8b0c24               mov ecx, dword ptr [esp]
// 00667dc7  64890d00000000       mov dword ptr fs:[0], ecx
// 00667dce  83c40c               add esp, 0xc
// 00667dd1  c3                   ret 
// 00667dd2  8b0c24               mov ecx, dword ptr [esp]
// 00667dd5  a1f4d99700           mov eax, dword ptr [0x97d9f4]
// 00667dda  64890d00000000       mov dword ptr fs:[0], ecx
// 00667de1  83c40c               add esp, 0xc
// 00667de4  c3                   ret 
// library openrbx-client/App\humanoid\GettingUp.cpp (function ??$doDeclare@$1?sGettingUp@RBX@@3QBDB@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/GettingUp.cpp
