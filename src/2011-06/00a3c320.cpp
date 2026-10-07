// roc 2011-06 00a3c320  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c320
//
// 00a3c320  a12c06cd00           mov eax, dword ptr [0xcd062c]
// 00a3c325  85c0                 test eax, eax
// 00a3c327  7409                 je 0xa3c332
// 00a3c329  50                   push eax
// 00a3c32a  e829dddcff           call 0x80a058
// 00a3c32f  83c404               add esp, 4
// 00a3c332  c7051006cd00e0bea500 mov dword ptr [0xcd0610], 0xa5bee0
// 00a3c33c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
