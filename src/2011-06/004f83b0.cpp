// roc 2011-06 004f83b0  unit: RBX::Network::Replicator::SendDataJob  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f83b0
//
// 004f83b0  83ec08               sub esp, 8
// 004f83b3  56                   push esi
// 004f83b4  8b742410             mov esi, dword ptr [esp + 0x10]
// 004f83b8  57                   push edi
// 004f83b9  8bf9                 mov edi, ecx
// 004f83bb  56                   push esi
// 004f83bc  8d4c2410             lea ecx, [esp + 0x10]
// 004f83c0  8974240c             mov dword ptr [esp + 0xc], esi
// 004f83c4  e8f7d6ffff           call 0x4f5ac0
// 004f83c9  56                   push esi
// 004f83ca  8d442410             lea eax, [esp + 0x10]
// 004f83ce  56                   push esi
// 004f83cf  50                   push eax
// 004f83d0  e86b323700           call 0x86b640
// 004f83d5  8d4c2414             lea ecx, [esp + 0x14]
// 004f83d9  83c40c               add esp, 0xc
// 004f83dc  3bcf                 cmp ecx, edi
// 004f83de  7406                 je 0x4f83e6
// 004f83e0  8b542408             mov edx, dword ptr [esp + 8]
// 004f83e4  8917                 mov dword ptr [edi], edx
// 004f83e6  8b7704               mov esi, dword ptr [edi + 4]
// 004f83e9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004f83ed  894704               mov dword ptr [edi + 4], eax
// 004f83f0  85f6                 test esi, esi
// 004f83f2  742a                 je 0x4f841e
// 004f83f4  8d4e04               lea ecx, [esi + 4]
// 004f83f7  83caff               or edx, 0xffffffff
// 004f83fa  f00fc111             lock xadd dword ptr [ecx], edx
// 004f83fe  751e                 jne 0x4f841e
// 004f8400  8b06                 mov eax, dword ptr [esi]
// 004f8402  8b5004               mov edx, dword ptr [eax + 4]
// 004f8405  8bce                 mov ecx, esi
// 004f8407  ffd2                 call edx
// 004f8409  8d4608               lea eax, [esi + 8]
// 004f840c  83c9ff               or ecx, 0xffffffff
// 004f840f  f00fc108             lock xadd dword ptr [eax], ecx
// 004f8413  7509                 jne 0x4f841e
// 004f8415  8b16                 mov edx, dword ptr [esi]
// 004f8417  8b4208               mov eax, dword ptr [edx + 8]
// 004f841a  8bce                 mov ecx, esi
// 004f841c  ffd0                 call eax
// 004f841e  5f                   pop edi
// 004f841f  5e                   pop esi
// 004f8420  83c408               add esp, 8
// 004f8423  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
