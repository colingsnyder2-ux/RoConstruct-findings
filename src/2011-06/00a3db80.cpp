// roc 2011-06 00a3db80  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3db80
//
// 00a3db80  a1dc2ecd00           mov eax, dword ptr [0xcd2edc]
// 00a3db85  85c0                 test eax, eax
// 00a3db87  7409                 je 0xa3db92
// 00a3db89  50                   push eax
// 00a3db8a  e8c9c4dcff           call 0x80a058
// 00a3db8f  83c404               add esp, 4
// 00a3db92  c705bc2ecd00e0bea500 mov dword ptr [0xcd2ebc], 0xa5bee0
// 00a3db9c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
