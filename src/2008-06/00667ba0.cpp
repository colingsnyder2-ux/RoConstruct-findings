// roc 2008-06 00667ba0  unit: RBX::HUMAN::Jumping  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00667ba0
//
// 00667ba0  64a100000000         mov eax, dword ptr fs:[0]
// 00667ba6  6aff                 push -1
// 00667ba8  68dec27d00           push 0x7dc2de
// 00667bad  50                   push eax
// 00667bae  b801000000           mov eax, 1
// 00667bb3  64892500000000       mov dword ptr fs:[0], esp
// 00667bba  8405ecd99700         test byte ptr [0x97d9ec], al
// 00667bc0  7530                 jne 0x667bf2
// 00667bc2  0905ecd99700         or dword ptr [0x97d9ec], eax
// 00667bc8  6aff                 push -1
// 00667bca  68d8ce8400           push 0x84ced8
// 00667bcf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00667bd7  e8b4c3eeff           call 0x553f90
// 00667bdc  83c408               add esp, 8
// 00667bdf  a3e8d99700           mov dword ptr [0x97d9e8], eax
// 00667be4  8b0c24               mov ecx, dword ptr [esp]
// 00667be7  64890d00000000       mov dword ptr fs:[0], ecx
// 00667bee  83c40c               add esp, 0xc
// 00667bf1  c3                   ret 
// 00667bf2  8b0c24               mov ecx, dword ptr [esp]
// 00667bf5  a1e8d99700           mov eax, dword ptr [0x97d9e8]
// 00667bfa  64890d00000000       mov dword ptr fs:[0], ecx
// 00667c01  83c40c               add esp, 0xc
// 00667c04  c3                   ret 
// library openrbx-client/App\humanoid\Jumping.cpp (function ??$doDeclare@$1?sJumping@RBX@@3QBDB@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Jumping.cpp
