// roc 2011-06 00a3c020  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c020
//
// 00a3c020  a150fecc00           mov eax, dword ptr [0xccfe50]
// 00a3c025  85c0                 test eax, eax
// 00a3c027  7409                 je 0xa3c032
// 00a3c029  50                   push eax
// 00a3c02a  e829e0dcff           call 0x80a058
// 00a3c02f  83c404               add esp, 4
// 00a3c032  c70534fecc00e0bea500 mov dword ptr [0xccfe34], 0xa5bee0
// 00a3c03c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
