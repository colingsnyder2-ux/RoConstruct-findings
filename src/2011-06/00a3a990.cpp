// roc 2011-06 00a3a990  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a990
//
// 00a3a990  a1f4d0cc00           mov eax, dword ptr [0xccd0f4]
// 00a3a995  85c0                 test eax, eax
// 00a3a997  7409                 je 0xa3a9a2
// 00a3a999  50                   push eax
// 00a3a99a  e8b9f6dcff           call 0x80a058
// 00a3a99f  83c404               add esp, 4
// 00a3a9a2  c705d8d0cc00e0bea500 mov dword ptr [0xccd0d8], 0xa5bee0
// 00a3a9ac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
