// roc 2011-06 00a3dda0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3dda0
//
// 00a3dda0  a1f42bcd00           mov eax, dword ptr [0xcd2bf4]
// 00a3dda5  85c0                 test eax, eax
// 00a3dda7  7409                 je 0xa3ddb2
// 00a3dda9  50                   push eax
// 00a3ddaa  e8a9c2dcff           call 0x80a058
// 00a3ddaf  83c404               add esp, 4
// 00a3ddb2  c705d82bcd00e0bea500 mov dword ptr [0xcd2bd8], 0xa5bee0
// 00a3ddbc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
