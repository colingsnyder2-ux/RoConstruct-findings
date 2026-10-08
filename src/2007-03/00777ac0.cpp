// roc 2007-03 00777ac0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00777ac0
//
// 00777ac0  a1605f8b00           mov eax, dword ptr [0x8b5f60]
// 00777ac5  50                   push eax
// 00777ac6  e82566eaff           call 0x61e0f0
// 00777acb  83c404               add esp, 4
// 00777ace  c705485f8b0064617800 mov dword ptr [0x8b5f48], 0x786164
// 00777ad8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
