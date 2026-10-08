// roc 2007-03 00779990  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00779990
//
// 00779990  a188bf8b00           mov eax, dword ptr [0x8bbf88]
// 00779995  50                   push eax
// 00779996  e85547eaff           call 0x61e0f0
// 0077999b  83c404               add esp, 4
// 0077999e  c70570bf8b0064617800 mov dword ptr [0x8bbf70], 0x786164
// 007799a8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
