// roc 2011-06 00a3a520  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a520
//
// 00a3a520  a17ccacc00           mov eax, dword ptr [0xccca7c]
// 00a3a525  85c0                 test eax, eax
// 00a3a527  7409                 je 0xa3a532
// 00a3a529  50                   push eax
// 00a3a52a  e829fbdcff           call 0x80a058
// 00a3a52f  83c404               add esp, 4
// 00a3a532  c70560cacc00e0bea500 mov dword ptr [0xccca60], 0xa5bee0
// 00a3a53c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
