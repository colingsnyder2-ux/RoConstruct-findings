// roc 2007-03 00778890  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00778890
//
// 00778890  a13c8e8b00           mov eax, dword ptr [0x8b8e3c]
// 00778895  50                   push eax
// 00778896  e85558eaff           call 0x61e0f0
// 0077889b  83c404               add esp, 4
// 0077889e  c705248e8b0064617800 mov dword ptr [0x8b8e24], 0x786164
// 007788a8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
