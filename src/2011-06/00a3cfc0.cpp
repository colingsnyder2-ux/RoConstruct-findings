// roc 2011-06 00a3cfc0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3cfc0
//
// 00a3cfc0  a16c17cd00           mov eax, dword ptr [0xcd176c]
// 00a3cfc5  85c0                 test eax, eax
// 00a3cfc7  7409                 je 0xa3cfd2
// 00a3cfc9  50                   push eax
// 00a3cfca  e889d0dcff           call 0x80a058
// 00a3cfcf  83c404               add esp, 4
// 00a3cfd2  c7055017cd00e0bea500 mov dword ptr [0xcd1750], 0xa5bee0
// 00a3cfdc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
