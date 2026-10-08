// roc 2007-03 007797a0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007797a0
//
// 007797a0  a1f0bc8b00           mov eax, dword ptr [0x8bbcf0]
// 007797a5  50                   push eax
// 007797a6  e84549eaff           call 0x61e0f0
// 007797ab  83c404               add esp, 4
// 007797ae  c705d8bc8b0064617800 mov dword ptr [0x8bbcd8], 0x786164
// 007797b8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
