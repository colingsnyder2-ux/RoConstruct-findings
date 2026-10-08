// roc 2007-03 0077aa30  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077aa30
//
// 0077aa30  a120eb8b00           mov eax, dword ptr [0x8beb20]
// 0077aa35  50                   push eax
// 0077aa36  e8b536eaff           call 0x61e0f0
// 0077aa3b  83c404               add esp, 4
// 0077aa3e  c70508eb8b0064617800 mov dword ptr [0x8beb08], 0x786164
// 0077aa48  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
