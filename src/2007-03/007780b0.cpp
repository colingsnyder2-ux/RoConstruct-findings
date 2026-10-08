// roc 2007-03 007780b0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007780b0
//
// 007780b0  a124858b00           mov eax, dword ptr [0x8b8524]
// 007780b5  50                   push eax
// 007780b6  e83560eaff           call 0x61e0f0
// 007780bb  83c404               add esp, 4
// 007780be  c70508858b0064617800 mov dword ptr [0x8b8508], 0x786164
// 007780c8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
