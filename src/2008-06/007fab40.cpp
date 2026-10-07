// roc 2008-06 007fab40  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fab40
//
// 007fab40  a134d39600           mov eax, dword ptr [0x96d334]
// 007fab45  85c0                 test eax, eax
// 007fab47  7409                 je 0x7fab52
// 007fab49  50                   push eax
// 007fab4a  e82b5beaff           call 0x6a067a
// 007fab4f  83c404               add esp, 4
// 007fab52  c7051cd3960030b78000 mov dword ptr [0x96d31c], 0x80b730
// 007fab5c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
