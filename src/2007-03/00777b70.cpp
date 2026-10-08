// roc 2007-03 00777b70  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00777b70
//
// 00777b70  a198618b00           mov eax, dword ptr [0x8b6198]
// 00777b75  50                   push eax
// 00777b76  e87565eaff           call 0x61e0f0
// 00777b7b  83c404               add esp, 4
// 00777b7e  c70580618b0064617800 mov dword ptr [0x8b6180], 0x786164
// 00777b88  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
