// roc 2009-12 005efa60  unit: G3D::Log  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005efa60
//
// 005efa60  53                   push ebx
// 005efa61  56                   push esi
// 005efa62  8bf1                 mov esi, ecx
// 005efa64  8b4604               mov eax, dword ptr [esi + 4]
// 005efa67  57                   push edi
// 005efa68  33ff                 xor edi, edi
// 005efa6a  50                   push eax
// 005efa6b  897e08               mov dword ptr [esi + 8], edi
// 005efa6e  897e0c               mov dword ptr [esi + 0xc], edi
// 005efa71  e82ac7f6ff           call 0x55c1a0
// 005efa76  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 005efa7a  897e04               mov dword ptr [esi + 4], edi
// 005efa7d  8b4b08               mov ecx, dword ptr [ebx + 8]
// 005efa80  894e08               mov dword ptr [esi + 8], ecx
// 005efa83  8b530c               mov edx, dword ptr [ebx + 0xc]
// 005efa86  89560c               mov dword ptr [esi + 0xc], edx
// 005efa89  8b4310               mov eax, dword ptr [ebx + 0x10]
// 005efa8c  8bfa                 mov edi, edx
// 005efa8e  0faff8               imul edi, eax
// 005efa91  0faff9               imul edi, ecx
// 005efa94  57                   push edi
// 005efa95  894610               mov dword ptr [esi + 0x10], eax
// 005efa98  e803a8ffff           call 0x5ea2a0
// 005efa9d  894604               mov dword ptr [esi + 4], eax
// 005efaa0  8b4b04               mov ecx, dword ptr [ebx + 4]
// 005efaa3  57                   push edi
// 005efaa4  51                   push ecx
// 005efaa5  50                   push eax
// 005efaa6  e83b522000           call 0x7f4ce6
// 005efaab  83c414               add esp, 0x14
// 005efaae  5f                   pop edi
// 005efaaf  5e                   pop esi
// 005efab0  5b                   pop ebx
// 005efab1  c20400               ret 4
// library g3d-6.09/G3Dcpp\GImage.cpp (function ?_copy@GImage@G3D@@AAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
