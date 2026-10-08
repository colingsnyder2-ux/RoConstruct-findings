// roc 2007-03 0077b1c0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077b1c0
//
// 0077b1c0  a124fb8b00           mov eax, dword ptr [0x8bfb24]
// 0077b1c5  50                   push eax
// 0077b1c6  e8252feaff           call 0x61e0f0
// 0077b1cb  83c404               add esp, 4
// 0077b1ce  c70508fb8b0064617800 mov dword ptr [0x8bfb08], 0x786164
// 0077b1d8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
