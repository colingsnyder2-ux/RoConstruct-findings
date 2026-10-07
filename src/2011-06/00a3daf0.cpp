// roc 2011-06 00a3daf0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3daf0
//
// 00a3daf0  a1d428cd00           mov eax, dword ptr [0xcd28d4]
// 00a3daf5  85c0                 test eax, eax
// 00a3daf7  7409                 je 0xa3db02
// 00a3daf9  50                   push eax
// 00a3dafa  e859c5dcff           call 0x80a058
// 00a3daff  83c404               add esp, 4
// 00a3db02  c705b828cd00e0bea500 mov dword ptr [0xcd28b8], 0xa5bee0
// 00a3db0c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
