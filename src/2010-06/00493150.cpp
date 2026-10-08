// roc 2010-06 00493150  unit: seg_00490000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00493150
//
// 00493150  56                   push esi
// 00493151  8bf1                 mov esi, ecx
// 00493153  8b4634               mov eax, dword ptr [esi + 0x34]
// 00493156  014678               add dword ptr [esi + 0x78], eax
// 00493159  014670               add dword ptr [esi + 0x70], eax
// 0049315c  50                   push eax
// 0049315d  8b4630               mov eax, dword ptr [esi + 0x30]
// 00493160  50                   push eax
// 00493161  e81af3ffff           call 0x492480
// 00493166  ff1518ab9e00         call dword ptr [0x9eab18]
// 0049316c  8b8e88040000         mov ecx, dword ptr [esi + 0x488]
// 00493172  c6861001000000       mov byte ptr [esi + 0x110], 0
// 00493179  85c9                 test ecx, ecx
// 0049317b  7416                 je 0x493193
// 0049317d  c6861101000001       mov byte ptr [esi + 0x111], 1
// 00493184  8b11                 mov edx, dword ptr [ecx]
// 00493186  8b4214               mov eax, dword ptr [edx + 0x14]
// 00493189  56                   push esi
// 0049318a  ffd0                 call eax
// 0049318c  c6861101000000       mov byte ptr [esi + 0x111], 0
// 00493193  5e                   pop esi
// 00493194  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?endPrimitive@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
