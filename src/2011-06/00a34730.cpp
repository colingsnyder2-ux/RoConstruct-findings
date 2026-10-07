// roc 2011-06 00a34730  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34730
//
// 00a34730  a1e4b9cb00           mov eax, dword ptr [0xcbb9e4]
// 00a34735  85c0                 test eax, eax
// 00a34737  7409                 je 0xa34742
// 00a34739  50                   push eax
// 00a3473a  e81959ddff           call 0x80a058
// 00a3473f  83c404               add esp, 4
// 00a34742  c705c8b9cb00e0bea500 mov dword ptr [0xcbb9c8], 0xa5bee0
// 00a3474c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
