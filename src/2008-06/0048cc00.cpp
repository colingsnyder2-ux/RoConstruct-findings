// roc 2008-06 0048cc00  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 258 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048cc00
//
// 0048cc00  6aff                 push -1
// 0048cc02  6841a67d00           push 0x7da641
// 0048cc07  64a100000000         mov eax, dword ptr fs:[0]
// 0048cc0d  50                   push eax
// 0048cc0e  64892500000000       mov dword ptr fs:[0], esp
// 0048cc15  83ec0c               sub esp, 0xc
// 0048cc18  56                   push esi
// 0048cc19  57                   push edi
// 0048cc1a  c744240800000000     mov dword ptr [esp + 8], 0
// 0048cc22  8b442434             mov eax, dword ptr [esp + 0x34]
// 0048cc26  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0048cc2a  50                   push eax
// 0048cc2b  83ec08               sub esp, 8
// 0048cc2e  8bc4                 mov eax, esp
// 0048cc30  89642418             mov dword ptr [esp + 0x18], esp
// 0048cc34  8908                 mov dword ptr [eax], ecx
// 0048cc36  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0048cc3a  895004               mov dword ptr [eax + 4], edx
// 0048cc3d  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0048cc41  be01000000           mov esi, 1
// 0048cc46  89742428             mov dword ptr [esp + 0x28], esi
// 0048cc4a  85c0                 test eax, eax
// 0048cc4c  7409                 je 0x48cc57
// 0048cc4e  83c004               add eax, 4
// 0048cc51  8bce                 mov ecx, esi
// 0048cc53  f00fc108             lock xadd dword ptr [eax], ecx
// 0048cc57  8d4c2418             lea ecx, [esp + 0x18]
// 0048cc5b  e820f2ffff           call 0x48be80
// 0048cc60  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0048cc64  8b542428             mov edx, dword ptr [esp + 0x28]
// 0048cc68  8917                 mov dword ptr [edi], edx
// 0048cc6a  8b08                 mov ecx, dword ptr [eax]
// 0048cc6c  894f04               mov dword ptr [edi + 4], ecx
// 0048cc6f  8b4004               mov eax, dword ptr [eax + 4]
// 0048cc72  894708               mov dword ptr [edi + 8], eax
// 0048cc75  85c0                 test eax, eax
// 0048cc77  7409                 je 0x48cc82
// 0048cc79  83c004               add eax, 4
// 0048cc7c  8bd6                 mov edx, esi
// 0048cc7e  f00fc110             lock xadd dword ptr [eax], edx
// 0048cc82  89742408             mov dword ptr [esp + 8], esi
// 0048cc86  8b742410             mov esi, dword ptr [esp + 0x10]
// 0048cc8a  85f6                 test esi, esi
// 0048cc8c  742a                 je 0x48ccb8
// 0048cc8e  8d4604               lea eax, [esi + 4]
// 0048cc91  83c9ff               or ecx, 0xffffffff
// 0048cc94  f00fc108             lock xadd dword ptr [eax], ecx
// 0048cc98  751e                 jne 0x48ccb8
// 0048cc9a  8b16                 mov edx, dword ptr [esi]
// 0048cc9c  8b4204               mov eax, dword ptr [edx + 4]
// 0048cc9f  8bce                 mov ecx, esi
// 0048cca1  ffd0                 call eax
// 0048cca3  8d4e08               lea ecx, [esi + 8]
// 0048cca6  83caff               or edx, 0xffffffff
// 0048cca9  f00fc111             lock xadd dword ptr [ecx], edx
// 0048ccad  7509                 jne 0x48ccb8
// 0048ccaf  8b06                 mov eax, dword ptr [esi]
// 0048ccb1  8b5008               mov edx, dword ptr [eax + 8]
// 0048ccb4  8bce                 mov ecx, esi
// 0048ccb6  ffd2                 call edx
// 0048ccb8  8b742430             mov esi, dword ptr [esp + 0x30]
// 0048ccbc  c644241c00           mov byte ptr [esp + 0x1c], 0
// 0048ccc1  85f6                 test esi, esi
// 0048ccc3  742a                 je 0x48ccef
// 0048ccc5  8d4604               lea eax, [esi + 4]
// 0048ccc8  83c9ff               or ecx, 0xffffffff
// 0048cccb  f00fc108             lock xadd dword ptr [eax], ecx
// 0048cccf  751e                 jne 0x48ccef
// 0048ccd1  8b16                 mov edx, dword ptr [esi]
// 0048ccd3  8b4204               mov eax, dword ptr [edx + 4]
// 0048ccd6  8bce                 mov ecx, esi
// 0048ccd8  ffd0                 call eax
// 0048ccda  8d4e08               lea ecx, [esi + 8]
// 0048ccdd  83caff               or edx, 0xffffffff
// 0048cce0  f00fc111             lock xadd dword ptr [ecx], edx
// 0048cce4  7509                 jne 0x48ccef
// 0048cce6  8b06                 mov eax, dword ptr [esi]
// 0048cce8  8b5008               mov edx, dword ptr [eax + 8]
// 0048cceb  8bce                 mov ecx, esi
// 0048cced  ffd2                 call edx
// 0048ccef  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0048ccf3  8bc7                 mov eax, edi
// 0048ccf5  5f                   pop edi
// 0048ccf6  64890d00000000       mov dword ptr fs:[0], ecx
// 0048ccfd  5e                   pop esi
// 0048ccfe  83c418               add esp, 0x18
// 0048cd01  c3                   ret 
// library rbxgs-net/roc_player_loadappearance_genuine_d68f705aae6a1ff2.cpp (function ??$bind@XV?$shared_ptr@VInstance@RBX@@@boost@@V12@V?$shared_ptr@VModelInstance@RBX@@@2@V?$arg@$00@2@@boost@@YA?AV?$bind_t@XP6AXV?$shared_ptr@VInstance@RBX@@@boost@@0@ZV?$list2@V?$value@V?$shared_ptr@VModelInstance@RBX@@@boost@@@_bi@boost@@V?$arg@$00@3@@_bi@2@@_bi@0@P6AXV?$shared_ptr@VInstance@RBX@@@0@0@ZV?$shared_ptr@VModelInstance@RBX@@@0@V?$arg@$00@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net roc_player_loadappearance_genuine_d68f705aae6a1ff2.cpp
