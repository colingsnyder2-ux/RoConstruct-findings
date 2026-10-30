// roc 2009-06 00615a80  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00615a80
//
// 00615a80  83ec08               sub esp, 8
// 00615a83  53                   push ebx
// 00615a84  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00615a88  56                   push esi
// 00615a89  8b742418             mov esi, dword ptr [esp + 0x18]
// 00615a8d  8b0e                 mov ecx, dword ptr [esi]
// 00615a8f  8d442408             lea eax, [esp + 8]
// 00615a93  50                   push eax
// 00615a94  885c2418             mov byte ptr [esp + 0x18], bl
// 00615a98  ff15e4e48900         call dword ptr [0x89e4e4]
// 00615a9e  8d4c2415             lea ecx, [esp + 0x15]
// 00615aa2  51                   push ecx
// 00615aa3  8b4804               mov ecx, dword ptr [eax + 4]
// 00615aa6  8d542418             lea edx, [esp + 0x18]
// 00615aaa  52                   push edx
// 00615aab  8b10                 mov edx, dword ptr [eax]
// 00615aad  51                   push ecx
// 00615aae  8b0e                 mov ecx, dword ptr [esi]
// 00615ab0  52                   push edx
// 00615ab1  ff1544e68900         call dword ptr [0x89e644]
// 00615ab7  8d4c2408             lea ecx, [esp + 8]
// 00615abb  8bc3                 mov eax, ebx
// 00615abd  c1f808               sar eax, 8
// 00615ac0  51                   push ecx
// 00615ac1  8b0e                 mov ecx, dword ptr [esi]
// 00615ac3  88442418             mov byte ptr [esp + 0x18], al
// 00615ac7  ff15e4e48900         call dword ptr [0x89e4e4]
// 00615acd  8d542415             lea edx, [esp + 0x15]
// 00615ad1  52                   push edx
// 00615ad2  8b5004               mov edx, dword ptr [eax + 4]
// 00615ad5  8b00                 mov eax, dword ptr [eax]
// 00615ad7  8d4c2418             lea ecx, [esp + 0x18]
// 00615adb  51                   push ecx
// 00615adc  8b0e                 mov ecx, dword ptr [esi]
// 00615ade  52                   push edx
// 00615adf  50                   push eax
// 00615ae0  ff1544e68900         call dword ptr [0x89e644]
// 00615ae6  8bcb                 mov ecx, ebx
// 00615ae8  c1f910               sar ecx, 0x10
// 00615aeb  8d542408             lea edx, [esp + 8]
// 00615aef  884c2414             mov byte ptr [esp + 0x14], cl
// 00615af3  8b0e                 mov ecx, dword ptr [esi]
// 00615af5  52                   push edx
// 00615af6  ff15e4e48900         call dword ptr [0x89e4e4]
// 00615afc  8d4c2415             lea ecx, [esp + 0x15]
// 00615b00  51                   push ecx
// 00615b01  8b4804               mov ecx, dword ptr [eax + 4]
// 00615b04  8d542418             lea edx, [esp + 0x18]
// 00615b08  52                   push edx
// 00615b09  8b10                 mov edx, dword ptr [eax]
// 00615b0b  51                   push ecx
// 00615b0c  8b0e                 mov ecx, dword ptr [esi]
// 00615b0e  52                   push edx
// 00615b0f  ff1544e68900         call dword ptr [0x89e644]
// 00615b15  8b0e                 mov ecx, dword ptr [esi]
// 00615b17  8d442408             lea eax, [esp + 8]
// 00615b1b  c1fb18               sar ebx, 0x18
// 00615b1e  50                   push eax
// 00615b1f  885c2418             mov byte ptr [esp + 0x18], bl
// 00615b23  ff15e4e48900         call dword ptr [0x89e4e4]
// 00615b29  8d4c2415             lea ecx, [esp + 0x15]
// 00615b2d  51                   push ecx
// 00615b2e  8b4804               mov ecx, dword ptr [eax + 4]
// 00615b31  8d542418             lea edx, [esp + 0x18]
// 00615b35  52                   push edx
// 00615b36  8b10                 mov edx, dword ptr [eax]
// 00615b38  51                   push ecx
// 00615b39  8b0e                 mov ecx, dword ptr [esi]
// 00615b3b  52                   push edx
// 00615b3c  ff1544e68900         call dword ptr [0x89e644]
// 00615b42  5e                   pop esi
// 00615b43  5b                   pop ebx
// 00615b44  83c408               add esp, 8
// 00615b47  c3                   ret 
// copied from an identical function in another client (function ??$write_long@V?$back_insert_device@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@iostreams@boost@@@?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@CAXJAAV?$back_insert_device@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@12@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_fc27c84cd7b01590.cpp