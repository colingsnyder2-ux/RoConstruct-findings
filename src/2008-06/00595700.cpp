// roc 2008-06 00595700  unit: boost::signals::detail::Ubasic_connection::?$sp_counted_impl_p  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00595700
//
// 00595700  83ec08               sub esp, 8
// 00595703  56                   push esi
// 00595704  8b742410             mov esi, dword ptr [esp + 0x10]
// 00595708  57                   push edi
// 00595709  8bf9                 mov edi, ecx
// 0059570b  56                   push esi
// 0059570c  8d4c2410             lea ecx, [esp + 0x10]
// 00595710  8974240c             mov dword ptr [esp + 0xc], esi
// 00595714  e827ffffff           call 0x595640
// 00595719  56                   push esi
// 0059571a  8d442410             lea eax, [esp + 0x10]
// 0059571e  56                   push esi
// 0059571f  50                   push eax
// 00595720  e8eb7ceeff           call 0x47d410
// 00595725  8d4c2414             lea ecx, [esp + 0x14]
// 00595729  83c40c               add esp, 0xc
// 0059572c  3bcf                 cmp ecx, edi
// 0059572e  7406                 je 0x595736
// 00595730  8b542408             mov edx, dword ptr [esp + 8]
// 00595734  8917                 mov dword ptr [edi], edx
// 00595736  8b7704               mov esi, dword ptr [edi + 4]
// 00595739  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0059573d  894704               mov dword ptr [edi + 4], eax
// 00595740  85f6                 test esi, esi
// 00595742  742a                 je 0x59576e
// 00595744  8d4e04               lea ecx, [esi + 4]
// 00595747  83caff               or edx, 0xffffffff
// 0059574a  f00fc111             lock xadd dword ptr [ecx], edx
// 0059574e  751e                 jne 0x59576e
// 00595750  8b06                 mov eax, dword ptr [esi]
// 00595752  8b5004               mov edx, dword ptr [eax + 4]
// 00595755  8bce                 mov ecx, esi
// 00595757  ffd2                 call edx
// 00595759  8d4608               lea eax, [esi + 8]
// 0059575c  83c9ff               or ecx, 0xffffffff
// 0059575f  f00fc108             lock xadd dword ptr [eax], ecx
// 00595763  7509                 jne 0x59576e
// 00595765  8b16                 mov edx, dword ptr [esi]
// 00595767  8b4208               mov eax, dword ptr [edx + 8]
// 0059576a  8bce                 mov ecx, esi
// 0059576c  ffd0                 call eax
// 0059576e  5f                   pop edi
// 0059576f  5e                   pop esi
// 00595770  83c408               add esp, 8
// 00595773  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
