// roc 2011-06 00a33640  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a33640
//
// 00a33640  a1687ccb00           mov eax, dword ptr [0xcb7c68]
// 00a33645  85c0                 test eax, eax
// 00a33647  7409                 je 0xa33652
// 00a33649  50                   push eax
// 00a3364a  e8096addff           call 0x80a058
// 00a3364f  83c404               add esp, 4
// 00a33652  c7054c7ccb00e0bea500 mov dword ptr [0xcb7c4c], 0xa5bee0
// 00a3365c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
