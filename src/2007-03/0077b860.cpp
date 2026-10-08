// roc 2007-03 0077b860  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077b860
//
// 0077b860  a130078c00           mov eax, dword ptr [0x8c0730]
// 0077b865  50                   push eax
// 0077b866  e88528eaff           call 0x61e0f0
// 0077b86b  83c404               add esp, 4
// 0077b86e  c70518078c0064617800 mov dword ptr [0x8c0718], 0x786164
// 0077b878  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
