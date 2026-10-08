// roc 2007-03 0077b380  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077b380
//
// 0077b380  a11cfa8b00           mov eax, dword ptr [0x8bfa1c]
// 0077b385  50                   push eax
// 0077b386  e8652deaff           call 0x61e0f0
// 0077b38b  83c404               add esp, 4
// 0077b38e  c70504fa8b0064617800 mov dword ptr [0x8bfa04], 0x786164
// 0077b398  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
