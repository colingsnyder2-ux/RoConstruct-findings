// roc 2007-03 00777ae0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00777ae0
//
// 00777ae0  a1445f8b00           mov eax, dword ptr [0x8b5f44]
// 00777ae5  50                   push eax
// 00777ae6  e80566eaff           call 0x61e0f0
// 00777aeb  83c404               add esp, 4
// 00777aee  c7052c5f8b0064617800 mov dword ptr [0x8b5f2c], 0x786164
// 00777af8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
