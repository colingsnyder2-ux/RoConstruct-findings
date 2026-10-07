// roc 2011-06 00a3bd20  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3bd20
//
// 00a3bd20  a114f8cc00           mov eax, dword ptr [0xccf814]
// 00a3bd25  85c0                 test eax, eax
// 00a3bd27  7409                 je 0xa3bd32
// 00a3bd29  50                   push eax
// 00a3bd2a  e829e3dcff           call 0x80a058
// 00a3bd2f  83c404               add esp, 4
// 00a3bd32  c705f8f7cc00e0bea500 mov dword ptr [0xccf7f8], 0xa5bee0
// 00a3bd3c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
