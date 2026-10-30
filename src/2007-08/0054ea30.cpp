// roc 2007-08 0054ea30  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054ea30
//
// 0054ea30  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0054ea34  8b01                 mov eax, dword ptr [ecx]
// 0054ea36  83ec10               sub esp, 0x10
// 0054ea39  83f8fe               cmp eax, -2
// 0054ea3c  56                   push esi
// 0054ea3d  8b742418             mov esi, dword ptr [esp + 0x18]
// 0054ea41  57                   push edi
// 0054ea42  8b7904               mov edi, dword ptr [ecx + 4]
// 0054ea45  740e                 je 0x54ea55
// 0054ea47  85c0                 test eax, eax
// 0054ea49  7404                 je 0x54ea4f
// 0054ea4b  3b06                 cmp eax, dword ptr [esi]
// 0054ea4d  7406                 je 0x54ea55
// 0054ea4f  ff15d8e67700         call dword ptr [0x77e6d8]
// 0054ea55  2b7e04               sub edi, dword ptr [esi + 4]
// 0054ea58  8d442428             lea eax, [esp + 0x28]
// 0054ea5c  397c2428             cmp dword ptr [esp + 0x28], edi
// 0054ea60  897c2420             mov dword ptr [esp + 0x20], edi
// 0054ea64  7c04                 jl 0x54ea6a
// 0054ea66  8d442420             lea eax, [esp + 0x20]
// 0054ea6a  8b38                 mov edi, dword ptr [eax]
// 0054ea6c  85ff                 test edi, edi
// 0054ea6e  743d                 je 0x54eaad
// 0054ea70  8b4e04               mov ecx, dword ptr [esi + 4]
// 0054ea73  8b06                 mov eax, dword ptr [esi]
// 0054ea75  55                   push ebp
// 0054ea76  894c2410             mov dword ptr [esp + 0x10], ecx
// 0054ea7a  57                   push edi
// 0054ea7b  8d4c2410             lea ecx, [esp + 0x10]
// 0054ea7f  89442410             mov dword ptr [esp + 0x10], eax
// 0054ea83  e8f8a9f1ff           call 0x469480
// 0054ea88  8b4604               mov eax, dword ptr [esi + 4]
// 0054ea8b  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0054ea8f  3bc5                 cmp eax, ebp
// 0054ea91  8b16                 mov edx, dword ptr [esi]
// 0054ea93  89542414             mov dword ptr [esp + 0x14], edx
// 0054ea97  7413                 je 0x54eaac
// 0054ea99  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0054ea9d  2bc8                 sub ecx, eax
// 0054ea9f  90                   nop 
// 0054eaa0  8a10                 mov dl, byte ptr [eax]
// 0054eaa2  881401               mov byte ptr [ecx + eax], dl
// 0054eaa5  83c001               add eax, 1
// 0054eaa8  3bc5                 cmp eax, ebp
// 0054eaaa  75f4                 jne 0x54eaa0
// 0054eaac  5d                   pop ebp
// 0054eaad  57                   push edi
// 0054eaae  8bce                 mov ecx, esi
// 0054eab0  e8cba9f1ff           call 0x469480
// 0054eab5  85ff                 test edi, edi
// 0054eab7  7408                 je 0x54eac1
// 0054eab9  8bc7                 mov eax, edi
// 0054eabb  5f                   pop edi
// 0054eabc  5e                   pop esi
// 0054eabd  83c410               add esp, 0x10
// 0054eac0  c3                   ret 
// 0054eac1  5f                   pop edi
// 0054eac2  83c8ff               or eax, 0xffffffff
// 0054eac5  5e                   pop esi
// 0054eac6  83c410               add esp, 0x10
// 0054eac9  c3                   ret 
// copied from an identical function in another client (function ??$read@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@D@?$range_adapter_impl@Urandom_access_iterator_tag@std@@@detail@iostreams@boost@@SAHAAV?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0PADH@Z)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp