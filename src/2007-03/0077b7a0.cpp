// roc 2007-03 0077b7a0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077b7a0
//
// 0077b7a0  a124068c00           mov eax, dword ptr [0x8c0624]
// 0077b7a5  50                   push eax
// 0077b7a6  e84529eaff           call 0x61e0f0
// 0077b7ab  83c404               add esp, 4
// 0077b7ae  c7050c068c0064617800 mov dword ptr [0x8c060c], 0x786164
// 0077b7b8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
