// roc 2008-06 00801100  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00801100
//
// 00801100  a1c4d69700           mov eax, dword ptr [0x97d6c4]
// 00801105  85c0                 test eax, eax
// 00801107  7409                 je 0x801112
// 00801109  50                   push eax
// 0080110a  e86bf5e9ff           call 0x6a067a
// 0080110f  83c404               add esp, 4
// 00801112  c705acd6970030b78000 mov dword ptr [0x97d6ac], 0x80b730
// 0080111c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
