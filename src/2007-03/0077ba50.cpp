// roc 2007-03 0077ba50  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077ba50
//
// 0077ba50  a19c0c8c00           mov eax, dword ptr [0x8c0c9c]
// 0077ba55  50                   push eax
// 0077ba56  e89526eaff           call 0x61e0f0
// 0077ba5b  83c404               add esp, 4
// 0077ba5e  c705840c8c0064617800 mov dword ptr [0x8c0c84], 0x786164
// 0077ba68  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
