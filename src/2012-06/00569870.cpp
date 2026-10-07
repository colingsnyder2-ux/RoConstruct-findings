// roc 2012-06 00569870  unit: std::N::NV?$allocator::V?$circular_buffer::?$sp_counted_impl_p  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00569870
//
// 00569870  83ec08               sub esp, 8
// 00569873  56                   push esi
// 00569874  8b742410             mov esi, dword ptr [esp + 0x10]
// 00569878  57                   push edi
// 00569879  8bf9                 mov edi, ecx
// 0056987b  56                   push esi
// 0056987c  8d4c2410             lea ecx, [esp + 0x10]
// 00569880  8974240c             mov dword ptr [esp + 0xc], esi
// 00569884  e877fdffff           call 0x569600
// 00569889  56                   push esi
// 0056988a  8d442410             lea eax, [esp + 0x10]
// 0056988e  56                   push esi
// 0056988f  50                   push eax
// 00569890  e8fb0e0300           call 0x59a790
// 00569895  8d4c2414             lea ecx, [esp + 0x14]
// 00569899  83c40c               add esp, 0xc
// 0056989c  3bcf                 cmp ecx, edi
// 0056989e  7406                 je 0x5698a6
// 005698a0  8b542408             mov edx, dword ptr [esp + 8]
// 005698a4  8917                 mov dword ptr [edi], edx
// 005698a6  8b7704               mov esi, dword ptr [edi + 4]
// 005698a9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005698ad  894704               mov dword ptr [edi + 4], eax
// 005698b0  85f6                 test esi, esi
// 005698b2  742a                 je 0x5698de
// 005698b4  8d4e04               lea ecx, [esi + 4]
// 005698b7  83caff               or edx, 0xffffffff
// 005698ba  f00fc111             lock xadd dword ptr [ecx], edx
// 005698be  751e                 jne 0x5698de
// 005698c0  8b06                 mov eax, dword ptr [esi]
// 005698c2  8b5004               mov edx, dword ptr [eax + 4]
// 005698c5  8bce                 mov ecx, esi
// 005698c7  ffd2                 call edx
// 005698c9  8d4608               lea eax, [esi + 8]
// 005698cc  83c9ff               or ecx, 0xffffffff
// 005698cf  f00fc108             lock xadd dword ptr [eax], ecx
// 005698d3  7509                 jne 0x5698de
// 005698d5  8b16                 mov edx, dword ptr [esi]
// 005698d7  8b4208               mov eax, dword ptr [edx + 8]
// 005698da  8bce                 mov ecx, esi
// 005698dc  ffd0                 call eax
// 005698de  5f                   pop edi
// 005698df  5e                   pop esi
// 005698e0  83c408               add esp, 8
// 005698e3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
