// roc 2011-06 00a3cac0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3cac0
//
// 00a3cac0  a1880fcd00           mov eax, dword ptr [0xcd0f88]
// 00a3cac5  85c0                 test eax, eax
// 00a3cac7  7409                 je 0xa3cad2
// 00a3cac9  50                   push eax
// 00a3caca  e889d5dcff           call 0x80a058
// 00a3cacf  83c404               add esp, 4
// 00a3cad2  c7056c0fcd00e0bea500 mov dword ptr [0xcd0f6c], 0xa5bee0
// 00a3cadc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
