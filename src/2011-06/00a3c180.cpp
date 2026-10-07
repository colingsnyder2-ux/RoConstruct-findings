// roc 2011-06 00a3c180  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c180
//
// 00a3c180  a1b8fecc00           mov eax, dword ptr [0xccfeb8]
// 00a3c185  85c0                 test eax, eax
// 00a3c187  7409                 je 0xa3c192
// 00a3c189  50                   push eax
// 00a3c18a  e8c9dedcff           call 0x80a058
// 00a3c18f  83c404               add esp, 4
// 00a3c192  c7059cfecc00e0bea500 mov dword ptr [0xccfe9c], 0xa5bee0
// 00a3c19c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
