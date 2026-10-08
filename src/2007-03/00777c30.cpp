// roc 2007-03 00777c30  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00777c30
//
// 00777c30  a128618b00           mov eax, dword ptr [0x8b6128]
// 00777c35  50                   push eax
// 00777c36  e8b564eaff           call 0x61e0f0
// 00777c3b  83c404               add esp, 4
// 00777c3e  c70510618b0064617800 mov dword ptr [0x8b6110], 0x786164
// 00777c48  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
