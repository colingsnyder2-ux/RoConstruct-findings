// roc 2007-08 00550870  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00550870
//
// 00550870  53                   push ebx
// 00550871  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00550875  55                   push ebp
// 00550876  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0055087a  56                   push esi
// 0055087b  57                   push edi
// 0055087c  8bf9                 mov edi, ecx
// 0055087e  33f6                 xor esi, esi
// 00550880  f6474401             test byte ptr [edi + 0x44], 1
// 00550884  750d                 jne 0x550893
// 00550886  8d4708               lea eax, [edi + 8]
// 00550889  50                   push eax
// 0055088a  55                   push ebp
// 0055088b  53                   push ebx
// 0055088c  e89fedffff           call 0x54f630
// 00550891  8bf0                 mov esi, eax
// 00550893  f6474402             test byte ptr [edi + 0x44], 2
// 00550897  754b                 jne 0x5508e4
// 00550899  8b442414             mov eax, dword ptr [esp + 0x14]
// 0055089d  8bcd                 mov ecx, ebp
// 0055089f  2bce                 sub ecx, esi
// 005508a1  51                   push ecx
// 005508a2  8d141e               lea edx, [esi + ebx]
// 005508a5  52                   push edx
// 005508a6  50                   push eax
// 005508a7  8bcf                 mov ecx, edi
// 005508a9  e882f5ffff           call 0x54fe30
// 005508ae  83f8ff               cmp eax, -1
// 005508b1  7424                 je 0x5508d7
// 005508b3  03f0                 add esi, eax
// 005508b5  8bcd                 mov ecx, ebp
// 005508b7  2bce                 sub ecx, esi
// 005508b9  3bc1                 cmp eax, ecx
// 005508bb  7d21                 jge 0x5508de
// 005508bd  8b542414             mov edx, dword ptr [esp + 0x14]
// 005508c1  51                   push ecx
// 005508c2  8d0c1e               lea ecx, [esi + ebx]
// 005508c5  51                   push ecx
// 005508c6  52                   push edx
// 005508c7  8bcf                 mov ecx, edi
// 005508c9  e862f5ffff           call 0x54fe30
// 005508ce  83f8ff               cmp eax, -1
// 005508d1  7404                 je 0x5508d7
// 005508d3  03f0                 add esi, eax
// 005508d5  eb07                 jmp 0x5508de
// 005508d7  8bcf                 mov ecx, edi
// 005508d9  e8b2f0ffff           call 0x54f990
// 005508de  f6474402             test byte ptr [edi + 0x44], 2
// 005508e2  7418                 je 0x5508fc
// 005508e4  3bf5                 cmp esi, ebp
// 005508e6  7d14                 jge 0x5508fc
// 005508e8  8d4724               lea eax, [edi + 0x24]
// 005508eb  50                   push eax
// 005508ec  2bee                 sub ebp, esi
// 005508ee  55                   push ebp
// 005508ef  8d0c1e               lea ecx, [esi + ebx]
// 005508f2  51                   push ecx
// 005508f3  8bcf                 mov ecx, edi
// 005508f5  e836edffff           call 0x54f630
// 005508fa  03f0                 add esi, eax
// 005508fc  85f6                 test esi, esi
// 005508fe  7409                 je 0x550909
// 00550900  5f                   pop edi
// 00550901  8bc6                 mov eax, esi
// 00550903  5e                   pop esi
// 00550904  5d                   pop ebp
// 00550905  5b                   pop ebx
// 00550906  c20c00               ret 0xc
// 00550909  5f                   pop edi
// 0055090a  5e                   pop esi
// 0055090b  5d                   pop ebp
// 0055090c  83c8ff               or eax, 0xffffffff
// 0055090f  5b                   pop ebx
// 00550910  c20c00               ret 0xc
// copied from an identical function in another client (function ??$read@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@QAEHAAV?$linked_streambuf@DU?$char_traits@D@std@@@detail@12@PADH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_a8b429b397bb580b.cpp