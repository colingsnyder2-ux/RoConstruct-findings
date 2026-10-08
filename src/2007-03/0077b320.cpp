// roc 2007-03 0077b320  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077b320
//
// 0077b320  a160fb8b00           mov eax, dword ptr [0x8bfb60]
// 0077b325  50                   push eax
// 0077b326  e8c52deaff           call 0x61e0f0
// 0077b32b  83c404               add esp, 4
// 0077b32e  c70544fb8b0064617800 mov dword ptr [0x8bfb44], 0x786164
// 0077b338  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
