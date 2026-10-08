// roc 2007-03 0077ac80  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077ac80
//
// 0077ac80  a1c8ef8b00           mov eax, dword ptr [0x8befc8]
// 0077ac85  50                   push eax
// 0077ac86  e86534eaff           call 0x61e0f0
// 0077ac8b  83c404               add esp, 4
// 0077ac8e  c705b0ef8b0064617800 mov dword ptr [0x8befb0], 0x786164
// 0077ac98  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
