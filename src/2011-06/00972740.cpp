// roc 2011-06 00972740  unit: RBX::MeshFaceCustomizableKey  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00972740
//
// 00972740  83ec08               sub esp, 8
// 00972743  56                   push esi
// 00972744  8b742410             mov esi, dword ptr [esp + 0x10]
// 00972748  57                   push edi
// 00972749  8bf9                 mov edi, ecx
// 0097274b  56                   push esi
// 0097274c  8d4c2410             lea ecx, [esp + 0x10]
// 00972750  8974240c             mov dword ptr [esp + 0xc], esi
// 00972754  e8d7f5ffff           call 0x971d30
// 00972759  56                   push esi
// 0097275a  8d442410             lea eax, [esp + 0x10]
// 0097275e  56                   push esi
// 0097275f  50                   push eax
// 00972760  e8db8eefff           call 0x86b640
// 00972765  8d4c2414             lea ecx, [esp + 0x14]
// 00972769  83c40c               add esp, 0xc
// 0097276c  3bcf                 cmp ecx, edi
// 0097276e  7406                 je 0x972776
// 00972770  8b542408             mov edx, dword ptr [esp + 8]
// 00972774  8917                 mov dword ptr [edi], edx
// 00972776  8b7704               mov esi, dword ptr [edi + 4]
// 00972779  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0097277d  894704               mov dword ptr [edi + 4], eax
// 00972780  85f6                 test esi, esi
// 00972782  742a                 je 0x9727ae
// 00972784  8d4e04               lea ecx, [esi + 4]
// 00972787  83caff               or edx, 0xffffffff
// 0097278a  f00fc111             lock xadd dword ptr [ecx], edx
// 0097278e  751e                 jne 0x9727ae
// 00972790  8b06                 mov eax, dword ptr [esi]
// 00972792  8b5004               mov edx, dword ptr [eax + 4]
// 00972795  8bce                 mov ecx, esi
// 00972797  ffd2                 call edx
// 00972799  8d4608               lea eax, [esi + 8]
// 0097279c  83c9ff               or ecx, 0xffffffff
// 0097279f  f00fc108             lock xadd dword ptr [eax], ecx
// 009727a3  7509                 jne 0x9727ae
// 009727a5  8b16                 mov edx, dword ptr [esi]
// 009727a7  8b4208               mov eax, dword ptr [edx + 8]
// 009727aa  8bce                 mov ecx, esi
// 009727ac  ffd0                 call eax
// 009727ae  5f                   pop edi
// 009727af  5e                   pop esi
// 009727b0  83c408               add esp, 8
// 009727b3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
