// roc 2007-03 00777b20  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00777b20
//
// 00777b20  a1b45f8b00           mov eax, dword ptr [0x8b5fb4]
// 00777b25  50                   push eax
// 00777b26  e8c565eaff           call 0x61e0f0
// 00777b2b  83c404               add esp, 4
// 00777b2e  c7059c5f8b0064617800 mov dword ptr [0x8b5f9c], 0x786164
// 00777b38  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
