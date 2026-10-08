// roc 2007-03 0077af70  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077af70
//
// 0077af70  a1ecf38b00           mov eax, dword ptr [0x8bf3ec]
// 0077af75  50                   push eax
// 0077af76  e87531eaff           call 0x61e0f0
// 0077af7b  83c404               add esp, 4
// 0077af7e  c705d4f38b0064617800 mov dword ptr [0x8bf3d4], 0x786164
// 0077af88  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
