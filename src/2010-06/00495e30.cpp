// roc 2010-06 00495e30  unit: seg_00490000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00495e30
//
// 00495e30  56                   push esi
// 00495e31  8bf1                 mov esi, ecx
// 00495e33  e808fcffff           call 0x495a40
// 00495e38  8b8e84040000         mov ecx, dword ptr [esi + 0x484]
// 00495e3e  85c9                 test ecx, ecx
// 00495e40  7408                 je 0x495e4a
// 00495e42  8b01                 mov eax, dword ptr [ecx]
// 00495e44  8b5004               mov edx, dword ptr [eax + 4]
// 00495e47  56                   push esi
// 00495e48  ffd2                 call edx
// 00495e4a  8b442408             mov eax, dword ptr [esp + 8]
// 00495e4e  c6861001000001       mov byte ptr [esi + 0x110], 1
// 00495e55  c7463400000000       mov dword ptr [esi + 0x34], 0
// 00495e5c  894630               mov dword ptr [esi + 0x30], eax
// 00495e5f  e80cafffff           call 0x490d70
// 00495e64  5e                   pop esi
// 00495e65  89442404             mov dword ptr [esp + 4], eax
// 00495e69  ff251cab9e00         jmp dword ptr [0x9eab1c]
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?beginPrimitive@RenderDevice@G3D@@QAEXW4Primitive@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
