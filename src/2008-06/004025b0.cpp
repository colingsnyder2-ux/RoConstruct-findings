// from server: 100% by auto
// roc 2008-06 004025b0  unit: std::bad_alloc  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004025b0
//
// 004025b0  8b442404             mov eax, dword ptr [esp + 4]
// 004025b4  53                   push ebx
// 004025b5  8b18                 mov ebx, dword ptr [eax]
// 004025b7  57                   push edi
// 004025b8  8bf9                 mov edi, ecx
// 004025ba  3b1f                 cmp ebx, dword ptr [edi]
// 004025bc  7444                 je 0x402602
// 004025be  85db                 test ebx, ebx
// 004025c0  740c                 je 0x4025ce
// 004025c2  8d4b04               lea ecx, [ebx + 4]
// 004025c5  ba01000000           mov edx, 1
// 004025ca  f00fc111             lock xadd dword ptr [ecx], edx
// 004025ce  56                   push esi
// 004025cf  8b37                 mov esi, dword ptr [edi]
// 004025d1  85f6                 test esi, esi
// 004025d3  742a                 je 0x4025ff
// 004025d5  8d4604               lea eax, [esi + 4]
// 004025d8  83c9ff               or ecx, 0xffffffff
// 004025db  f00fc108             lock xadd dword ptr [eax], ecx
// 004025df  751e                 jne 0x4025ff
// 004025e1  8b16                 mov edx, dword ptr [esi]
// 004025e3  8b4204               mov eax, dword ptr [edx + 4]
// 004025e6  8bce                 mov ecx, esi
// 004025e8  ffd0                 call eax
// 004025ea  8d4e08               lea ecx, [esi + 8]
// 004025ed  83caff               or edx, 0xffffffff
// 004025f0  f00fc111             lock xadd dword ptr [ecx], edx
// 004025f4  7509                 jne 0x4025ff
// 004025f6  8b06                 mov eax, dword ptr [esi]
// 004025f8  8b5008               mov edx, dword ptr [eax + 8]
// 004025fb  8bce                 mov ecx, esi
// 004025fd  ffd2                 call edx
// 004025ff  891f                 mov dword ptr [edi], ebx
// 00402601  5e                   pop esi
// 00402602  8bc7                 mov eax, edi
// 00402604  5f                   pop edi
// 00402605  5b                   pop ebx
// 00402606  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??4shared_count@detail@boost@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
