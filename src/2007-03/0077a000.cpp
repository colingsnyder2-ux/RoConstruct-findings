// roc 2007-03 0077a000  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077a000
//
// 0077a000  a19ccc8b00           mov eax, dword ptr [0x8bcc9c]
// 0077a005  50                   push eax
// 0077a006  e8e540eaff           call 0x61e0f0
// 0077a00b  83c404               add esp, 4
// 0077a00e  c70584cc8b0064617800 mov dword ptr [0x8bcc84], 0x786164
// 0077a018  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
