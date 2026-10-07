// roc 2011-06 00a3eb00  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3eb00
//
// 00a3eb00  a1e83ecd00           mov eax, dword ptr [0xcd3ee8]
// 00a3eb05  85c0                 test eax, eax
// 00a3eb07  7409                 je 0xa3eb12
// 00a3eb09  50                   push eax
// 00a3eb0a  e849b5dcff           call 0x80a058
// 00a3eb0f  83c404               add esp, 4
// 00a3eb12  c705c83ecd00e0bea500 mov dword ptr [0xcd3ec8], 0xa5bee0
// 00a3eb1c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
