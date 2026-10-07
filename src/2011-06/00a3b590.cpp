// roc 2011-06 00a3b590  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b590
//
// 00a3b590  a1c8e9cc00           mov eax, dword ptr [0xcce9c8]
// 00a3b595  85c0                 test eax, eax
// 00a3b597  7409                 je 0xa3b5a2
// 00a3b599  50                   push eax
// 00a3b59a  e8b9eadcff           call 0x80a058
// 00a3b59f  83c404               add esp, 4
// 00a3b5a2  c705ace9cc00e0bea500 mov dword ptr [0xcce9ac], 0xa5bee0
// 00a3b5ac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
