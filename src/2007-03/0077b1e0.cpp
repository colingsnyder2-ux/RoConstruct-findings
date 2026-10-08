// roc 2007-03 0077b1e0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077b1e0
//
// 0077b1e0  a1ecfb8b00           mov eax, dword ptr [0x8bfbec]
// 0077b1e5  50                   push eax
// 0077b1e6  e8052feaff           call 0x61e0f0
// 0077b1eb  83c404               add esp, 4
// 0077b1ee  c705d4fb8b0064617800 mov dword ptr [0x8bfbd4], 0x786164
// 0077b1f8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
