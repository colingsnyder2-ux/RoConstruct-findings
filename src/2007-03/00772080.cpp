// roc 2007-03 00772080  unit: seg_00770000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00772080
//
// 00772080  6a01                 push 1
// 00772082  6820557900           push 0x795520
// 00772087  33c9                 xor ecx, ecx
// 00772089  68b8827a00           push 0x7a82b8
// 0077208e  51                   push ecx
// 0077208f  b830125500           mov eax, 0x551230
// 00772094  50                   push eax
// 00772095  b9d0bf8b00           mov ecx, 0x8bbfd0
// 0077209a  e851f6ddff           call 0x5516f0
// 0077209f  68109a7700           push 0x779a10
// 007720a4  e80ad1eaff           call 0x61f1b3
// 007720a9  59                   pop ecx
// 007720aa  c3                   ret 
// library rbxgs/v8tree\Service.cpp (function ??__E?func_service@ServiceProvider@RBX@@0V?$BoundFuncDesc@VServiceProvider@RBX@@$$A6A?AV?$shared_ptr@VInstance@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Service.cpp
