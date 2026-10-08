// roc 2007-03 0077aa70  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077aa70
//
// 0077aa70  a13ceb8b00           mov eax, dword ptr [0x8beb3c]
// 0077aa75  50                   push eax
// 0077aa76  e87536eaff           call 0x61e0f0
// 0077aa7b  83c404               add esp, 4
// 0077aa7e  c70524eb8b0064617800 mov dword ptr [0x8beb24], 0x786164
// 0077aa88  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
