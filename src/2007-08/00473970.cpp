// roc 2007-08 00473970  unit: G3D::VARArea  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00473970
//
// 00473970  56                   push esi
// 00473971  8bf1                 mov esi, ecx
// 00473973  b801000000           mov eax, 1
// 00473978  014678               add dword ptr [esi + 0x78], eax
// 0047397b  80bee003000000       cmp byte ptr [esi + 0x3e0], 0
// 00473982  740e                 je 0x473992
// 00473984  014670               add dword ptr [esi + 0x70], eax
// 00473987  68110c0000           push 0xc11
// 0047398c  ff154ceb7700         call dword ptr [0x77eb4c]
// 00473992  c686e003000000       mov byte ptr [esi + 0x3e0], 0
// 00473999  5e                   pop esi
// 0047399a  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?disableClip2D@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
