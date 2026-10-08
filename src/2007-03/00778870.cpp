// roc 2007-03 00778870  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00778870
//
// 00778870  a1048e8b00           mov eax, dword ptr [0x8b8e04]
// 00778875  50                   push eax
// 00778876  e87558eaff           call 0x61e0f0
// 0077887b  83c404               add esp, 4
// 0077887e  c705ec8d8b0064617800 mov dword ptr [0x8b8dec], 0x786164
// 00778888  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
