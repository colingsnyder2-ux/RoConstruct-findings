// roc 2009-12 0055ebb0  unit: RBX::Network::NetworkOwnerJob  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0055ebb0
//
// 0055ebb0  8b442404             mov eax, dword ptr [esp + 4]
// 0055ebb4  56                   push esi
// 0055ebb5  8b7004               mov esi, dword ptr [eax + 4]
// 0055ebb8  85f6                 test esi, esi
// 0055ebba  742a                 je 0x55ebe6
// 0055ebbc  8d4e04               lea ecx, [esi + 4]
// 0055ebbf  83caff               or edx, 0xffffffff
// 0055ebc2  f00fc111             lock xadd dword ptr [ecx], edx
// 0055ebc6  751e                 jne 0x55ebe6
// 0055ebc8  8b06                 mov eax, dword ptr [esi]
// 0055ebca  8b5004               mov edx, dword ptr [eax + 4]
// 0055ebcd  8bce                 mov ecx, esi
// 0055ebcf  ffd2                 call edx
// 0055ebd1  8d4608               lea eax, [esi + 8]
// 0055ebd4  83c9ff               or ecx, 0xffffffff
// 0055ebd7  f00fc108             lock xadd dword ptr [eax], ecx
// 0055ebdb  7509                 jne 0x55ebe6
// 0055ebdd  8b16                 mov edx, dword ptr [esi]
// 0055ebdf  8b4208               mov eax, dword ptr [edx + 8]
// 0055ebe2  8bce                 mov ecx, esi
// 0055ebe4  ffd0                 call eax
// 0055ebe6  5e                   pop esi
// 0055ebe7  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ?destroy@?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@std@@QAEXPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
