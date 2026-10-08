// roc 2007-08 00771160  unit: seg_00770000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771160
//
// 00771160  6a01                 push 1
// 00771162  6810617900           push 0x796110
// 00771167  33c9                 xor ecx, ecx
// 00771169  6828837a00           push 0x7a8328
// 0077116e  51                   push ecx
// 0077116f  b8104d5500           mov eax, 0x554d10
// 00771174  50                   push eax
// 00771175  b9781d8c00           mov ecx, 0x8c1d78
// 0077117a  e8f13fdeff           call 0x555170
// 0077117f  68409b7700           push 0x779b40
// 00771184  e89afbebff           call 0x630d23
// 00771189  59                   pop ecx
// 0077118a  c3                   ret 
// library rbxgs/v8tree\Service.cpp (function ??__E?func_GetService@ServiceProvider@RBX@@0V?$BoundFuncDesc@VServiceProvider@RBX@@$$A6A?AV?$shared_ptr@VInstance@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Service.cpp
