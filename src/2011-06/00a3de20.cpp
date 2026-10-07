// roc 2011-06 00a3de20  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3de20
//
// 00a3de20  a1142bcd00           mov eax, dword ptr [0xcd2b14]
// 00a3de25  85c0                 test eax, eax
// 00a3de27  7409                 je 0xa3de32
// 00a3de29  50                   push eax
// 00a3de2a  e829c2dcff           call 0x80a058
// 00a3de2f  83c404               add esp, 4
// 00a3de32  c705f82acd00e0bea500 mov dword ptr [0xcd2af8], 0xa5bee0
// 00a3de3c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
