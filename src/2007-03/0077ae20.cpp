// roc 2007-03 0077ae20  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077ae20
//
// 0077ae20  a198f18b00           mov eax, dword ptr [0x8bf198]
// 0077ae25  50                   push eax
// 0077ae26  e8c532eaff           call 0x61e0f0
// 0077ae2b  83c404               add esp, 4
// 0077ae2e  c70580f18b0064617800 mov dword ptr [0x8bf180], 0x786164
// 0077ae38  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
