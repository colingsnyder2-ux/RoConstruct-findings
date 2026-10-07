// roc 2011-06 00a3d3e0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d3e0
//
// 00a3d3e0  a10c1ecd00           mov eax, dword ptr [0xcd1e0c]
// 00a3d3e5  85c0                 test eax, eax
// 00a3d3e7  7409                 je 0xa3d3f2
// 00a3d3e9  50                   push eax
// 00a3d3ea  e869ccdcff           call 0x80a058
// 00a3d3ef  83c404               add esp, 4
// 00a3d3f2  c705ec1dcd00e0bea500 mov dword ptr [0xcd1dec], 0xa5bee0
// 00a3d3fc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
