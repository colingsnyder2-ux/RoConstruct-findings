// roc 2009-12 00578650  unit: RBX::MeshFaceCustomizableKey  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00578650
//
// 00578650  83ec08               sub esp, 8
// 00578653  56                   push esi
// 00578654  8b742410             mov esi, dword ptr [esp + 0x10]
// 00578658  57                   push edi
// 00578659  8bf9                 mov edi, ecx
// 0057865b  56                   push esi
// 0057865c  8d4c2410             lea ecx, [esp + 0x10]
// 00578660  8974240c             mov dword ptr [esp + 0xc], esi
// 00578664  e8d7f8ffff           call 0x577f40
// 00578669  56                   push esi
// 0057866a  8d442410             lea eax, [esp + 0x10]
// 0057866e  56                   push esi
// 0057866f  50                   push eax
// 00578670  e81bc42d00           call 0x854a90
// 00578675  8d4c2414             lea ecx, [esp + 0x14]
// 00578679  83c40c               add esp, 0xc
// 0057867c  3bcf                 cmp ecx, edi
// 0057867e  7406                 je 0x578686
// 00578680  8b542408             mov edx, dword ptr [esp + 8]
// 00578684  8917                 mov dword ptr [edi], edx
// 00578686  8b7704               mov esi, dword ptr [edi + 4]
// 00578689  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0057868d  894704               mov dword ptr [edi + 4], eax
// 00578690  85f6                 test esi, esi
// 00578692  742a                 je 0x5786be
// 00578694  8d4e04               lea ecx, [esi + 4]
// 00578697  83caff               or edx, 0xffffffff
// 0057869a  f00fc111             lock xadd dword ptr [ecx], edx
// 0057869e  751e                 jne 0x5786be
// 005786a0  8b06                 mov eax, dword ptr [esi]
// 005786a2  8b5004               mov edx, dword ptr [eax + 4]
// 005786a5  8bce                 mov ecx, esi
// 005786a7  ffd2                 call edx
// 005786a9  8d4608               lea eax, [esi + 8]
// 005786ac  83c9ff               or ecx, 0xffffffff
// 005786af  f00fc108             lock xadd dword ptr [eax], ecx
// 005786b3  7509                 jne 0x5786be
// 005786b5  8b16                 mov edx, dword ptr [esi]
// 005786b7  8b4208               mov eax, dword ptr [edx + 8]
// 005786ba  8bce                 mov ecx, esi
// 005786bc  ffd0                 call eax
// 005786be  5f                   pop edi
// 005786bf  5e                   pop esi
// 005786c0  83c408               add esp, 8
// 005786c3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
