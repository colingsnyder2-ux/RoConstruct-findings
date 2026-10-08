// roc 2007-03 00777b00  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00777b00
//
// 00777b00  a1d05f8b00           mov eax, dword ptr [0x8b5fd0]
// 00777b05  50                   push eax
// 00777b06  e8e565eaff           call 0x61e0f0
// 00777b0b  83c404               add esp, 4
// 00777b0e  c705b85f8b0064617800 mov dword ptr [0x8b5fb8], 0x786164
// 00777b18  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
