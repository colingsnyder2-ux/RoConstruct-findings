// roc 2011-06 00a3d640  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d640
//
// 00a3d640  a16022cd00           mov eax, dword ptr [0xcd2260]
// 00a3d645  85c0                 test eax, eax
// 00a3d647  7409                 je 0xa3d652
// 00a3d649  50                   push eax
// 00a3d64a  e809cadcff           call 0x80a058
// 00a3d64f  83c404               add esp, 4
// 00a3d652  c7054422cd00e0bea500 mov dword ptr [0xcd2244], 0xa5bee0
// 00a3d65c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
