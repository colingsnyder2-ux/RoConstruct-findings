// roc 2007-03 0077aa10  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077aa10
//
// 0077aa10  a15ceb8b00           mov eax, dword ptr [0x8beb5c]
// 0077aa15  50                   push eax
// 0077aa16  e8d536eaff           call 0x61e0f0
// 0077aa1b  83c404               add esp, 4
// 0077aa1e  c70540eb8b0064617800 mov dword ptr [0x8beb40], 0x786164
// 0077aa28  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
