// roc 2007-03 0077a990  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077a990
//
// 0077a990  a190e88b00           mov eax, dword ptr [0x8be890]
// 0077a995  50                   push eax
// 0077a996  e85537eaff           call 0x61e0f0
// 0077a99b  83c404               add esp, 4
// 0077a99e  c70578e88b0064617800 mov dword ptr [0x8be878], 0x786164
// 0077a9a8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
