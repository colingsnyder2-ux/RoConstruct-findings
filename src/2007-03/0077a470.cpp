// roc 2007-03 0077a470  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077a470
//
// 0077a470  a198d58b00           mov eax, dword ptr [0x8bd598]
// 0077a475  50                   push eax
// 0077a476  e8753ceaff           call 0x61e0f0
// 0077a47b  83c404               add esp, 4
// 0077a47e  c70580d58b0064617800 mov dword ptr [0x8bd580], 0x786164
// 0077a488  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
