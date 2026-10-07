// roc 2011-06 00a3e370  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e370
//
// 00a3e370  a13833cd00           mov eax, dword ptr [0xcd3338]
// 00a3e375  85c0                 test eax, eax
// 00a3e377  7409                 je 0xa3e382
// 00a3e379  50                   push eax
// 00a3e37a  e8d9bcdcff           call 0x80a058
// 00a3e37f  83c404               add esp, 4
// 00a3e382  c7051c33cd00e0bea500 mov dword ptr [0xcd331c], 0xa5bee0
// 00a3e38c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
