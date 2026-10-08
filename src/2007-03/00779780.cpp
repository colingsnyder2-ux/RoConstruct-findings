// roc 2007-03 00779780  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00779780
//
// 00779780  a180bc8b00           mov eax, dword ptr [0x8bbc80]
// 00779785  50                   push eax
// 00779786  e86549eaff           call 0x61e0f0
// 0077978b  83c404               add esp, 4
// 0077978e  c70568bc8b0064617800 mov dword ptr [0x8bbc68], 0x786164
// 00779798  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
