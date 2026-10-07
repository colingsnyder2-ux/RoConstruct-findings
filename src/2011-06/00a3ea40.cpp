// roc 2011-06 00a3ea40  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ea40
//
// 00a3ea40  a15c3dcd00           mov eax, dword ptr [0xcd3d5c]
// 00a3ea45  85c0                 test eax, eax
// 00a3ea47  7409                 je 0xa3ea52
// 00a3ea49  50                   push eax
// 00a3ea4a  e809b6dcff           call 0x80a058
// 00a3ea4f  83c404               add esp, 4
// 00a3ea52  c705403dcd00e0bea500 mov dword ptr [0xcd3d40], 0xa5bee0
// 00a3ea5c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
