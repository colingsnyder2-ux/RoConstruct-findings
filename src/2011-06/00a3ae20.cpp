// roc 2011-06 00a3ae20  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ae20
//
// 00a3ae20  a1e8dccc00           mov eax, dword ptr [0xccdce8]
// 00a3ae25  85c0                 test eax, eax
// 00a3ae27  7409                 je 0xa3ae32
// 00a3ae29  50                   push eax
// 00a3ae2a  e829f2dcff           call 0x80a058
// 00a3ae2f  83c404               add esp, 4
// 00a3ae32  c705c8dccc00e0bea500 mov dword ptr [0xccdcc8], 0xa5bee0
// 00a3ae3c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
