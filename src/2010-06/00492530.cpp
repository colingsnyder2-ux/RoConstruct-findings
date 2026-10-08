// roc 2010-06 00492530  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00492530
//
// 00492530  56                   push esi
// 00492531  6a02                 push 2
// 00492533  8bf1                 mov esi, ecx
// 00492535  ff15b0aa9e00         call dword ptr [0x9eaab0]
// 0049253b  c6861201000001       mov byte ptr [esi + 0x112], 1
// 00492542  5e                   pop esi
// 00492543  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?beginIndexedPrimitives@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
