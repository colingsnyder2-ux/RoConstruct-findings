// roc 2007-03 00778150  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00778150
//
// 00778150  a1f8838b00           mov eax, dword ptr [0x8b83f8]
// 00778155  50                   push eax
// 00778156  e8955feaff           call 0x61e0f0
// 0077815b  83c404               add esp, 4
// 0077815e  c705e0838b0064617800 mov dword ptr [0x8b83e0], 0x786164
// 00778168  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
