// roc 2011-06 00a39610  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39610
//
// 00a39610  a158afcc00           mov eax, dword ptr [0xccaf58]
// 00a39615  85c0                 test eax, eax
// 00a39617  7409                 je 0xa39622
// 00a39619  50                   push eax
// 00a3961a  e8390addff           call 0x80a058
// 00a3961f  83c404               add esp, 4
// 00a39622  c70538afcc00e0bea500 mov dword ptr [0xccaf38], 0xa5bee0
// 00a3962c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
