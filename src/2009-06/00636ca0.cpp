// roc 2009-06 00636ca0  unit: RBX::VScriptContext::?$FactoryProduct  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00636ca0
//
// 00636ca0  53                   push ebx
// 00636ca1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00636ca5  57                   push edi
// 00636ca6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00636caa  3bfb                 cmp edi, ebx
// 00636cac  743b                 je 0x636ce9
// 00636cae  56                   push esi
// 00636caf  90                   nop 
// 00636cb0  8b7704               mov esi, dword ptr [edi + 4]
// 00636cb3  85f6                 test esi, esi
// 00636cb5  742a                 je 0x636ce1
// 00636cb7  8d4604               lea eax, [esi + 4]
// 00636cba  83c9ff               or ecx, 0xffffffff
// 00636cbd  f00fc108             lock xadd dword ptr [eax], ecx
// 00636cc1  751e                 jne 0x636ce1
// 00636cc3  8b16                 mov edx, dword ptr [esi]
// 00636cc5  8b4204               mov eax, dword ptr [edx + 4]
// 00636cc8  8bce                 mov ecx, esi
// 00636cca  ffd0                 call eax
// 00636ccc  8d4e08               lea ecx, [esi + 8]
// 00636ccf  83caff               or edx, 0xffffffff
// 00636cd2  f00fc111             lock xadd dword ptr [ecx], edx
// 00636cd6  7509                 jne 0x636ce1
// 00636cd8  8b06                 mov eax, dword ptr [esi]
// 00636cda  8b5008               mov edx, dword ptr [eax + 8]
// 00636cdd  8bce                 mov ecx, esi
// 00636cdf  ffd2                 call edx
// 00636ce1  83c708               add edi, 8
// 00636ce4  3bfb                 cmp edi, ebx
// 00636ce6  75c8                 jne 0x636cb0
// 00636ce8  5e                   pop esi
// 00636ce9  5f                   pop edi
// 00636cea  5b                   pop ebx
// 00636ceb  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Destroy_range@V?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@std@@@std@@YAXPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@0AAV?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
