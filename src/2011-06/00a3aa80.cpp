// roc 2011-06 00a3aa80  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3aa80
//
// 00a3aa80  a18cd3cc00           mov eax, dword ptr [0xccd38c]
// 00a3aa85  85c0                 test eax, eax
// 00a3aa87  7409                 je 0xa3aa92
// 00a3aa89  50                   push eax
// 00a3aa8a  e8c9f5dcff           call 0x80a058
// 00a3aa8f  83c404               add esp, 4
// 00a3aa92  c70570d3cc00e0bea500 mov dword ptr [0xccd370], 0xa5bee0
// 00a3aa9c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
