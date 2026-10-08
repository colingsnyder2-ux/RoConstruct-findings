// roc 2009-06 0049ff70  unit: G3D::VARArea  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049ff70
//
// 0049ff70  56                   push esi
// 0049ff71  8bf1                 mov esi, ecx
// 0049ff73  8b4634               mov eax, dword ptr [esi + 0x34]
// 0049ff76  014678               add dword ptr [esi + 0x78], eax
// 0049ff79  014670               add dword ptr [esi + 0x70], eax
// 0049ff7c  50                   push eax
// 0049ff7d  8b4630               mov eax, dword ptr [esi + 0x30]
// 0049ff80  50                   push eax
// 0049ff81  e8eaf5ffff           call 0x49f570
// 0049ff86  ff150ceb8900         call dword ptr [0x89eb0c]
// 0049ff8c  8b8e88040000         mov ecx, dword ptr [esi + 0x488]
// 0049ff92  c6861001000000       mov byte ptr [esi + 0x110], 0
// 0049ff99  85c9                 test ecx, ecx
// 0049ff9b  7416                 je 0x49ffb3
// 0049ff9d  c6861101000001       mov byte ptr [esi + 0x111], 1
// 0049ffa4  8b11                 mov edx, dword ptr [ecx]
// 0049ffa6  8b4214               mov eax, dword ptr [edx + 0x14]
// 0049ffa9  56                   push esi
// 0049ffaa  ffd0                 call eax
// 0049ffac  c6861101000000       mov byte ptr [esi + 0x111], 0
// 0049ffb3  5e                   pop esi
// 0049ffb4  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?endPrimitive@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
