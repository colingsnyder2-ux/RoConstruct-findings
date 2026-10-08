// roc 2007-03 0077b6e0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077b6e0
//
// 0077b6e0  a1ec058c00           mov eax, dword ptr [0x8c05ec]
// 0077b6e5  50                   push eax
// 0077b6e6  e8052aeaff           call 0x61e0f0
// 0077b6eb  83c404               add esp, 4
// 0077b6ee  c705d4058c0064617800 mov dword ptr [0x8c05d4], 0x786164
// 0077b6f8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
