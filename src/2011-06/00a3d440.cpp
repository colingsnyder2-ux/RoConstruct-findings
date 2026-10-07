// roc 2011-06 00a3d440  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d440
//
// 00a3d440  a1e81dcd00           mov eax, dword ptr [0xcd1de8]
// 00a3d445  85c0                 test eax, eax
// 00a3d447  7409                 je 0xa3d452
// 00a3d449  50                   push eax
// 00a3d44a  e809ccdcff           call 0x80a058
// 00a3d44f  83c404               add esp, 4
// 00a3d452  c705cc1dcd00e0bea500 mov dword ptr [0xcd1dcc], 0xa5bee0
// 00a3d45c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
