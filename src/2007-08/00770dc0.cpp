// roc 2007-08 00770dc0  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00770dc0
//
// 00770dc0  56                   push esi
// 00770dc1  6a05                 push 5
// 00770dc3  33c9                 xor ecx, ecx
// 00770dc5  51                   push ecx
// 00770dc6  b870495400           mov eax, 0x544970
// 00770dcb  50                   push eax
// 00770dcc  33f6                 xor esi, esi
// 00770dce  56                   push esi
// 00770dcf  bab0285400           mov edx, 0x5428b0
// 00770dd4  52                   push edx
// 00770dd5  68e06d7a00           push 0x7a6de0
// 00770dda  68346e7a00           push 0x7a6e34
// 00770ddf  b93c188c00           mov ecx, 0x8c183c
// 00770de4  e8e731ddff           call 0x543fd0
// 00770de9  6840977700           push 0x779740
// 00770dee  e830ffebff           call 0x630d23
// 00770df3  83c404               add esp, 4
// 00770df6  5e                   pop esi
// 00770df7  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??__Eprop_ShowAggregation@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
