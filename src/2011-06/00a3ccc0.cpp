// roc 2011-06 00a3ccc0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ccc0
//
// 00a3ccc0  a1f410cd00           mov eax, dword ptr [0xcd10f4]
// 00a3ccc5  85c0                 test eax, eax
// 00a3ccc7  7409                 je 0xa3ccd2
// 00a3ccc9  50                   push eax
// 00a3ccca  e889d3dcff           call 0x80a058
// 00a3cccf  83c404               add esp, 4
// 00a3ccd2  c705d810cd00e0bea500 mov dword ptr [0xcd10d8], 0xa5bee0
// 00a3ccdc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
