// roc 2007-03 0077a0c0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077a0c0
//
// 0077a0c0  a1c8cb8b00           mov eax, dword ptr [0x8bcbc8]
// 0077a0c5  50                   push eax
// 0077a0c6  e82540eaff           call 0x61e0f0
// 0077a0cb  83c404               add esp, 4
// 0077a0ce  c705b0cb8b0064617800 mov dword ptr [0x8bcbb0], 0x786164
// 0077a0d8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
