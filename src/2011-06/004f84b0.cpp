// roc 2011-06 004f84b0  unit: RBX::Network::Replicator::SendDataJob  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f84b0
//
// 004f84b0  83ec08               sub esp, 8
// 004f84b3  56                   push esi
// 004f84b4  8b742410             mov esi, dword ptr [esp + 0x10]
// 004f84b8  57                   push edi
// 004f84b9  8bf9                 mov edi, ecx
// 004f84bb  56                   push esi
// 004f84bc  8d4c2410             lea ecx, [esp + 0x10]
// 004f84c0  8974240c             mov dword ptr [esp + 0xc], esi
// 004f84c4  e817d7ffff           call 0x4f5be0
// 004f84c9  56                   push esi
// 004f84ca  8d442410             lea eax, [esp + 0x10]
// 004f84ce  56                   push esi
// 004f84cf  50                   push eax
// 004f84d0  e86b313700           call 0x86b640
// 004f84d5  8d4c2414             lea ecx, [esp + 0x14]
// 004f84d9  83c40c               add esp, 0xc
// 004f84dc  3bcf                 cmp ecx, edi
// 004f84de  7406                 je 0x4f84e6
// 004f84e0  8b542408             mov edx, dword ptr [esp + 8]
// 004f84e4  8917                 mov dword ptr [edi], edx
// 004f84e6  8b7704               mov esi, dword ptr [edi + 4]
// 004f84e9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004f84ed  894704               mov dword ptr [edi + 4], eax
// 004f84f0  85f6                 test esi, esi
// 004f84f2  742a                 je 0x4f851e
// 004f84f4  8d4e04               lea ecx, [esi + 4]
// 004f84f7  83caff               or edx, 0xffffffff
// 004f84fa  f00fc111             lock xadd dword ptr [ecx], edx
// 004f84fe  751e                 jne 0x4f851e
// 004f8500  8b06                 mov eax, dword ptr [esi]
// 004f8502  8b5004               mov edx, dword ptr [eax + 4]
// 004f8505  8bce                 mov ecx, esi
// 004f8507  ffd2                 call edx
// 004f8509  8d4608               lea eax, [esi + 8]
// 004f850c  83c9ff               or ecx, 0xffffffff
// 004f850f  f00fc108             lock xadd dword ptr [eax], ecx
// 004f8513  7509                 jne 0x4f851e
// 004f8515  8b16                 mov edx, dword ptr [esi]
// 004f8517  8b4208               mov eax, dword ptr [edx + 8]
// 004f851a  8bce                 mov ecx, esi
// 004f851c  ffd0                 call eax
// 004f851e  5f                   pop edi
// 004f851f  5e                   pop esi
// 004f8520  83c408               add esp, 8
// 004f8523  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
