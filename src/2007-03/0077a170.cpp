// roc 2007-03 0077a170  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077a170
//
// 0077a170  a1f8d08b00           mov eax, dword ptr [0x8bd0f8]
// 0077a175  50                   push eax
// 0077a176  e8753feaff           call 0x61e0f0
// 0077a17b  83c404               add esp, 4
// 0077a17e  c705e0d08b0064617800 mov dword ptr [0x8bd0e0], 0x786164
// 0077a188  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
