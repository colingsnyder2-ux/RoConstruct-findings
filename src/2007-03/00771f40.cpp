// roc 2007-03 00771f40  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00771f40
//
// 00771f40  56                   push esi
// 00771f41  6a05                 push 5
// 00771f43  33c9                 xor ecx, ecx
// 00771f45  51                   push ecx
// 00771f46  b890415400           mov eax, 0x544190
// 00771f4b  50                   push eax
// 00771f4c  33f6                 xor esi, esi
// 00771f4e  56                   push esi
// 00771f4f  bad07c6e00           mov edx, 0x6e7cd0
// 00771f54  52                   push edx
// 00771f55  68b06e7a00           push 0x7a6eb0
// 00771f5a  68b86e7a00           push 0x7a6eb8
// 00771f5f  b910bd8b00           mov ecx, 0x8bbd10
// 00771f64  e8a71bddff           call 0x543b10
// 00771f69  68e0977700           push 0x7797e0
// 00771f6e  e840d2eaff           call 0x61f1b3
// 00771f73  83c404               add esp, 4
// 00771f76  5e                   pop esi
// 00771f77  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??__Eprop_errorReporting@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
