// roc 2008-06 00800150  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00800150
//
// 00800150  a1b0b99700           mov eax, dword ptr [0x97b9b0]
// 00800155  85c0                 test eax, eax
// 00800157  7409                 je 0x800162
// 00800159  50                   push eax
// 0080015a  e81b05eaff           call 0x6a067a
// 0080015f  83c404               add esp, 4
// 00800162  c70594b9970030b78000 mov dword ptr [0x97b994], 0x80b730
// 0080016c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
