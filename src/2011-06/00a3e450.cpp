// roc 2011-06 00a3e450  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e450
//
// 00a3e450  a1cc35cd00           mov eax, dword ptr [0xcd35cc]
// 00a3e455  85c0                 test eax, eax
// 00a3e457  7409                 je 0xa3e462
// 00a3e459  50                   push eax
// 00a3e45a  e8f9bbdcff           call 0x80a058
// 00a3e45f  83c404               add esp, 4
// 00a3e462  c705ac35cd00e0bea500 mov dword ptr [0xcd35ac], 0xa5bee0
// 00a3e46c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
