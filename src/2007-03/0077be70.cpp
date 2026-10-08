// roc 2007-03 0077be70  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077be70
//
// 0077be70  a124128c00           mov eax, dword ptr [0x8c1224]
// 0077be75  50                   push eax
// 0077be76  e87522eaff           call 0x61e0f0
// 0077be7b  83c404               add esp, 4
// 0077be7e  c7050c128c0064617800 mov dword ptr [0x8c120c], 0x786164
// 0077be88  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
