// roc 2011-06 00a3a790  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a790
//
// 00a3a790  a130cecc00           mov eax, dword ptr [0xccce30]
// 00a3a795  85c0                 test eax, eax
// 00a3a797  7409                 je 0xa3a7a2
// 00a3a799  50                   push eax
// 00a3a79a  e8b9f8dcff           call 0x80a058
// 00a3a79f  83c404               add esp, 4
// 00a3a7a2  c70514cecc00e0bea500 mov dword ptr [0xccce14], 0xa5bee0
// 00a3a7ac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
