// from server: 100% by auto
// roc 2009-06 00402500  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct::Creator  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00402500
//
// 00402500  8b442404             mov eax, dword ptr [esp + 4]
// 00402504  53                   push ebx
// 00402505  8b18                 mov ebx, dword ptr [eax]
// 00402507  57                   push edi
// 00402508  8bf9                 mov edi, ecx
// 0040250a  3b1f                 cmp ebx, dword ptr [edi]
// 0040250c  7444                 je 0x402552
// 0040250e  85db                 test ebx, ebx
// 00402510  740c                 je 0x40251e
// 00402512  8d4b04               lea ecx, [ebx + 4]
// 00402515  ba01000000           mov edx, 1
// 0040251a  f00fc111             lock xadd dword ptr [ecx], edx
// 0040251e  56                   push esi
// 0040251f  8b37                 mov esi, dword ptr [edi]
// 00402521  85f6                 test esi, esi
// 00402523  742a                 je 0x40254f
// 00402525  8d4604               lea eax, [esi + 4]
// 00402528  83c9ff               or ecx, 0xffffffff
// 0040252b  f00fc108             lock xadd dword ptr [eax], ecx
// 0040252f  751e                 jne 0x40254f
// 00402531  8b16                 mov edx, dword ptr [esi]
// 00402533  8b4204               mov eax, dword ptr [edx + 4]
// 00402536  8bce                 mov ecx, esi
// 00402538  ffd0                 call eax
// 0040253a  8d4e08               lea ecx, [esi + 8]
// 0040253d  83caff               or edx, 0xffffffff
// 00402540  f00fc111             lock xadd dword ptr [ecx], edx
// 00402544  7509                 jne 0x40254f
// 00402546  8b06                 mov eax, dword ptr [esi]
// 00402548  8b5008               mov edx, dword ptr [eax + 8]
// 0040254b  8bce                 mov ecx, esi
// 0040254d  ffd2                 call edx
// 0040254f  891f                 mov dword ptr [edi], ebx
// 00402551  5e                   pop esi
// 00402552  8bc7                 mov eax, edi
// 00402554  5f                   pop edi
// 00402555  5b                   pop ebx
// 00402556  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??4shared_count@detail@boost@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
