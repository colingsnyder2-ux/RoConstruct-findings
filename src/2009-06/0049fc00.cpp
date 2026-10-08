// roc 2009-06 0049fc00  unit: G3D::VARArea  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049fc00
//
// 0049fc00  56                   push esi
// 0049fc01  8bf1                 mov esi, ecx
// 0049fc03  8b8e88040000         mov ecx, dword ptr [esi + 0x488]
// 0049fc09  85c9                 test ecx, ecx
// 0049fc0b  7416                 je 0x49fc23
// 0049fc0d  c6861101000001       mov byte ptr [esi + 0x111], 1
// 0049fc14  8b01                 mov eax, dword ptr [ecx]
// 0049fc16  8b5014               mov edx, dword ptr [eax + 0x14]
// 0049fc19  56                   push esi
// 0049fc1a  ffd2                 call edx
// 0049fc1c  c6861101000000       mov byte ptr [esi + 0x111], 0
// 0049fc23  5e                   pop esi
// 0049fc24  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?afterPrimitive@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
