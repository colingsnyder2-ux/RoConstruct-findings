// roc 2007-08 00770cc0  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00770cc0
//
// 00770cc0  56                   push esi
// 00770cc1  6a05                 push 5
// 00770cc3  33c9                 xor ecx, ecx
// 00770cc5  51                   push ecx
// 00770cc6  b8b0485400           mov eax, 0x5448b0
// 00770ccb  50                   push eax
// 00770ccc  33f6                 xor esi, esi
// 00770cce  56                   push esi
// 00770ccf  ba70285400           mov edx, 0x542870
// 00770cd4  52                   push edx
// 00770cd5  68e06d7a00           push 0x7a6de0
// 00770cda  68e86d7a00           push 0x7a6de8
// 00770cdf  b958188c00           mov ecx, 0x8c1858
// 00770ce4  e8e732ddff           call 0x543fd0
// 00770ce9  6880987700           push 0x779880
// 00770cee  e83000ecff           call 0x630d23
// 00770cf3  83c404               add esp, 4
// 00770cf6  5e                   pop esi
// 00770cf7  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??__Eprop_HighlightSleepParts@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
