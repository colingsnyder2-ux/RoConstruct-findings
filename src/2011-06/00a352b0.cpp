// roc 2011-06 00a352b0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a352b0
//
// 00a352b0  a1bccecb00           mov eax, dword ptr [0xcbcebc]
// 00a352b5  85c0                 test eax, eax
// 00a352b7  7409                 je 0xa352c2
// 00a352b9  50                   push eax
// 00a352ba  e8994dddff           call 0x80a058
// 00a352bf  83c404               add esp, 4
// 00a352c2  c705a0cecb00e0bea500 mov dword ptr [0xcbcea0], 0xa5bee0
// 00a352cc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
