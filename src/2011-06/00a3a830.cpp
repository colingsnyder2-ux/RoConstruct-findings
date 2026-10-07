// roc 2011-06 00a3a830  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a830
//
// 00a3a830  a154d0cc00           mov eax, dword ptr [0xccd054]
// 00a3a835  85c0                 test eax, eax
// 00a3a837  7409                 je 0xa3a842
// 00a3a839  50                   push eax
// 00a3a83a  e819f8dcff           call 0x80a058
// 00a3a83f  83c404               add esp, 4
// 00a3a842  c70538d0cc00e0bea500 mov dword ptr [0xccd038], 0xa5bee0
// 00a3a84c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
