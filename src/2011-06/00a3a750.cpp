// roc 2011-06 00a3a750  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a750
//
// 00a3a750  a154cecc00           mov eax, dword ptr [0xccce54]
// 00a3a755  85c0                 test eax, eax
// 00a3a757  7409                 je 0xa3a762
// 00a3a759  50                   push eax
// 00a3a75a  e8f9f8dcff           call 0x80a058
// 00a3a75f  83c404               add esp, 4
// 00a3a762  c70538cecc00e0bea500 mov dword ptr [0xccce38], 0xa5bee0
// 00a3a76c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
