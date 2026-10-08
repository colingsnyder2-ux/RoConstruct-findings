// roc 2007-03 0077ae60  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077ae60
//
// 0077ae60  a178f08b00           mov eax, dword ptr [0x8bf078]
// 0077ae65  50                   push eax
// 0077ae66  e88532eaff           call 0x61e0f0
// 0077ae6b  83c404               add esp, 4
// 0077ae6e  c70560f08b0064617800 mov dword ptr [0x8bf060], 0x786164
// 0077ae78  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
