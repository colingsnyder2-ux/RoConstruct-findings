// roc 2007-03 00779510  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00779510
//
// 00779510  a12cb88b00           mov eax, dword ptr [0x8bb82c]
// 00779515  50                   push eax
// 00779516  e8d54beaff           call 0x61e0f0
// 0077951b  83c404               add esp, 4
// 0077951e  c70514b88b0064617800 mov dword ptr [0x8bb814], 0x786164
// 00779528  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
