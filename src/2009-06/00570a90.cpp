// from server: 100% by auto
// roc 2009-06 00570a90  unit: G3D::Log  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00570a90
//
// 00570a90  53                   push ebx
// 00570a91  56                   push esi
// 00570a92  8bf1                 mov esi, ecx
// 00570a94  8b4604               mov eax, dword ptr [esi + 4]
// 00570a97  57                   push edi
// 00570a98  33ff                 xor edi, edi
// 00570a9a  50                   push eax
// 00570a9b  897e08               mov dword ptr [esi + 8], edi
// 00570a9e  897e0c               mov dword ptr [esi + 0xc], edi
// 00570aa1  e8baa6ffff           call 0x56b160
// 00570aa6  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00570aaa  897e04               mov dword ptr [esi + 4], edi
// 00570aad  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00570ab0  894e08               mov dword ptr [esi + 8], ecx
// 00570ab3  8b530c               mov edx, dword ptr [ebx + 0xc]
// 00570ab6  89560c               mov dword ptr [esi + 0xc], edx
// 00570ab9  8b4310               mov eax, dword ptr [ebx + 0x10]
// 00570abc  8bfa                 mov edi, edx
// 00570abe  0faff8               imul edi, eax
// 00570ac1  0faff9               imul edi, ecx
// 00570ac4  57                   push edi
// 00570ac5  894610               mov dword ptr [esi + 0x10], eax
// 00570ac8  e873a6ffff           call 0x56b140
// 00570acd  894604               mov dword ptr [esi + 4], eax
// 00570ad0  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00570ad3  57                   push edi
// 00570ad4  51                   push ecx
// 00570ad5  50                   push eax
// 00570ad6  e8db931a00           call 0x719eb6
// 00570adb  83c414               add esp, 0x14
// 00570ade  5f                   pop edi
// 00570adf  5e                   pop esi
// 00570ae0  5b                   pop ebx
// 00570ae1  c20400               ret 4
// library g3d-6.09/G3Dcpp\GImage.cpp (function ?_copy@GImage@G3D@@AAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
