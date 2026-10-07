// roc 2008-06 007facf0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007facf0
//
// 007facf0  a17cd49600           mov eax, dword ptr [0x96d47c]
// 007facf5  85c0                 test eax, eax
// 007facf7  7409                 je 0x7fad02
// 007facf9  50                   push eax
// 007facfa  e87b59eaff           call 0x6a067a
// 007facff  83c404               add esp, 4
// 007fad02  c70564d4960030b78000 mov dword ptr [0x96d464], 0x80b730
// 007fad0c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
