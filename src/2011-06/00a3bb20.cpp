// roc 2011-06 00a3bb20  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3bb20
//
// 00a3bb20  a140f4cc00           mov eax, dword ptr [0xccf440]
// 00a3bb25  85c0                 test eax, eax
// 00a3bb27  7409                 je 0xa3bb32
// 00a3bb29  50                   push eax
// 00a3bb2a  e829e5dcff           call 0x80a058
// 00a3bb2f  83c404               add esp, 4
// 00a3bb32  c70524f4cc00e0bea500 mov dword ptr [0xccf424], 0xa5bee0
// 00a3bb3c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
