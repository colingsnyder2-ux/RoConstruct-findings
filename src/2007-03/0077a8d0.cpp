// roc 2007-03 0077a8d0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077a8d0
//
// 0077a8d0  a110e78b00           mov eax, dword ptr [0x8be710]
// 0077a8d5  50                   push eax
// 0077a8d6  e81538eaff           call 0x61e0f0
// 0077a8db  83c404               add esp, 4
// 0077a8de  c705f8e68b0064617800 mov dword ptr [0x8be6f8], 0x786164
// 0077a8e8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
