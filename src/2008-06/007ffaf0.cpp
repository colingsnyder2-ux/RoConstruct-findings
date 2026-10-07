// roc 2008-06 007ffaf0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ffaf0
//
// 007ffaf0  a154ad9700           mov eax, dword ptr [0x97ad54]
// 007ffaf5  85c0                 test eax, eax
// 007ffaf7  7409                 je 0x7ffb02
// 007ffaf9  50                   push eax
// 007ffafa  e87b0beaff           call 0x6a067a
// 007ffaff  83c404               add esp, 4
// 007ffb02  c7053cad970030b78000 mov dword ptr [0x97ad3c], 0x80b730
// 007ffb0c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
