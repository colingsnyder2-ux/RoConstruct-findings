// from server: 100% by auto
// roc 2009-06 0057d3d0  unit: G3D::_internal::DialogTemplate  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057d3d0
//
// 0057d3d0  53                   push ebx
// 0057d3d1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0057d3d5  56                   push esi
// 0057d3d6  8bc3                 mov eax, ebx
// 0057d3d8  57                   push edi
// 0057d3d9  8bf1                 mov esi, ecx
// 0057d3db  8d5001               lea edx, [eax + 1]
// 0057d3de  8bff                 mov edi, edi
// 0057d3e0  8a08                 mov cl, byte ptr [eax]
// 0057d3e2  40                   inc eax
// 0057d3e3  84c9                 test cl, cl
// 0057d3e5  75f9                 jne 0x57d3e0
// 0057d3e7  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0057d3ea  2bc2                 sub eax, edx
// 0057d3ec  8d7801               lea edi, [eax + 1]
// 0057d3ef  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0057d3f2  03c7                 add eax, edi
// 0057d3f4  3bc8                 cmp ecx, eax
// 0057d3f6  7c02                 jl 0x57d3fa
// 0057d3f8  8bc1                 mov eax, ecx
// 0057d3fa  3b4638               cmp eax, dword ptr [esi + 0x38]
// 0057d3fd  894634               mov dword ptr [esi + 0x34], eax
// 0057d400  7e09                 jle 0x57d40b
// 0057d402  51                   push ecx
// 0057d403  57                   push edi
// 0057d404  8bce                 mov ecx, esi
// 0057d406  e8c5fdffff           call 0x57d1d0
// 0057d40b  8b4630               mov eax, dword ptr [esi + 0x30]
// 0057d40e  03463c               add eax, dword ptr [esi + 0x3c]
// 0057d411  57                   push edi
// 0057d412  53                   push ebx
// 0057d413  50                   push eax
// 0057d414  e827eafeff           call 0x56be40
// 0057d419  017e3c               add dword ptr [esi + 0x3c], edi
// 0057d41c  83c40c               add esp, 0xc
// 0057d41f  5f                   pop edi
// 0057d420  5e                   pop esi
// 0057d421  5b                   pop ebx
// 0057d422  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryOutput.cpp (function ?writeString@BinaryOutput@G3D@@QAEXPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryOutput.cpp
