// roc 2011-06 00a33560  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a33560
//
// 00a33560  a1d47acb00           mov eax, dword ptr [0xcb7ad4]
// 00a33565  85c0                 test eax, eax
// 00a33567  7409                 je 0xa33572
// 00a33569  50                   push eax
// 00a3356a  e8e96addff           call 0x80a058
// 00a3356f  83c404               add esp, 4
// 00a33572  c705b87acb00e0bea500 mov dword ptr [0xcb7ab8], 0xa5bee0
// 00a3357c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
