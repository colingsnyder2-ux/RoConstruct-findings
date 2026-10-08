// roc 2008-06 00476bd0  unit: G3D::VARArea  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00476bd0
//
// 00476bd0  56                   push esi
// 00476bd1  8bf1                 mov esi, ecx
// 00476bd3  57                   push edi
// 00476bd4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00476bd8  b901000000           mov ecx, 1
// 00476bdd  014e78               add dword ptr [esi + 0x78], ecx
// 00476be0  3bbe18040000         cmp edi, dword ptr [esi + 0x418]
// 00476be6  7465                 je 0x476c4d
// 00476be8  014e70               add dword ptr [esi + 0x70], ecx
// 00476beb  8bc7                 mov eax, edi
// 00476bed  83e800               sub eax, 0
// 00476bf0  743f                 je 0x476c31
// 00476bf2  2bc1                 sub eax, ecx
// 00476bf4  741a                 je 0x476c10
// 00476bf6  2bc1                 sub eax, ecx
// 00476bf8  754d                 jne 0x476c47
// 00476bfa  68440b0000           push 0xb44
// 00476bff  ff1558298000         call dword ptr [0x802958]
// 00476c05  89be18040000         mov dword ptr [esi + 0x418], edi
// 00476c0b  5f                   pop edi
// 00476c0c  5e                   pop esi
// 00476c0d  c20400               ret 4
// 00476c10  68440b0000           push 0xb44
// 00476c15  ff1550298000         call dword ptr [0x802950]
// 00476c1b  6805040000           push 0x405
// 00476c20  ff1590298000         call dword ptr [0x802990]
// 00476c26  89be18040000         mov dword ptr [esi + 0x418], edi
// 00476c2c  5f                   pop edi
// 00476c2d  5e                   pop esi
// 00476c2e  c20400               ret 4
// 00476c31  68440b0000           push 0xb44
// 00476c36  ff1550298000         call dword ptr [0x802950]
// 00476c3c  6804040000           push 0x404
// 00476c41  ff1590298000         call dword ptr [0x802990]
// 00476c47  89be18040000         mov dword ptr [esi + 0x418], edi
// 00476c4d  5f                   pop edi
// 00476c4e  5e                   pop esi
// 00476c4f  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setCullFace@RenderDevice@G3D@@QAEXW4CullFace@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
