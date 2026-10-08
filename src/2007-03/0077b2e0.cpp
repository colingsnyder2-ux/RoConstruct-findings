// roc 2007-03 0077b2e0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077b2e0
//
// 0077b2e0  a120f98b00           mov eax, dword ptr [0x8bf920]
// 0077b2e5  50                   push eax
// 0077b2e6  e8052eeaff           call 0x61e0f0
// 0077b2eb  83c404               add esp, 4
// 0077b2ee  c70508f98b0064617800 mov dword ptr [0x8bf908], 0x786164
// 0077b2f8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
