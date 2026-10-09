// roc 2008-06 00667560  unit: RBX::HUMAN::Freefall  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00667560
//
// 00667560  64a100000000         mov eax, dword ptr fs:[0]
// 00667566  6aff                 push -1
// 00667568  689ec27d00           push 0x7dc29e
// 0066756d  50                   push eax
// 0066756e  b801000000           mov eax, 1
// 00667573  64892500000000       mov dword ptr fs:[0], esp
// 0066757a  8405e0d99700         test byte ptr [0x97d9e0], al
// 00667580  7530                 jne 0x6675b2
// 00667582  0905e0d99700         or dword ptr [0x97d9e0], eax
// 00667588  6aff                 push -1
// 0066758a  6888ce8400           push 0x84ce88
// 0066758f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00667597  e8f4c9eeff           call 0x553f90
// 0066759c  83c408               add esp, 8
// 0066759f  a3dcd99700           mov dword ptr [0x97d9dc], eax
// 006675a4  8b0c24               mov ecx, dword ptr [esp]
// 006675a7  64890d00000000       mov dword ptr fs:[0], ecx
// 006675ae  83c40c               add esp, 0xc
// 006675b1  c3                   ret 
// 006675b2  8b0c24               mov ecx, dword ptr [esp]
// 006675b5  a1dcd99700           mov eax, dword ptr [0x97d9dc]
// 006675ba  64890d00000000       mov dword ptr fs:[0], ecx
// 006675c1  83c40c               add esp, 0xc
// 006675c4  c3                   ret 
// library openrbx-client/App\humanoid\Freefall.cpp (function ??$doDeclare@$1?sFreefall@RBX@@3QBDB@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Freefall.cpp
