// roc 2007-03 0077b530  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077b530
//
// 0077b530  a110ff8b00           mov eax, dword ptr [0x8bff10]
// 0077b535  50                   push eax
// 0077b536  e8b52beaff           call 0x61e0f0
// 0077b53b  83c404               add esp, 4
// 0077b53e  c705f8fe8b0064617800 mov dword ptr [0x8bfef8], 0x786164
// 0077b548  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
