// roc 2008-06 007ffb30  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ffb30
//
// 007ffb30  a138ad9700           mov eax, dword ptr [0x97ad38]
// 007ffb35  85c0                 test eax, eax
// 007ffb37  7409                 je 0x7ffb42
// 007ffb39  50                   push eax
// 007ffb3a  e83b0beaff           call 0x6a067a
// 007ffb3f  83c404               add esp, 4
// 007ffb42  c70520ad970030b78000 mov dword ptr [0x97ad20], 0x80b730
// 007ffb4c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
