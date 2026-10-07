// roc 2011-06 00a3a850  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a850
//
// 00a3a850  a140cfcc00           mov eax, dword ptr [0xcccf40]
// 00a3a855  85c0                 test eax, eax
// 00a3a857  7409                 je 0xa3a862
// 00a3a859  50                   push eax
// 00a3a85a  e8f9f7dcff           call 0x80a058
// 00a3a85f  83c404               add esp, 4
// 00a3a862  c70524cfcc00e0bea500 mov dword ptr [0xcccf24], 0xa5bee0
// 00a3a86c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
