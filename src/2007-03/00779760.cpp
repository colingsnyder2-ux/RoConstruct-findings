// roc 2007-03 00779760  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00779760
//
// 00779760  a1d8bb8b00           mov eax, dword ptr [0x8bbbd8]
// 00779765  50                   push eax
// 00779766  e88549eaff           call 0x61e0f0
// 0077976b  83c404               add esp, 4
// 0077976e  c705c0bb8b0064617800 mov dword ptr [0x8bbbc0], 0x786164
// 00779778  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
