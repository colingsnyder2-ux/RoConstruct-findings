// roc 2007-03 0077af50  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077af50
//
// 0077af50  a12cf48b00           mov eax, dword ptr [0x8bf42c]
// 0077af55  50                   push eax
// 0077af56  e89531eaff           call 0x61e0f0
// 0077af5b  83c404               add esp, 4
// 0077af5e  c70510f48b0064617800 mov dword ptr [0x8bf410], 0x786164
// 0077af68  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
