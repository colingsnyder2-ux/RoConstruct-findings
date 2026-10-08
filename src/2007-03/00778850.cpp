// roc 2007-03 00778850  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00778850
//
// 00778850  a1cc8d8b00           mov eax, dword ptr [0x8b8dcc]
// 00778855  50                   push eax
// 00778856  e89558eaff           call 0x61e0f0
// 0077885b  83c404               add esp, 4
// 0077885e  c705b48d8b0064617800 mov dword ptr [0x8b8db4], 0x786164
// 00778868  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
