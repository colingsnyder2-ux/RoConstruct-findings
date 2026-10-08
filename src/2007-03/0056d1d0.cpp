// roc 2007-03 0056d1d0  unit: seg_00560000  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056d1d0
//
// 0056d1d0  64a100000000         mov eax, dword ptr fs:[0]
// 0056d1d6  6aff                 push -1
// 0056d1d8  681e5e7500           push 0x755e1e
// 0056d1dd  50                   push eax
// 0056d1de  b801000000           mov eax, 1
// 0056d1e3  64892500000000       mov dword ptr fs:[0], esp
// 0056d1ea  84053cc78b00         test byte ptr [0x8bc73c], al
// 0056d1f0  752f                 jne 0x56d221
// 0056d1f2  09053cc78b00         or dword ptr [0x8bc73c], eax
// 0056d1f8  6888198800           push 0x881988
// 0056d1fd  6824987900           push 0x799824
// 0056d202  b92cc78b00           mov ecx, 0x8bc72c
// 0056d207  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056d20f  e83cf0ffff           call 0x56c250
// 0056d214  68d09c7700           push 0x779cd0
// 0056d219  e8951f0b00           call 0x61f1b3
// 0056d21e  83c404               add esp, 4
// 0056d221  8b0c24               mov ecx, dword ptr [esp]
// 0056d224  b82cc78b00           mov eax, 0x8bc72c
// 0056d229  64890d00000000       mov dword ptr fs:[0], ecx
// 0056d230  83c40c               add esp, 0xc
// 0056d233  c3                   ret 
// library rbxgs/v8tree\EnumProperty.cpp (function ??$singleton@H@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
