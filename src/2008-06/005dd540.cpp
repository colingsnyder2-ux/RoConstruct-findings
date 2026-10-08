// roc 2008-06 005dd540  unit: RBX::Message  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dd540
//
// 005dd540  8bc1                 mov eax, ecx
// 005dd542  8b480c               mov ecx, dword ptr [eax + 0xc]
// 005dd545  85c9                 test ecx, ecx
// 005dd547  7406                 je 0x5dd54f
// 005dd549  50                   push eax
// 005dd54a  e8b1feffff           call 0x5dd400
// 005dd54f  c3                   ret 
// library rbxgs/util\IRenderable.cpp (function ?shouldRenderSetDirty@IRenderable@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/IRenderable.cpp
