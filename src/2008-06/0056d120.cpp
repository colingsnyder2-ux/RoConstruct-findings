// roc 2008-06 0056d120  unit: G3D::VColor3::?$holder  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056d120
//
// 0056d120  64a100000000         mov eax, dword ptr fs:[0]
// 0056d126  6aff                 push -1
// 0056d128  689efe7c00           push 0x7cfe9e
// 0056d12d  50                   push eax
// 0056d12e  b801000000           mov eax, 1
// 0056d133  64892500000000       mov dword ptr fs:[0], esp
// 0056d13a  8405804c9700         test byte ptr [0x974c80], al
// 0056d140  7534                 jne 0x56d176
// 0056d142  0905804c9700         or dword ptr [0x974c80], eax
// 0056d148  68f40d8200           push 0x820df4
// 0056d14d  6898539300           push 0x935398
// 0056d152  6810f78200           push 0x82f710
// 0056d157  b9704c9700           mov ecx, 0x974c70
// 0056d15c  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0056d164  e837c6f1ff           call 0x4897a0
// 0056d169  68f0d27f00           push 0x7fd2f0
// 0056d16e  e83c461300           call 0x6a17af
// 0056d173  83c404               add esp, 4
// 0056d176  8b0c24               mov ecx, dword ptr [esp]
// 0056d179  b8704c9700           mov eax, 0x974c70
// 0056d17e  64890d00000000       mov dword ptr fs:[0], ecx
// 0056d185  83c40c               add esp, 0xc
// 0056d188  c3                   ret 
// library openrbx-client/App\v8tree\enumproperty.cpp (function ??$singleton@VBrickColor@RBX@@@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/enumproperty.cpp
