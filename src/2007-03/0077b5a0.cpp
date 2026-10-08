// roc 2007-03 0077b5a0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077b5a0
//
// 0077b5a0  a1ec008c00           mov eax, dword ptr [0x8c00ec]
// 0077b5a5  50                   push eax
// 0077b5a6  e8452beaff           call 0x61e0f0
// 0077b5ab  83c404               add esp, 4
// 0077b5ae  c705d4008c0064617800 mov dword ptr [0x8c00d4], 0x786164
// 0077b5b8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
