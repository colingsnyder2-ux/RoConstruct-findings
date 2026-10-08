// roc 2009-12 004020a0  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct::Creator  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004020a0
//
// 004020a0  8b442404             mov eax, dword ptr [esp + 4]
// 004020a4  53                   push ebx
// 004020a5  8b18                 mov ebx, dword ptr [eax]
// 004020a7  57                   push edi
// 004020a8  8bf9                 mov edi, ecx
// 004020aa  3b1f                 cmp ebx, dword ptr [edi]
// 004020ac  7444                 je 0x4020f2
// 004020ae  85db                 test ebx, ebx
// 004020b0  740c                 je 0x4020be
// 004020b2  8d4b04               lea ecx, [ebx + 4]
// 004020b5  ba01000000           mov edx, 1
// 004020ba  f00fc111             lock xadd dword ptr [ecx], edx
// 004020be  56                   push esi
// 004020bf  8b37                 mov esi, dword ptr [edi]
// 004020c1  85f6                 test esi, esi
// 004020c3  742a                 je 0x4020ef
// 004020c5  8d4604               lea eax, [esi + 4]
// 004020c8  83c9ff               or ecx, 0xffffffff
// 004020cb  f00fc108             lock xadd dword ptr [eax], ecx
// 004020cf  751e                 jne 0x4020ef
// 004020d1  8b16                 mov edx, dword ptr [esi]
// 004020d3  8b4204               mov eax, dword ptr [edx + 4]
// 004020d6  8bce                 mov ecx, esi
// 004020d8  ffd0                 call eax
// 004020da  8d4e08               lea ecx, [esi + 8]
// 004020dd  83caff               or edx, 0xffffffff
// 004020e0  f00fc111             lock xadd dword ptr [ecx], edx
// 004020e4  7509                 jne 0x4020ef
// 004020e6  8b06                 mov eax, dword ptr [esi]
// 004020e8  8b5008               mov edx, dword ptr [eax + 8]
// 004020eb  8bce                 mov ecx, esi
// 004020ed  ffd2                 call edx
// 004020ef  891f                 mov dword ptr [edi], ebx
// 004020f1  5e                   pop esi
// 004020f2  8bc7                 mov eax, edi
// 004020f4  5f                   pop edi
// 004020f5  5b                   pop ebx
// 004020f6  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??4shared_count@detail@boost@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
