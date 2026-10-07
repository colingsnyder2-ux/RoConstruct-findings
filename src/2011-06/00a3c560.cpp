// roc 2011-06 00a3c560  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c560
//
// 00a3c560  a16401cd00           mov eax, dword ptr [0xcd0164]
// 00a3c565  85c0                 test eax, eax
// 00a3c567  7409                 je 0xa3c572
// 00a3c569  50                   push eax
// 00a3c56a  e8e9dadcff           call 0x80a058
// 00a3c56f  83c404               add esp, 4
// 00a3c572  c7054801cd00e0bea500 mov dword ptr [0xcd0148], 0xa5bee0
// 00a3c57c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
