// roc 2011-06 00a3bca0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3bca0
//
// 00a3bca0  a1d4f6cc00           mov eax, dword ptr [0xccf6d4]
// 00a3bca5  85c0                 test eax, eax
// 00a3bca7  7409                 je 0xa3bcb2
// 00a3bca9  50                   push eax
// 00a3bcaa  e8a9e3dcff           call 0x80a058
// 00a3bcaf  83c404               add esp, 4
// 00a3bcb2  c705b8f6cc00e0bea500 mov dword ptr [0xccf6b8], 0xa5bee0
// 00a3bcbc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
