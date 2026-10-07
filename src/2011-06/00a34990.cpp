// roc 2011-06 00a34990  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34990
//
// 00a34990  a120b4cb00           mov eax, dword ptr [0xcbb420]
// 00a34995  85c0                 test eax, eax
// 00a34997  7409                 je 0xa349a2
// 00a34999  50                   push eax
// 00a3499a  e8b956ddff           call 0x80a058
// 00a3499f  83c404               add esp, 4
// 00a349a2  c70504b4cb00e0bea500 mov dword ptr [0xcbb404], 0xa5bee0
// 00a349ac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
