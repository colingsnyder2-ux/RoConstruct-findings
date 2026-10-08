// roc 2007-03 0077a040  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077a040
//
// 0077a040  a120cc8b00           mov eax, dword ptr [0x8bcc20]
// 0077a045  50                   push eax
// 0077a046  e8a540eaff           call 0x61e0f0
// 0077a04b  83c404               add esp, 4
// 0077a04e  c70508cc8b0064617800 mov dword ptr [0x8bcc08], 0x786164
// 0077a058  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
