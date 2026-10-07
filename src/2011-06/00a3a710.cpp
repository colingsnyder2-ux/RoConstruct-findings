// roc 2011-06 00a3a710  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a710
//
// 00a3a710  a174cecc00           mov eax, dword ptr [0xccce74]
// 00a3a715  85c0                 test eax, eax
// 00a3a717  7409                 je 0xa3a722
// 00a3a719  50                   push eax
// 00a3a71a  e839f9dcff           call 0x80a058
// 00a3a71f  83c404               add esp, 4
// 00a3a722  c70558cecc00e0bea500 mov dword ptr [0xccce58], 0xa5bee0
// 00a3a72c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
