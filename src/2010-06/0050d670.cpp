// roc 2010-06 0050d670  unit: RBX::Network::NetworkOwnerJob  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0050d670
//
// 0050d670  8b442404             mov eax, dword ptr [esp + 4]
// 0050d674  56                   push esi
// 0050d675  8b7004               mov esi, dword ptr [eax + 4]
// 0050d678  85f6                 test esi, esi
// 0050d67a  742a                 je 0x50d6a6
// 0050d67c  8d4e04               lea ecx, [esi + 4]
// 0050d67f  83caff               or edx, 0xffffffff
// 0050d682  f00fc111             lock xadd dword ptr [ecx], edx
// 0050d686  751e                 jne 0x50d6a6
// 0050d688  8b06                 mov eax, dword ptr [esi]
// 0050d68a  8b5004               mov edx, dword ptr [eax + 4]
// 0050d68d  8bce                 mov ecx, esi
// 0050d68f  ffd2                 call edx
// 0050d691  8d4608               lea eax, [esi + 8]
// 0050d694  83c9ff               or ecx, 0xffffffff
// 0050d697  f00fc108             lock xadd dword ptr [eax], ecx
// 0050d69b  7509                 jne 0x50d6a6
// 0050d69d  8b16                 mov edx, dword ptr [esi]
// 0050d69f  8b4208               mov eax, dword ptr [edx + 8]
// 0050d6a2  8bce                 mov ecx, esi
// 0050d6a4  ffd0                 call eax
// 0050d6a6  5e                   pop esi
// 0050d6a7  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ?destroy@?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@std@@QAEXPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
