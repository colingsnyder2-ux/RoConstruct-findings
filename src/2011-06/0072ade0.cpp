// roc 2011-06 0072ade0  unit: RBX::MeshContentProvider::VCachedMesh::?$sp_counted_impl_p  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0072ade0
//
// 0072ade0  83ec08               sub esp, 8
// 0072ade3  56                   push esi
// 0072ade4  8b742410             mov esi, dword ptr [esp + 0x10]
// 0072ade8  57                   push edi
// 0072ade9  8bf9                 mov edi, ecx
// 0072adeb  56                   push esi
// 0072adec  8d4c2410             lea ecx, [esp + 0x10]
// 0072adf0  8974240c             mov dword ptr [esp + 0xc], esi
// 0072adf4  e817fdffff           call 0x72ab10
// 0072adf9  56                   push esi
// 0072adfa  8d442410             lea eax, [esp + 0x10]
// 0072adfe  56                   push esi
// 0072adff  50                   push eax
// 0072ae00  e83b081400           call 0x86b640
// 0072ae05  8d4c2414             lea ecx, [esp + 0x14]
// 0072ae09  83c40c               add esp, 0xc
// 0072ae0c  3bcf                 cmp ecx, edi
// 0072ae0e  7406                 je 0x72ae16
// 0072ae10  8b542408             mov edx, dword ptr [esp + 8]
// 0072ae14  8917                 mov dword ptr [edi], edx
// 0072ae16  8b7704               mov esi, dword ptr [edi + 4]
// 0072ae19  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0072ae1d  894704               mov dword ptr [edi + 4], eax
// 0072ae20  85f6                 test esi, esi
// 0072ae22  742a                 je 0x72ae4e
// 0072ae24  8d4e04               lea ecx, [esi + 4]
// 0072ae27  83caff               or edx, 0xffffffff
// 0072ae2a  f00fc111             lock xadd dword ptr [ecx], edx
// 0072ae2e  751e                 jne 0x72ae4e
// 0072ae30  8b06                 mov eax, dword ptr [esi]
// 0072ae32  8b5004               mov edx, dword ptr [eax + 4]
// 0072ae35  8bce                 mov ecx, esi
// 0072ae37  ffd2                 call edx
// 0072ae39  8d4608               lea eax, [esi + 8]
// 0072ae3c  83c9ff               or ecx, 0xffffffff
// 0072ae3f  f00fc108             lock xadd dword ptr [eax], ecx
// 0072ae43  7509                 jne 0x72ae4e
// 0072ae45  8b16                 mov edx, dword ptr [esi]
// 0072ae47  8b4208               mov eax, dword ptr [edx + 8]
// 0072ae4a  8bce                 mov ecx, esi
// 0072ae4c  ffd0                 call eax
// 0072ae4e  5f                   pop edi
// 0072ae4f  5e                   pop esi
// 0072ae50  83c408               add esp, 8
// 0072ae53  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
