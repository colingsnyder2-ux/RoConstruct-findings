// roc 2007-03 0077bef0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077bef0
//
// 0077bef0  a120118c00           mov eax, dword ptr [0x8c1120]
// 0077bef5  50                   push eax
// 0077bef6  e8f521eaff           call 0x61e0f0
// 0077befb  83c404               add esp, 4
// 0077befe  c70508118c0064617800 mov dword ptr [0x8c1108], 0x786164
// 0077bf08  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
