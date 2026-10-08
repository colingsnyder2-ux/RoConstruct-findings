// roc 2007-03 0077beb0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077beb0
//
// 0077beb0  a160118c00           mov eax, dword ptr [0x8c1160]
// 0077beb5  50                   push eax
// 0077beb6  e83522eaff           call 0x61e0f0
// 0077bebb  83c404               add esp, 4
// 0077bebe  c70548118c0064617800 mov dword ptr [0x8c1148], 0x786164
// 0077bec8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
