// roc 2007-03 007719f0  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007719f0
//
// 007719f0  56                   push esi
// 007719f1  6a05                 push 5
// 007719f3  33c9                 xor ecx, ecx
// 007719f5  51                   push ecx
// 007719f6  b850f05300           mov eax, 0x53f050
// 007719fb  50                   push eax
// 007719fc  33f6                 xor esi, esi
// 007719fe  56                   push esi
// 007719ff  ba00e24000           mov edx, 0x40e200
// 00771a04  52                   push edx
// 00771a05  6870a77900           push 0x79a770
// 00771a0a  685c6f7800           push 0x786f5c
// 00771a0f  b9e0b88b00           mov ecx, 0x8bb8e0
// 00771a14  e877f9dcff           call 0x541390
// 00771a19  6880957700           push 0x779580
// 00771a1e  e890d7eaff           call 0x61f1b3
// 00771a23  83c404               add esp, 4
// 00771a26  5e                   pop esi
// 00771a27  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??__E?desc_Name@Instance@RBX@@2V?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@2@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
