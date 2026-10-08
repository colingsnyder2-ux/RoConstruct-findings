// roc 2008-06 0056ca70  unit: G3D::VColor3::?$holder  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056ca70
//
// 0056ca70  64a100000000         mov eax, dword ptr fs:[0]
// 0056ca76  6aff                 push -1
// 0056ca78  68defc7c00           push 0x7cfcde
// 0056ca7d  50                   push eax
// 0056ca7e  b801000000           mov eax, 1
// 0056ca83  64892500000000       mov dword ptr fs:[0], esp
// 0056ca8a  8405684b9700         test byte ptr [0x974b68], al
// 0056ca90  752f                 jne 0x56cac1
// 0056ca92  0905684b9700         or dword ptr [0x974b68], eax
// 0056ca98  6810709300           push 0x937010
// 0056ca9d  6834168200           push 0x821634
// 0056caa2  b9584b9700           mov ecx, 0x974b58
// 0056caa7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056caaf  e8dcf2ffff           call 0x56bd90
// 0056cab4  6810d27f00           push 0x7fd210
// 0056cab9  e8f14c1300           call 0x6a17af
// 0056cabe  83c404               add esp, 4
// 0056cac1  8b0c24               mov ecx, dword ptr [esp]
// 0056cac4  b8584b9700           mov eax, 0x974b58
// 0056cac9  64890d00000000       mov dword ptr fs:[0], ecx
// 0056cad0  83c40c               add esp, 0xc
// 0056cad3  c3                   ret 
// library rbxgs/v8tree\EnumProperty.cpp (function ??$singleton@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
