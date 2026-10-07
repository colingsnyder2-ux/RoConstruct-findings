// roc 2008-06 007fdcf0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fdcf0
//
// 007fdcf0  a1a85f9700           mov eax, dword ptr [0x975fa8]
// 007fdcf5  85c0                 test eax, eax
// 007fdcf7  7409                 je 0x7fdd02
// 007fdcf9  50                   push eax
// 007fdcfa  e87b29eaff           call 0x6a067a
// 007fdcff  83c404               add esp, 4
// 007fdd02  c705905f970030b78000 mov dword ptr [0x975f90], 0x80b730
// 007fdd0c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
