// roc 2007-03 0077ade0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077ade0
//
// 0077ade0  a158f18b00           mov eax, dword ptr [0x8bf158]
// 0077ade5  50                   push eax
// 0077ade6  e80533eaff           call 0x61e0f0
// 0077adeb  83c404               add esp, 4
// 0077adee  c70540f18b0064617800 mov dword ptr [0x8bf140], 0x786164
// 0077adf8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
