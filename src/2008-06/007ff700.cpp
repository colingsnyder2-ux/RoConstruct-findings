// roc 2008-06 007ff700  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ff700
//
// 007ff700  a1b4a99700           mov eax, dword ptr [0x97a9b4]
// 007ff705  85c0                 test eax, eax
// 007ff707  7409                 je 0x7ff712
// 007ff709  50                   push eax
// 007ff70a  e86b0feaff           call 0x6a067a
// 007ff70f  83c404               add esp, 4
// 007ff712  c7059ca9970030b78000 mov dword ptr [0x97a99c], 0x80b730
// 007ff71c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
