// roc 2007-08 00626d60  unit: RBX::Jumping  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00626d60
//
// 00626d60  64a100000000         mov eax, dword ptr fs:[0]
// 00626d66  6aff                 push -1
// 00626d68  68ded27500           push 0x75d2de
// 00626d6d  50                   push eax
// 00626d6e  b801000000           mov eax, 1
// 00626d73  64892500000000       mov dword ptr fs:[0], esp
// 00626d7a  8405e4828c00         test byte ptr [0x8c82e4], al
// 00626d80  7530                 jne 0x626db2
// 00626d82  0905e4828c00         or dword ptr [0x8c82e4], eax
// 00626d88  6aff                 push -1
// 00626d8a  68c04a7c00           push 0x7c4ac0
// 00626d8f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00626d97  e8a45bf0ff           call 0x52c940
// 00626d9c  83c408               add esp, 8
// 00626d9f  a3e0828c00           mov dword ptr [0x8c82e0], eax
// 00626da4  8b0c24               mov ecx, dword ptr [esp]
// 00626da7  64890d00000000       mov dword ptr fs:[0], ecx
// 00626dae  83c40c               add esp, 0xc
// 00626db1  c3                   ret 
// 00626db2  8b0c24               mov ecx, dword ptr [esp]
// 00626db5  a1e0828c00           mov eax, dword ptr [0x8c82e0]
// 00626dba  64890d00000000       mov dword ptr fs:[0], ecx
// 00626dc1  83c40c               add esp, 0xc
// 00626dc4  c3                   ret 
// library openrbx-client/App\humanoid\Jumping.cpp (function ??$doDeclare@$1?sJumping@RBX@@3QBDB@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Jumping.cpp
