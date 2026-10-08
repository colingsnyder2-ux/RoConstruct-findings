// roc 2007-03 0077ac60  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077ac60
//
// 0077ac60  a100f08b00           mov eax, dword ptr [0x8bf000]
// 0077ac65  50                   push eax
// 0077ac66  e88534eaff           call 0x61e0f0
// 0077ac6b  83c404               add esp, 4
// 0077ac6e  c705e8ef8b0064617800 mov dword ptr [0x8befe8], 0x786164
// 0077ac78  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
