// roc 2008-06 007fd790  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd790
//
// 007fd790  a16c549700           mov eax, dword ptr [0x97546c]
// 007fd795  85c0                 test eax, eax
// 007fd797  7409                 je 0x7fd7a2
// 007fd799  50                   push eax
// 007fd79a  e8db2eeaff           call 0x6a067a
// 007fd79f  83c404               add esp, 4
// 007fd7a2  c7055454970030b78000 mov dword ptr [0x975454], 0x80b730
// 007fd7ac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
