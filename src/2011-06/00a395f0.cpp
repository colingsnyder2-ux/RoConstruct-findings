// roc 2011-06 00a395f0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a395f0
//
// 00a395f0  a1e8b4cc00           mov eax, dword ptr [0xccb4e8]
// 00a395f5  85c0                 test eax, eax
// 00a395f7  7409                 je 0xa39602
// 00a395f9  50                   push eax
// 00a395fa  e8590addff           call 0x80a058
// 00a395ff  83c404               add esp, 4
// 00a39602  c705c8b4cc00e0bea500 mov dword ptr [0xccb4c8], 0xa5bee0
// 00a3960c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
