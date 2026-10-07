// roc 2011-06 00a3cae0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3cae0
//
// 00a3cae0  a1a80fcd00           mov eax, dword ptr [0xcd0fa8]
// 00a3cae5  85c0                 test eax, eax
// 00a3cae7  7409                 je 0xa3caf2
// 00a3cae9  50                   push eax
// 00a3caea  e869d5dcff           call 0x80a058
// 00a3caef  83c404               add esp, 4
// 00a3caf2  c7058c0fcd00e0bea500 mov dword ptr [0xcd0f8c], 0xa5bee0
// 00a3cafc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
