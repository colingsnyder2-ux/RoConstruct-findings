// roc 2011-06 00a3db10  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3db10
//
// 00a3db10  a11429cd00           mov eax, dword ptr [0xcd2914]
// 00a3db15  85c0                 test eax, eax
// 00a3db17  7409                 je 0xa3db22
// 00a3db19  50                   push eax
// 00a3db1a  e839c5dcff           call 0x80a058
// 00a3db1f  83c404               add esp, 4
// 00a3db22  c705f828cd00e0bea500 mov dword ptr [0xcd28f8], 0xa5bee0
// 00a3db2c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
