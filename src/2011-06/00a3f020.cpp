// roc 2011-06 00a3f020  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3f020
//
// 00a3f020  a16446cd00           mov eax, dword ptr [0xcd4664]
// 00a3f025  85c0                 test eax, eax
// 00a3f027  7409                 je 0xa3f032
// 00a3f029  50                   push eax
// 00a3f02a  e829b0dcff           call 0x80a058
// 00a3f02f  83c404               add esp, 4
// 00a3f032  c7054846cd00e0bea500 mov dword ptr [0xcd4648], 0xa5bee0
// 00a3f03c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
