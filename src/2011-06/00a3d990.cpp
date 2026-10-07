// roc 2011-06 00a3d990  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d990
//
// 00a3d990  a1fc27cd00           mov eax, dword ptr [0xcd27fc]
// 00a3d995  85c0                 test eax, eax
// 00a3d997  7409                 je 0xa3d9a2
// 00a3d999  50                   push eax
// 00a3d99a  e8b9c6dcff           call 0x80a058
// 00a3d99f  83c404               add esp, 4
// 00a3d9a2  c705dc27cd00e0bea500 mov dword ptr [0xcd27dc], 0xa5bee0
// 00a3d9ac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
