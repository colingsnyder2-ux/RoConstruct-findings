// roc 2011-06 00a35590  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35590
//
// 00a35590  a1b0d9cb00           mov eax, dword ptr [0xcbd9b0]
// 00a35595  85c0                 test eax, eax
// 00a35597  7409                 je 0xa355a2
// 00a35599  50                   push eax
// 00a3559a  e8b94addff           call 0x80a058
// 00a3559f  83c404               add esp, 4
// 00a355a2  c70594d9cb00e0bea500 mov dword ptr [0xcbd994], 0xa5bee0
// 00a355ac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
