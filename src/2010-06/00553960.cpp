// from server: 100% by auto
// roc 2010-06 00553960  unit: seg_00550000  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00553960
//
// 00553960  53                   push ebx
// 00553961  56                   push esi
// 00553962  8bf1                 mov esi, ecx
// 00553964  8b4604               mov eax, dword ptr [esi + 4]
// 00553967  57                   push edi
// 00553968  33ff                 xor edi, edi
// 0055396a  50                   push eax
// 0055396b  897e08               mov dword ptr [esi + 8], edi
// 0055396e  897e0c               mov dword ptr [esi + 0xc], edi
// 00553971  e83a72fbff           call 0x50abb0
// 00553976  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0055397a  897e04               mov dword ptr [esi + 4], edi
// 0055397d  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00553980  894e08               mov dword ptr [esi + 8], ecx
// 00553983  8b530c               mov edx, dword ptr [ebx + 0xc]
// 00553986  89560c               mov dword ptr [esi + 0xc], edx
// 00553989  8b4310               mov eax, dword ptr [ebx + 0x10]
// 0055398c  8bfa                 mov edi, edx
// 0055398e  0faff8               imul edi, eax
// 00553991  0faff9               imul edi, ecx
// 00553994  57                   push edi
// 00553995  894610               mov dword ptr [esi + 0x10], eax
// 00553998  e80372fbff           call 0x50aba0
// 0055399d  894604               mov dword ptr [esi + 4], eax
// 005539a0  8b4b04               mov ecx, dword ptr [ebx + 4]
// 005539a3  57                   push edi
// 005539a4  51                   push ecx
// 005539a5  50                   push eax
// 005539a6  e87b542500           call 0x7a8e26
// 005539ab  83c414               add esp, 0x14
// 005539ae  5f                   pop edi
// 005539af  5e                   pop esi
// 005539b0  5b                   pop ebx
// 005539b1  c20400               ret 4
// library g3d-6.09/G3Dcpp\GImage.cpp (function ?_copy@GImage@G3D@@AAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
