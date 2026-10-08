// roc 2007-03 0077ae00  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077ae00
//
// 0077ae00  a120f18b00           mov eax, dword ptr [0x8bf120]
// 0077ae05  50                   push eax
// 0077ae06  e8e532eaff           call 0x61e0f0
// 0077ae0b  83c404               add esp, 4
// 0077ae0e  c70508f18b0064617800 mov dword ptr [0x8bf108], 0x786164
// 0077ae18  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
