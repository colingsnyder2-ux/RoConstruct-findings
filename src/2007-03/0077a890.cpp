// roc 2007-03 0077a890  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077a890
//
// 0077a890  a130e78b00           mov eax, dword ptr [0x8be730]
// 0077a895  50                   push eax
// 0077a896  e85538eaff           call 0x61e0f0
// 0077a89b  83c404               add esp, 4
// 0077a89e  c70514e78b0064617800 mov dword ptr [0x8be714], 0x786164
// 0077a8a8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
