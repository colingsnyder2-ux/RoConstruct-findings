// roc 2010-06 006a3fe0  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a3fe0
//
// 006a3fe0  83ec08               sub esp, 8
// 006a3fe3  53                   push ebx
// 006a3fe4  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006a3fe8  56                   push esi
// 006a3fe9  8b742418             mov esi, dword ptr [esp + 0x18]
// 006a3fed  8b0e                 mov ecx, dword ptr [esi]
// 006a3fef  8d442408             lea eax, [esp + 8]
// 006a3ff3  50                   push eax
// 006a3ff4  885c2418             mov byte ptr [esp + 0x18], bl
// 006a3ff8  ff153ca59e00         call dword ptr [0x9ea53c]
// 006a3ffe  8d4c2415             lea ecx, [esp + 0x15]
// 006a4002  51                   push ecx
// 006a4003  8b4804               mov ecx, dword ptr [eax + 4]
// 006a4006  8d542418             lea edx, [esp + 0x18]
// 006a400a  52                   push edx
// 006a400b  8b10                 mov edx, dword ptr [eax]
// 006a400d  51                   push ecx
// 006a400e  8b0e                 mov ecx, dword ptr [esi]
// 006a4010  52                   push edx
// 006a4011  ff1584a59e00         call dword ptr [0x9ea584]
// 006a4017  8d4c2408             lea ecx, [esp + 8]
// 006a401b  8bc3                 mov eax, ebx
// 006a401d  c1f808               sar eax, 8
// 006a4020  51                   push ecx
// 006a4021  8b0e                 mov ecx, dword ptr [esi]
// 006a4023  88442418             mov byte ptr [esp + 0x18], al
// 006a4027  ff153ca59e00         call dword ptr [0x9ea53c]
// 006a402d  8d542415             lea edx, [esp + 0x15]
// 006a4031  52                   push edx
// 006a4032  8b5004               mov edx, dword ptr [eax + 4]
// 006a4035  8b00                 mov eax, dword ptr [eax]
// 006a4037  8d4c2418             lea ecx, [esp + 0x18]
// 006a403b  51                   push ecx
// 006a403c  8b0e                 mov ecx, dword ptr [esi]
// 006a403e  52                   push edx
// 006a403f  50                   push eax
// 006a4040  ff1584a59e00         call dword ptr [0x9ea584]
// 006a4046  8bcb                 mov ecx, ebx
// 006a4048  c1f910               sar ecx, 0x10
// 006a404b  8d542408             lea edx, [esp + 8]
// 006a404f  884c2414             mov byte ptr [esp + 0x14], cl
// 006a4053  8b0e                 mov ecx, dword ptr [esi]
// 006a4055  52                   push edx
// 006a4056  ff153ca59e00         call dword ptr [0x9ea53c]
// 006a405c  8d4c2415             lea ecx, [esp + 0x15]
// 006a4060  51                   push ecx
// 006a4061  8b4804               mov ecx, dword ptr [eax + 4]
// 006a4064  8d542418             lea edx, [esp + 0x18]
// 006a4068  52                   push edx
// 006a4069  8b10                 mov edx, dword ptr [eax]
// 006a406b  51                   push ecx
// 006a406c  8b0e                 mov ecx, dword ptr [esi]
// 006a406e  52                   push edx
// 006a406f  ff1584a59e00         call dword ptr [0x9ea584]
// 006a4075  8b0e                 mov ecx, dword ptr [esi]
// 006a4077  8d442408             lea eax, [esp + 8]
// 006a407b  c1fb18               sar ebx, 0x18
// 006a407e  50                   push eax
// 006a407f  885c2418             mov byte ptr [esp + 0x18], bl
// 006a4083  ff153ca59e00         call dword ptr [0x9ea53c]
// 006a4089  8d4c2415             lea ecx, [esp + 0x15]
// 006a408d  51                   push ecx
// 006a408e  8b4804               mov ecx, dword ptr [eax + 4]
// 006a4091  8d542418             lea edx, [esp + 0x18]
// 006a4095  52                   push edx
// 006a4096  8b10                 mov edx, dword ptr [eax]
// 006a4098  51                   push ecx
// 006a4099  8b0e                 mov ecx, dword ptr [esi]
// 006a409b  52                   push edx
// 006a409c  ff1584a59e00         call dword ptr [0x9ea584]
// 006a40a2  5e                   pop esi
// 006a40a3  5b                   pop ebx
// 006a40a4  83c408               add esp, 8
// 006a40a7  c3                   ret 
// copied from an identical function in another client (function ??$write_long@V?$back_insert_device@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@iostreams@boost@@@?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@CAXJAAV?$back_insert_device@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_fc27c84cd7b01590.cpp