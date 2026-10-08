// roc 2007-03 00778170  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00778170
//
// 00778170  a140858b00           mov eax, dword ptr [0x8b8540]
// 00778175  50                   push eax
// 00778176  e8755feaff           call 0x61e0f0
// 0077817b  83c404               add esp, 4
// 0077817e  c70528858b0064617800 mov dword ptr [0x8b8528], 0x786164
// 00778188  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
