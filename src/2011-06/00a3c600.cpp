// roc 2011-06 00a3c600  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c600
//
// 00a3c600  a14c04cd00           mov eax, dword ptr [0xcd044c]
// 00a3c605  85c0                 test eax, eax
// 00a3c607  7409                 je 0xa3c612
// 00a3c609  50                   push eax
// 00a3c60a  e849dadcff           call 0x80a058
// 00a3c60f  83c404               add esp, 4
// 00a3c612  c7053004cd00e0bea500 mov dword ptr [0xcd0430], 0xa5bee0
// 00a3c61c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
