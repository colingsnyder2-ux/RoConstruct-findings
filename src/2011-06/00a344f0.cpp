// roc 2011-06 00a344f0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a344f0
//
// 00a344f0  a130b6cb00           mov eax, dword ptr [0xcbb630]
// 00a344f5  85c0                 test eax, eax
// 00a344f7  7409                 je 0xa34502
// 00a344f9  50                   push eax
// 00a344fa  e8595bddff           call 0x80a058
// 00a344ff  83c404               add esp, 4
// 00a34502  c70514b6cb00e0bea500 mov dword ptr [0xcbb614], 0xa5bee0
// 00a3450c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
