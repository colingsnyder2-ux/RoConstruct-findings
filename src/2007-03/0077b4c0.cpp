// roc 2007-03 0077b4c0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077b4c0
//
// 0077b4c0  a1fcfc8b00           mov eax, dword ptr [0x8bfcfc]
// 0077b4c5  50                   push eax
// 0077b4c6  e8252ceaff           call 0x61e0f0
// 0077b4cb  83c404               add esp, 4
// 0077b4ce  c705e0fc8b0064617800 mov dword ptr [0x8bfce0], 0x786164
// 0077b4d8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
