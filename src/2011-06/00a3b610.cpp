// roc 2011-06 00a3b610  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b610
//
// 00a3b610  a1dceccc00           mov eax, dword ptr [0xccecdc]
// 00a3b615  85c0                 test eax, eax
// 00a3b617  7409                 je 0xa3b622
// 00a3b619  50                   push eax
// 00a3b61a  e839eadcff           call 0x80a058
// 00a3b61f  83c404               add esp, 4
// 00a3b622  c705c0eccc00e0bea500 mov dword ptr [0xccecc0], 0xa5bee0
// 00a3b62c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
