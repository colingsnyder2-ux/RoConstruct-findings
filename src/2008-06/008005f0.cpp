// roc 2008-06 008005f0  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 008005f0
//
// 008005f0  a1e0c79700           mov eax, dword ptr [0x97c7e0]
// 008005f5  85c0                 test eax, eax
// 008005f7  7409                 je 0x800602
// 008005f9  50                   push eax
// 008005fa  e87b00eaff           call 0x6a067a
// 008005ff  83c404               add esp, 4
// 00800602  c705c8c7970030b78000 mov dword ptr [0x97c7c8], 0x80b730
// 0080060c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
