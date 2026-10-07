// roc 2011-06 00a3a8f0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a8f0
//
// 00a3a8f0  a174d0cc00           mov eax, dword ptr [0xccd074]
// 00a3a8f5  85c0                 test eax, eax
// 00a3a8f7  7409                 je 0xa3a902
// 00a3a8f9  50                   push eax
// 00a3a8fa  e859f7dcff           call 0x80a058
// 00a3a8ff  83c404               add esp, 4
// 00a3a902  c70558d0cc00e0bea500 mov dword ptr [0xccd058], 0xa5bee0
// 00a3a90c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
