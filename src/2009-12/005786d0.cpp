// roc 2009-12 005786d0  unit: RBX::MeshFaceCustomizableKey  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005786d0
//
// 005786d0  83ec08               sub esp, 8
// 005786d3  56                   push esi
// 005786d4  8b742410             mov esi, dword ptr [esp + 0x10]
// 005786d8  57                   push edi
// 005786d9  8bf9                 mov edi, ecx
// 005786db  56                   push esi
// 005786dc  8d4c2410             lea ecx, [esp + 0x10]
// 005786e0  8974240c             mov dword ptr [esp + 0xc], esi
// 005786e4  e8e7f8ffff           call 0x577fd0
// 005786e9  56                   push esi
// 005786ea  8d442410             lea eax, [esp + 0x10]
// 005786ee  56                   push esi
// 005786ef  50                   push eax
// 005786f0  e89bc32d00           call 0x854a90
// 005786f5  8d4c2414             lea ecx, [esp + 0x14]
// 005786f9  83c40c               add esp, 0xc
// 005786fc  3bcf                 cmp ecx, edi
// 005786fe  7406                 je 0x578706
// 00578700  8b542408             mov edx, dword ptr [esp + 8]
// 00578704  8917                 mov dword ptr [edi], edx
// 00578706  8b7704               mov esi, dword ptr [edi + 4]
// 00578709  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0057870d  894704               mov dword ptr [edi + 4], eax
// 00578710  85f6                 test esi, esi
// 00578712  742a                 je 0x57873e
// 00578714  8d4e04               lea ecx, [esi + 4]
// 00578717  83caff               or edx, 0xffffffff
// 0057871a  f00fc111             lock xadd dword ptr [ecx], edx
// 0057871e  751e                 jne 0x57873e
// 00578720  8b06                 mov eax, dword ptr [esi]
// 00578722  8b5004               mov edx, dword ptr [eax + 4]
// 00578725  8bce                 mov ecx, esi
// 00578727  ffd2                 call edx
// 00578729  8d4608               lea eax, [esi + 8]
// 0057872c  83c9ff               or ecx, 0xffffffff
// 0057872f  f00fc108             lock xadd dword ptr [eax], ecx
// 00578733  7509                 jne 0x57873e
// 00578735  8b16                 mov edx, dword ptr [esi]
// 00578737  8b4208               mov eax, dword ptr [edx + 8]
// 0057873a  8bce                 mov ecx, esi
// 0057873c  ffd0                 call eax
// 0057873e  5f                   pop edi
// 0057873f  5e                   pop esi
// 00578740  83c408               add esp, 8
// 00578743  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
