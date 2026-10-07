// roc 2011-06 00a31040  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a31040
//
// 00a31040  a1042acb00           mov eax, dword ptr [0xcb2a04]
// 00a31045  85c0                 test eax, eax
// 00a31047  7409                 je 0xa31052
// 00a31049  50                   push eax
// 00a3104a  e80990ddff           call 0x80a058
// 00a3104f  83c404               add esp, 4
// 00a31052  c705e829cb00e0bea500 mov dword ptr [0xcb29e8], 0xa5bee0
// 00a3105c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
