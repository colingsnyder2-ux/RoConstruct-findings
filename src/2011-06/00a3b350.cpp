// roc 2011-06 00a3b350  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b350
//
// 00a3b350  a198e5cc00           mov eax, dword ptr [0xcce598]
// 00a3b355  85c0                 test eax, eax
// 00a3b357  7409                 je 0xa3b362
// 00a3b359  50                   push eax
// 00a3b35a  e8f9ecdcff           call 0x80a058
// 00a3b35f  83c404               add esp, 4
// 00a3b362  c7057ce5cc00e0bea500 mov dword ptr [0xcce57c], 0xa5bee0
// 00a3b36c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
