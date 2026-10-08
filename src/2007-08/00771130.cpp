// roc 2007-08 00771130  unit: seg_00770000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771130
//
// 00771130  6a01                 push 1
// 00771132  6810617900           push 0x796110
// 00771137  33c9                 xor ecx, ecx
// 00771139  6820837a00           push 0x7a8320
// 0077113e  51                   push ecx
// 0077113f  b8104d5500           mov eax, 0x554d10
// 00771144  50                   push eax
// 00771145  b9b81d8c00           mov ecx, 0x8c1db8
// 0077114a  e82140deff           call 0x555170
// 0077114f  68509b7700           push 0x779b50
// 00771154  e8cafbebff           call 0x630d23
// 00771159  59                   pop ecx
// 0077115a  c3                   ret 
// library rbxgs/v8tree\Service.cpp (function ??__E?func_service@ServiceProvider@RBX@@0V?$BoundFuncDesc@VServiceProvider@RBX@@$$A6A?AV?$shared_ptr@VInstance@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Service.cpp
