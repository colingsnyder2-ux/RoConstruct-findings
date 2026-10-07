// roc 2011-06 00a3a620  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a620
//
// 00a3a620  a148cbcc00           mov eax, dword ptr [0xcccb48]
// 00a3a625  85c0                 test eax, eax
// 00a3a627  7409                 je 0xa3a632
// 00a3a629  50                   push eax
// 00a3a62a  e829fadcff           call 0x80a058
// 00a3a62f  83c404               add esp, 4
// 00a3a632  c7052ccbcc00e0bea500 mov dword ptr [0xcccb2c], 0xa5bee0
// 00a3a63c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
