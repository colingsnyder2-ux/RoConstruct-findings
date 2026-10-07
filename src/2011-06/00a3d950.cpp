// roc 2011-06 00a3d950  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d950
//
// 00a3d950  a1b427cd00           mov eax, dword ptr [0xcd27b4]
// 00a3d955  85c0                 test eax, eax
// 00a3d957  7409                 je 0xa3d962
// 00a3d959  50                   push eax
// 00a3d95a  e8f9c6dcff           call 0x80a058
// 00a3d95f  83c404               add esp, 4
// 00a3d962  c7059427cd00e0bea500 mov dword ptr [0xcd2794], 0xa5bee0
// 00a3d96c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
