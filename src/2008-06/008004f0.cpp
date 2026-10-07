// roc 2008-06 008004f0  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 008004f0
//
// 008004f0  a15cc99700           mov eax, dword ptr [0x97c95c]
// 008004f5  85c0                 test eax, eax
// 008004f7  7409                 je 0x800502
// 008004f9  50                   push eax
// 008004fa  e87b01eaff           call 0x6a067a
// 008004ff  83c404               add esp, 4
// 00800502  c70544c9970030b78000 mov dword ptr [0x97c944], 0x80b730
// 0080050c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
