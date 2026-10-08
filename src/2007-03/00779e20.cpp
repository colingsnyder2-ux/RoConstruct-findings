// roc 2007-03 00779e20  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00779e20
//
// 00779e20  a1a0cd8b00           mov eax, dword ptr [0x8bcda0]
// 00779e25  50                   push eax
// 00779e26  e8c542eaff           call 0x61e0f0
// 00779e2b  83c404               add esp, 4
// 00779e2e  c70588cd8b0064617800 mov dword ptr [0x8bcd88], 0x786164
// 00779e38  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
