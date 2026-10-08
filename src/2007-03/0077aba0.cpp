// roc 2007-03 0077aba0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077aba0
//
// 0077aba0  a1a8ed8b00           mov eax, dword ptr [0x8beda8]
// 0077aba5  50                   push eax
// 0077aba6  e84535eaff           call 0x61e0f0
// 0077abab  83c404               add esp, 4
// 0077abae  c70590ed8b0064617800 mov dword ptr [0x8bed90], 0x786164
// 0077abb8  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
