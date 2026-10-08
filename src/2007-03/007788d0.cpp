// roc 2007-03 007788d0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007788d0
//
// 007788d0  a1e88d8b00           mov eax, dword ptr [0x8b8de8]
// 007788d5  50                   push eax
// 007788d6  e81558eaff           call 0x61e0f0
// 007788db  83c404               add esp, 4
// 007788de  c705d08d8b0064617800 mov dword ptr [0x8b8dd0], 0x786164
// 007788e8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
