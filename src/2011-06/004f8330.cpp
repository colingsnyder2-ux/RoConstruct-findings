// roc 2011-06 004f8330  unit: RBX::Network::Replicator::SendDataJob  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f8330
//
// 004f8330  83ec08               sub esp, 8
// 004f8333  56                   push esi
// 004f8334  8b742410             mov esi, dword ptr [esp + 0x10]
// 004f8338  57                   push edi
// 004f8339  8bf9                 mov edi, ecx
// 004f833b  56                   push esi
// 004f833c  8d4c2410             lea ecx, [esp + 0x10]
// 004f8340  8974240c             mov dword ptr [esp + 0xc], esi
// 004f8344  e8e7d6ffff           call 0x4f5a30
// 004f8349  56                   push esi
// 004f834a  8d442410             lea eax, [esp + 0x10]
// 004f834e  56                   push esi
// 004f834f  50                   push eax
// 004f8350  e8eb323700           call 0x86b640
// 004f8355  8d4c2414             lea ecx, [esp + 0x14]
// 004f8359  83c40c               add esp, 0xc
// 004f835c  3bcf                 cmp ecx, edi
// 004f835e  7406                 je 0x4f8366
// 004f8360  8b542408             mov edx, dword ptr [esp + 8]
// 004f8364  8917                 mov dword ptr [edi], edx
// 004f8366  8b7704               mov esi, dword ptr [edi + 4]
// 004f8369  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004f836d  894704               mov dword ptr [edi + 4], eax
// 004f8370  85f6                 test esi, esi
// 004f8372  742a                 je 0x4f839e
// 004f8374  8d4e04               lea ecx, [esi + 4]
// 004f8377  83caff               or edx, 0xffffffff
// 004f837a  f00fc111             lock xadd dword ptr [ecx], edx
// 004f837e  751e                 jne 0x4f839e
// 004f8380  8b06                 mov eax, dword ptr [esi]
// 004f8382  8b5004               mov edx, dword ptr [eax + 4]
// 004f8385  8bce                 mov ecx, esi
// 004f8387  ffd2                 call edx
// 004f8389  8d4608               lea eax, [esi + 8]
// 004f838c  83c9ff               or ecx, 0xffffffff
// 004f838f  f00fc108             lock xadd dword ptr [eax], ecx
// 004f8393  7509                 jne 0x4f839e
// 004f8395  8b16                 mov edx, dword ptr [esi]
// 004f8397  8b4208               mov eax, dword ptr [edx + 8]
// 004f839a  8bce                 mov ecx, esi
// 004f839c  ffd0                 call eax
// 004f839e  5f                   pop edi
// 004f839f  5e                   pop esi
// 004f83a0  83c408               add esp, 8
// 004f83a3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
