// roc 2007-03 007788b0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007788b0
//
// 007788b0  a1208e8b00           mov eax, dword ptr [0x8b8e20]
// 007788b5  50                   push eax
// 007788b6  e83558eaff           call 0x61e0f0
// 007788bb  83c404               add esp, 4
// 007788be  c705088e8b0064617800 mov dword ptr [0x8b8e08], 0x786164
// 007788c8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
