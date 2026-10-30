// roc 2012-06 0085ee00  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0085ee00
//
// 0085ee00  53                   push ebx
// 0085ee01  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0085ee05  55                   push ebp
// 0085ee06  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0085ee0a  56                   push esi
// 0085ee0b  57                   push edi
// 0085ee0c  8bf9                 mov edi, ecx
// 0085ee0e  33f6                 xor esi, esi
// 0085ee10  f6474401             test byte ptr [edi + 0x44], 1
// 0085ee14  750d                 jne 0x85ee23
// 0085ee16  8d4708               lea eax, [edi + 8]
// 0085ee19  50                   push eax
// 0085ee1a  55                   push ebp
// 0085ee1b  53                   push ebx
// 0085ee1c  e8dfdeffff           call 0x85cd00
// 0085ee21  8bf0                 mov esi, eax
// 0085ee23  f6474402             test byte ptr [edi + 0x44], 2
// 0085ee27  754b                 jne 0x85ee74
// 0085ee29  8b442414             mov eax, dword ptr [esp + 0x14]
// 0085ee2d  8bcd                 mov ecx, ebp
// 0085ee2f  2bce                 sub ecx, esi
// 0085ee31  51                   push ecx
// 0085ee32  8d141e               lea edx, [esi + ebx]
// 0085ee35  52                   push edx
// 0085ee36  50                   push eax
// 0085ee37  8bcf                 mov ecx, edi
// 0085ee39  e882f1ffff           call 0x85dfc0
// 0085ee3e  83f8ff               cmp eax, -1
// 0085ee41  7424                 je 0x85ee67
// 0085ee43  03f0                 add esi, eax
// 0085ee45  8bcd                 mov ecx, ebp
// 0085ee47  2bce                 sub ecx, esi
// 0085ee49  3bc1                 cmp eax, ecx
// 0085ee4b  7d21                 jge 0x85ee6e
// 0085ee4d  8b542414             mov edx, dword ptr [esp + 0x14]
// 0085ee51  51                   push ecx
// 0085ee52  8d0c1e               lea ecx, [esi + ebx]
// 0085ee55  51                   push ecx
// 0085ee56  52                   push edx
// 0085ee57  8bcf                 mov ecx, edi
// 0085ee59  e862f1ffff           call 0x85dfc0
// 0085ee5e  83f8ff               cmp eax, -1
// 0085ee61  7404                 je 0x85ee67
// 0085ee63  03f0                 add esi, eax
// 0085ee65  eb07                 jmp 0x85ee6e
// 0085ee67  8bcf                 mov ecx, edi
// 0085ee69  e802e3ffff           call 0x85d170
// 0085ee6e  f6474402             test byte ptr [edi + 0x44], 2
// 0085ee72  7418                 je 0x85ee8c
// 0085ee74  3bf5                 cmp esi, ebp
// 0085ee76  7d14                 jge 0x85ee8c
// 0085ee78  8d4724               lea eax, [edi + 0x24]
// 0085ee7b  50                   push eax
// 0085ee7c  2bee                 sub ebp, esi
// 0085ee7e  55                   push ebp
// 0085ee7f  8d0c1e               lea ecx, [esi + ebx]
// 0085ee82  51                   push ecx
// 0085ee83  8bcf                 mov ecx, edi
// 0085ee85  e876deffff           call 0x85cd00
// 0085ee8a  03f0                 add esi, eax
// 0085ee8c  85f6                 test esi, esi
// 0085ee8e  7409                 je 0x85ee99
// 0085ee90  5f                   pop edi
// 0085ee91  8bc6                 mov eax, esi
// 0085ee93  5e                   pop esi
// 0085ee94  5d                   pop ebp
// 0085ee95  5b                   pop ebx
// 0085ee96  c20c00               ret 0xc
// 0085ee99  5f                   pop edi
// 0085ee9a  5e                   pop esi
// 0085ee9b  5d                   pop ebp
// 0085ee9c  83c8ff               or eax, 0xffffffff
// 0085ee9f  5b                   pop ebx
// 0085eea0  c20c00               ret 0xc
// copied from an identical function in another client (function ??$read@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@QAEHAAV?$linked_streambuf@DU?$char_traits@D@std@@@detail@12@PADH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_a8b429b397bb580b.cpp