// roc 2009-12 004cc680  unit: G3D::VARArea  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cc680
//
// 004cc680  56                   push esi
// 004cc681  8bf1                 mov esi, ecx
// 004cc683  8b4634               mov eax, dword ptr [esi + 0x34]
// 004cc686  014678               add dword ptr [esi + 0x78], eax
// 004cc689  014670               add dword ptr [esi + 0x70], eax
// 004cc68c  50                   push eax
// 004cc68d  8b4630               mov eax, dword ptr [esi + 0x30]
// 004cc690  50                   push eax
// 004cc691  e84af5ffff           call 0x4cbbe0
// 004cc696  ff15e4ba9800         call dword ptr [0x98bae4]
// 004cc69c  8b8e88040000         mov ecx, dword ptr [esi + 0x488]
// 004cc6a2  c6861001000000       mov byte ptr [esi + 0x110], 0
// 004cc6a9  85c9                 test ecx, ecx
// 004cc6ab  7416                 je 0x4cc6c3
// 004cc6ad  c6861101000001       mov byte ptr [esi + 0x111], 1
// 004cc6b4  8b11                 mov edx, dword ptr [ecx]
// 004cc6b6  8b4214               mov eax, dword ptr [edx + 0x14]
// 004cc6b9  56                   push esi
// 004cc6ba  ffd0                 call eax
// 004cc6bc  c6861101000000       mov byte ptr [esi + 0x111], 0
// 004cc6c3  5e                   pop esi
// 004cc6c4  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?endPrimitive@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
