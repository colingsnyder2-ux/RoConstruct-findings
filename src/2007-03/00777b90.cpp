// roc 2007-03 00777b90  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00777b90
//
// 00777b90  a1b4618b00           mov eax, dword ptr [0x8b61b4]
// 00777b95  50                   push eax
// 00777b96  e85565eaff           call 0x61e0f0
// 00777b9b  83c404               add esp, 4
// 00777b9e  c7059c618b0064617800 mov dword ptr [0x8b619c], 0x786164
// 00777ba8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
