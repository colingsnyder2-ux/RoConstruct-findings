// roc 2011-06 00a33700  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a33700
//
// 00a33700  a1f47acb00           mov eax, dword ptr [0xcb7af4]
// 00a33705  85c0                 test eax, eax
// 00a33707  7409                 je 0xa33712
// 00a33709  50                   push eax
// 00a3370a  e84969ddff           call 0x80a058
// 00a3370f  83c404               add esp, 4
// 00a33712  c705d87acb00e0bea500 mov dword ptr [0xcb7ad8], 0xa5bee0
// 00a3371c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
