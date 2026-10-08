// roc 2007-03 007797e0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007797e0
//
// 007797e0  a12cbd8b00           mov eax, dword ptr [0x8bbd2c]
// 007797e5  50                   push eax
// 007797e6  e80549eaff           call 0x61e0f0
// 007797eb  83c404               add esp, 4
// 007797ee  c70510bd8b0064617800 mov dword ptr [0x8bbd10], 0x786164
// 007797f8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
