// roc 2008-06 007fe5c0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe5c0
//
// 007fe5c0  a130779700           mov eax, dword ptr [0x977730]
// 007fe5c5  85c0                 test eax, eax
// 007fe5c7  7409                 je 0x7fe5d2
// 007fe5c9  50                   push eax
// 007fe5ca  e8ab20eaff           call 0x6a067a
// 007fe5cf  83c404               add esp, 4
// 007fe5d2  c7051877970030b78000 mov dword ptr [0x977718], 0x80b730
// 007fe5dc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
