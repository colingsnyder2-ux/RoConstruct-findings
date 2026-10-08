// roc 2007-08 00770f40  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00770f40
//
// 00770f40  56                   push esi
// 00770f41  6a05                 push 5
// 00770f43  33c9                 xor ecx, ecx
// 00770f45  51                   push ecx
// 00770f46  b8904a5400           mov eax, 0x544a90
// 00770f4b  50                   push eax
// 00770f4c  33f6                 xor esi, esi
// 00770f4e  56                   push esi
// 00770f4f  ba40285400           mov edx, 0x542840
// 00770f54  52                   push edx
// 00770f55  68b46e7a00           push 0x7a6eb4
// 00770f5a  68a46e7a00           push 0x7a6ea4
// 00770f5f  b904178c00           mov ecx, 0x8c1704
// 00770f64  e86730ddff           call 0x543fd0
// 00770f69  6800987700           push 0x779800
// 00770f6e  e8b0fdebff           call 0x630d23
// 00770f73  83c404               add esp, 4
// 00770f76  5e                   pop esi
// 00770f77  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??__Eprop_ValidatingDebug@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
