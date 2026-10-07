// roc 2012-06 004026a0  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct::Creator  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004026a0
//
// 004026a0  8b442404             mov eax, dword ptr [esp + 4]
// 004026a4  53                   push ebx
// 004026a5  8b18                 mov ebx, dword ptr [eax]
// 004026a7  57                   push edi
// 004026a8  8bf9                 mov edi, ecx
// 004026aa  3b1f                 cmp ebx, dword ptr [edi]
// 004026ac  7444                 je 0x4026f2
// 004026ae  85db                 test ebx, ebx
// 004026b0  740c                 je 0x4026be
// 004026b2  8d4b04               lea ecx, [ebx + 4]
// 004026b5  ba01000000           mov edx, 1
// 004026ba  f00fc111             lock xadd dword ptr [ecx], edx
// 004026be  56                   push esi
// 004026bf  8b37                 mov esi, dword ptr [edi]
// 004026c1  85f6                 test esi, esi
// 004026c3  742a                 je 0x4026ef
// 004026c5  8d4604               lea eax, [esi + 4]
// 004026c8  83c9ff               or ecx, 0xffffffff
// 004026cb  f00fc108             lock xadd dword ptr [eax], ecx
// 004026cf  751e                 jne 0x4026ef
// 004026d1  8b16                 mov edx, dword ptr [esi]
// 004026d3  8b4204               mov eax, dword ptr [edx + 4]
// 004026d6  8bce                 mov ecx, esi
// 004026d8  ffd0                 call eax
// 004026da  8d4e08               lea ecx, [esi + 8]
// 004026dd  83caff               or edx, 0xffffffff
// 004026e0  f00fc111             lock xadd dword ptr [ecx], edx
// 004026e4  7509                 jne 0x4026ef
// 004026e6  8b06                 mov eax, dword ptr [esi]
// 004026e8  8b5008               mov edx, dword ptr [eax + 8]
// 004026eb  8bce                 mov ecx, esi
// 004026ed  ffd2                 call edx
// 004026ef  891f                 mov dword ptr [edi], ebx
// 004026f1  5e                   pop esi
// 004026f2  8bc7                 mov eax, edi
// 004026f4  5f                   pop edi
// 004026f5  5b                   pop ebx
// 004026f6  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??4shared_count@detail@boost@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
