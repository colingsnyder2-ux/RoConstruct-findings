// roc 2011-06 00a3b650  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b650
//
// 00a3b650  a174ebcc00           mov eax, dword ptr [0xcceb74]
// 00a3b655  85c0                 test eax, eax
// 00a3b657  7409                 je 0xa3b662
// 00a3b659  50                   push eax
// 00a3b65a  e8f9e9dcff           call 0x80a058
// 00a3b65f  83c404               add esp, 4
// 00a3b662  c70558ebcc00e0bea500 mov dword ptr [0xcceb58], 0xa5bee0
// 00a3b66c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
