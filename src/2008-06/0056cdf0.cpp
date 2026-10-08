// roc 2008-06 0056cdf0  unit: G3D::VColor3::?$holder  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056cdf0
//
// 0056cdf0  64a100000000         mov eax, dword ptr fs:[0]
// 0056cdf6  6aff                 push -1
// 0056cdf8  68defd7c00           push 0x7cfdde
// 0056cdfd  50                   push eax
// 0056cdfe  b801000000           mov eax, 1
// 0056ce03  64892500000000       mov dword ptr fs:[0], esp
// 0056ce0a  8405084c9700         test byte ptr [0x974c08], al
// 0056ce10  752f                 jne 0x56ce41
// 0056ce12  0905084c9700         or dword ptr [0x974c08], eax
// 0056ce18  68f8be9200           push 0x92bef8
// 0056ce1d  68b8f68200           push 0x82f6b8
// 0056ce22  b9f84b9700           mov ecx, 0x974bf8
// 0056ce27  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056ce2f  e85cefffff           call 0x56bd90
// 0056ce34  6890d27f00           push 0x7fd290
// 0056ce39  e871491300           call 0x6a17af
// 0056ce3e  83c404               add esp, 4
// 0056ce41  8b0c24               mov ecx, dword ptr [esp]
// 0056ce44  b8f84b9700           mov eax, 0x974bf8
// 0056ce49  64890d00000000       mov dword ptr fs:[0], ecx
// 0056ce50  83c40c               add esp, 0xc
// 0056ce53  c3                   ret 
// library rbxgs/v8tree\EnumProperty.cpp (function ??$singleton@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
