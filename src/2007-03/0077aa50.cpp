// roc 2007-03 0077aa50  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077aa50
//
// 0077aa50  a19ceb8b00           mov eax, dword ptr [0x8beb9c]
// 0077aa55  50                   push eax
// 0077aa56  e89536eaff           call 0x61e0f0
// 0077aa5b  83c404               add esp, 4
// 0077aa5e  c70584eb8b0064617800 mov dword ptr [0x8beb84], 0x786164
// 0077aa68  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
