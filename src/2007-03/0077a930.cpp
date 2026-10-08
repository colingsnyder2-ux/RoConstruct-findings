// roc 2007-03 0077a930  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077a930
//
// 0077a930  a1e8e88b00           mov eax, dword ptr [0x8be8e8]
// 0077a935  50                   push eax
// 0077a936  e8b537eaff           call 0x61e0f0
// 0077a93b  83c404               add esp, 4
// 0077a93e  c705d0e88b0064617800 mov dword ptr [0x8be8d0], 0x786164
// 0077a948  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
