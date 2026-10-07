// roc 2011-06 00a34590  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34590
//
// 00a34590  a194b8cb00           mov eax, dword ptr [0xcbb894]
// 00a34595  85c0                 test eax, eax
// 00a34597  7409                 je 0xa345a2
// 00a34599  50                   push eax
// 00a3459a  e8b95addff           call 0x80a058
// 00a3459f  83c404               add esp, 4
// 00a345a2  c70578b8cb00e0bea500 mov dword ptr [0xcbb878], 0xa5bee0
// 00a345ac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
