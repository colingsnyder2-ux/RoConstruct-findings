// roc 2010-06 006befb0  unit: RBX::VInstance::V?$shared_ptr::V?$vector::V?$copy_on_write_ptr::?$sp_counted_impl_p  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006befb0
//
// 006befb0  83ec08               sub esp, 8
// 006befb3  56                   push esi
// 006befb4  8b742410             mov esi, dword ptr [esp + 0x10]
// 006befb8  57                   push edi
// 006befb9  8bf9                 mov edi, ecx
// 006befbb  56                   push esi
// 006befbc  8d4c2410             lea ecx, [esp + 0x10]
// 006befc0  8974240c             mov dword ptr [esp + 0xc], esi
// 006befc4  e817fbffff           call 0x6beae0
// 006befc9  56                   push esi
// 006befca  8d442410             lea eax, [esp + 0x10]
// 006befce  56                   push esi
// 006befcf  50                   push eax
// 006befd0  e8db55d9ff           call 0x4545b0
// 006befd5  8d4c2414             lea ecx, [esp + 0x14]
// 006befd9  83c40c               add esp, 0xc
// 006befdc  3bcf                 cmp ecx, edi
// 006befde  7406                 je 0x6befe6
// 006befe0  8b542408             mov edx, dword ptr [esp + 8]
// 006befe4  8917                 mov dword ptr [edi], edx
// 006befe6  8b7704               mov esi, dword ptr [edi + 4]
// 006befe9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006befed  894704               mov dword ptr [edi + 4], eax
// 006beff0  85f6                 test esi, esi
// 006beff2  742a                 je 0x6bf01e
// 006beff4  8d4e04               lea ecx, [esi + 4]
// 006beff7  83caff               or edx, 0xffffffff
// 006beffa  f00fc111             lock xadd dword ptr [ecx], edx
// 006beffe  751e                 jne 0x6bf01e
// 006bf000  8b06                 mov eax, dword ptr [esi]
// 006bf002  8b5004               mov edx, dword ptr [eax + 4]
// 006bf005  8bce                 mov ecx, esi
// 006bf007  ffd2                 call edx
// 006bf009  8d4608               lea eax, [esi + 8]
// 006bf00c  83c9ff               or ecx, 0xffffffff
// 006bf00f  f00fc108             lock xadd dword ptr [eax], ecx
// 006bf013  7509                 jne 0x6bf01e
// 006bf015  8b16                 mov edx, dword ptr [esi]
// 006bf017  8b4208               mov eax, dword ptr [edx + 8]
// 006bf01a  8bce                 mov ecx, esi
// 006bf01c  ffd0                 call eax
// 006bf01e  5f                   pop edi
// 006bf01f  5e                   pop esi
// 006bf020  83c408               add esp, 8
// 006bf023  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
