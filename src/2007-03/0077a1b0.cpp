// roc 2007-03 0077a1b0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077a1b0
//
// 0077a1b0  a130d18b00           mov eax, dword ptr [0x8bd130]
// 0077a1b5  50                   push eax
// 0077a1b6  e8353feaff           call 0x61e0f0
// 0077a1bb  83c404               add esp, 4
// 0077a1be  c70518d18b0064617800 mov dword ptr [0x8bd118], 0x786164
// 0077a1c8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
