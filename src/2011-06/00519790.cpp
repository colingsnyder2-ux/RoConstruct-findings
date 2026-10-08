// from server: 100% by auto
// roc 2011-06 00519790  unit: RBX::Network::ErrorCompPhysicsSender  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00519790
//
// 00519790  8b442404             mov eax, dword ptr [esp + 4]
// 00519794  56                   push esi
// 00519795  8b7004               mov esi, dword ptr [eax + 4]
// 00519798  85f6                 test esi, esi
// 0051979a  742a                 je 0x5197c6
// 0051979c  8d4e04               lea ecx, [esi + 4]
// 0051979f  83caff               or edx, 0xffffffff
// 005197a2  f00fc111             lock xadd dword ptr [ecx], edx
// 005197a6  751e                 jne 0x5197c6
// 005197a8  8b06                 mov eax, dword ptr [esi]
// 005197aa  8b5004               mov edx, dword ptr [eax + 4]
// 005197ad  8bce                 mov ecx, esi
// 005197af  ffd2                 call edx
// 005197b1  8d4608               lea eax, [esi + 8]
// 005197b4  83c9ff               or ecx, 0xffffffff
// 005197b7  f00fc108             lock xadd dword ptr [eax], ecx
// 005197bb  7509                 jne 0x5197c6
// 005197bd  8b16                 mov edx, dword ptr [esi]
// 005197bf  8b4208               mov eax, dword ptr [edx + 8]
// 005197c2  8bce                 mov ecx, esi
// 005197c4  ffd0                 call eax
// 005197c6  5e                   pop esi
// 005197c7  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ?destroy@?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@std@@QAEXPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
