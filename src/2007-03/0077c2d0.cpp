// roc 2007-03 0077c2d0  unit: seg_00770000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0077c2d0
//
// 0077c2d0  a1902c8c00           mov eax, dword ptr [0x8c2c90]
// 0077c2d5  50                   push eax
// 0077c2d6  e8a570d7ff           call 0x4f3380
// 0077c2db  33c0                 xor eax, eax
// 0077c2dd  83c404               add esp, 4
// 0077c2e0  a3902c8c00           mov dword ptr [0x8c2c90], eax
// 0077c2e5  a3942c8c00           mov dword ptr [0x8c2c94], eax
// 0077c2ea  a3982c8c00           mov dword ptr [0x8c2c98], eax
// 0077c2ef  c3                   ret 
// library rbxgs-render/Chunk.cpp (function ??__FshadowVertex@?6??renderShadows@AggregateChunk@Render@RBX@@UAEXPAVRenderDevice@G3D@@ABVGLight@5@_NM@Z@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Chunk.cpp
