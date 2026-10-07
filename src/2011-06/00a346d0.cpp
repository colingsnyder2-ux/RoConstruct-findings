// roc 2011-06 00a346d0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a346d0
//
// 00a346d0  a1c0b3cb00           mov eax, dword ptr [0xcbb3c0]
// 00a346d5  85c0                 test eax, eax
// 00a346d7  7409                 je 0xa346e2
// 00a346d9  50                   push eax
// 00a346da  e87959ddff           call 0x80a058
// 00a346df  83c404               add esp, 4
// 00a346e2  c705a4b3cb00e0bea500 mov dword ptr [0xcbb3a4], 0xa5bee0
// 00a346ec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
