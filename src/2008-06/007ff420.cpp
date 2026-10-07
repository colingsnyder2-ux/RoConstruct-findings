// roc 2008-06 007ff420  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ff420
//
// 007ff420  a1e4a49700           mov eax, dword ptr [0x97a4e4]
// 007ff425  85c0                 test eax, eax
// 007ff427  7409                 je 0x7ff432
// 007ff429  50                   push eax
// 007ff42a  e84b12eaff           call 0x6a067a
// 007ff42f  83c404               add esp, 4
// 007ff432  c705cca4970030b78000 mov dword ptr [0x97a4cc], 0x80b730
// 007ff43c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
