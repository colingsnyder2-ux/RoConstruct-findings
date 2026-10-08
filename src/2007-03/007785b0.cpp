// roc 2007-03 007785b0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007785b0
//
// 007785b0  a1e8878b00           mov eax, dword ptr [0x8b87e8]
// 007785b5  50                   push eax
// 007785b6  e8355beaff           call 0x61e0f0
// 007785bb  83c404               add esp, 4
// 007785be  c705d0878b0064617800 mov dword ptr [0x8b87d0], 0x786164
// 007785c8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
