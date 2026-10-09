// roc 2009-12 005784d0  unit: RBX::MeshFaceCustomizableKey  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005784d0
//
// 005784d0  83ec08               sub esp, 8
// 005784d3  56                   push esi
// 005784d4  8b742410             mov esi, dword ptr [esp + 0x10]
// 005784d8  57                   push edi
// 005784d9  8bf9                 mov edi, ecx
// 005784db  56                   push esi
// 005784dc  8d4c2410             lea ecx, [esp + 0x10]
// 005784e0  8974240c             mov dword ptr [esp + 0xc], esi
// 005784e4  e8a7f8ffff           call 0x577d90
// 005784e9  56                   push esi
// 005784ea  8d442410             lea eax, [esp + 0x10]
// 005784ee  56                   push esi
// 005784ef  50                   push eax
// 005784f0  e89bc52d00           call 0x854a90
// 005784f5  8d4c2414             lea ecx, [esp + 0x14]
// 005784f9  83c40c               add esp, 0xc
// 005784fc  3bcf                 cmp ecx, edi
// 005784fe  7406                 je 0x578506
// 00578500  8b542408             mov edx, dword ptr [esp + 8]
// 00578504  8917                 mov dword ptr [edi], edx
// 00578506  8b7704               mov esi, dword ptr [edi + 4]
// 00578509  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0057850d  894704               mov dword ptr [edi + 4], eax
// 00578510  85f6                 test esi, esi
// 00578512  742a                 je 0x57853e
// 00578514  8d4e04               lea ecx, [esi + 4]
// 00578517  83caff               or edx, 0xffffffff
// 0057851a  f00fc111             lock xadd dword ptr [ecx], edx
// 0057851e  751e                 jne 0x57853e
// 00578520  8b06                 mov eax, dword ptr [esi]
// 00578522  8b5004               mov edx, dword ptr [eax + 4]
// 00578525  8bce                 mov ecx, esi
// 00578527  ffd2                 call edx
// 00578529  8d4608               lea eax, [esi + 8]
// 0057852c  83c9ff               or ecx, 0xffffffff
// 0057852f  f00fc108             lock xadd dword ptr [eax], ecx
// 00578533  7509                 jne 0x57853e
// 00578535  8b16                 mov edx, dword ptr [esi]
// 00578537  8b4208               mov eax, dword ptr [edx + 8]
// 0057853a  8bce                 mov ecx, esi
// 0057853c  ffd0                 call eax
// 0057853e  5f                   pop edi
// 0057853f  5e                   pop esi
// 00578540  83c408               add esp, 8
// 00578543  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
