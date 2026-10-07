// roc 2008-06 007fa250  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fa250
//
// 007fa250  a1a8cb9600           mov eax, dword ptr [0x96cba8]
// 007fa255  85c0                 test eax, eax
// 007fa257  7409                 je 0x7fa262
// 007fa259  50                   push eax
// 007fa25a  e81b64eaff           call 0x6a067a
// 007fa25f  83c404               add esp, 4
// 007fa262  c70590cb960030b78000 mov dword ptr [0x96cb90], 0x80b730
// 007fa26c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
