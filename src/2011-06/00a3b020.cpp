// roc 2011-06 00a3b020  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b020
//
// 00a3b020  a15ce1cc00           mov eax, dword ptr [0xcce15c]
// 00a3b025  85c0                 test eax, eax
// 00a3b027  7409                 je 0xa3b032
// 00a3b029  50                   push eax
// 00a3b02a  e829f0dcff           call 0x80a058
// 00a3b02f  83c404               add esp, 4
// 00a3b032  c70540e1cc00e0bea500 mov dword ptr [0xcce140], 0xa5bee0
// 00a3b03c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
