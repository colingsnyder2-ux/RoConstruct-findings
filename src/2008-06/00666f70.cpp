// roc 2008-06 00666f70  unit: RBX::HUMAN::FallingDown  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00666f70
//
// 00666f70  64a100000000         mov eax, dword ptr fs:[0]
// 00666f76  6aff                 push -1
// 00666f78  68fec17d00           push 0x7dc1fe
// 00666f7d  50                   push eax
// 00666f7e  b801000000           mov eax, 1
// 00666f83  64892500000000       mov dword ptr fs:[0], esp
// 00666f8a  8405b0d99700         test byte ptr [0x97d9b0], al
// 00666f90  7530                 jne 0x666fc2
// 00666f92  0905b0d99700         or dword ptr [0x97d9b0], eax
// 00666f98  6aff                 push -1
// 00666f9a  6840cd8400           push 0x84cd40
// 00666f9f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00666fa7  e8e4cfeeff           call 0x553f90
// 00666fac  83c408               add esp, 8
// 00666faf  a3acd99700           mov dword ptr [0x97d9ac], eax
// 00666fb4  8b0c24               mov ecx, dword ptr [esp]
// 00666fb7  64890d00000000       mov dword ptr fs:[0], ecx
// 00666fbe  83c40c               add esp, 0xc
// 00666fc1  c3                   ret 
// 00666fc2  8b0c24               mov ecx, dword ptr [esp]
// 00666fc5  a1acd99700           mov eax, dword ptr [0x97d9ac]
// 00666fca  64890d00000000       mov dword ptr fs:[0], ecx
// 00666fd1  83c40c               add esp, 0xc
// 00666fd4  c3                   ret 
// library openrbx-client/App\humanoid\Seated.cpp (function ??$doDeclare@$1?sSeated@RBX@@3QBDB@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Seated.cpp
