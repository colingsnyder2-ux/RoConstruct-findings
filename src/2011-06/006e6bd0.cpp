// roc 2011-06 006e6bd0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e6bd0
//
// 006e6bd0  53                   push ebx
// 006e6bd1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 006e6bd5  55                   push ebp
// 006e6bd6  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006e6bda  56                   push esi
// 006e6bdb  57                   push edi
// 006e6bdc  8bf9                 mov edi, ecx
// 006e6bde  33f6                 xor esi, esi
// 006e6be0  f6474401             test byte ptr [edi + 0x44], 1
// 006e6be4  750d                 jne 0x6e6bf3
// 006e6be6  8d4708               lea eax, [edi + 8]
// 006e6be9  50                   push eax
// 006e6bea  55                   push ebp
// 006e6beb  53                   push ebx
// 006e6bec  e85fdfffff           call 0x6e4b50
// 006e6bf1  8bf0                 mov esi, eax
// 006e6bf3  f6474402             test byte ptr [edi + 0x44], 2
// 006e6bf7  754b                 jne 0x6e6c44
// 006e6bf9  8b442414             mov eax, dword ptr [esp + 0x14]
// 006e6bfd  8bcd                 mov ecx, ebp
// 006e6bff  2bce                 sub ecx, esi
// 006e6c01  51                   push ecx
// 006e6c02  8d141e               lea edx, [esi + ebx]
// 006e6c05  52                   push edx
// 006e6c06  50                   push eax
// 006e6c07  8bcf                 mov ecx, edi
// 006e6c09  e882f1ffff           call 0x6e5d90
// 006e6c0e  83f8ff               cmp eax, -1
// 006e6c11  7424                 je 0x6e6c37
// 006e6c13  03f0                 add esi, eax
// 006e6c15  8bcd                 mov ecx, ebp
// 006e6c17  2bce                 sub ecx, esi
// 006e6c19  3bc1                 cmp eax, ecx
// 006e6c1b  7d21                 jge 0x6e6c3e
// 006e6c1d  8b542414             mov edx, dword ptr [esp + 0x14]
// 006e6c21  51                   push ecx
// 006e6c22  8d0c1e               lea ecx, [esi + ebx]
// 006e6c25  51                   push ecx
// 006e6c26  52                   push edx
// 006e6c27  8bcf                 mov ecx, edi
// 006e6c29  e862f1ffff           call 0x6e5d90
// 006e6c2e  83f8ff               cmp eax, -1
// 006e6c31  7404                 je 0x6e6c37
// 006e6c33  03f0                 add esi, eax
// 006e6c35  eb07                 jmp 0x6e6c3e
// 006e6c37  8bcf                 mov ecx, edi
// 006e6c39  e872e3ffff           call 0x6e4fb0
// 006e6c3e  f6474402             test byte ptr [edi + 0x44], 2
// 006e6c42  7418                 je 0x6e6c5c
// 006e6c44  3bf5                 cmp esi, ebp
// 006e6c46  7d14                 jge 0x6e6c5c
// 006e6c48  8d4724               lea eax, [edi + 0x24]
// 006e6c4b  50                   push eax
// 006e6c4c  2bee                 sub ebp, esi
// 006e6c4e  55                   push ebp
// 006e6c4f  8d0c1e               lea ecx, [esi + ebx]
// 006e6c52  51                   push ecx
// 006e6c53  8bcf                 mov ecx, edi
// 006e6c55  e8f6deffff           call 0x6e4b50
// 006e6c5a  03f0                 add esi, eax
// 006e6c5c  85f6                 test esi, esi
// 006e6c5e  7409                 je 0x6e6c69
// 006e6c60  5f                   pop edi
// 006e6c61  8bc6                 mov eax, esi
// 006e6c63  5e                   pop esi
// 006e6c64  5d                   pop ebp
// 006e6c65  5b                   pop ebx
// 006e6c66  c20c00               ret 0xc
// 006e6c69  5f                   pop edi
// 006e6c6a  5e                   pop esi
// 006e6c6b  5d                   pop ebp
// 006e6c6c  83c8ff               or eax, 0xffffffff
// 006e6c6f  5b                   pop ebx
// 006e6c70  c20c00               ret 0xc
// copied from an identical function in another client (function ??$read@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@QAEHAAV?$linked_streambuf@DU?$char_traits@D@std@@@detail@12@PADH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_a8b429b397bb580b.cpp