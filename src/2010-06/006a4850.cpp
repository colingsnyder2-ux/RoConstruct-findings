// roc 2010-06 006a4850  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a4850
//
// 006a4850  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006a4854  8b01                 mov eax, dword ptr [ecx]
// 006a4856  83ec10               sub esp, 0x10
// 006a4859  56                   push esi
// 006a485a  8b742418             mov esi, dword ptr [esp + 0x18]
// 006a485e  57                   push edi
// 006a485f  8b7904               mov edi, dword ptr [ecx + 4]
// 006a4862  83f8fc               cmp eax, -4
// 006a4865  740e                 je 0x6a4875
// 006a4867  85c0                 test eax, eax
// 006a4869  7404                 je 0x6a486f
// 006a486b  3b06                 cmp eax, dword ptr [esi]
// 006a486d  7406                 je 0x6a4875
// 006a486f  ff150ca99e00         call dword ptr [0x9ea90c]
// 006a4875  2b7e04               sub edi, dword ptr [esi + 4]
// 006a4878  8d442428             lea eax, [esp + 0x28]
// 006a487c  397c2428             cmp dword ptr [esp + 0x28], edi
// 006a4880  897c2420             mov dword ptr [esp + 0x20], edi
// 006a4884  7c04                 jl 0x6a488a
// 006a4886  8d442420             lea eax, [esp + 0x20]
// 006a488a  8b38                 mov edi, dword ptr [eax]
// 006a488c  85ff                 test edi, edi
// 006a488e  743b                 je 0x6a48cb
// 006a4890  8b4e04               mov ecx, dword ptr [esi + 4]
// 006a4893  8b06                 mov eax, dword ptr [esi]
// 006a4895  894c240c             mov dword ptr [esp + 0xc], ecx
// 006a4899  57                   push edi
// 006a489a  8d4c240c             lea ecx, [esp + 0xc]
// 006a489e  8944240c             mov dword ptr [esp + 0xc], eax
// 006a48a2  e8a9c4ddff           call 0x480d50
// 006a48a7  8b4e04               mov ecx, dword ptr [esi + 4]
// 006a48aa  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006a48ae  8b16                 mov edx, dword ptr [esi]
// 006a48b0  2bc1                 sub eax, ecx
// 006a48b2  89542410             mov dword ptr [esp + 0x10], edx
// 006a48b6  85c0                 test eax, eax
// 006a48b8  7e11                 jle 0x6a48cb
// 006a48ba  50                   push eax
// 006a48bb  51                   push ecx
// 006a48bc  50                   push eax
// 006a48bd  8b442430             mov eax, dword ptr [esp + 0x30]
// 006a48c1  50                   push eax
// 006a48c2  ff1580a89e00         call dword ptr [0x9ea880]
// 006a48c8  83c410               add esp, 0x10
// 006a48cb  57                   push edi
// 006a48cc  8bce                 mov ecx, esi
// 006a48ce  e87dc4ddff           call 0x480d50
// 006a48d3  85ff                 test edi, edi
// 006a48d5  7408                 je 0x6a48df
// 006a48d7  8bc7                 mov eax, edi
// 006a48d9  5f                   pop edi
// 006a48da  5e                   pop esi
// 006a48db  83c410               add esp, 0x10
// 006a48de  c3                   ret 
// 006a48df  5f                   pop edi
// 006a48e0  83c8ff               or eax, 0xffffffff
// 006a48e3  5e                   pop esi
// 006a48e4  83c410               add esp, 0x10
// 006a48e7  c3                   ret 
// copied from an identical function in another client (function ??$read@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@D@?$range_adapter_impl@Urandom_access_iterator_tag@std@@@detail@iostreams@boost@@SAHAAV?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0PADH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp