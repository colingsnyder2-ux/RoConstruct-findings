// roc 2007-03 007799b0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007799b0
//
// 007799b0  a1c0bf8b00           mov eax, dword ptr [0x8bbfc0]
// 007799b5  50                   push eax
// 007799b6  e83547eaff           call 0x61e0f0
// 007799bb  83c404               add esp, 4
// 007799be  c705a8bf8b0064617800 mov dword ptr [0x8bbfa8], 0x786164
// 007799c8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
