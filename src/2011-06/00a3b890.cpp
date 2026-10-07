// roc 2011-06 00a3b890  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b890
//
// 00a3b890  a158f1cc00           mov eax, dword ptr [0xccf158]
// 00a3b895  85c0                 test eax, eax
// 00a3b897  7409                 je 0xa3b8a2
// 00a3b899  50                   push eax
// 00a3b89a  e8b9e7dcff           call 0x80a058
// 00a3b89f  83c404               add esp, 4
// 00a3b8a2  c7053cf1cc00e0bea500 mov dword ptr [0xccf13c], 0xa5bee0
// 00a3b8ac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
