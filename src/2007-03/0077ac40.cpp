// roc 2007-03 0077ac40  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077ac40
//
// 0077ac40  a1e8ee8b00           mov eax, dword ptr [0x8beee8]
// 0077ac45  50                   push eax
// 0077ac46  e8a534eaff           call 0x61e0f0
// 0077ac4b  83c404               add esp, 4
// 0077ac4e  c705d0ee8b0064617800 mov dword ptr [0x8beed0], 0x786164
// 0077ac58  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
