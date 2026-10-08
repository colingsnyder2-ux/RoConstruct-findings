// roc 2007-03 0077ada0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077ada0
//
// 0077ada0  a1b8f18b00           mov eax, dword ptr [0x8bf1b8]
// 0077ada5  50                   push eax
// 0077ada6  e84533eaff           call 0x61e0f0
// 0077adab  83c404               add esp, 4
// 0077adae  c7059cf18b0064617800 mov dword ptr [0x8bf19c], 0x786164
// 0077adb8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
