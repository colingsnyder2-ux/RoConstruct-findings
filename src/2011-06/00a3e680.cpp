// roc 2011-06 00a3e680  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e680
//
// 00a3e680  a10c38cd00           mov eax, dword ptr [0xcd380c]
// 00a3e685  85c0                 test eax, eax
// 00a3e687  7409                 je 0xa3e692
// 00a3e689  50                   push eax
// 00a3e68a  e8c9b9dcff           call 0x80a058
// 00a3e68f  83c404               add esp, 4
// 00a3e692  c705f037cd00e0bea500 mov dword ptr [0xcd37f0], 0xa5bee0
// 00a3e69c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
