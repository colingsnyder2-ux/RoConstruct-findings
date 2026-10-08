// roc 2007-03 0077adc0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077adc0
//
// 0077adc0  a13cf18b00           mov eax, dword ptr [0x8bf13c]
// 0077adc5  50                   push eax
// 0077adc6  e82533eaff           call 0x61e0f0
// 0077adcb  83c404               add esp, 4
// 0077adce  c70524f18b0064617800 mov dword ptr [0x8bf124], 0x786164
// 0077add8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
