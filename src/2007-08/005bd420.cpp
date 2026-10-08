// roc 2007-08 005bd420  unit: RBX::VPVInstance::?$EnumPropDescriptor  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bd420
//
// 005bd420  8bc1                 mov eax, ecx
// 005bd422  8b480c               mov ecx, dword ptr [eax + 0xc]
// 005bd425  85c9                 test ecx, ecx
// 005bd427  7406                 je 0x5bd42f
// 005bd429  50                   push eax
// 005bd42a  e891feffff           call 0x5bd2c0
// 005bd42f  c3                   ret 
// library rbxgs/util\IRenderable.cpp (function ?shouldRenderSetDirty@IRenderable@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/IRenderable.cpp
