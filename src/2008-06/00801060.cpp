// roc 2008-06 00801060  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00801060
//
// 00801060  a114d59700           mov eax, dword ptr [0x97d514]
// 00801065  85c0                 test eax, eax
// 00801067  7409                 je 0x801072
// 00801069  50                   push eax
// 0080106a  e80bf6e9ff           call 0x6a067a
// 0080106f  83c404               add esp, 4
// 00801072  c705fcd4970030b78000 mov dword ptr [0x97d4fc], 0x80b730
// 0080107c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
