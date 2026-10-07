// roc 2008-06 007ffb10  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ffb10
//
// 007ffb10  a1c4ad9700           mov eax, dword ptr [0x97adc4]
// 007ffb15  85c0                 test eax, eax
// 007ffb17  7409                 je 0x7ffb22
// 007ffb19  50                   push eax
// 007ffb1a  e85b0beaff           call 0x6a067a
// 007ffb1f  83c404               add esp, 4
// 007ffb22  c705acad970030b78000 mov dword ptr [0x97adac], 0x80b730
// 007ffb2c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
