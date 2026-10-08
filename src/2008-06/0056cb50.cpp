// roc 2008-06 0056cb50  unit: G3D::VColor3::?$holder  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056cb50
//
// 0056cb50  64a100000000         mov eax, dword ptr fs:[0]
// 0056cb56  6aff                 push -1
// 0056cb58  681efd7c00           push 0x7cfd1e
// 0056cb5d  50                   push eax
// 0056cb5e  b801000000           mov eax, 1
// 0056cb63  64892500000000       mov dword ptr fs:[0], esp
// 0056cb6a  8405904b9700         test byte ptr [0x974b90], al
// 0056cb70  752f                 jne 0x56cba1
// 0056cb72  0905904b9700         or dword ptr [0x974b90], eax
// 0056cb78  6850899300           push 0x938950
// 0056cb7d  68a0f68200           push 0x82f6a0
// 0056cb82  b9804b9700           mov ecx, 0x974b80
// 0056cb87  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056cb8f  e8fcf1ffff           call 0x56bd90
// 0056cb94  6830d27f00           push 0x7fd230
// 0056cb99  e8114c1300           call 0x6a17af
// 0056cb9e  83c404               add esp, 4
// 0056cba1  8b0c24               mov ecx, dword ptr [esp]
// 0056cba4  b8804b9700           mov eax, 0x974b80
// 0056cba9  64890d00000000       mov dword ptr fs:[0], ecx
// 0056cbb0  83c40c               add esp, 0xc
// 0056cbb3  c3                   ret 
// library rbxgs/v8tree\EnumProperty.cpp (function ??$singleton@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
