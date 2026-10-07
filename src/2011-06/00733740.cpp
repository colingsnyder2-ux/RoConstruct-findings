// roc 2011-06 00733740  unit: RBX::VPseudoPlayer::?$BoundFuncDesc  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00733740
//
// 00733740  83ec08               sub esp, 8
// 00733743  56                   push esi
// 00733744  8b742410             mov esi, dword ptr [esp + 0x10]
// 00733748  57                   push edi
// 00733749  8bf9                 mov edi, ecx
// 0073374b  56                   push esi
// 0073374c  8d4c2410             lea ecx, [esp + 0x10]
// 00733750  8974240c             mov dword ptr [esp + 0xc], esi
// 00733754  e817feffff           call 0x733570
// 00733759  56                   push esi
// 0073375a  8d442410             lea eax, [esp + 0x10]
// 0073375e  56                   push esi
// 0073375f  50                   push eax
// 00733760  e8db7e1300           call 0x86b640
// 00733765  8d4c2414             lea ecx, [esp + 0x14]
// 00733769  83c40c               add esp, 0xc
// 0073376c  3bcf                 cmp ecx, edi
// 0073376e  7406                 je 0x733776
// 00733770  8b542408             mov edx, dword ptr [esp + 8]
// 00733774  8917                 mov dword ptr [edi], edx
// 00733776  8b7704               mov esi, dword ptr [edi + 4]
// 00733779  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0073377d  894704               mov dword ptr [edi + 4], eax
// 00733780  85f6                 test esi, esi
// 00733782  742a                 je 0x7337ae
// 00733784  8d4e04               lea ecx, [esi + 4]
// 00733787  83caff               or edx, 0xffffffff
// 0073378a  f00fc111             lock xadd dword ptr [ecx], edx
// 0073378e  751e                 jne 0x7337ae
// 00733790  8b06                 mov eax, dword ptr [esi]
// 00733792  8b5004               mov edx, dword ptr [eax + 4]
// 00733795  8bce                 mov ecx, esi
// 00733797  ffd2                 call edx
// 00733799  8d4608               lea eax, [esi + 8]
// 0073379c  83c9ff               or ecx, 0xffffffff
// 0073379f  f00fc108             lock xadd dword ptr [eax], ecx
// 007337a3  7509                 jne 0x7337ae
// 007337a5  8b16                 mov edx, dword ptr [esi]
// 007337a7  8b4208               mov eax, dword ptr [edx + 8]
// 007337aa  8bce                 mov ecx, esi
// 007337ac  ffd0                 call eax
// 007337ae  5f                   pop edi
// 007337af  5e                   pop esi
// 007337b0  83c408               add esp, 8
// 007337b3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
