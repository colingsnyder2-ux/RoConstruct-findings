// roc 2010-06 006c79a0  unit: RBX::Handles  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006c79a0
//
// 006c79a0  83ec08               sub esp, 8
// 006c79a3  56                   push esi
// 006c79a4  8b742410             mov esi, dword ptr [esp + 0x10]
// 006c79a8  57                   push edi
// 006c79a9  8bf9                 mov edi, ecx
// 006c79ab  56                   push esi
// 006c79ac  8d4c2410             lea ecx, [esp + 0x10]
// 006c79b0  8974240c             mov dword ptr [esp + 0xc], esi
// 006c79b4  e8a7fcffff           call 0x6c7660
// 006c79b9  56                   push esi
// 006c79ba  8d442410             lea eax, [esp + 0x10]
// 006c79be  56                   push esi
// 006c79bf  50                   push eax
// 006c79c0  e8ebcbd8ff           call 0x4545b0
// 006c79c5  8d4c2414             lea ecx, [esp + 0x14]
// 006c79c9  83c40c               add esp, 0xc
// 006c79cc  3bcf                 cmp ecx, edi
// 006c79ce  7406                 je 0x6c79d6
// 006c79d0  8b542408             mov edx, dword ptr [esp + 8]
// 006c79d4  8917                 mov dword ptr [edi], edx
// 006c79d6  8b7704               mov esi, dword ptr [edi + 4]
// 006c79d9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006c79dd  894704               mov dword ptr [edi + 4], eax
// 006c79e0  85f6                 test esi, esi
// 006c79e2  742a                 je 0x6c7a0e
// 006c79e4  8d4e04               lea ecx, [esi + 4]
// 006c79e7  83caff               or edx, 0xffffffff
// 006c79ea  f00fc111             lock xadd dword ptr [ecx], edx
// 006c79ee  751e                 jne 0x6c7a0e
// 006c79f0  8b06                 mov eax, dword ptr [esi]
// 006c79f2  8b5004               mov edx, dword ptr [eax + 4]
// 006c79f5  8bce                 mov ecx, esi
// 006c79f7  ffd2                 call edx
// 006c79f9  8d4608               lea eax, [esi + 8]
// 006c79fc  83c9ff               or ecx, 0xffffffff
// 006c79ff  f00fc108             lock xadd dword ptr [eax], ecx
// 006c7a03  7509                 jne 0x6c7a0e
// 006c7a05  8b16                 mov edx, dword ptr [esi]
// 006c7a07  8b4208               mov eax, dword ptr [edx + 8]
// 006c7a0a  8bce                 mov ecx, esi
// 006c7a0c  ffd0                 call eax
// 006c7a0e  5f                   pop edi
// 006c7a0f  5e                   pop esi
// 006c7a10  83c408               add esp, 8
// 006c7a13  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
