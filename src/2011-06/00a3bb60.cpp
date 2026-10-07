// roc 2011-06 00a3bb60  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3bb60
//
// 00a3bb60  a120f4cc00           mov eax, dword ptr [0xccf420]
// 00a3bb65  85c0                 test eax, eax
// 00a3bb67  7409                 je 0xa3bb72
// 00a3bb69  50                   push eax
// 00a3bb6a  e8e9e4dcff           call 0x80a058
// 00a3bb6f  83c404               add esp, 4
// 00a3bb72  c70504f4cc00e0bea500 mov dword ptr [0xccf404], 0xa5bee0
// 00a3bb7c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
