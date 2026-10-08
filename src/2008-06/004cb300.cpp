// from server: 100% by auto
// roc 2008-06 004cb300  unit: RBX::Network::RoundRobinPhysicsSender  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cb300
//
// 004cb300  8b442404             mov eax, dword ptr [esp + 4]
// 004cb304  56                   push esi
// 004cb305  8b7004               mov esi, dword ptr [eax + 4]
// 004cb308  85f6                 test esi, esi
// 004cb30a  742a                 je 0x4cb336
// 004cb30c  8d4e04               lea ecx, [esi + 4]
// 004cb30f  83caff               or edx, 0xffffffff
// 004cb312  f00fc111             lock xadd dword ptr [ecx], edx
// 004cb316  751e                 jne 0x4cb336
// 004cb318  8b06                 mov eax, dword ptr [esi]
// 004cb31a  8b5004               mov edx, dword ptr [eax + 4]
// 004cb31d  8bce                 mov ecx, esi
// 004cb31f  ffd2                 call edx
// 004cb321  8d4608               lea eax, [esi + 8]
// 004cb324  83c9ff               or ecx, 0xffffffff
// 004cb327  f00fc108             lock xadd dword ptr [eax], ecx
// 004cb32b  7509                 jne 0x4cb336
// 004cb32d  8b16                 mov edx, dword ptr [esi]
// 004cb32f  8b4208               mov eax, dword ptr [edx + 8]
// 004cb332  8bce                 mov ecx, esi
// 004cb334  ffd0                 call eax
// 004cb336  5e                   pop esi
// 004cb337  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ?destroy@?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@std@@QAEXPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
