// roc 2008-06 00800630  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00800630
//
// 00800630  a1c8c69700           mov eax, dword ptr [0x97c6c8]
// 00800635  85c0                 test eax, eax
// 00800637  7409                 je 0x800642
// 00800639  50                   push eax
// 0080063a  e83b00eaff           call 0x6a067a
// 0080063f  83c404               add esp, 4
// 00800642  c705b0c6970030b78000 mov dword ptr [0x97c6b0], 0x80b730
// 0080064c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
