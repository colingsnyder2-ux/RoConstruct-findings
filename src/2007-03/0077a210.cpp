// roc 2007-03 0077a210  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077a210
//
// 0077a210  a104d38b00           mov eax, dword ptr [0x8bd304]
// 0077a215  50                   push eax
// 0077a216  e8d53eeaff           call 0x61e0f0
// 0077a21b  83c404               add esp, 4
// 0077a21e  c705e8d28b0064617800 mov dword ptr [0x8bd2e8], 0x786164
// 0077a228  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
