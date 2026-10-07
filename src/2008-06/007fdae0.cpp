// roc 2008-06 007fdae0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fdae0
//
// 007fdae0  a1645f9700           mov eax, dword ptr [0x975f64]
// 007fdae5  85c0                 test eax, eax
// 007fdae7  7409                 je 0x7fdaf2
// 007fdae9  50                   push eax
// 007fdaea  e88b2beaff           call 0x6a067a
// 007fdaef  83c404               add esp, 4
// 007fdaf2  c7054c5f970030b78000 mov dword ptr [0x975f4c], 0x80b730
// 007fdafc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
