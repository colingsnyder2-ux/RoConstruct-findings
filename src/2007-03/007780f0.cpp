// roc 2007-03 007780f0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007780f0
//
// 007780f0  a15c858b00           mov eax, dword ptr [0x8b855c]
// 007780f5  50                   push eax
// 007780f6  e8f55feaff           call 0x61e0f0
// 007780fb  83c404               add esp, 4
// 007780fe  c70544858b0064617800 mov dword ptr [0x8b8544], 0x786164
// 00778108  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
