// roc 2010-06 00492dc0  unit: seg_00490000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00492dc0
//
// 00492dc0  56                   push esi
// 00492dc1  8bf1                 mov esi, ecx
// 00492dc3  8b8e88040000         mov ecx, dword ptr [esi + 0x488]
// 00492dc9  85c9                 test ecx, ecx
// 00492dcb  7416                 je 0x492de3
// 00492dcd  c6861101000001       mov byte ptr [esi + 0x111], 1
// 00492dd4  8b01                 mov eax, dword ptr [ecx]
// 00492dd6  8b5014               mov edx, dword ptr [eax + 0x14]
// 00492dd9  56                   push esi
// 00492dda  ffd2                 call edx
// 00492ddc  c6861101000000       mov byte ptr [esi + 0x111], 0
// 00492de3  5e                   pop esi
// 00492de4  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?afterPrimitive@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
