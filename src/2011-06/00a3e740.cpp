// roc 2011-06 00a3e740  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e740
//
// 00a3e740  a13839cd00           mov eax, dword ptr [0xcd3938]
// 00a3e745  85c0                 test eax, eax
// 00a3e747  7409                 je 0xa3e752
// 00a3e749  50                   push eax
// 00a3e74a  e809b9dcff           call 0x80a058
// 00a3e74f  83c404               add esp, 4
// 00a3e752  c7051c39cd00e0bea500 mov dword ptr [0xcd391c], 0xa5bee0
// 00a3e75c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
