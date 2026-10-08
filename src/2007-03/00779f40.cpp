// roc 2007-03 00779f40  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00779f40
//
// 00779f40  a1e8cb8b00           mov eax, dword ptr [0x8bcbe8]
// 00779f45  50                   push eax
// 00779f46  e8a541eaff           call 0x61e0f0
// 00779f4b  83c404               add esp, 4
// 00779f4e  c705cccb8b0064617800 mov dword ptr [0x8bcbcc], 0x786164
// 00779f58  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
