// roc 2011-06 00a3d390  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d390
//
// 00a3d390  a1d01ccd00           mov eax, dword ptr [0xcd1cd0]
// 00a3d395  85c0                 test eax, eax
// 00a3d397  7409                 je 0xa3d3a2
// 00a3d399  50                   push eax
// 00a3d39a  e8b9ccdcff           call 0x80a058
// 00a3d39f  83c404               add esp, 4
// 00a3d3a2  c705b41ccd00e0bea500 mov dword ptr [0xcd1cb4], 0xa5bee0
// 00a3d3ac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
