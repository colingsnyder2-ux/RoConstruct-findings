// roc 2007-03 0077b7c0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077b7c0
//
// 0077b7c0  a1d0058c00           mov eax, dword ptr [0x8c05d0]
// 0077b7c5  50                   push eax
// 0077b7c6  e82529eaff           call 0x61e0f0
// 0077b7cb  83c404               add esp, 4
// 0077b7ce  c705b8058c0064617800 mov dword ptr [0x8c05b8], 0x786164
// 0077b7d8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
