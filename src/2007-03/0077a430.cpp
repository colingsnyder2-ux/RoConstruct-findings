// roc 2007-03 0077a430  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077a430
//
// 0077a430  a100d68b00           mov eax, dword ptr [0x8bd600]
// 0077a435  50                   push eax
// 0077a436  e8b53ceaff           call 0x61e0f0
// 0077a43b  83c404               add esp, 4
// 0077a43e  c705e8d58b0064617800 mov dword ptr [0x8bd5e8], 0x786164
// 0077a448  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
