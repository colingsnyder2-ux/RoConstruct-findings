// roc 2009-12 005785d0  unit: RBX::MeshFaceCustomizableKey  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005785d0
//
// 005785d0  83ec08               sub esp, 8
// 005785d3  56                   push esi
// 005785d4  8b742410             mov esi, dword ptr [esp + 0x10]
// 005785d8  57                   push edi
// 005785d9  8bf9                 mov edi, ecx
// 005785db  56                   push esi
// 005785dc  8d4c2410             lea ecx, [esp + 0x10]
// 005785e0  8974240c             mov dword ptr [esp + 0xc], esi
// 005785e4  e8c7f8ffff           call 0x577eb0
// 005785e9  56                   push esi
// 005785ea  8d442410             lea eax, [esp + 0x10]
// 005785ee  56                   push esi
// 005785ef  50                   push eax
// 005785f0  e89bc42d00           call 0x854a90
// 005785f5  8d4c2414             lea ecx, [esp + 0x14]
// 005785f9  83c40c               add esp, 0xc
// 005785fc  3bcf                 cmp ecx, edi
// 005785fe  7406                 je 0x578606
// 00578600  8b542408             mov edx, dword ptr [esp + 8]
// 00578604  8917                 mov dword ptr [edi], edx
// 00578606  8b7704               mov esi, dword ptr [edi + 4]
// 00578609  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0057860d  894704               mov dword ptr [edi + 4], eax
// 00578610  85f6                 test esi, esi
// 00578612  742a                 je 0x57863e
// 00578614  8d4e04               lea ecx, [esi + 4]
// 00578617  83caff               or edx, 0xffffffff
// 0057861a  f00fc111             lock xadd dword ptr [ecx], edx
// 0057861e  751e                 jne 0x57863e
// 00578620  8b06                 mov eax, dword ptr [esi]
// 00578622  8b5004               mov edx, dword ptr [eax + 4]
// 00578625  8bce                 mov ecx, esi
// 00578627  ffd2                 call edx
// 00578629  8d4608               lea eax, [esi + 8]
// 0057862c  83c9ff               or ecx, 0xffffffff
// 0057862f  f00fc108             lock xadd dword ptr [eax], ecx
// 00578633  7509                 jne 0x57863e
// 00578635  8b16                 mov edx, dword ptr [esi]
// 00578637  8b4208               mov eax, dword ptr [edx + 8]
// 0057863a  8bce                 mov ecx, esi
// 0057863c  ffd0                 call eax
// 0057863e  5f                   pop edi
// 0057863f  5e                   pop esi
// 00578640  83c408               add esp, 8
// 00578643  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
