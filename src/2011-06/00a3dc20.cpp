// roc 2011-06 00a3dc20  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3dc20
//
// 00a3dc20  a1b42bcd00           mov eax, dword ptr [0xcd2bb4]
// 00a3dc25  85c0                 test eax, eax
// 00a3dc27  7409                 je 0xa3dc32
// 00a3dc29  50                   push eax
// 00a3dc2a  e829c4dcff           call 0x80a058
// 00a3dc2f  83c404               add esp, 4
// 00a3dc32  c705982bcd00e0bea500 mov dword ptr [0xcd2b98], 0xa5bee0
// 00a3dc3c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
