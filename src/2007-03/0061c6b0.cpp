// roc 2007-03 0061c6b0  unit: seg_00610000  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0061c6b0
//
// 0061c6b0  8bc1                 mov eax, ecx
// 0061c6b2  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0061c6b5  85c9                 test ecx, ecx
// 0061c6b7  7406                 je 0x61c6bf
// 0061c6b9  50                   push eax
// 0061c6ba  e891feffff           call 0x61c550
// 0061c6bf  c3                   ret 
// library rbxgs/util\IRenderable.cpp (function ?shouldRenderSetDirty@IRenderable@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/IRenderable.cpp
