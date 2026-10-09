// roc 2008-06 00666cc0  unit: RBX::HUMAN::Dead  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00666cc0
//
// 00666cc0  64a100000000         mov eax, dword ptr fs:[0]
// 00666cc6  6aff                 push -1
// 00666cc8  68dec17d00           push 0x7dc1de
// 00666ccd  50                   push eax
// 00666cce  b801000000           mov eax, 1
// 00666cd3  64892500000000       mov dword ptr fs:[0], esp
// 00666cda  8405a0d99700         test byte ptr [0x97d9a0], al
// 00666ce0  7530                 jne 0x666d12
// 00666ce2  0905a0d99700         or dword ptr [0x97d9a0], eax
// 00666ce8  6aff                 push -1
// 00666cea  68c0cc8400           push 0x84ccc0
// 00666cef  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00666cf7  e894d2eeff           call 0x553f90
// 00666cfc  83c408               add esp, 8
// 00666cff  a39cd99700           mov dword ptr [0x97d99c], eax
// 00666d04  8b0c24               mov ecx, dword ptr [esp]
// 00666d07  64890d00000000       mov dword ptr fs:[0], ecx
// 00666d0e  83c40c               add esp, 0xc
// 00666d11  c3                   ret 
// 00666d12  8b0c24               mov ecx, dword ptr [esp]
// 00666d15  a19cd99700           mov eax, dword ptr [0x97d99c]
// 00666d1a  64890d00000000       mov dword ptr fs:[0], ecx
// 00666d21  83c40c               add esp, 0xc
// 00666d24  c3                   ret 
// library openrbx-client/App\humanoid\FallingDown.cpp (function ??$doDeclare@$1?sFallingDown@RBX@@3QBDB@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/FallingDown.cpp
