// roc 2011-06 00a3d310  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d310
//
// 00a3d310  a1b01ccd00           mov eax, dword ptr [0xcd1cb0]
// 00a3d315  85c0                 test eax, eax
// 00a3d317  7409                 je 0xa3d322
// 00a3d319  50                   push eax
// 00a3d31a  e839cddcff           call 0x80a058
// 00a3d31f  83c404               add esp, 4
// 00a3d322  c705941ccd00e0bea500 mov dword ptr [0xcd1c94], 0xa5bee0
// 00a3d32c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
