// roc 2007-08 00770ec0  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00770ec0
//
// 00770ec0  56                   push esi
// 00770ec1  6a05                 push 5
// 00770ec3  33c9                 xor ecx, ecx
// 00770ec5  51                   push ecx
// 00770ec6  b8304a5400           mov eax, 0x544a30
// 00770ecb  50                   push eax
// 00770ecc  33f6                 xor esi, esi
// 00770ece  56                   push esi
// 00770ecf  baf0285400           mov edx, 0x5428f0
// 00770ed4  52                   push edx
// 00770ed5  68e06d7a00           push 0x7a6de0
// 00770eda  68746e7a00           push 0x7a6e74
// 00770edf  b9cc188c00           mov ecx, 0x8c18cc
// 00770ee4  e8e730ddff           call 0x543fd0
// 00770ee9  68c0977700           push 0x7797c0
// 00770eee  e830feebff           call 0x630d23
// 00770ef3  83c404               add esp, 4
// 00770ef6  5e                   pop esi
// 00770ef7  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??__Eprop_DisableEnvironmentalThrottle@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
