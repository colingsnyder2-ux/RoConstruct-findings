// roc 2011-06 00a35310  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35310
//
// 00a35310  a194cfcb00           mov eax, dword ptr [0xcbcf94]
// 00a35315  85c0                 test eax, eax
// 00a35317  7409                 je 0xa35322
// 00a35319  50                   push eax
// 00a3531a  e8394dddff           call 0x80a058
// 00a3531f  83c404               add esp, 4
// 00a35322  c70578cfcb00e0bea500 mov dword ptr [0xcbcf78], 0xa5bee0
// 00a3532c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
