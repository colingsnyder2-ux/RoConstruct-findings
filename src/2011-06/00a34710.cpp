// roc 2011-06 00a34710  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34710
//
// 00a34710  a174b8cb00           mov eax, dword ptr [0xcbb874]
// 00a34715  85c0                 test eax, eax
// 00a34717  7409                 je 0xa34722
// 00a34719  50                   push eax
// 00a3471a  e83959ddff           call 0x80a058
// 00a3471f  83c404               add esp, 4
// 00a34722  c70558b8cb00e0bea500 mov dword ptr [0xcbb858], 0xa5bee0
// 00a3472c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
