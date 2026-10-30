// roc 2007-08 0054f7d0  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054f7d0
//
// 0054f7d0  83ec08               sub esp, 8
// 0054f7d3  53                   push ebx
// 0054f7d4  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0054f7d8  56                   push esi
// 0054f7d9  8b742418             mov esi, dword ptr [esp + 0x18]
// 0054f7dd  8b0e                 mov ecx, dword ptr [esi]
// 0054f7df  8d442408             lea eax, [esp + 8]
// 0054f7e3  50                   push eax
// 0054f7e4  885c2418             mov byte ptr [esp + 0x18], bl
// 0054f7e8  ff15e4e57700         call dword ptr [0x77e5e4]
// 0054f7ee  8d4c2415             lea ecx, [esp + 0x15]
// 0054f7f2  51                   push ecx
// 0054f7f3  8b4804               mov ecx, dword ptr [eax + 4]
// 0054f7f6  8d542418             lea edx, [esp + 0x18]
// 0054f7fa  52                   push edx
// 0054f7fb  8b10                 mov edx, dword ptr [eax]
// 0054f7fd  51                   push ecx
// 0054f7fe  8b0e                 mov ecx, dword ptr [esi]
// 0054f800  52                   push edx
// 0054f801  ff15d4e47700         call dword ptr [0x77e4d4]
// 0054f807  8d4c2408             lea ecx, [esp + 8]
// 0054f80b  8bc3                 mov eax, ebx
// 0054f80d  c1f808               sar eax, 8
// 0054f810  51                   push ecx
// 0054f811  8b0e                 mov ecx, dword ptr [esi]
// 0054f813  88442418             mov byte ptr [esp + 0x18], al
// 0054f817  ff15e4e57700         call dword ptr [0x77e5e4]
// 0054f81d  8d542415             lea edx, [esp + 0x15]
// 0054f821  52                   push edx
// 0054f822  8b5004               mov edx, dword ptr [eax + 4]
// 0054f825  8b00                 mov eax, dword ptr [eax]
// 0054f827  8d4c2418             lea ecx, [esp + 0x18]
// 0054f82b  51                   push ecx
// 0054f82c  8b0e                 mov ecx, dword ptr [esi]
// 0054f82e  52                   push edx
// 0054f82f  50                   push eax
// 0054f830  ff15d4e47700         call dword ptr [0x77e4d4]
// 0054f836  8bcb                 mov ecx, ebx
// 0054f838  c1f910               sar ecx, 0x10
// 0054f83b  8d542408             lea edx, [esp + 8]
// 0054f83f  884c2414             mov byte ptr [esp + 0x14], cl
// 0054f843  8b0e                 mov ecx, dword ptr [esi]
// 0054f845  52                   push edx
// 0054f846  ff15e4e57700         call dword ptr [0x77e5e4]
// 0054f84c  8d4c2415             lea ecx, [esp + 0x15]
// 0054f850  51                   push ecx
// 0054f851  8b4804               mov ecx, dword ptr [eax + 4]
// 0054f854  8d542418             lea edx, [esp + 0x18]
// 0054f858  52                   push edx
// 0054f859  8b10                 mov edx, dword ptr [eax]
// 0054f85b  51                   push ecx
// 0054f85c  8b0e                 mov ecx, dword ptr [esi]
// 0054f85e  52                   push edx
// 0054f85f  ff15d4e47700         call dword ptr [0x77e4d4]
// 0054f865  8b0e                 mov ecx, dword ptr [esi]
// 0054f867  8d442408             lea eax, [esp + 8]
// 0054f86b  c1fb18               sar ebx, 0x18
// 0054f86e  50                   push eax
// 0054f86f  885c2418             mov byte ptr [esp + 0x18], bl
// 0054f873  ff15e4e57700         call dword ptr [0x77e5e4]
// 0054f879  8d4c2415             lea ecx, [esp + 0x15]
// 0054f87d  51                   push ecx
// 0054f87e  8b4804               mov ecx, dword ptr [eax + 4]
// 0054f881  8d542418             lea edx, [esp + 0x18]
// 0054f885  52                   push edx
// 0054f886  8b10                 mov edx, dword ptr [eax]
// 0054f888  51                   push ecx
// 0054f889  8b0e                 mov ecx, dword ptr [esi]
// 0054f88b  52                   push edx
// 0054f88c  ff15d4e47700         call dword ptr [0x77e4d4]
// 0054f892  5e                   pop esi
// 0054f893  5b                   pop ebx
// 0054f894  83c408               add esp, 8
// 0054f897  c3                   ret 
// copied from an identical function in another client (function ??$write_long@V?$back_insert_device@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@iostreams@boost@@@?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@CAXJAAV?$back_insert_device@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@12@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_fc27c84cd7b01590.cpp