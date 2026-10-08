// roc 2007-03 00778190  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00778190
//
// 00778190  a160848b00           mov eax, dword ptr [0x8b8460]
// 00778195  50                   push eax
// 00778196  e8555feaff           call 0x61e0f0
// 0077819b  83c404               add esp, 4
// 0077819e  c70548848b0064617800 mov dword ptr [0x8b8448], 0x786164
// 007781a8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
