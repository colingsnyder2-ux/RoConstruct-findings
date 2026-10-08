// roc 2007-03 0077bd90  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077bd90
//
// 0077bd90  a1ec0f8c00           mov eax, dword ptr [0x8c0fec]
// 0077bd95  50                   push eax
// 0077bd96  e85523eaff           call 0x61e0f0
// 0077bd9b  83c404               add esp, 4
// 0077bd9e  c705d40f8c0064617800 mov dword ptr [0x8c0fd4], 0x786164
// 0077bda8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
