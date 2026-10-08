// roc 2007-03 0077ab20  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077ab20
//
// 0077ab20  a16cec8b00           mov eax, dword ptr [0x8bec6c]
// 0077ab25  50                   push eax
// 0077ab26  e8c535eaff           call 0x61e0f0
// 0077ab2b  83c404               add esp, 4
// 0077ab2e  c70554ec8b0064617800 mov dword ptr [0x8bec54], 0x786164
// 0077ab38  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
