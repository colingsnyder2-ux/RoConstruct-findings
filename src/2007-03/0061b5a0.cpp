// roc 2007-03 0061b5a0  unit: seg_00610000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0061b5a0
//
// 0061b5a0  64a100000000         mov eax, dword ptr fs:[0]
// 0061b5a6  6aff                 push -1
// 0061b5a8  68bedc7500           push 0x75dcbe
// 0061b5ad  50                   push eax
// 0061b5ae  b801000000           mov eax, 1
// 0061b5b3  64892500000000       mov dword ptr fs:[0], esp
// 0061b5ba  840520138c00         test byte ptr [0x8c1320], al
// 0061b5c0  7530                 jne 0x61b5f2
// 0061b5c2  090520138c00         or dword ptr [0x8c1320], eax
// 0061b5c8  6aff                 push -1
// 0061b5ca  6880217c00           push 0x7c2180
// 0061b5cf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0061b5d7  e80423f1ff           call 0x52d8e0
// 0061b5dc  83c408               add esp, 8
// 0061b5df  a31c138c00           mov dword ptr [0x8c131c], eax
// 0061b5e4  8b0c24               mov ecx, dword ptr [esp]
// 0061b5e7  64890d00000000       mov dword ptr fs:[0], ecx
// 0061b5ee  83c40c               add esp, 0xc
// 0061b5f1  c3                   ret 
// 0061b5f2  8b0c24               mov ecx, dword ptr [esp]
// 0061b5f5  a11c138c00           mov eax, dword ptr [0x8c131c]
// 0061b5fa  64890d00000000       mov dword ptr fs:[0], ecx
// 0061b601  83c40c               add esp, 0xc
// 0061b604  c3                   ret 
// library openrbx-client/App\humanoid\Freefall.cpp (function ??$doDeclare@$1?sFreefall@RBX@@3QBDB@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Freefall.cpp
