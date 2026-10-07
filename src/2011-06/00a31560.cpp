// roc 2011-06 00a31560  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a31560
//
// 00a31560  a1a835cb00           mov eax, dword ptr [0xcb35a8]
// 00a31565  85c0                 test eax, eax
// 00a31567  7409                 je 0xa31572
// 00a31569  50                   push eax
// 00a3156a  e8e98addff           call 0x80a058
// 00a3156f  83c404               add esp, 4
// 00a31572  c7058c35cb00e0bea500 mov dword ptr [0xcb358c], 0xa5bee0
// 00a3157c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
