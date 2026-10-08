// roc 2007-03 0077ad80  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077ad80
//
// 0077ad80  a1e0f08b00           mov eax, dword ptr [0x8bf0e0]
// 0077ad85  50                   push eax
// 0077ad86  e86533eaff           call 0x61e0f0
// 0077ad8b  83c404               add esp, 4
// 0077ad8e  c705c4f08b0064617800 mov dword ptr [0x8bf0c4], 0x786164
// 0077ad98  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
