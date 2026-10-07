// roc 2008-06 007fbf10  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fbf10
//
// 007fbf10  a1a4139700           mov eax, dword ptr [0x9713a4]
// 007fbf15  85c0                 test eax, eax
// 007fbf17  7409                 je 0x7fbf22
// 007fbf19  50                   push eax
// 007fbf1a  e85b47eaff           call 0x6a067a
// 007fbf1f  83c404               add esp, 4
// 007fbf22  c7058c13970030b78000 mov dword ptr [0x97138c], 0x80b730
// 007fbf2c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
