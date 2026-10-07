// roc 2011-06 00a3b040  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b040
//
// 00a3b040  a14ce0cc00           mov eax, dword ptr [0xcce04c]
// 00a3b045  85c0                 test eax, eax
// 00a3b047  7409                 je 0xa3b052
// 00a3b049  50                   push eax
// 00a3b04a  e809f0dcff           call 0x80a058
// 00a3b04f  83c404               add esp, 4
// 00a3b052  c70530e0cc00e0bea500 mov dword ptr [0xcce030], 0xa5bee0
// 00a3b05c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
