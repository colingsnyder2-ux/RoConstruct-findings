// roc 2011-06 00a3d840  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d840
//
// 00a3d840  a15824cd00           mov eax, dword ptr [0xcd2458]
// 00a3d845  85c0                 test eax, eax
// 00a3d847  7409                 je 0xa3d852
// 00a3d849  50                   push eax
// 00a3d84a  e809c8dcff           call 0x80a058
// 00a3d84f  83c404               add esp, 4
// 00a3d852  c7053c24cd00e0bea500 mov dword ptr [0xcd243c], 0xa5bee0
// 00a3d85c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
