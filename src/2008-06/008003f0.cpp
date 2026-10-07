// roc 2008-06 008003f0  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 008003f0
//
// 008003f0  a1ecbf9700           mov eax, dword ptr [0x97bfec]
// 008003f5  85c0                 test eax, eax
// 008003f7  7409                 je 0x800402
// 008003f9  50                   push eax
// 008003fa  e87b02eaff           call 0x6a067a
// 008003ff  83c404               add esp, 4
// 00800402  c705d4bf970030b78000 mov dword ptr [0x97bfd4], 0x80b730
// 0080040c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
