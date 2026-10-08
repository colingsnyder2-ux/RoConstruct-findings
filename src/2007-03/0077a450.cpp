// roc 2007-03 0077a450  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077a450
//
// 0077a450  a160d58b00           mov eax, dword ptr [0x8bd560]
// 0077a455  50                   push eax
// 0077a456  e8953ceaff           call 0x61e0f0
// 0077a45b  83c404               add esp, 4
// 0077a45e  c70548d58b0064617800 mov dword ptr [0x8bd548], 0x786164
// 0077a468  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
