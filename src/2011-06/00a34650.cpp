// roc 2011-06 00a34650  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34650
//
// 00a34650  a100b4cb00           mov eax, dword ptr [0xcbb400]
// 00a34655  85c0                 test eax, eax
// 00a34657  7409                 je 0xa34662
// 00a34659  50                   push eax
// 00a3465a  e8f959ddff           call 0x80a058
// 00a3465f  83c404               add esp, 4
// 00a34662  c705e4b3cb00e0bea500 mov dword ptr [0xcbb3e4], 0xa5bee0
// 00a3466c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
