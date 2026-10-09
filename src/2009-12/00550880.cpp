// roc 2009-12 00550880  unit: RBX::Network::ProfiledRakPeer  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00550880
//
// 00550880  83ec08               sub esp, 8
// 00550883  56                   push esi
// 00550884  8b742410             mov esi, dword ptr [esp + 0x10]
// 00550888  57                   push edi
// 00550889  8bf9                 mov edi, ecx
// 0055088b  56                   push esi
// 0055088c  8d4c2410             lea ecx, [esp + 0x10]
// 00550890  8974240c             mov dword ptr [esp + 0xc], esi
// 00550894  e897feffff           call 0x550730
// 00550899  56                   push esi
// 0055089a  8d442410             lea eax, [esp + 0x10]
// 0055089e  56                   push esi
// 0055089f  50                   push eax
// 005508a0  e8eb413000           call 0x854a90
// 005508a5  8d4c2414             lea ecx, [esp + 0x14]
// 005508a9  83c40c               add esp, 0xc
// 005508ac  3bcf                 cmp ecx, edi
// 005508ae  7406                 je 0x5508b6
// 005508b0  8b542408             mov edx, dword ptr [esp + 8]
// 005508b4  8917                 mov dword ptr [edi], edx
// 005508b6  8b7704               mov esi, dword ptr [edi + 4]
// 005508b9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005508bd  894704               mov dword ptr [edi + 4], eax
// 005508c0  85f6                 test esi, esi
// 005508c2  742a                 je 0x5508ee
// 005508c4  8d4e04               lea ecx, [esi + 4]
// 005508c7  83caff               or edx, 0xffffffff
// 005508ca  f00fc111             lock xadd dword ptr [ecx], edx
// 005508ce  751e                 jne 0x5508ee
// 005508d0  8b06                 mov eax, dword ptr [esi]
// 005508d2  8b5004               mov edx, dword ptr [eax + 4]
// 005508d5  8bce                 mov ecx, esi
// 005508d7  ffd2                 call edx
// 005508d9  8d4608               lea eax, [esi + 8]
// 005508dc  83c9ff               or ecx, 0xffffffff
// 005508df  f00fc108             lock xadd dword ptr [eax], ecx
// 005508e3  7509                 jne 0x5508ee
// 005508e5  8b16                 mov edx, dword ptr [esi]
// 005508e7  8b4208               mov eax, dword ptr [edx + 8]
// 005508ea  8bce                 mov ecx, esi
// 005508ec  ffd0                 call eax
// 005508ee  5f                   pop edi
// 005508ef  5e                   pop esi
// 005508f0  83c408               add esp, 8
// 005508f3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
