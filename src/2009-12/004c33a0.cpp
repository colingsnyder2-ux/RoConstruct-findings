// roc 2009-12 004c33a0  unit: Ogre::RbxCluster  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004c33a0
//
// 004c33a0  83ec08               sub esp, 8
// 004c33a3  56                   push esi
// 004c33a4  8b742410             mov esi, dword ptr [esp + 0x10]
// 004c33a8  57                   push edi
// 004c33a9  8bf9                 mov edi, ecx
// 004c33ab  56                   push esi
// 004c33ac  8d4c2410             lea ecx, [esp + 0x10]
// 004c33b0  8974240c             mov dword ptr [esp + 0xc], esi
// 004c33b4  e817faffff           call 0x4c2dd0
// 004c33b9  56                   push esi
// 004c33ba  8d442410             lea eax, [esp + 0x10]
// 004c33be  56                   push esi
// 004c33bf  50                   push eax
// 004c33c0  e8cb163900           call 0x854a90
// 004c33c5  8d4c2414             lea ecx, [esp + 0x14]
// 004c33c9  83c40c               add esp, 0xc
// 004c33cc  3bcf                 cmp ecx, edi
// 004c33ce  7406                 je 0x4c33d6
// 004c33d0  8b542408             mov edx, dword ptr [esp + 8]
// 004c33d4  8917                 mov dword ptr [edi], edx
// 004c33d6  8b7704               mov esi, dword ptr [edi + 4]
// 004c33d9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004c33dd  894704               mov dword ptr [edi + 4], eax
// 004c33e0  85f6                 test esi, esi
// 004c33e2  742a                 je 0x4c340e
// 004c33e4  8d4e04               lea ecx, [esi + 4]
// 004c33e7  83caff               or edx, 0xffffffff
// 004c33ea  f00fc111             lock xadd dword ptr [ecx], edx
// 004c33ee  751e                 jne 0x4c340e
// 004c33f0  8b06                 mov eax, dword ptr [esi]
// 004c33f2  8b5004               mov edx, dword ptr [eax + 4]
// 004c33f5  8bce                 mov ecx, esi
// 004c33f7  ffd2                 call edx
// 004c33f9  8d4608               lea eax, [esi + 8]
// 004c33fc  83c9ff               or ecx, 0xffffffff
// 004c33ff  f00fc108             lock xadd dword ptr [eax], ecx
// 004c3403  7509                 jne 0x4c340e
// 004c3405  8b16                 mov edx, dword ptr [esi]
// 004c3407  8b4208               mov eax, dword ptr [edx + 8]
// 004c340a  8bce                 mov ecx, esi
// 004c340c  ffd0                 call eax
// 004c340e  5f                   pop edi
// 004c340f  5e                   pop esi
// 004c3410  83c408               add esp, 8
// 004c3413  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
