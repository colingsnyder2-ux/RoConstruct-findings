// roc 2009-12 00727b40  unit: boost::iostreams::Uinput::?$filtering_stream  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00727b40
//
// 00727b40  53                   push ebx
// 00727b41  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00727b45  55                   push ebp
// 00727b46  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00727b4a  56                   push esi
// 00727b4b  57                   push edi
// 00727b4c  8bf9                 mov edi, ecx
// 00727b4e  33f6                 xor esi, esi
// 00727b50  f6474401             test byte ptr [edi + 0x44], 1
// 00727b54  750d                 jne 0x727b63
// 00727b56  8d4708               lea eax, [edi + 8]
// 00727b59  50                   push eax
// 00727b5a  55                   push ebp
// 00727b5b  53                   push ebx
// 00727b5c  e8dfddffff           call 0x725940
// 00727b61  8bf0                 mov esi, eax
// 00727b63  f6474402             test byte ptr [edi + 0x44], 2
// 00727b67  754b                 jne 0x727bb4
// 00727b69  8b442414             mov eax, dword ptr [esp + 0x14]
// 00727b6d  8bcd                 mov ecx, ebp
// 00727b6f  2bce                 sub ecx, esi
// 00727b71  51                   push ecx
// 00727b72  8d141e               lea edx, [esi + ebx]
// 00727b75  52                   push edx
// 00727b76  50                   push eax
// 00727b77  8bcf                 mov ecx, edi
// 00727b79  e8e2efffff           call 0x726b60
// 00727b7e  83f8ff               cmp eax, -1
// 00727b81  7424                 je 0x727ba7
// 00727b83  03f0                 add esi, eax
// 00727b85  8bcd                 mov ecx, ebp
// 00727b87  2bce                 sub ecx, esi
// 00727b89  3bc1                 cmp eax, ecx
// 00727b8b  7d21                 jge 0x727bae
// 00727b8d  8b542414             mov edx, dword ptr [esp + 0x14]
// 00727b91  51                   push ecx
// 00727b92  8d0c1e               lea ecx, [esi + ebx]
// 00727b95  51                   push ecx
// 00727b96  52                   push edx
// 00727b97  8bcf                 mov ecx, edi
// 00727b99  e8c2efffff           call 0x726b60
// 00727b9e  83f8ff               cmp eax, -1
// 00727ba1  7404                 je 0x727ba7
// 00727ba3  03f0                 add esi, eax
// 00727ba5  eb07                 jmp 0x727bae
// 00727ba7  8bcf                 mov ecx, edi
// 00727ba9  e852e1ffff           call 0x725d00
// 00727bae  f6474402             test byte ptr [edi + 0x44], 2
// 00727bb2  7418                 je 0x727bcc
// 00727bb4  3bf5                 cmp esi, ebp
// 00727bb6  7d14                 jge 0x727bcc
// 00727bb8  8d4724               lea eax, [edi + 0x24]
// 00727bbb  50                   push eax
// 00727bbc  2bee                 sub ebp, esi
// 00727bbe  55                   push ebp
// 00727bbf  8d0c1e               lea ecx, [esi + ebx]
// 00727bc2  51                   push ecx
// 00727bc3  8bcf                 mov ecx, edi
// 00727bc5  e876ddffff           call 0x725940
// 00727bca  03f0                 add esi, eax
// 00727bcc  85f6                 test esi, esi
// 00727bce  7409                 je 0x727bd9
// 00727bd0  5f                   pop edi
// 00727bd1  8bc6                 mov eax, esi
// 00727bd3  5e                   pop esi
// 00727bd4  5d                   pop ebp
// 00727bd5  5b                   pop ebx
// 00727bd6  c20c00               ret 0xc
// 00727bd9  5f                   pop edi
// 00727bda  5e                   pop esi
// 00727bdb  5d                   pop ebp
// 00727bdc  83c8ff               or eax, 0xffffffff
// 00727bdf  5b                   pop ebx
// 00727be0  c20c00               ret 0xc
// copied from an identical function in another client (function ??$read@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@QAEHAAV?$linked_streambuf@DU?$char_traits@D@std@@@detail@12@PADH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_a8b429b397bb580b.cpp