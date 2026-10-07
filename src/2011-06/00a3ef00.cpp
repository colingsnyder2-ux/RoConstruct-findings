// roc 2011-06 00a3ef00  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ef00
//
// 00a3ef00  a1d046cd00           mov eax, dword ptr [0xcd46d0]
// 00a3ef05  85c0                 test eax, eax
// 00a3ef07  7409                 je 0xa3ef12
// 00a3ef09  50                   push eax
// 00a3ef0a  e849b1dcff           call 0x80a058
// 00a3ef0f  83c404               add esp, 4
// 00a3ef12  c705b046cd00e0bea500 mov dword ptr [0xcd46b0], 0xa5bee0
// 00a3ef1c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
