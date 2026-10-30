// roc 2011-06 006e4d90  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e4d90
//
// 006e4d90  83ec08               sub esp, 8
// 006e4d93  53                   push ebx
// 006e4d94  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006e4d98  56                   push esi
// 006e4d99  8b742418             mov esi, dword ptr [esp + 0x18]
// 006e4d9d  8b0e                 mov ecx, dword ptr [esi]
// 006e4d9f  8d442408             lea eax, [esp + 8]
// 006e4da3  50                   push eax
// 006e4da4  885c2418             mov byte ptr [esp + 0x18], bl
// 006e4da8  ff156404a400         call dword ptr [0xa40464]
// 006e4dae  8d4c2415             lea ecx, [esp + 0x15]
// 006e4db2  51                   push ecx
// 006e4db3  8b4804               mov ecx, dword ptr [eax + 4]
// 006e4db6  8d542418             lea edx, [esp + 0x18]
// 006e4dba  52                   push edx
// 006e4dbb  8b10                 mov edx, dword ptr [eax]
// 006e4dbd  51                   push ecx
// 006e4dbe  8b0e                 mov ecx, dword ptr [esi]
// 006e4dc0  52                   push edx
// 006e4dc1  ff154806a400         call dword ptr [0xa40648]
// 006e4dc7  8d4c2408             lea ecx, [esp + 8]
// 006e4dcb  8bc3                 mov eax, ebx
// 006e4dcd  c1f808               sar eax, 8
// 006e4dd0  51                   push ecx
// 006e4dd1  8b0e                 mov ecx, dword ptr [esi]
// 006e4dd3  88442418             mov byte ptr [esp + 0x18], al
// 006e4dd7  ff156404a400         call dword ptr [0xa40464]
// 006e4ddd  8d542415             lea edx, [esp + 0x15]
// 006e4de1  52                   push edx
// 006e4de2  8b5004               mov edx, dword ptr [eax + 4]
// 006e4de5  8b00                 mov eax, dword ptr [eax]
// 006e4de7  8d4c2418             lea ecx, [esp + 0x18]
// 006e4deb  51                   push ecx
// 006e4dec  8b0e                 mov ecx, dword ptr [esi]
// 006e4dee  52                   push edx
// 006e4def  50                   push eax
// 006e4df0  ff154806a400         call dword ptr [0xa40648]
// 006e4df6  8bcb                 mov ecx, ebx
// 006e4df8  c1f910               sar ecx, 0x10
// 006e4dfb  8d542408             lea edx, [esp + 8]
// 006e4dff  884c2414             mov byte ptr [esp + 0x14], cl
// 006e4e03  8b0e                 mov ecx, dword ptr [esi]
// 006e4e05  52                   push edx
// 006e4e06  ff156404a400         call dword ptr [0xa40464]
// 006e4e0c  8d4c2415             lea ecx, [esp + 0x15]
// 006e4e10  51                   push ecx
// 006e4e11  8b4804               mov ecx, dword ptr [eax + 4]
// 006e4e14  8d542418             lea edx, [esp + 0x18]
// 006e4e18  52                   push edx
// 006e4e19  8b10                 mov edx, dword ptr [eax]
// 006e4e1b  51                   push ecx
// 006e4e1c  8b0e                 mov ecx, dword ptr [esi]
// 006e4e1e  52                   push edx
// 006e4e1f  ff154806a400         call dword ptr [0xa40648]
// 006e4e25  8b0e                 mov ecx, dword ptr [esi]
// 006e4e27  8d442408             lea eax, [esp + 8]
// 006e4e2b  c1fb18               sar ebx, 0x18
// 006e4e2e  50                   push eax
// 006e4e2f  885c2418             mov byte ptr [esp + 0x18], bl
// 006e4e33  ff156404a400         call dword ptr [0xa40464]
// 006e4e39  8d4c2415             lea ecx, [esp + 0x15]
// 006e4e3d  51                   push ecx
// 006e4e3e  8b4804               mov ecx, dword ptr [eax + 4]
// 006e4e41  8d542418             lea edx, [esp + 0x18]
// 006e4e45  52                   push edx
// 006e4e46  8b10                 mov edx, dword ptr [eax]
// 006e4e48  51                   push ecx
// 006e4e49  8b0e                 mov ecx, dword ptr [esi]
// 006e4e4b  52                   push edx
// 006e4e4c  ff154806a400         call dword ptr [0xa40648]
// 006e4e52  5e                   pop esi
// 006e4e53  5b                   pop ebx
// 006e4e54  83c408               add esp, 8
// 006e4e57  c3                   ret 
// copied from an identical function in another client (function ??$write_long@V?$back_insert_device@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@iostreams@boost@@@?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@CAXJAAV?$back_insert_device@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_fc27c84cd7b01590.cpp