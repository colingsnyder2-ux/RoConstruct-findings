// roc 2007-03 0077be50  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077be50
//
// 0077be50  a1c4108c00           mov eax, dword ptr [0x8c10c4]
// 0077be55  50                   push eax
// 0077be56  e89522eaff           call 0x61e0f0
// 0077be5b  83c404               add esp, 4
// 0077be5e  c705ac108c0064617800 mov dword ptr [0x8c10ac], 0x786164
// 0077be68  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
