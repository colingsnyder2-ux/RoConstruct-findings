// roc 2008-06 007fa230  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fa230
//
// 007fa230  a1c4cb9600           mov eax, dword ptr [0x96cbc4]
// 007fa235  85c0                 test eax, eax
// 007fa237  7409                 je 0x7fa242
// 007fa239  50                   push eax
// 007fa23a  e83b64eaff           call 0x6a067a
// 007fa23f  83c404               add esp, 4
// 007fa242  c705accb960030b78000 mov dword ptr [0x96cbac], 0x80b730
// 007fa24c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
