// roc 2007-03 0077a8f0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077a8f0
//
// 0077a8f0  a16ce78b00           mov eax, dword ptr [0x8be76c]
// 0077a8f5  50                   push eax
// 0077a8f6  e8f537eaff           call 0x61e0f0
// 0077a8fb  83c404               add esp, 4
// 0077a8fe  c70554e78b0064617800 mov dword ptr [0x8be754], 0x786164
// 0077a908  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
