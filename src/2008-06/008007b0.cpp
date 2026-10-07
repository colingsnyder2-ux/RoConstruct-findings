// roc 2008-06 008007b0  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 008007b0
//
// 008007b0  a1e4c89700           mov eax, dword ptr [0x97c8e4]
// 008007b5  85c0                 test eax, eax
// 008007b7  7409                 je 0x8007c2
// 008007b9  50                   push eax
// 008007ba  e8bbfee9ff           call 0x6a067a
// 008007bf  83c404               add esp, 4
// 008007c2  c705ccc8970030b78000 mov dword ptr [0x97c8cc], 0x80b730
// 008007cc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
