// roc 2012-06 005aee40  unit: RBX::Network::ErrorCompPhysicsSender  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005aee40
//
// 005aee40  8b442404             mov eax, dword ptr [esp + 4]
// 005aee44  56                   push esi
// 005aee45  8b7004               mov esi, dword ptr [eax + 4]
// 005aee48  85f6                 test esi, esi
// 005aee4a  742a                 je 0x5aee76
// 005aee4c  8d4e04               lea ecx, [esi + 4]
// 005aee4f  83caff               or edx, 0xffffffff
// 005aee52  f00fc111             lock xadd dword ptr [ecx], edx
// 005aee56  751e                 jne 0x5aee76
// 005aee58  8b06                 mov eax, dword ptr [esi]
// 005aee5a  8b5004               mov edx, dword ptr [eax + 4]
// 005aee5d  8bce                 mov ecx, esi
// 005aee5f  ffd2                 call edx
// 005aee61  8d4608               lea eax, [esi + 8]
// 005aee64  83c9ff               or ecx, 0xffffffff
// 005aee67  f00fc108             lock xadd dword ptr [eax], ecx
// 005aee6b  7509                 jne 0x5aee76
// 005aee6d  8b16                 mov edx, dword ptr [esi]
// 005aee6f  8b4208               mov eax, dword ptr [edx + 8]
// 005aee72  8bce                 mov ecx, esi
// 005aee74  ffd0                 call eax
// 005aee76  5e                   pop esi
// 005aee77  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ?destroy@?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@std@@QAEXPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
