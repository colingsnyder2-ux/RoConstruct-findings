// roc 2008-06 007fee90  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fee90
//
// 007fee90  a1ec9a9700           mov eax, dword ptr [0x979aec]
// 007fee95  85c0                 test eax, eax
// 007fee97  7409                 je 0x7feea2
// 007fee99  50                   push eax
// 007fee9a  e8db17eaff           call 0x6a067a
// 007fee9f  83c404               add esp, 4
// 007feea2  c705d49a970030b78000 mov dword ptr [0x979ad4], 0x80b730
// 007feeac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
