// roc 2010-06 004e95b0  unit: G3D::VRay::?$holder  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e95b0
//
// 004e95b0  83ec08               sub esp, 8
// 004e95b3  56                   push esi
// 004e95b4  8b742410             mov esi, dword ptr [esp + 0x10]
// 004e95b8  57                   push edi
// 004e95b9  8bf9                 mov edi, ecx
// 004e95bb  56                   push esi
// 004e95bc  8d4c2410             lea ecx, [esp + 0x10]
// 004e95c0  8974240c             mov dword ptr [esp + 0xc], esi
// 004e95c4  e847dbffff           call 0x4e7110
// 004e95c9  56                   push esi
// 004e95ca  8d442410             lea eax, [esp + 0x10]
// 004e95ce  56                   push esi
// 004e95cf  50                   push eax
// 004e95d0  e8dbaff6ff           call 0x4545b0
// 004e95d5  8d4c2414             lea ecx, [esp + 0x14]
// 004e95d9  83c40c               add esp, 0xc
// 004e95dc  3bcf                 cmp ecx, edi
// 004e95de  7406                 je 0x4e95e6
// 004e95e0  8b542408             mov edx, dword ptr [esp + 8]
// 004e95e4  8917                 mov dword ptr [edi], edx
// 004e95e6  8b7704               mov esi, dword ptr [edi + 4]
// 004e95e9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e95ed  894704               mov dword ptr [edi + 4], eax
// 004e95f0  85f6                 test esi, esi
// 004e95f2  742a                 je 0x4e961e
// 004e95f4  8d4e04               lea ecx, [esi + 4]
// 004e95f7  83caff               or edx, 0xffffffff
// 004e95fa  f00fc111             lock xadd dword ptr [ecx], edx
// 004e95fe  751e                 jne 0x4e961e
// 004e9600  8b06                 mov eax, dword ptr [esi]
// 004e9602  8b5004               mov edx, dword ptr [eax + 4]
// 004e9605  8bce                 mov ecx, esi
// 004e9607  ffd2                 call edx
// 004e9609  8d4608               lea eax, [esi + 8]
// 004e960c  83c9ff               or ecx, 0xffffffff
// 004e960f  f00fc108             lock xadd dword ptr [eax], ecx
// 004e9613  7509                 jne 0x4e961e
// 004e9615  8b16                 mov edx, dword ptr [esi]
// 004e9617  8b4208               mov eax, dword ptr [edx + 8]
// 004e961a  8bce                 mov ecx, esi
// 004e961c  ffd0                 call eax
// 004e961e  5f                   pop edi
// 004e961f  5e                   pop esi
// 004e9620  83c408               add esp, 8
// 004e9623  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
