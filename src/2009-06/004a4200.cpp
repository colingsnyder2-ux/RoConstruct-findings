// roc 2009-06 004a4200  unit: G3D::PBVTextureFormat::?$Table  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a4200
//
// 004a4200  8b8184080000         mov eax, dword ptr [ecx + 0x884]
// 004a4206  8b9180080000         mov edx, dword ptr [ecx + 0x880]
// 004a420c  69c060070000         imul eax, eax, 0x760
// 004a4212  56                   push esi
// 004a4213  8db180080000         lea esi, [ecx + 0x880]
// 004a4219  8d8410a0f8ffff       lea eax, [eax + edx - 0x760]
// 004a4220  50                   push eax
// 004a4221  e8dad7ffff           call 0x4a1a00
// 004a4226  8b4e04               mov ecx, dword ptr [esi + 4]
// 004a4229  49                   dec ecx
// 004a422a  6a00                 push 0
// 004a422c  51                   push ecx
// 004a422d  8bce                 mov ecx, esi
// 004a422f  e8eceeffff           call 0x4a3120
// 004a4234  5e                   pop esi
// 004a4235  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?popState@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
