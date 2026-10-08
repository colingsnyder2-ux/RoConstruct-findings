// roc 2009-06 00677dd0  unit: RBX::Message  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00677dd0
//
// 00677dd0  8bc1                 mov eax, ecx
// 00677dd2  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00677dd5  85c9                 test ecx, ecx
// 00677dd7  7406                 je 0x677ddf
// 00677dd9  50                   push eax
// 00677dda  e8b1feffff           call 0x677c90
// 00677ddf  c3                   ret 
// library rbxgs/util\IRenderable.cpp (function ?shouldRenderSetDirty@IRenderable@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/IRenderable.cpp
