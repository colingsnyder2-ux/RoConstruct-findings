// roc 2008-06 00800790  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00800790
//
// 00800790  a1b0c99700           mov eax, dword ptr [0x97c9b0]
// 00800795  85c0                 test eax, eax
// 00800797  7409                 je 0x8007a2
// 00800799  50                   push eax
// 0080079a  e8dbfee9ff           call 0x6a067a
// 0080079f  83c404               add esp, 4
// 008007a2  c70598c9970030b78000 mov dword ptr [0x97c998], 0x80b730
// 008007ac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
