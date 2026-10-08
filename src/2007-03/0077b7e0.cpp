// roc 2007-03 0077b7e0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077b7e0
//
// 0077b7e0  a15c068c00           mov eax, dword ptr [0x8c065c]
// 0077b7e5  50                   push eax
// 0077b7e6  e80529eaff           call 0x61e0f0
// 0077b7eb  83c404               add esp, 4
// 0077b7ee  c70544068c0064617800 mov dword ptr [0x8c0644], 0x786164
// 0077b7f8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
