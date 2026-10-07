// roc 2008-06 007ffbf0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ffbf0
//
// 007ffbf0  a180b19700           mov eax, dword ptr [0x97b180]
// 007ffbf5  85c0                 test eax, eax
// 007ffbf7  7409                 je 0x7ffc02
// 007ffbf9  50                   push eax
// 007ffbfa  e87b0aeaff           call 0x6a067a
// 007ffbff  83c404               add esp, 4
// 007ffc02  c70564b1970030b78000 mov dword ptr [0x97b164], 0x80b730
// 007ffc0c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
