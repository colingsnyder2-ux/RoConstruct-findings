// roc 2010-06 0066dd20  unit: RBX::Humanoid  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0066dd20
//
// 0066dd20  83ec08               sub esp, 8
// 0066dd23  56                   push esi
// 0066dd24  8b742410             mov esi, dword ptr [esp + 0x10]
// 0066dd28  57                   push edi
// 0066dd29  8bf9                 mov edi, ecx
// 0066dd2b  56                   push esi
// 0066dd2c  8d4c2410             lea ecx, [esp + 0x10]
// 0066dd30  8974240c             mov dword ptr [esp + 0xc], esi
// 0066dd34  e8f7f6ffff           call 0x66d430
// 0066dd39  56                   push esi
// 0066dd3a  8d442410             lea eax, [esp + 0x10]
// 0066dd3e  56                   push esi
// 0066dd3f  50                   push eax
// 0066dd40  e86b68deff           call 0x4545b0
// 0066dd45  8d4c2414             lea ecx, [esp + 0x14]
// 0066dd49  83c40c               add esp, 0xc
// 0066dd4c  3bcf                 cmp ecx, edi
// 0066dd4e  7406                 je 0x66dd56
// 0066dd50  8b542408             mov edx, dword ptr [esp + 8]
// 0066dd54  8917                 mov dword ptr [edi], edx
// 0066dd56  8b7704               mov esi, dword ptr [edi + 4]
// 0066dd59  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0066dd5d  894704               mov dword ptr [edi + 4], eax
// 0066dd60  85f6                 test esi, esi
// 0066dd62  742a                 je 0x66dd8e
// 0066dd64  8d4e04               lea ecx, [esi + 4]
// 0066dd67  83caff               or edx, 0xffffffff
// 0066dd6a  f00fc111             lock xadd dword ptr [ecx], edx
// 0066dd6e  751e                 jne 0x66dd8e
// 0066dd70  8b06                 mov eax, dword ptr [esi]
// 0066dd72  8b5004               mov edx, dword ptr [eax + 4]
// 0066dd75  8bce                 mov ecx, esi
// 0066dd77  ffd2                 call edx
// 0066dd79  8d4608               lea eax, [esi + 8]
// 0066dd7c  83c9ff               or ecx, 0xffffffff
// 0066dd7f  f00fc108             lock xadd dword ptr [eax], ecx
// 0066dd83  7509                 jne 0x66dd8e
// 0066dd85  8b16                 mov edx, dword ptr [esi]
// 0066dd87  8b4208               mov eax, dword ptr [edx + 8]
// 0066dd8a  8bce                 mov ecx, esi
// 0066dd8c  ffd0                 call eax
// 0066dd8e  5f                   pop edi
// 0066dd8f  5e                   pop esi
// 0066dd90  83c408               add esp, 8
// 0066dd93  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
