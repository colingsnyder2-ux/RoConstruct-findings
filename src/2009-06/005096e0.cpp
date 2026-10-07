// roc 2009-06 005096e0  unit: RBX::Network::PhysicsSender::Job  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005096e0
//
// 005096e0  8b442404             mov eax, dword ptr [esp + 4]
// 005096e4  56                   push esi
// 005096e5  8b7004               mov esi, dword ptr [eax + 4]
// 005096e8  85f6                 test esi, esi
// 005096ea  742a                 je 0x509716
// 005096ec  8d4e04               lea ecx, [esi + 4]
// 005096ef  83caff               or edx, 0xffffffff
// 005096f2  f00fc111             lock xadd dword ptr [ecx], edx
// 005096f6  751e                 jne 0x509716
// 005096f8  8b06                 mov eax, dword ptr [esi]
// 005096fa  8b5004               mov edx, dword ptr [eax + 4]
// 005096fd  8bce                 mov ecx, esi
// 005096ff  ffd2                 call edx
// 00509701  8d4608               lea eax, [esi + 8]
// 00509704  83c9ff               or ecx, 0xffffffff
// 00509707  f00fc108             lock xadd dword ptr [eax], ecx
// 0050970b  7509                 jne 0x509716
// 0050970d  8b16                 mov edx, dword ptr [esi]
// 0050970f  8b4208               mov eax, dword ptr [edx + 8]
// 00509712  8bce                 mov ecx, esi
// 00509714  ffd0                 call eax
// 00509716  5e                   pop esi
// 00509717  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ?destroy@?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@std@@QAEXPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
