// roc 2009-12 004cc2f0  unit: G3D::VARArea  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cc2f0
//
// 004cc2f0  56                   push esi
// 004cc2f1  8bf1                 mov esi, ecx
// 004cc2f3  8b8e88040000         mov ecx, dword ptr [esi + 0x488]
// 004cc2f9  85c9                 test ecx, ecx
// 004cc2fb  7416                 je 0x4cc313
// 004cc2fd  c6861101000001       mov byte ptr [esi + 0x111], 1
// 004cc304  8b01                 mov eax, dword ptr [ecx]
// 004cc306  8b5014               mov edx, dword ptr [eax + 0x14]
// 004cc309  56                   push esi
// 004cc30a  ffd2                 call edx
// 004cc30c  c6861101000000       mov byte ptr [esi + 0x111], 0
// 004cc313  5e                   pop esi
// 004cc314  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?afterPrimitive@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
