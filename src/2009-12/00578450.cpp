// roc 2009-12 00578450  unit: RBX::MeshFaceCustomizableKey  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00578450
//
// 00578450  83ec08               sub esp, 8
// 00578453  56                   push esi
// 00578454  8b742410             mov esi, dword ptr [esp + 0x10]
// 00578458  57                   push edi
// 00578459  8bf9                 mov edi, ecx
// 0057845b  56                   push esi
// 0057845c  8d4c2410             lea ecx, [esp + 0x10]
// 00578460  8974240c             mov dword ptr [esp + 0xc], esi
// 00578464  e8b727f2ff           call 0x49ac20
// 00578469  56                   push esi
// 0057846a  8d442410             lea eax, [esp + 0x10]
// 0057846e  56                   push esi
// 0057846f  50                   push eax
// 00578470  e81bc62d00           call 0x854a90
// 00578475  8d4c2414             lea ecx, [esp + 0x14]
// 00578479  83c40c               add esp, 0xc
// 0057847c  3bcf                 cmp ecx, edi
// 0057847e  7406                 je 0x578486
// 00578480  8b542408             mov edx, dword ptr [esp + 8]
// 00578484  8917                 mov dword ptr [edi], edx
// 00578486  8b7704               mov esi, dword ptr [edi + 4]
// 00578489  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0057848d  894704               mov dword ptr [edi + 4], eax
// 00578490  85f6                 test esi, esi
// 00578492  742a                 je 0x5784be
// 00578494  8d4e04               lea ecx, [esi + 4]
// 00578497  83caff               or edx, 0xffffffff
// 0057849a  f00fc111             lock xadd dword ptr [ecx], edx
// 0057849e  751e                 jne 0x5784be
// 005784a0  8b06                 mov eax, dword ptr [esi]
// 005784a2  8b5004               mov edx, dword ptr [eax + 4]
// 005784a5  8bce                 mov ecx, esi
// 005784a7  ffd2                 call edx
// 005784a9  8d4608               lea eax, [esi + 8]
// 005784ac  83c9ff               or ecx, 0xffffffff
// 005784af  f00fc108             lock xadd dword ptr [eax], ecx
// 005784b3  7509                 jne 0x5784be
// 005784b5  8b16                 mov edx, dword ptr [esi]
// 005784b7  8b4208               mov eax, dword ptr [edx + 8]
// 005784ba  8bce                 mov ecx, esi
// 005784bc  ffd0                 call eax
// 005784be  5f                   pop edi
// 005784bf  5e                   pop esi
// 005784c0  83c408               add esp, 8
// 005784c3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
