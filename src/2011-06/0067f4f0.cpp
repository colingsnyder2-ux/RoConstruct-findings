// roc 2011-06 0067f4f0  unit: RBX::HUMAN::VHumanoidState::?$sp_counted_impl_p  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0067f4f0
//
// 0067f4f0  83ec08               sub esp, 8
// 0067f4f3  56                   push esi
// 0067f4f4  8b742410             mov esi, dword ptr [esp + 0x10]
// 0067f4f8  57                   push edi
// 0067f4f9  8bf9                 mov edi, ecx
// 0067f4fb  56                   push esi
// 0067f4fc  8d4c2410             lea ecx, [esp + 0x10]
// 0067f500  8974240c             mov dword ptr [esp + 0xc], esi
// 0067f504  e857f9ffff           call 0x67ee60
// 0067f509  56                   push esi
// 0067f50a  8d442410             lea eax, [esp + 0x10]
// 0067f50e  56                   push esi
// 0067f50f  50                   push eax
// 0067f510  e82bc11e00           call 0x86b640
// 0067f515  8d4c2414             lea ecx, [esp + 0x14]
// 0067f519  83c40c               add esp, 0xc
// 0067f51c  3bcf                 cmp ecx, edi
// 0067f51e  7406                 je 0x67f526
// 0067f520  8b542408             mov edx, dword ptr [esp + 8]
// 0067f524  8917                 mov dword ptr [edi], edx
// 0067f526  8b7704               mov esi, dword ptr [edi + 4]
// 0067f529  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0067f52d  894704               mov dword ptr [edi + 4], eax
// 0067f530  85f6                 test esi, esi
// 0067f532  742a                 je 0x67f55e
// 0067f534  8d4e04               lea ecx, [esi + 4]
// 0067f537  83caff               or edx, 0xffffffff
// 0067f53a  f00fc111             lock xadd dword ptr [ecx], edx
// 0067f53e  751e                 jne 0x67f55e
// 0067f540  8b06                 mov eax, dword ptr [esi]
// 0067f542  8b5004               mov edx, dword ptr [eax + 4]
// 0067f545  8bce                 mov ecx, esi
// 0067f547  ffd2                 call edx
// 0067f549  8d4608               lea eax, [esi + 8]
// 0067f54c  83c9ff               or ecx, 0xffffffff
// 0067f54f  f00fc108             lock xadd dword ptr [eax], ecx
// 0067f553  7509                 jne 0x67f55e
// 0067f555  8b16                 mov edx, dword ptr [esi]
// 0067f557  8b4208               mov eax, dword ptr [edx + 8]
// 0067f55a  8bce                 mov ecx, esi
// 0067f55c  ffd0                 call eax
// 0067f55e  5f                   pop edi
// 0067f55f  5e                   pop esi
// 0067f560  83c408               add esp, 8
// 0067f563  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
