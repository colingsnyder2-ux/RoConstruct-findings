// from server: 100% by auto
// roc 2010-06 00402090  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct::Creator  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00402090
//
// 00402090  8b442404             mov eax, dword ptr [esp + 4]
// 00402094  53                   push ebx
// 00402095  8b18                 mov ebx, dword ptr [eax]
// 00402097  57                   push edi
// 00402098  8bf9                 mov edi, ecx
// 0040209a  3b1f                 cmp ebx, dword ptr [edi]
// 0040209c  7444                 je 0x4020e2
// 0040209e  85db                 test ebx, ebx
// 004020a0  740c                 je 0x4020ae
// 004020a2  8d4b04               lea ecx, [ebx + 4]
// 004020a5  ba01000000           mov edx, 1
// 004020aa  f00fc111             lock xadd dword ptr [ecx], edx
// 004020ae  56                   push esi
// 004020af  8b37                 mov esi, dword ptr [edi]
// 004020b1  85f6                 test esi, esi
// 004020b3  742a                 je 0x4020df
// 004020b5  8d4604               lea eax, [esi + 4]
// 004020b8  83c9ff               or ecx, 0xffffffff
// 004020bb  f00fc108             lock xadd dword ptr [eax], ecx
// 004020bf  751e                 jne 0x4020df
// 004020c1  8b16                 mov edx, dword ptr [esi]
// 004020c3  8b4204               mov eax, dword ptr [edx + 4]
// 004020c6  8bce                 mov ecx, esi
// 004020c8  ffd0                 call eax
// 004020ca  8d4e08               lea ecx, [esi + 8]
// 004020cd  83caff               or edx, 0xffffffff
// 004020d0  f00fc111             lock xadd dword ptr [ecx], edx
// 004020d4  7509                 jne 0x4020df
// 004020d6  8b06                 mov eax, dword ptr [esi]
// 004020d8  8b5008               mov edx, dword ptr [eax + 8]
// 004020db  8bce                 mov ecx, esi
// 004020dd  ffd2                 call edx
// 004020df  891f                 mov dword ptr [edi], ebx
// 004020e1  5e                   pop esi
// 004020e2  8bc7                 mov eax, edi
// 004020e4  5f                   pop edi
// 004020e5  5b                   pop ebx
// 004020e6  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??4shared_count@detail@boost@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
