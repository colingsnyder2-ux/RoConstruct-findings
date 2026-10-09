// roc 2009-12 00681570  unit: RBX::VLocalScript::?$FactoryProduct  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00681570
//
// 00681570  83ec08               sub esp, 8
// 00681573  56                   push esi
// 00681574  8b742410             mov esi, dword ptr [esp + 0x10]
// 00681578  57                   push edi
// 00681579  8bf9                 mov edi, ecx
// 0068157b  56                   push esi
// 0068157c  8d4c2410             lea ecx, [esp + 0x10]
// 00681580  8974240c             mov dword ptr [esp + 0xc], esi
// 00681584  e887fcffff           call 0x681210
// 00681589  56                   push esi
// 0068158a  8d442410             lea eax, [esp + 0x10]
// 0068158e  56                   push esi
// 0068158f  50                   push eax
// 00681590  e8fb341d00           call 0x854a90
// 00681595  8d4c2414             lea ecx, [esp + 0x14]
// 00681599  83c40c               add esp, 0xc
// 0068159c  3bcf                 cmp ecx, edi
// 0068159e  7406                 je 0x6815a6
// 006815a0  8b542408             mov edx, dword ptr [esp + 8]
// 006815a4  8917                 mov dword ptr [edi], edx
// 006815a6  8b7704               mov esi, dword ptr [edi + 4]
// 006815a9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006815ad  894704               mov dword ptr [edi + 4], eax
// 006815b0  85f6                 test esi, esi
// 006815b2  742a                 je 0x6815de
// 006815b4  8d4e04               lea ecx, [esi + 4]
// 006815b7  83caff               or edx, 0xffffffff
// 006815ba  f00fc111             lock xadd dword ptr [ecx], edx
// 006815be  751e                 jne 0x6815de
// 006815c0  8b06                 mov eax, dword ptr [esi]
// 006815c2  8b5004               mov edx, dword ptr [eax + 4]
// 006815c5  8bce                 mov ecx, esi
// 006815c7  ffd2                 call edx
// 006815c9  8d4608               lea eax, [esi + 8]
// 006815cc  83c9ff               or ecx, 0xffffffff
// 006815cf  f00fc108             lock xadd dword ptr [eax], ecx
// 006815d3  7509                 jne 0x6815de
// 006815d5  8b16                 mov edx, dword ptr [esi]
// 006815d7  8b4208               mov eax, dword ptr [edx + 8]
// 006815da  8bce                 mov ecx, esi
// 006815dc  ffd0                 call eax
// 006815de  5f                   pop edi
// 006815df  5e                   pop esi
// 006815e0  83c408               add esp, 8
// 006815e3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
