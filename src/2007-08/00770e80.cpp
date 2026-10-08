// roc 2007-08 00770e80  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00770e80
//
// 00770e80  56                   push esi
// 00770e81  6a05                 push 5
// 00770e83  33c9                 xor ecx, ecx
// 00770e85  51                   push ecx
// 00770e86  b8004a5400           mov eax, 0x544a00
// 00770e8b  50                   push eax
// 00770e8c  33f6                 xor esi, esi
// 00770e8e  56                   push esi
// 00770e8f  bae0285400           mov edx, 0x5428e0
// 00770e94  52                   push edx
// 00770e95  68e06d7a00           push 0x7a6de0
// 00770e9a  68646e7a00           push 0x7a6e64
// 00770e9f  b9b0188c00           mov ecx, 0x8c18b0
// 00770ea4  e82731ddff           call 0x543fd0
// 00770ea9  68a0977700           push 0x7797a0
// 00770eae  e870feebff           call 0x630d23
// 00770eb3  83c404               add esp, 4
// 00770eb6  5e                   pop esi
// 00770eb7  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??__Eprop_DisableSleep@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
