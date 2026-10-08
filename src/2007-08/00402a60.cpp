// from server: 100% by auto
// roc 2007-08 00402a60  unit: VCWorkspace::?$CComObject  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00402a60
//
// 00402a60  8b442404             mov eax, dword ptr [esp + 4]
// 00402a64  53                   push ebx
// 00402a65  8b18                 mov ebx, dword ptr [eax]
// 00402a67  57                   push edi
// 00402a68  8bf9                 mov edi, ecx
// 00402a6a  3b1f                 cmp ebx, dword ptr [edi]
// 00402a6c  7444                 je 0x402ab2
// 00402a6e  85db                 test ebx, ebx
// 00402a70  740c                 je 0x402a7e
// 00402a72  8d4b04               lea ecx, [ebx + 4]
// 00402a75  ba01000000           mov edx, 1
// 00402a7a  f00fc111             lock xadd dword ptr [ecx], edx
// 00402a7e  56                   push esi
// 00402a7f  8b37                 mov esi, dword ptr [edi]
// 00402a81  85f6                 test esi, esi
// 00402a83  742a                 je 0x402aaf
// 00402a85  8d4604               lea eax, [esi + 4]
// 00402a88  83c9ff               or ecx, 0xffffffff
// 00402a8b  f00fc108             lock xadd dword ptr [eax], ecx
// 00402a8f  751e                 jne 0x402aaf
// 00402a91  8b16                 mov edx, dword ptr [esi]
// 00402a93  8b4204               mov eax, dword ptr [edx + 4]
// 00402a96  8bce                 mov ecx, esi
// 00402a98  ffd0                 call eax
// 00402a9a  8d4e08               lea ecx, [esi + 8]
// 00402a9d  83caff               or edx, 0xffffffff
// 00402aa0  f00fc111             lock xadd dword ptr [ecx], edx
// 00402aa4  7509                 jne 0x402aaf
// 00402aa6  8b06                 mov eax, dword ptr [esi]
// 00402aa8  8b5008               mov edx, dword ptr [eax + 8]
// 00402aab  8bce                 mov ecx, esi
// 00402aad  ffd2                 call edx
// 00402aaf  891f                 mov dword ptr [edi], ebx
// 00402ab1  5e                   pop esi
// 00402ab2  8bc7                 mov eax, edi
// 00402ab4  5f                   pop edi
// 00402ab5  5b                   pop ebx
// 00402ab6  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??4shared_count@detail@boost@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
