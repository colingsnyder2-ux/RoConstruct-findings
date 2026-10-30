// roc 2012-06 0085cf40  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0085cf40
//
// 0085cf40  83ec08               sub esp, 8
// 0085cf43  53                   push ebx
// 0085cf44  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0085cf48  56                   push esi
// 0085cf49  8b742418             mov esi, dword ptr [esp + 0x18]
// 0085cf4d  8b0e                 mov ecx, dword ptr [esi]
// 0085cf4f  8d442408             lea eax, [esp + 8]
// 0085cf53  50                   push eax
// 0085cf54  885c2418             mov byte ptr [esp + 0x18], bl
// 0085cf58  ff15b026b200         call dword ptr [0xb226b0]
// 0085cf5e  8d4c2415             lea ecx, [esp + 0x15]
// 0085cf62  51                   push ecx
// 0085cf63  8b4804               mov ecx, dword ptr [eax + 4]
// 0085cf66  8d542418             lea edx, [esp + 0x18]
// 0085cf6a  52                   push edx
// 0085cf6b  8b10                 mov edx, dword ptr [eax]
// 0085cf6d  51                   push ecx
// 0085cf6e  8b0e                 mov ecx, dword ptr [esi]
// 0085cf70  52                   push edx
// 0085cf71  ff15f023b200         call dword ptr [0xb223f0]
// 0085cf77  8d4c2408             lea ecx, [esp + 8]
// 0085cf7b  8bc3                 mov eax, ebx
// 0085cf7d  c1f808               sar eax, 8
// 0085cf80  51                   push ecx
// 0085cf81  8b0e                 mov ecx, dword ptr [esi]
// 0085cf83  88442418             mov byte ptr [esp + 0x18], al
// 0085cf87  ff15b026b200         call dword ptr [0xb226b0]
// 0085cf8d  8d542415             lea edx, [esp + 0x15]
// 0085cf91  52                   push edx
// 0085cf92  8b5004               mov edx, dword ptr [eax + 4]
// 0085cf95  8b00                 mov eax, dword ptr [eax]
// 0085cf97  8d4c2418             lea ecx, [esp + 0x18]
// 0085cf9b  51                   push ecx
// 0085cf9c  8b0e                 mov ecx, dword ptr [esi]
// 0085cf9e  52                   push edx
// 0085cf9f  50                   push eax
// 0085cfa0  ff15f023b200         call dword ptr [0xb223f0]
// 0085cfa6  8bcb                 mov ecx, ebx
// 0085cfa8  c1f910               sar ecx, 0x10
// 0085cfab  8d542408             lea edx, [esp + 8]
// 0085cfaf  884c2414             mov byte ptr [esp + 0x14], cl
// 0085cfb3  8b0e                 mov ecx, dword ptr [esi]
// 0085cfb5  52                   push edx
// 0085cfb6  ff15b026b200         call dword ptr [0xb226b0]
// 0085cfbc  8d4c2415             lea ecx, [esp + 0x15]
// 0085cfc0  51                   push ecx
// 0085cfc1  8b4804               mov ecx, dword ptr [eax + 4]
// 0085cfc4  8d542418             lea edx, [esp + 0x18]
// 0085cfc8  52                   push edx
// 0085cfc9  8b10                 mov edx, dword ptr [eax]
// 0085cfcb  51                   push ecx
// 0085cfcc  8b0e                 mov ecx, dword ptr [esi]
// 0085cfce  52                   push edx
// 0085cfcf  ff15f023b200         call dword ptr [0xb223f0]
// 0085cfd5  8b0e                 mov ecx, dword ptr [esi]
// 0085cfd7  8d442408             lea eax, [esp + 8]
// 0085cfdb  c1fb18               sar ebx, 0x18
// 0085cfde  50                   push eax
// 0085cfdf  885c2418             mov byte ptr [esp + 0x18], bl
// 0085cfe3  ff15b026b200         call dword ptr [0xb226b0]
// 0085cfe9  8d4c2415             lea ecx, [esp + 0x15]
// 0085cfed  51                   push ecx
// 0085cfee  8b4804               mov ecx, dword ptr [eax + 4]
// 0085cff1  8d542418             lea edx, [esp + 0x18]
// 0085cff5  52                   push edx
// 0085cff6  8b10                 mov edx, dword ptr [eax]
// 0085cff8  51                   push ecx
// 0085cff9  8b0e                 mov ecx, dword ptr [esi]
// 0085cffb  52                   push edx
// 0085cffc  ff15f023b200         call dword ptr [0xb223f0]
// 0085d002  5e                   pop esi
// 0085d003  5b                   pop ebx
// 0085d004  83c408               add esp, 8
// 0085d007  c3                   ret 
// copied from an identical function in another client (function ??$write_long@V?$back_insert_device@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@iostreams@boost@@@?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@CAXJAAV?$back_insert_device@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_fc27c84cd7b01590.cpp