// roc 2009-12 007263a0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007263a0
//
// 007263a0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007263a4  8b01                 mov eax, dword ptr [ecx]
// 007263a6  83ec10               sub esp, 0x10
// 007263a9  56                   push esi
// 007263aa  8b742418             mov esi, dword ptr [esp + 0x18]
// 007263ae  57                   push edi
// 007263af  8b7904               mov edi, dword ptr [ecx + 4]
// 007263b2  83f8fc               cmp eax, -4
// 007263b5  740e                 je 0x7263c5
// 007263b7  85c0                 test eax, eax
// 007263b9  7404                 je 0x7263bf
// 007263bb  3b06                 cmp eax, dword ptr [esi]
// 007263bd  7406                 je 0x7263c5
// 007263bf  ff1560b79800         call dword ptr [0x98b760]
// 007263c5  2b7e04               sub edi, dword ptr [esi + 4]
// 007263c8  8d442428             lea eax, [esp + 0x28]
// 007263cc  397c2428             cmp dword ptr [esp + 0x28], edi
// 007263d0  897c2420             mov dword ptr [esp + 0x20], edi
// 007263d4  7c04                 jl 0x7263da
// 007263d6  8d442420             lea eax, [esp + 0x20]
// 007263da  8b38                 mov edi, dword ptr [eax]
// 007263dc  85ff                 test edi, edi
// 007263de  743b                 je 0x72641b
// 007263e0  8b4e04               mov ecx, dword ptr [esi + 4]
// 007263e3  8b06                 mov eax, dword ptr [esi]
// 007263e5  894c240c             mov dword ptr [esp + 0xc], ecx
// 007263e9  57                   push edi
// 007263ea  8d4c240c             lea ecx, [esp + 0xc]
// 007263ee  8944240c             mov dword ptr [esp + 0xc], eax
// 007263f2  e8b944d5ff           call 0x47a8b0
// 007263f7  8b4e04               mov ecx, dword ptr [esi + 4]
// 007263fa  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007263fe  8b16                 mov edx, dword ptr [esi]
// 00726400  2bc1                 sub eax, ecx
// 00726402  89542410             mov dword ptr [esp + 0x10], edx
// 00726406  85c0                 test eax, eax
// 00726408  7e11                 jle 0x72641b
// 0072640a  50                   push eax
// 0072640b  51                   push ecx
// 0072640c  50                   push eax
// 0072640d  8b442430             mov eax, dword ptr [esp + 0x30]
// 00726411  50                   push eax
// 00726412  ff15c0b79800         call dword ptr [0x98b7c0]
// 00726418  83c410               add esp, 0x10
// 0072641b  57                   push edi
// 0072641c  8bce                 mov ecx, esi
// 0072641e  e88d44d5ff           call 0x47a8b0
// 00726423  85ff                 test edi, edi
// 00726425  7408                 je 0x72642f
// 00726427  8bc7                 mov eax, edi
// 00726429  5f                   pop edi
// 0072642a  5e                   pop esi
// 0072642b  83c410               add esp, 0x10
// 0072642e  c3                   ret 
// 0072642f  5f                   pop edi
// 00726430  83c8ff               or eax, 0xffffffff
// 00726433  5e                   pop esi
// 00726434  83c410               add esp, 0x10
// 00726437  c3                   ret 
// copied from an identical function in another client (function ??$read@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@D@?$range_adapter_impl@Urandom_access_iterator_tag@std@@@detail@iostreams@boost@@SAHAAV?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0PADH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp