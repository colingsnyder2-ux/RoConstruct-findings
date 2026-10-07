// roc 2011-06 00a3bb80  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3bb80
//
// 00a3bb80  a1a8f4cc00           mov eax, dword ptr [0xccf4a8]
// 00a3bb85  85c0                 test eax, eax
// 00a3bb87  7409                 je 0xa3bb92
// 00a3bb89  50                   push eax
// 00a3bb8a  e8c9e4dcff           call 0x80a058
// 00a3bb8f  83c404               add esp, 4
// 00a3bb92  c7058cf4cc00e0bea500 mov dword ptr [0xccf48c], 0xa5bee0
// 00a3bb9c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
