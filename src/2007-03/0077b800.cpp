// roc 2007-03 0077b800  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077b800
//
// 0077b800  a1c4068c00           mov eax, dword ptr [0x8c06c4]
// 0077b805  50                   push eax
// 0077b806  e8e528eaff           call 0x61e0f0
// 0077b80b  83c404               add esp, 4
// 0077b80e  c705ac068c0064617800 mov dword ptr [0x8c06ac], 0x786164
// 0077b818  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
