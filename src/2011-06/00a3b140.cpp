// roc 2011-06 00a3b140  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b140
//
// 00a3b140  a140dfcc00           mov eax, dword ptr [0xccdf40]
// 00a3b145  85c0                 test eax, eax
// 00a3b147  7409                 je 0xa3b152
// 00a3b149  50                   push eax
// 00a3b14a  e809efdcff           call 0x80a058
// 00a3b14f  83c404               add esp, 4
// 00a3b152  c70524dfcc00e0bea500 mov dword ptr [0xccdf24], 0xa5bee0
// 00a3b15c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
