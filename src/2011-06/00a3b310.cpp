// roc 2011-06 00a3b310  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b310
//
// 00a3b310  a144e5cc00           mov eax, dword ptr [0xcce544]
// 00a3b315  85c0                 test eax, eax
// 00a3b317  7409                 je 0xa3b322
// 00a3b319  50                   push eax
// 00a3b31a  e839eddcff           call 0x80a058
// 00a3b31f  83c404               add esp, 4
// 00a3b322  c70528e5cc00e0bea500 mov dword ptr [0xcce528], 0xa5bee0
// 00a3b32c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
