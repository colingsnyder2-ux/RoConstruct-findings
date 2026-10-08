// roc 2007-03 0077a190  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077a190
//
// 0077a190  a114d18b00           mov eax, dword ptr [0x8bd114]
// 0077a195  50                   push eax
// 0077a196  e8553feaff           call 0x61e0f0
// 0077a19b  83c404               add esp, 4
// 0077a19e  c705fcd08b0064617800 mov dword ptr [0x8bd0fc], 0x786164
// 0077a1a8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
