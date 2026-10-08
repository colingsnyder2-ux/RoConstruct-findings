// roc 2007-03 00779860  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00779860
//
// 00779860  a1a0bb8b00           mov eax, dword ptr [0x8bbba0]
// 00779865  50                   push eax
// 00779866  e88548eaff           call 0x61e0f0
// 0077986b  83c404               add esp, 4
// 0077986e  c70588bb8b0064617800 mov dword ptr [0x8bbb88], 0x786164
// 00779878  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
