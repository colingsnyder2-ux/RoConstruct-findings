// roc 2011-06 00966f60  unit: Ogre::RbxCluster::VRbxPartBinding::?$sp_counted_impl_p  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00966f60
//
// 00966f60  83ec08               sub esp, 8
// 00966f63  56                   push esi
// 00966f64  8b742410             mov esi, dword ptr [esp + 0x10]
// 00966f68  57                   push edi
// 00966f69  8bf9                 mov edi, ecx
// 00966f6b  56                   push esi
// 00966f6c  8d4c2410             lea ecx, [esp + 0x10]
// 00966f70  8974240c             mov dword ptr [esp + 0xc], esi
// 00966f74  e8e7f7ffff           call 0x966760
// 00966f79  56                   push esi
// 00966f7a  8d442410             lea eax, [esp + 0x10]
// 00966f7e  56                   push esi
// 00966f7f  50                   push eax
// 00966f80  e8bb46f0ff           call 0x86b640
// 00966f85  8d4c2414             lea ecx, [esp + 0x14]
// 00966f89  83c40c               add esp, 0xc
// 00966f8c  3bcf                 cmp ecx, edi
// 00966f8e  7406                 je 0x966f96
// 00966f90  8b542408             mov edx, dword ptr [esp + 8]
// 00966f94  8917                 mov dword ptr [edi], edx
// 00966f96  8b7704               mov esi, dword ptr [edi + 4]
// 00966f99  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00966f9d  894704               mov dword ptr [edi + 4], eax
// 00966fa0  85f6                 test esi, esi
// 00966fa2  742a                 je 0x966fce
// 00966fa4  8d4e04               lea ecx, [esi + 4]
// 00966fa7  83caff               or edx, 0xffffffff
// 00966faa  f00fc111             lock xadd dword ptr [ecx], edx
// 00966fae  751e                 jne 0x966fce
// 00966fb0  8b06                 mov eax, dword ptr [esi]
// 00966fb2  8b5004               mov edx, dword ptr [eax + 4]
// 00966fb5  8bce                 mov ecx, esi
// 00966fb7  ffd2                 call edx
// 00966fb9  8d4608               lea eax, [esi + 8]
// 00966fbc  83c9ff               or ecx, 0xffffffff
// 00966fbf  f00fc108             lock xadd dword ptr [eax], ecx
// 00966fc3  7509                 jne 0x966fce
// 00966fc5  8b16                 mov edx, dword ptr [esi]
// 00966fc7  8b4208               mov eax, dword ptr [edx + 8]
// 00966fca  8bce                 mov ecx, esi
// 00966fcc  ffd0                 call eax
// 00966fce  5f                   pop edi
// 00966fcf  5e                   pop esi
// 00966fd0  83c408               add esp, 8
// 00966fd3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
