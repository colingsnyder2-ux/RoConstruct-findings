// from server: 100% by auto
// roc 2008-06 0050e1b0  unit: seg_00500000  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0050e1b0
//
// 0050e1b0  53                   push ebx
// 0050e1b1  56                   push esi
// 0050e1b2  8bf1                 mov esi, ecx
// 0050e1b4  8b4604               mov eax, dword ptr [esi + 4]
// 0050e1b7  57                   push edi
// 0050e1b8  33ff                 xor edi, edi
// 0050e1ba  50                   push eax
// 0050e1bb  897e08               mov dword ptr [esi + 8], edi
// 0050e1be  897e0c               mov dword ptr [esi + 0xc], edi
// 0050e1c1  e83a9bffff           call 0x507d00
// 0050e1c6  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0050e1ca  897e04               mov dword ptr [esi + 4], edi
// 0050e1cd  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0050e1d0  894e08               mov dword ptr [esi + 8], ecx
// 0050e1d3  8b530c               mov edx, dword ptr [ebx + 0xc]
// 0050e1d6  89560c               mov dword ptr [esi + 0xc], edx
// 0050e1d9  8b4310               mov eax, dword ptr [ebx + 0x10]
// 0050e1dc  8bfa                 mov edi, edx
// 0050e1de  0faff8               imul edi, eax
// 0050e1e1  0faff9               imul edi, ecx
// 0050e1e4  57                   push edi
// 0050e1e5  894610               mov dword ptr [esi + 0x10], eax
// 0050e1e8  e843a3ffff           call 0x508530
// 0050e1ed  894604               mov dword ptr [esi + 4], eax
// 0050e1f0  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0050e1f3  57                   push edi
// 0050e1f4  51                   push ecx
// 0050e1f5  50                   push eax
// 0050e1f6  e8e5351900           call 0x6a17e0
// 0050e1fb  83c414               add esp, 0x14
// 0050e1fe  5f                   pop edi
// 0050e1ff  5e                   pop esi
// 0050e200  5b                   pop ebx
// 0050e201  c20400               ret 4
// library g3d-6.09/G3Dcpp\GImage.cpp (function ?_copy@GImage@G3D@@AAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
