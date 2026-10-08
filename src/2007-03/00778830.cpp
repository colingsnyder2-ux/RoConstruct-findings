// roc 2007-03 00778830  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00778830
//
// 00778830  a1588e8b00           mov eax, dword ptr [0x8b8e58]
// 00778835  50                   push eax
// 00778836  e8b558eaff           call 0x61e0f0
// 0077883b  83c404               add esp, 4
// 0077883e  c705408e8b0064617800 mov dword ptr [0x8b8e40], 0x786164
// 00778848  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
