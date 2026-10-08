// roc 2007-03 00475590  unit: seg_00470000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00475590
//
// 00475590  56                   push esi
// 00475591  8bf1                 mov esi, ecx
// 00475593  8b8e88040000         mov ecx, dword ptr [esi + 0x488]
// 00475599  85c9                 test ecx, ecx
// 0047559b  7416                 je 0x4755b3
// 0047559d  c6861101000001       mov byte ptr [esi + 0x111], 1
// 004755a4  8b01                 mov eax, dword ptr [ecx]
// 004755a6  8b5014               mov edx, dword ptr [eax + 0x14]
// 004755a9  56                   push esi
// 004755aa  ffd2                 call edx
// 004755ac  c6861101000000       mov byte ptr [esi + 0x111], 0
// 004755b3  5e                   pop esi
// 004755b4  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?afterPrimitive@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
