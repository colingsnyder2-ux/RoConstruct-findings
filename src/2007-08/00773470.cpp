// roc 2007-08 00773470  unit: seg_00770000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00773470
//
// 00773470  e8fba7e2ff           call 0x59dc70
// 00773475  68ec2c7b00           push 0x7b2cec
// 0077347a  50                   push eax
// 0077347b  b970528c00           mov ecx, 0x8c5270
// 00773480  e88bcfdfff           call 0x570410
// 00773485  6850b07700           push 0x77b050
// 0077348a  c70570528c0098277b00 mov dword ptr [0x8c5270], 0x7b2798
// 00773494  e88ad8ebff           call 0x630d23
// 00773499  59                   pop ecx
// 0077349a  c3                   ret 
// library rbxgs/v8datamodel\Hopper.cpp (function ??__Edesc_Deselected@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Hopper.cpp
