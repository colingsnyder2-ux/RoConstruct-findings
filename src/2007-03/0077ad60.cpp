// roc 2007-03 0077ad60  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077ad60
//
// 0077ad60  a1fcf18b00           mov eax, dword ptr [0x8bf1fc]
// 0077ad65  50                   push eax
// 0077ad66  e88533eaff           call 0x61e0f0
// 0077ad6b  83c404               add esp, 4
// 0077ad6e  c705e0f18b0064617800 mov dword ptr [0x8bf1e0], 0x786164
// 0077ad78  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
