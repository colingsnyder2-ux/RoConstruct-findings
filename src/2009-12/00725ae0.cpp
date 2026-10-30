// roc 2009-12 00725ae0  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00725ae0
//
// 00725ae0  83ec08               sub esp, 8
// 00725ae3  53                   push ebx
// 00725ae4  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00725ae8  56                   push esi
// 00725ae9  8b742418             mov esi, dword ptr [esp + 0x18]
// 00725aed  8b0e                 mov ecx, dword ptr [esi]
// 00725aef  8d442408             lea eax, [esp + 8]
// 00725af3  50                   push eax
// 00725af4  885c2418             mov byte ptr [esp + 0x18], bl
// 00725af8  ff15d4b59800         call dword ptr [0x98b5d4]
// 00725afe  8d4c2415             lea ecx, [esp + 0x15]
// 00725b02  51                   push ecx
// 00725b03  8b4804               mov ecx, dword ptr [eax + 4]
// 00725b06  8d542418             lea edx, [esp + 0x18]
// 00725b0a  52                   push edx
// 00725b0b  8b10                 mov edx, dword ptr [eax]
// 00725b0d  51                   push ecx
// 00725b0e  8b0e                 mov ecx, dword ptr [esi]
// 00725b10  52                   push edx
// 00725b11  ff15e8b39800         call dword ptr [0x98b3e8]
// 00725b17  8d4c2408             lea ecx, [esp + 8]
// 00725b1b  8bc3                 mov eax, ebx
// 00725b1d  c1f808               sar eax, 8
// 00725b20  51                   push ecx
// 00725b21  8b0e                 mov ecx, dword ptr [esi]
// 00725b23  88442418             mov byte ptr [esp + 0x18], al
// 00725b27  ff15d4b59800         call dword ptr [0x98b5d4]
// 00725b2d  8d542415             lea edx, [esp + 0x15]
// 00725b31  52                   push edx
// 00725b32  8b5004               mov edx, dword ptr [eax + 4]
// 00725b35  8b00                 mov eax, dword ptr [eax]
// 00725b37  8d4c2418             lea ecx, [esp + 0x18]
// 00725b3b  51                   push ecx
// 00725b3c  8b0e                 mov ecx, dword ptr [esi]
// 00725b3e  52                   push edx
// 00725b3f  50                   push eax
// 00725b40  ff15e8b39800         call dword ptr [0x98b3e8]
// 00725b46  8bcb                 mov ecx, ebx
// 00725b48  c1f910               sar ecx, 0x10
// 00725b4b  8d542408             lea edx, [esp + 8]
// 00725b4f  884c2414             mov byte ptr [esp + 0x14], cl
// 00725b53  8b0e                 mov ecx, dword ptr [esi]
// 00725b55  52                   push edx
// 00725b56  ff15d4b59800         call dword ptr [0x98b5d4]
// 00725b5c  8d4c2415             lea ecx, [esp + 0x15]
// 00725b60  51                   push ecx
// 00725b61  8b4804               mov ecx, dword ptr [eax + 4]
// 00725b64  8d542418             lea edx, [esp + 0x18]
// 00725b68  52                   push edx
// 00725b69  8b10                 mov edx, dword ptr [eax]
// 00725b6b  51                   push ecx
// 00725b6c  8b0e                 mov ecx, dword ptr [esi]
// 00725b6e  52                   push edx
// 00725b6f  ff15e8b39800         call dword ptr [0x98b3e8]
// 00725b75  8b0e                 mov ecx, dword ptr [esi]
// 00725b77  8d442408             lea eax, [esp + 8]
// 00725b7b  c1fb18               sar ebx, 0x18
// 00725b7e  50                   push eax
// 00725b7f  885c2418             mov byte ptr [esp + 0x18], bl
// 00725b83  ff15d4b59800         call dword ptr [0x98b5d4]
// 00725b89  8d4c2415             lea ecx, [esp + 0x15]
// 00725b8d  51                   push ecx
// 00725b8e  8b4804               mov ecx, dword ptr [eax + 4]
// 00725b91  8d542418             lea edx, [esp + 0x18]
// 00725b95  52                   push edx
// 00725b96  8b10                 mov edx, dword ptr [eax]
// 00725b98  51                   push ecx
// 00725b99  8b0e                 mov ecx, dword ptr [esi]
// 00725b9b  52                   push edx
// 00725b9c  ff15e8b39800         call dword ptr [0x98b3e8]
// 00725ba2  5e                   pop esi
// 00725ba3  5b                   pop ebx
// 00725ba4  83c408               add esp, 8
// 00725ba7  c3                   ret 
// copied from an identical function in another client (function ??$write_long@V?$back_insert_device@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@iostreams@boost@@@?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@CAXJAAV?$back_insert_device@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@12@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_fc27c84cd7b01590.cpp