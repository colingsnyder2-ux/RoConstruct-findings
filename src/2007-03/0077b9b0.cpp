// roc 2007-03 0077b9b0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077b9b0
//
// 0077b9b0  a18c0d8c00           mov eax, dword ptr [0x8c0d8c]
// 0077b9b5  50                   push eax
// 0077b9b6  e83527eaff           call 0x61e0f0
// 0077b9bb  83c404               add esp, 4
// 0077b9be  c705740d8c0064617800 mov dword ptr [0x8c0d74], 0x786164
// 0077b9c8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
