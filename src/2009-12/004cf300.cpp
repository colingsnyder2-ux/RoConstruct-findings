// roc 2009-12 004cf300  unit: G3D::PBVTextureFormat::?$Table  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cf300
//
// 004cf300  56                   push esi
// 004cf301  8bf1                 mov esi, ecx
// 004cf303  e808fcffff           call 0x4cef10
// 004cf308  8b8e84040000         mov ecx, dword ptr [esi + 0x484]
// 004cf30e  85c9                 test ecx, ecx
// 004cf310  7408                 je 0x4cf31a
// 004cf312  8b01                 mov eax, dword ptr [ecx]
// 004cf314  8b5004               mov edx, dword ptr [eax + 4]
// 004cf317  56                   push esi
// 004cf318  ffd2                 call edx
// 004cf31a  8b442408             mov eax, dword ptr [esp + 8]
// 004cf31e  c6861001000001       mov byte ptr [esi + 0x110], 1
// 004cf325  c7463400000000       mov dword ptr [esi + 0x34], 0
// 004cf32c  894630               mov dword ptr [esi + 0x30], eax
// 004cf32f  e8acb1ffff           call 0x4ca4e0
// 004cf334  5e                   pop esi
// 004cf335  89442404             mov dword ptr [esp + 4], eax
// 004cf339  ff25fcba9800         jmp dword ptr [0x98bafc]
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?beginPrimitive@RenderDevice@G3D@@QAEXW4Primitive@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
