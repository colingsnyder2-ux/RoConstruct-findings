// roc 2011-06 00a3e880  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e880
//
// 00a3e880  a1203acd00           mov eax, dword ptr [0xcd3a20]
// 00a3e885  85c0                 test eax, eax
// 00a3e887  7409                 je 0xa3e892
// 00a3e889  50                   push eax
// 00a3e88a  e8c9b7dcff           call 0x80a058
// 00a3e88f  83c404               add esp, 4
// 00a3e892  c705043acd00e0bea500 mov dword ptr [0xcd3a04], 0xa5bee0
// 00a3e89c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
