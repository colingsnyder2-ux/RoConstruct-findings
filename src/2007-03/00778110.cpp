// roc 2007-03 00778110  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00778110
//
// 00778110  a178858b00           mov eax, dword ptr [0x8b8578]
// 00778115  50                   push eax
// 00778116  e8d55feaff           call 0x61e0f0
// 0077811b  83c404               add esp, 4
// 0077811e  c70560858b0064617800 mov dword ptr [0x8b8560], 0x786164
// 00778128  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
