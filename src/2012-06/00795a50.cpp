// roc 2012-06 00795a50  unit: RBX::HUMAN::VHumanoidState::?$sp_counted_impl_p  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00795a50
//
// 00795a50  83ec08               sub esp, 8
// 00795a53  56                   push esi
// 00795a54  8b742410             mov esi, dword ptr [esp + 0x10]
// 00795a58  57                   push edi
// 00795a59  8bf9                 mov edi, ecx
// 00795a5b  56                   push esi
// 00795a5c  8d4c2410             lea ecx, [esp + 0x10]
// 00795a60  8974240c             mov dword ptr [esp + 0xc], esi
// 00795a64  e897f7ffff           call 0x795200
// 00795a69  56                   push esi
// 00795a6a  8d442410             lea eax, [esp + 0x10]
// 00795a6e  56                   push esi
// 00795a6f  50                   push eax
// 00795a70  e81b4de0ff           call 0x59a790
// 00795a75  8d4c2414             lea ecx, [esp + 0x14]
// 00795a79  83c40c               add esp, 0xc
// 00795a7c  3bcf                 cmp ecx, edi
// 00795a7e  7406                 je 0x795a86
// 00795a80  8b542408             mov edx, dword ptr [esp + 8]
// 00795a84  8917                 mov dword ptr [edi], edx
// 00795a86  8b7704               mov esi, dword ptr [edi + 4]
// 00795a89  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00795a8d  894704               mov dword ptr [edi + 4], eax
// 00795a90  85f6                 test esi, esi
// 00795a92  742a                 je 0x795abe
// 00795a94  8d4e04               lea ecx, [esi + 4]
// 00795a97  83caff               or edx, 0xffffffff
// 00795a9a  f00fc111             lock xadd dword ptr [ecx], edx
// 00795a9e  751e                 jne 0x795abe
// 00795aa0  8b06                 mov eax, dword ptr [esi]
// 00795aa2  8b5004               mov edx, dword ptr [eax + 4]
// 00795aa5  8bce                 mov ecx, esi
// 00795aa7  ffd2                 call edx
// 00795aa9  8d4608               lea eax, [esi + 8]
// 00795aac  83c9ff               or ecx, 0xffffffff
// 00795aaf  f00fc108             lock xadd dword ptr [eax], ecx
// 00795ab3  7509                 jne 0x795abe
// 00795ab5  8b16                 mov edx, dword ptr [esi]
// 00795ab7  8b4208               mov eax, dword ptr [edx + 8]
// 00795aba  8bce                 mov ecx, esi
// 00795abc  ffd0                 call eax
// 00795abe  5f                   pop edi
// 00795abf  5e                   pop esi
// 00795ac0  83c408               add esp, 8
// 00795ac3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
