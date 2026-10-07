// roc 2008-06 007fcf10  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fcf10
//
// 007fcf10  a184459700           mov eax, dword ptr [0x974584]
// 007fcf15  85c0                 test eax, eax
// 007fcf17  7409                 je 0x7fcf22
// 007fcf19  50                   push eax
// 007fcf1a  e85b37eaff           call 0x6a067a
// 007fcf1f  83c404               add esp, 4
// 007fcf22  c7056c45970030b78000 mov dword ptr [0x97456c], 0x80b730
// 007fcf2c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
