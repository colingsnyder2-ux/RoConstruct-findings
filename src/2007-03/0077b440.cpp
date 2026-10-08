// roc 2007-03 0077b440  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077b440
//
// 0077b440  a104f98b00           mov eax, dword ptr [0x8bf904]
// 0077b445  50                   push eax
// 0077b446  e8a52ceaff           call 0x61e0f0
// 0077b44b  83c404               add esp, 4
// 0077b44e  c705e8f88b0064617800 mov dword ptr [0x8bf8e8], 0x786164
// 0077b458  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
