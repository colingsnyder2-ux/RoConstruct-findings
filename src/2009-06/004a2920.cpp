// roc 2009-06 004a2920  unit: G3D::PBVTextureFormat::?$Table  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a2920
//
// 004a2920  56                   push esi
// 004a2921  8bf1                 mov esi, ecx
// 004a2923  e8b8fbffff           call 0x4a24e0
// 004a2928  8b8e84040000         mov ecx, dword ptr [esi + 0x484]
// 004a292e  85c9                 test ecx, ecx
// 004a2930  7408                 je 0x4a293a
// 004a2932  8b01                 mov eax, dword ptr [ecx]
// 004a2934  8b5004               mov edx, dword ptr [eax + 4]
// 004a2937  56                   push esi
// 004a2938  ffd2                 call edx
// 004a293a  8b442408             mov eax, dword ptr [esp + 8]
// 004a293e  c6861001000001       mov byte ptr [esi + 0x110], 1
// 004a2945  c7463400000000       mov dword ptr [esi + 0x34], 0
// 004a294c  894630               mov dword ptr [esi + 0x30], eax
// 004a294f  e88cb5ffff           call 0x49dee0
// 004a2954  5e                   pop esi
// 004a2955  89442404             mov dword ptr [esp + 4], eax
// 004a2959  ff25f4ea8900         jmp dword ptr [0x89eaf4]
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?beginPrimitive@RenderDevice@G3D@@QAEXW4Primitive@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
