// roc 2008-06 008007f0  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 008007f0
//
// 008007f0  a18cc79700           mov eax, dword ptr [0x97c78c]
// 008007f5  85c0                 test eax, eax
// 008007f7  7409                 je 0x800802
// 008007f9  50                   push eax
// 008007fa  e87bfee9ff           call 0x6a067a
// 008007ff  83c404               add esp, 4
// 00800802  c70574c7970030b78000 mov dword ptr [0x97c774], 0x80b730
// 0080080c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
