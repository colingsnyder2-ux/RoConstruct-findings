// roc 2011-06 00a3da50  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3da50
//
// 00a3da50  a1b028cd00           mov eax, dword ptr [0xcd28b0]
// 00a3da55  85c0                 test eax, eax
// 00a3da57  7409                 je 0xa3da62
// 00a3da59  50                   push eax
// 00a3da5a  e8f9c5dcff           call 0x80a058
// 00a3da5f  83c404               add esp, 4
// 00a3da62  c7059428cd00e0bea500 mov dword ptr [0xcd2894], 0xa5bee0
// 00a3da6c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
