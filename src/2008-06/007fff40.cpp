// roc 2008-06 007fff40  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fff40
//
// 007fff40  a1a4b79700           mov eax, dword ptr [0x97b7a4]
// 007fff45  85c0                 test eax, eax
// 007fff47  7409                 je 0x7fff52
// 007fff49  50                   push eax
// 007fff4a  e82b07eaff           call 0x6a067a
// 007fff4f  83c404               add esp, 4
// 007fff52  c7058cb7970030b78000 mov dword ptr [0x97b78c], 0x80b730
// 007fff5c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
