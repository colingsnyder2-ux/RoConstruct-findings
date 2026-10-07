// roc 2011-06 00a31460  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a31460
//
// 00a31460  a11c36cb00           mov eax, dword ptr [0xcb361c]
// 00a31465  85c0                 test eax, eax
// 00a31467  7409                 je 0xa31472
// 00a31469  50                   push eax
// 00a3146a  e8e98bddff           call 0x80a058
// 00a3146f  83c404               add esp, 4
// 00a31472  c705fc35cb00e0bea500 mov dword ptr [0xcb35fc], 0xa5bee0
// 00a3147c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
