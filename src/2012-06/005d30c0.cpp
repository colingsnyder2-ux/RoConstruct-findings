// roc 2012-06 005d30c0  unit: RBX::MeshFaceCustomizableKey  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005d30c0
//
// 005d30c0  83ec08               sub esp, 8
// 005d30c3  56                   push esi
// 005d30c4  8b742410             mov esi, dword ptr [esp + 0x10]
// 005d30c8  57                   push edi
// 005d30c9  8bf9                 mov edi, ecx
// 005d30cb  56                   push esi
// 005d30cc  8d4c2410             lea ecx, [esp + 0x10]
// 005d30d0  8974240c             mov dword ptr [esp + 0xc], esi
// 005d30d4  e897f4ffff           call 0x5d2570
// 005d30d9  56                   push esi
// 005d30da  8d442410             lea eax, [esp + 0x10]
// 005d30de  56                   push esi
// 005d30df  50                   push eax
// 005d30e0  e8ab76fcff           call 0x59a790
// 005d30e5  8d4c2414             lea ecx, [esp + 0x14]
// 005d30e9  83c40c               add esp, 0xc
// 005d30ec  3bcf                 cmp ecx, edi
// 005d30ee  7406                 je 0x5d30f6
// 005d30f0  8b542408             mov edx, dword ptr [esp + 8]
// 005d30f4  8917                 mov dword ptr [edi], edx
// 005d30f6  8b7704               mov esi, dword ptr [edi + 4]
// 005d30f9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005d30fd  894704               mov dword ptr [edi + 4], eax
// 005d3100  85f6                 test esi, esi
// 005d3102  742a                 je 0x5d312e
// 005d3104  8d4e04               lea ecx, [esi + 4]
// 005d3107  83caff               or edx, 0xffffffff
// 005d310a  f00fc111             lock xadd dword ptr [ecx], edx
// 005d310e  751e                 jne 0x5d312e
// 005d3110  8b06                 mov eax, dword ptr [esi]
// 005d3112  8b5004               mov edx, dword ptr [eax + 4]
// 005d3115  8bce                 mov ecx, esi
// 005d3117  ffd2                 call edx
// 005d3119  8d4608               lea eax, [esi + 8]
// 005d311c  83c9ff               or ecx, 0xffffffff
// 005d311f  f00fc108             lock xadd dword ptr [eax], ecx
// 005d3123  7509                 jne 0x5d312e
// 005d3125  8b16                 mov edx, dword ptr [esi]
// 005d3127  8b4208               mov eax, dword ptr [edx + 8]
// 005d312a  8bce                 mov ecx, esi
// 005d312c  ffd0                 call eax
// 005d312e  5f                   pop edi
// 005d312f  5e                   pop esi
// 005d3130  83c408               add esp, 8
// 005d3133  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
