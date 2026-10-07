// roc 2011-06 00655670  unit: std::D::DU?$char_traits::V?$basic_string::?$sp_counted_impl_p  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00655670
//
// 00655670  83ec08               sub esp, 8
// 00655673  56                   push esi
// 00655674  8b742410             mov esi, dword ptr [esp + 0x10]
// 00655678  57                   push edi
// 00655679  8bf9                 mov edi, ecx
// 0065567b  56                   push esi
// 0065567c  8d4c2410             lea ecx, [esp + 0x10]
// 00655680  8974240c             mov dword ptr [esp + 0xc], esi
// 00655684  e867f2ffff           call 0x6548f0
// 00655689  56                   push esi
// 0065568a  8d442410             lea eax, [esp + 0x10]
// 0065568e  56                   push esi
// 0065568f  50                   push eax
// 00655690  e8ab5f2100           call 0x86b640
// 00655695  8d4c2414             lea ecx, [esp + 0x14]
// 00655699  83c40c               add esp, 0xc
// 0065569c  3bcf                 cmp ecx, edi
// 0065569e  7406                 je 0x6556a6
// 006556a0  8b542408             mov edx, dword ptr [esp + 8]
// 006556a4  8917                 mov dword ptr [edi], edx
// 006556a6  8b7704               mov esi, dword ptr [edi + 4]
// 006556a9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006556ad  894704               mov dword ptr [edi + 4], eax
// 006556b0  85f6                 test esi, esi
// 006556b2  742a                 je 0x6556de
// 006556b4  8d4e04               lea ecx, [esi + 4]
// 006556b7  83caff               or edx, 0xffffffff
// 006556ba  f00fc111             lock xadd dword ptr [ecx], edx
// 006556be  751e                 jne 0x6556de
// 006556c0  8b06                 mov eax, dword ptr [esi]
// 006556c2  8b5004               mov edx, dword ptr [eax + 4]
// 006556c5  8bce                 mov ecx, esi
// 006556c7  ffd2                 call edx
// 006556c9  8d4608               lea eax, [esi + 8]
// 006556cc  83c9ff               or ecx, 0xffffffff
// 006556cf  f00fc108             lock xadd dword ptr [eax], ecx
// 006556d3  7509                 jne 0x6556de
// 006556d5  8b16                 mov edx, dword ptr [esi]
// 006556d7  8b4208               mov eax, dword ptr [edx + 8]
// 006556da  8bce                 mov ecx, esi
// 006556dc  ffd0                 call eax
// 006556de  5f                   pop edi
// 006556df  5e                   pop esi
// 006556e0  83c408               add esp, 8
// 006556e3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
