// roc 2012-06 006b7630  unit: RBX::WaitingScriptsJob  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006b7630
//
// 006b7630  83ec08               sub esp, 8
// 006b7633  56                   push esi
// 006b7634  8b742410             mov esi, dword ptr [esp + 0x10]
// 006b7638  57                   push edi
// 006b7639  8bf9                 mov edi, ecx
// 006b763b  56                   push esi
// 006b763c  8d4c2410             lea ecx, [esp + 0x10]
// 006b7640  8974240c             mov dword ptr [esp + 0xc], esi
// 006b7644  e8f7d2ffff           call 0x6b4940
// 006b7649  56                   push esi
// 006b764a  8d442410             lea eax, [esp + 0x10]
// 006b764e  56                   push esi
// 006b764f  50                   push eax
// 006b7650  e83b31eeff           call 0x59a790
// 006b7655  8d4c2414             lea ecx, [esp + 0x14]
// 006b7659  83c40c               add esp, 0xc
// 006b765c  3bcf                 cmp ecx, edi
// 006b765e  7406                 je 0x6b7666
// 006b7660  8b542408             mov edx, dword ptr [esp + 8]
// 006b7664  8917                 mov dword ptr [edi], edx
// 006b7666  8b7704               mov esi, dword ptr [edi + 4]
// 006b7669  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006b766d  894704               mov dword ptr [edi + 4], eax
// 006b7670  85f6                 test esi, esi
// 006b7672  742a                 je 0x6b769e
// 006b7674  8d4e04               lea ecx, [esi + 4]
// 006b7677  83caff               or edx, 0xffffffff
// 006b767a  f00fc111             lock xadd dword ptr [ecx], edx
// 006b767e  751e                 jne 0x6b769e
// 006b7680  8b06                 mov eax, dword ptr [esi]
// 006b7682  8b5004               mov edx, dword ptr [eax + 4]
// 006b7685  8bce                 mov ecx, esi
// 006b7687  ffd2                 call edx
// 006b7689  8d4608               lea eax, [esi + 8]
// 006b768c  83c9ff               or ecx, 0xffffffff
// 006b768f  f00fc108             lock xadd dword ptr [eax], ecx
// 006b7693  7509                 jne 0x6b769e
// 006b7695  8b16                 mov edx, dword ptr [esi]
// 006b7697  8b4208               mov eax, dword ptr [edx + 8]
// 006b769a  8bce                 mov ecx, esi
// 006b769c  ffd0                 call eax
// 006b769e  5f                   pop edi
// 006b769f  5e                   pop esi
// 006b76a0  83c408               add esp, 8
// 006b76a3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
