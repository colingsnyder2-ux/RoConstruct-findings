// roc 2011-06 0050d440  unit: RBX::Network::ProfiledRakPeer  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0050d440
//
// 0050d440  83ec08               sub esp, 8
// 0050d443  56                   push esi
// 0050d444  8b742410             mov esi, dword ptr [esp + 0x10]
// 0050d448  57                   push edi
// 0050d449  8bf9                 mov edi, ecx
// 0050d44b  56                   push esi
// 0050d44c  8d4c2410             lea ecx, [esp + 0x10]
// 0050d450  8974240c             mov dword ptr [esp + 0xc], esi
// 0050d454  e887feffff           call 0x50d2e0
// 0050d459  56                   push esi
// 0050d45a  8d442410             lea eax, [esp + 0x10]
// 0050d45e  56                   push esi
// 0050d45f  50                   push eax
// 0050d460  e8dbe13500           call 0x86b640
// 0050d465  8d4c2414             lea ecx, [esp + 0x14]
// 0050d469  83c40c               add esp, 0xc
// 0050d46c  3bcf                 cmp ecx, edi
// 0050d46e  7406                 je 0x50d476
// 0050d470  8b542408             mov edx, dword ptr [esp + 8]
// 0050d474  8917                 mov dword ptr [edi], edx
// 0050d476  8b7704               mov esi, dword ptr [edi + 4]
// 0050d479  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0050d47d  894704               mov dword ptr [edi + 4], eax
// 0050d480  85f6                 test esi, esi
// 0050d482  742a                 je 0x50d4ae
// 0050d484  8d4e04               lea ecx, [esi + 4]
// 0050d487  83caff               or edx, 0xffffffff
// 0050d48a  f00fc111             lock xadd dword ptr [ecx], edx
// 0050d48e  751e                 jne 0x50d4ae
// 0050d490  8b06                 mov eax, dword ptr [esi]
// 0050d492  8b5004               mov edx, dword ptr [eax + 4]
// 0050d495  8bce                 mov ecx, esi
// 0050d497  ffd2                 call edx
// 0050d499  8d4608               lea eax, [esi + 8]
// 0050d49c  83c9ff               or ecx, 0xffffffff
// 0050d49f  f00fc108             lock xadd dword ptr [eax], ecx
// 0050d4a3  7509                 jne 0x50d4ae
// 0050d4a5  8b16                 mov edx, dword ptr [esi]
// 0050d4a7  8b4208               mov eax, dword ptr [edx + 8]
// 0050d4aa  8bce                 mov ecx, esi
// 0050d4ac  ffd0                 call eax
// 0050d4ae  5f                   pop edi
// 0050d4af  5e                   pop esi
// 0050d4b0  83c408               add esp, 8
// 0050d4b3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
