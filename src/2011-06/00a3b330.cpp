// roc 2011-06 00a3b330  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b330
//
// 00a3b330  a174e5cc00           mov eax, dword ptr [0xcce574]
// 00a3b335  85c0                 test eax, eax
// 00a3b337  7409                 je 0xa3b342
// 00a3b339  50                   push eax
// 00a3b33a  e819eddcff           call 0x80a058
// 00a3b33f  83c404               add esp, 4
// 00a3b342  c70558e5cc00e0bea500 mov dword ptr [0xcce558], 0xa5bee0
// 00a3b34c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
