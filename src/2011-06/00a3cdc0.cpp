// roc 2011-06 00a3cdc0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3cdc0
//
// 00a3cdc0  a1d415cd00           mov eax, dword ptr [0xcd15d4]
// 00a3cdc5  85c0                 test eax, eax
// 00a3cdc7  7409                 je 0xa3cdd2
// 00a3cdc9  50                   push eax
// 00a3cdca  e889d2dcff           call 0x80a058
// 00a3cdcf  83c404               add esp, 4
// 00a3cdd2  c705b815cd00e0bea500 mov dword ptr [0xcd15b8], 0xa5bee0
// 00a3cddc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
