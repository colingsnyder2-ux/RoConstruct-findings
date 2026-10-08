// roc 2007-03 00779ec0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00779ec0
//
// 00779ec0  a1dcca8b00           mov eax, dword ptr [0x8bcadc]
// 00779ec5  50                   push eax
// 00779ec6  e82542eaff           call 0x61e0f0
// 00779ecb  83c404               add esp, 4
// 00779ece  c705c4ca8b0064617800 mov dword ptr [0x8bcac4], 0x786164
// 00779ed8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
