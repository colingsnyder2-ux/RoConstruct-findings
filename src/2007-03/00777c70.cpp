// roc 2007-03 00777c70  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00777c70
//
// 00777c70  a160618b00           mov eax, dword ptr [0x8b6160]
// 00777c75  50                   push eax
// 00777c76  e87564eaff           call 0x61e0f0
// 00777c7b  83c404               add esp, 4
// 00777c7e  c70548618b0064617800 mov dword ptr [0x8b6148], 0x786164
// 00777c88  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
