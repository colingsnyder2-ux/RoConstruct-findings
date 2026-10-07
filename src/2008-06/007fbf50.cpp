// roc 2008-06 007fbf50  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fbf50
//
// 007fbf50  a128129700           mov eax, dword ptr [0x971228]
// 007fbf55  85c0                 test eax, eax
// 007fbf57  7409                 je 0x7fbf62
// 007fbf59  50                   push eax
// 007fbf5a  e81b47eaff           call 0x6a067a
// 007fbf5f  83c404               add esp, 4
// 007fbf62  c7051012970030b78000 mov dword ptr [0x971210], 0x80b730
// 007fbf6c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
