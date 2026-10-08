// roc 2007-03 00778130  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00778130
//
// 00778130  a114848b00           mov eax, dword ptr [0x8b8414]
// 00778135  50                   push eax
// 00778136  e8b55feaff           call 0x61e0f0
// 0077813b  83c404               add esp, 4
// 0077813e  c705fc838b0064617800 mov dword ptr [0x8b83fc], 0x786164
// 00778148  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
