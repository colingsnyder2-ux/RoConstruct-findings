// roc 2007-03 00572d00  unit: seg_00570000  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00572d00
//
// 00572d00  64a100000000         mov eax, dword ptr fs:[0]
// 00572d06  6aff                 push -1
// 00572d08  68ee637500           push 0x7563ee
// 00572d0d  50                   push eax
// 00572d0e  b801000000           mov eax, 1
// 00572d13  64892500000000       mov dword ptr fs:[0], esp
// 00572d1a  8405e0cd8b00         test byte ptr [0x8bcde0], al
// 00572d20  752f                 jne 0x572d51
// 00572d22  0905e0cd8b00         or dword ptr [0x8bcde0], eax
// 00572d28  68907d8900           push 0x897d90
// 00572d2d  6880c07a00           push 0x7ac080
// 00572d32  b9d0cd8b00           mov ecx, 0x8bcdd0
// 00572d37  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00572d3f  e80c95ffff           call 0x56c250
// 00572d44  68109e7700           push 0x779e10
// 00572d49  e865c40a00           call 0x61f1b3
// 00572d4e  83c404               add esp, 4
// 00572d51  8b0c24               mov ecx, dword ptr [esp]
// 00572d54  b8d0cd8b00           mov eax, 0x8bcdd0
// 00572d59  64890d00000000       mov dword ptr fs:[0], ecx
// 00572d60  83c40c               add esp, 0xc
// 00572d63  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ??$singleton@VCoordinateFrame@G3D@@@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
