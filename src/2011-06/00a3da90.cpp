// roc 2011-06 00a3da90  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3da90
//
// 00a3da90  a19028cd00           mov eax, dword ptr [0xcd2890]
// 00a3da95  85c0                 test eax, eax
// 00a3da97  7409                 je 0xa3daa2
// 00a3da99  50                   push eax
// 00a3da9a  e8b9c5dcff           call 0x80a058
// 00a3da9f  83c404               add esp, 4
// 00a3daa2  c7057428cd00e0bea500 mov dword ptr [0xcd2874], 0xa5bee0
// 00a3daac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
