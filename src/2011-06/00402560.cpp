// roc 2011-06 00402560  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct::Creator  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00402560
//
// 00402560  8b442404             mov eax, dword ptr [esp + 4]
// 00402564  53                   push ebx
// 00402565  8b18                 mov ebx, dword ptr [eax]
// 00402567  57                   push edi
// 00402568  8bf9                 mov edi, ecx
// 0040256a  3b1f                 cmp ebx, dword ptr [edi]
// 0040256c  7444                 je 0x4025b2
// 0040256e  85db                 test ebx, ebx
// 00402570  740c                 je 0x40257e
// 00402572  8d4b04               lea ecx, [ebx + 4]
// 00402575  ba01000000           mov edx, 1
// 0040257a  f00fc111             lock xadd dword ptr [ecx], edx
// 0040257e  56                   push esi
// 0040257f  8b37                 mov esi, dword ptr [edi]
// 00402581  85f6                 test esi, esi
// 00402583  742a                 je 0x4025af
// 00402585  8d4604               lea eax, [esi + 4]
// 00402588  83c9ff               or ecx, 0xffffffff
// 0040258b  f00fc108             lock xadd dword ptr [eax], ecx
// 0040258f  751e                 jne 0x4025af
// 00402591  8b16                 mov edx, dword ptr [esi]
// 00402593  8b4204               mov eax, dword ptr [edx + 4]
// 00402596  8bce                 mov ecx, esi
// 00402598  ffd0                 call eax
// 0040259a  8d4e08               lea ecx, [esi + 8]
// 0040259d  83caff               or edx, 0xffffffff
// 004025a0  f00fc111             lock xadd dword ptr [ecx], edx
// 004025a4  7509                 jne 0x4025af
// 004025a6  8b06                 mov eax, dword ptr [esi]
// 004025a8  8b5008               mov edx, dword ptr [eax + 8]
// 004025ab  8bce                 mov ecx, esi
// 004025ad  ffd2                 call edx
// 004025af  891f                 mov dword ptr [edi], ebx
// 004025b1  5e                   pop esi
// 004025b2  8bc7                 mov eax, edi
// 004025b4  5f                   pop edi
// 004025b5  5b                   pop ebx
// 004025b6  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??4shared_count@detail@boost@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
