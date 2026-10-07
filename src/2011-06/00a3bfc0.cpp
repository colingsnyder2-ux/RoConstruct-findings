// roc 2011-06 00a3bfc0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3bfc0
//
// 00a3bfc0  a1dcfbcc00           mov eax, dword ptr [0xccfbdc]
// 00a3bfc5  85c0                 test eax, eax
// 00a3bfc7  7409                 je 0xa3bfd2
// 00a3bfc9  50                   push eax
// 00a3bfca  e889e0dcff           call 0x80a058
// 00a3bfcf  83c404               add esp, 4
// 00a3bfd2  c705c0fbcc00e0bea500 mov dword ptr [0xccfbc0], 0xa5bee0
// 00a3bfdc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
