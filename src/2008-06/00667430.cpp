// roc 2008-06 00667430  unit: RBX::HUMAN::StrafingNoPhysics  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00667430
//
// 00667430  64a100000000         mov eax, dword ptr fs:[0]
// 00667436  6aff                 push -1
// 00667438  687ec27d00           push 0x7dc27e
// 0066743d  50                   push eax
// 0066743e  b801000000           mov eax, 1
// 00667443  64892500000000       mov dword ptr fs:[0], esp
// 0066744a  8405d4d99700         test byte ptr [0x97d9d4], al
// 00667450  7530                 jne 0x667482
// 00667452  0905d4d99700         or dword ptr [0x97d9d4], eax
// 00667458  6aff                 push -1
// 0066745a  6840ce8400           push 0x84ce40
// 0066745f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00667467  e824cbeeff           call 0x553f90
// 0066746c  83c408               add esp, 8
// 0066746f  a3d0d99700           mov dword ptr [0x97d9d0], eax
// 00667474  8b0c24               mov ecx, dword ptr [esp]
// 00667477  64890d00000000       mov dword ptr fs:[0], ecx
// 0066747e  83c40c               add esp, 0xc
// 00667481  c3                   ret 
// 00667482  8b0c24               mov ecx, dword ptr [esp]
// 00667485  a1d0d99700           mov eax, dword ptr [0x97d9d0]
// 0066748a  64890d00000000       mov dword ptr fs:[0], ecx
// 00667491  83c40c               add esp, 0xc
// 00667494  c3                   ret 
// library openrbx-client/App\humanoid\Flying.cpp (function ??$doDeclare@$1?sFlying@RBX@@3QBDB@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Flying.cpp
