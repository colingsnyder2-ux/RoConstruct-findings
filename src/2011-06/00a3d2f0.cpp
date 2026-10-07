// roc 2011-06 00a3d2f0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d2f0
//
// 00a3d2f0  a1581dcd00           mov eax, dword ptr [0xcd1d58]
// 00a3d2f5  85c0                 test eax, eax
// 00a3d2f7  7409                 je 0xa3d302
// 00a3d2f9  50                   push eax
// 00a3d2fa  e859cddcff           call 0x80a058
// 00a3d2ff  83c404               add esp, 4
// 00a3d302  c705381dcd00e0bea500 mov dword ptr [0xcd1d38], 0xa5bee0
// 00a3d30c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
