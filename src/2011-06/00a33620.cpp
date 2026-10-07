// roc 2011-06 00a33620  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a33620
//
// 00a33620  a1b47dcb00           mov eax, dword ptr [0xcb7db4]
// 00a33625  85c0                 test eax, eax
// 00a33627  7409                 je 0xa33632
// 00a33629  50                   push eax
// 00a3362a  e8296addff           call 0x80a058
// 00a3362f  83c404               add esp, 4
// 00a33632  c705987dcb00e0bea500 mov dword ptr [0xcb7d98], 0xa5bee0
// 00a3363c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
