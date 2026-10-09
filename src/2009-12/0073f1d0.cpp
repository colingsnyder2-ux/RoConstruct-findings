// roc 2009-12 0073f1d0  unit: RBX::VInstance::V?$shared_ptr::V?$vector::V?$copy_on_write_ptr::?$sp_counted_impl_p  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0073f1d0
//
// 0073f1d0  83ec08               sub esp, 8
// 0073f1d3  56                   push esi
// 0073f1d4  8b742410             mov esi, dword ptr [esp + 0x10]
// 0073f1d8  57                   push edi
// 0073f1d9  8bf9                 mov edi, ecx
// 0073f1db  56                   push esi
// 0073f1dc  8d4c2410             lea ecx, [esp + 0x10]
// 0073f1e0  8974240c             mov dword ptr [esp + 0xc], esi
// 0073f1e4  e8e7f8ffff           call 0x73ead0
// 0073f1e9  56                   push esi
// 0073f1ea  8d442410             lea eax, [esp + 0x10]
// 0073f1ee  56                   push esi
// 0073f1ef  50                   push eax
// 0073f1f0  e89b581100           call 0x854a90
// 0073f1f5  8d4c2414             lea ecx, [esp + 0x14]
// 0073f1f9  83c40c               add esp, 0xc
// 0073f1fc  3bcf                 cmp ecx, edi
// 0073f1fe  7406                 je 0x73f206
// 0073f200  8b542408             mov edx, dword ptr [esp + 8]
// 0073f204  8917                 mov dword ptr [edi], edx
// 0073f206  8b7704               mov esi, dword ptr [edi + 4]
// 0073f209  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0073f20d  894704               mov dword ptr [edi + 4], eax
// 0073f210  85f6                 test esi, esi
// 0073f212  742a                 je 0x73f23e
// 0073f214  8d4e04               lea ecx, [esi + 4]
// 0073f217  83caff               or edx, 0xffffffff
// 0073f21a  f00fc111             lock xadd dword ptr [ecx], edx
// 0073f21e  751e                 jne 0x73f23e
// 0073f220  8b06                 mov eax, dword ptr [esi]
// 0073f222  8b5004               mov edx, dword ptr [eax + 4]
// 0073f225  8bce                 mov ecx, esi
// 0073f227  ffd2                 call edx
// 0073f229  8d4608               lea eax, [esi + 8]
// 0073f22c  83c9ff               or ecx, 0xffffffff
// 0073f22f  f00fc108             lock xadd dword ptr [eax], ecx
// 0073f233  7509                 jne 0x73f23e
// 0073f235  8b16                 mov edx, dword ptr [esi]
// 0073f237  8b4208               mov eax, dword ptr [edx + 8]
// 0073f23a  8bce                 mov ecx, esi
// 0073f23c  ffd0                 call eax
// 0073f23e  5f                   pop edi
// 0073f23f  5e                   pop esi
// 0073f240  83c408               add esp, 8
// 0073f243  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
