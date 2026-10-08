// roc 2007-03 00779880  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00779880
//
// 00779880  a1b8bc8b00           mov eax, dword ptr [0x8bbcb8]
// 00779885  50                   push eax
// 00779886  e86548eaff           call 0x61e0f0
// 0077988b  83c404               add esp, 4
// 0077988e  c705a0bc8b0064617800 mov dword ptr [0x8bbca0], 0x786164
// 00779898  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
