// roc 2007-03 0056d400  unit: seg_00560000  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056d400
//
// 0056d400  64a100000000         mov eax, dword ptr fs:[0]
// 0056d406  6aff                 push -1
// 0056d408  68be5e7500           push 0x755ebe
// 0056d40d  50                   push eax
// 0056d40e  b801000000           mov eax, 1
// 0056d413  64892500000000       mov dword ptr fs:[0], esp
// 0056d41a  8405a0c78b00         test byte ptr [0x8bc7a0], al
// 0056d420  752f                 jne 0x56d451
// 0056d422  0905a0c78b00         or dword ptr [0x8bc7a0], eax
// 0056d428  68b0198800           push 0x8819b0
// 0056d42d  68c05d7a00           push 0x7a5dc0
// 0056d432  b990c78b00           mov ecx, 0x8bc790
// 0056d437  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056d43f  e80ceeffff           call 0x56c250
// 0056d444  68809c7700           push 0x779c80
// 0056d449  e8651d0b00           call 0x61f1b3
// 0056d44e  83c404               add esp, 4
// 0056d451  8b0c24               mov ecx, dword ptr [esp]
// 0056d454  b890c78b00           mov eax, 0x8bc790
// 0056d459  64890d00000000       mov dword ptr fs:[0], ecx
// 0056d460  83c40c               add esp, 0xc
// 0056d463  c3                   ret 
// library rbxgs/v8tree\EnumProperty.cpp (function ??$singleton@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
