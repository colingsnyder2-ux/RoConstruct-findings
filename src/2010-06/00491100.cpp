// roc 2010-06 00491100  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00491100
//
// 00491100  56                   push esi
// 00491101  8bf1                 mov esi, ecx
// 00491103  57                   push edi
// 00491104  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00491108  b901000000           mov ecx, 1
// 0049110d  014e78               add dword ptr [esi + 0x78], ecx
// 00491110  3bbe18040000         cmp edi, dword ptr [esi + 0x418]
// 00491116  7465                 je 0x49117d
// 00491118  014e70               add dword ptr [esi + 0x70], ecx
// 0049111b  8bc7                 mov eax, edi
// 0049111d  83e800               sub eax, 0
// 00491120  743f                 je 0x491161
// 00491122  2bc1                 sub eax, ecx
// 00491124  741a                 je 0x491140
// 00491126  2bc1                 sub eax, ecx
// 00491128  754d                 jne 0x491177
// 0049112a  68440b0000           push 0xb44
// 0049112f  ff15e0aa9e00         call dword ptr [0x9eaae0]
// 00491135  89be18040000         mov dword ptr [esi + 0x418], edi
// 0049113b  5f                   pop edi
// 0049113c  5e                   pop esi
// 0049113d  c20400               ret 4
// 00491140  68440b0000           push 0xb44
// 00491145  ff15ecaa9e00         call dword ptr [0x9eaaec]
// 0049114b  6805040000           push 0x405
// 00491150  ff1584ab9e00         call dword ptr [0x9eab84]
// 00491156  89be18040000         mov dword ptr [esi + 0x418], edi
// 0049115c  5f                   pop edi
// 0049115d  5e                   pop esi
// 0049115e  c20400               ret 4
// 00491161  68440b0000           push 0xb44
// 00491166  ff15ecaa9e00         call dword ptr [0x9eaaec]
// 0049116c  6804040000           push 0x404
// 00491171  ff1584ab9e00         call dword ptr [0x9eab84]
// 00491177  89be18040000         mov dword ptr [esi + 0x418], edi
// 0049117d  5f                   pop edi
// 0049117e  5e                   pop esi
// 0049117f  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setCullFace@RenderDevice@G3D@@QAEXW4CullFace@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
