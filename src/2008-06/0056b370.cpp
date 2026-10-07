// roc 2008-06 0056b370  unit: boost::signals::detail::Vsignal_base_impl::?$sp_counted_impl_p  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056b370
//
// 0056b370  83ec08               sub esp, 8
// 0056b373  56                   push esi
// 0056b374  8b742410             mov esi, dword ptr [esp + 0x10]
// 0056b378  57                   push edi
// 0056b379  8bf9                 mov edi, ecx
// 0056b37b  56                   push esi
// 0056b37c  8d4c2410             lea ecx, [esp + 0x10]
// 0056b380  8974240c             mov dword ptr [esp + 0xc], esi
// 0056b384  e837ffffff           call 0x56b2c0
// 0056b389  56                   push esi
// 0056b38a  8d442410             lea eax, [esp + 0x10]
// 0056b38e  56                   push esi
// 0056b38f  50                   push eax
// 0056b390  e87b20f1ff           call 0x47d410
// 0056b395  8d4c2414             lea ecx, [esp + 0x14]
// 0056b399  83c40c               add esp, 0xc
// 0056b39c  3bcf                 cmp ecx, edi
// 0056b39e  7406                 je 0x56b3a6
// 0056b3a0  8b542408             mov edx, dword ptr [esp + 8]
// 0056b3a4  8917                 mov dword ptr [edi], edx
// 0056b3a6  8b7704               mov esi, dword ptr [edi + 4]
// 0056b3a9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0056b3ad  894704               mov dword ptr [edi + 4], eax
// 0056b3b0  85f6                 test esi, esi
// 0056b3b2  742a                 je 0x56b3de
// 0056b3b4  8d4e04               lea ecx, [esi + 4]
// 0056b3b7  83caff               or edx, 0xffffffff
// 0056b3ba  f00fc111             lock xadd dword ptr [ecx], edx
// 0056b3be  751e                 jne 0x56b3de
// 0056b3c0  8b06                 mov eax, dword ptr [esi]
// 0056b3c2  8b5004               mov edx, dword ptr [eax + 4]
// 0056b3c5  8bce                 mov ecx, esi
// 0056b3c7  ffd2                 call edx
// 0056b3c9  8d4608               lea eax, [esi + 8]
// 0056b3cc  83c9ff               or ecx, 0xffffffff
// 0056b3cf  f00fc108             lock xadd dword ptr [eax], ecx
// 0056b3d3  7509                 jne 0x56b3de
// 0056b3d5  8b16                 mov edx, dword ptr [esi]
// 0056b3d7  8b4208               mov eax, dword ptr [edx + 8]
// 0056b3da  8bce                 mov ecx, esi
// 0056b3dc  ffd0                 call eax
// 0056b3de  5f                   pop edi
// 0056b3df  5e                   pop esi
// 0056b3e0  83c408               add esp, 8
// 0056b3e3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
