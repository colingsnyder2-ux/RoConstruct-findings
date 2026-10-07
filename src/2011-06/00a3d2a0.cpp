// roc 2011-06 00a3d2a0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d2a0
//
// 00a3d2a0  a1d41bcd00           mov eax, dword ptr [0xcd1bd4]
// 00a3d2a5  85c0                 test eax, eax
// 00a3d2a7  7409                 je 0xa3d2b2
// 00a3d2a9  50                   push eax
// 00a3d2aa  e8a9cddcff           call 0x80a058
// 00a3d2af  83c404               add esp, 4
// 00a3d2b2  c705b81bcd00e0bea500 mov dword ptr [0xcd1bb8], 0xa5bee0
// 00a3d2bc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
