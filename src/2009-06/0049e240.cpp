// roc 2009-06 0049e240  unit: G3D::VARArea  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049e240
//
// 0049e240  56                   push esi
// 0049e241  8bf1                 mov esi, ecx
// 0049e243  57                   push edi
// 0049e244  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0049e248  b901000000           mov ecx, 1
// 0049e24d  014e78               add dword ptr [esi + 0x78], ecx
// 0049e250  3bbe18040000         cmp edi, dword ptr [esi + 0x418]
// 0049e256  7465                 je 0x49e2bd
// 0049e258  014e70               add dword ptr [esi + 0x70], ecx
// 0049e25b  8bc7                 mov eax, edi
// 0049e25d  83e800               sub eax, 0
// 0049e260  743f                 je 0x49e2a1
// 0049e262  2bc1                 sub eax, ecx
// 0049e264  741a                 je 0x49e280
// 0049e266  2bc1                 sub eax, ecx
// 0049e268  754d                 jne 0x49e2b7
// 0049e26a  68440b0000           push 0xb44
// 0049e26f  ff15b8eb8900         call dword ptr [0x89ebb8]
// 0049e275  89be18040000         mov dword ptr [esi + 0x418], edi
// 0049e27b  5f                   pop edi
// 0049e27c  5e                   pop esi
// 0049e27d  c20400               ret 4
// 0049e280  68440b0000           push 0xb44
// 0049e285  ff15aceb8900         call dword ptr [0x89ebac]
// 0049e28b  6805040000           push 0x405
// 0049e290  ff1570eb8900         call dword ptr [0x89eb70]
// 0049e296  89be18040000         mov dword ptr [esi + 0x418], edi
// 0049e29c  5f                   pop edi
// 0049e29d  5e                   pop esi
// 0049e29e  c20400               ret 4
// 0049e2a1  68440b0000           push 0xb44
// 0049e2a6  ff15aceb8900         call dword ptr [0x89ebac]
// 0049e2ac  6804040000           push 0x404
// 0049e2b1  ff1570eb8900         call dword ptr [0x89eb70]
// 0049e2b7  89be18040000         mov dword ptr [esi + 0x418], edi
// 0049e2bd  5f                   pop edi
// 0049e2be  5e                   pop esi
// 0049e2bf  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setCullFace@RenderDevice@G3D@@QAEXW4CullFace@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
