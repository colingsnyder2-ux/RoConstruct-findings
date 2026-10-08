// roc 2007-03 0077b700  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077b700
//
// 0077b700  a198058c00           mov eax, dword ptr [0x8c0598]
// 0077b705  50                   push eax
// 0077b706  e8e529eaff           call 0x61e0f0
// 0077b70b  83c404               add esp, 4
// 0077b70e  c70580058c0064617800 mov dword ptr [0x8c0580], 0x786164
// 0077b718  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
