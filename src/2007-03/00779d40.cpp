// roc 2007-03 00779d40  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00779d40
//
// 00779d40  a144ca8b00           mov eax, dword ptr [0x8bca44]
// 00779d45  50                   push eax
// 00779d46  e8a543eaff           call 0x61e0f0
// 00779d4b  83c404               add esp, 4
// 00779d4e  c7052cca8b0064617800 mov dword ptr [0x8bca2c], 0x786164
// 00779d58  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
