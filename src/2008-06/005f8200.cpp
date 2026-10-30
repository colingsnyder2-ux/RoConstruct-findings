// from server: 100% by auto
// roc 2008-06 005f8200  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f8200
//
// 005f8200  55                   push ebp
// 005f8201  8bec                 mov ebp, esp
// 005f8203  6aff                 push -1
// 005f8205  6860797d00           push 0x7d7960
// 005f820a  64a100000000         mov eax, dword ptr fs:[0]
// 005f8210  50                   push eax
// 005f8211  64892500000000       mov dword ptr fs:[0], esp
// 005f8218  83ec38               sub esp, 0x38
// 005f821b  53                   push ebx
// 005f821c  8b5d08               mov ebx, dword ptr [ebp + 8]
// 005f821f  56                   push esi
// 005f8220  8bf1                 mov esi, ecx
// 005f8222  f6465001             test byte ptr [esi + 0x50], 1
// 005f8226  57                   push edi
// 005f8227  8965f0               mov dword ptr [ebp - 0x10], esp
// 005f822a  7510                 jne 0x5f823c
// 005f822c  8d4508               lea eax, [ebp + 8]
// 005f822f  50                   push eax
// 005f8230  895d08               mov dword ptr [ebp + 8], ebx
// 005f8233  e838f4ffff           call 0x5f7670
// 005f8238  834e5001             or dword ptr [esi + 0x50], 1
// 005f823c  f6465002             test byte ptr [esi + 0x50], 2
// 005f8240  7416                 je 0x5f8258
// 005f8242  83c8ff               or eax, 0xffffffff
// 005f8245  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005f8248  64890d00000000       mov dword ptr fs:[0], ecx
// 005f824f  5f                   pop edi
// 005f8250  5e                   pop esi
// 005f8251  5b                   pop ebx
// 005f8252  8be5                 mov esp, ebp
// 005f8254  5d                   pop ebp
// 005f8255  c20c00               ret 0xc
// 005f8258  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 005f825b  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005f825e  57                   push edi
// 005f825f  51                   push ecx
// 005f8260  33c0                 xor eax, eax
// 005f8262  53                   push ebx
// 005f8263  8bce                 mov ecx, esi
// 005f8265  8945fc               mov dword ptr [ebp - 4], eax
// 005f8268  894508               mov dword ptr [ebp + 8], eax
// 005f826b  e870e3ffff           call 0x5f65e0
// 005f8270  83f8ff               cmp eax, -1
// 005f8273  7436                 je 0x5f82ab
// 005f8275  3bc7                 cmp eax, edi
// 005f8277  894508               mov dword ptr [ebp + 8], eax
// 005f827a  7d41                 jge 0x5f82bd
// 005f827c  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005f827f  2bf8                 sub edi, eax
// 005f8281  57                   push edi
// 005f8282  03c2                 add eax, edx
// 005f8284  50                   push eax
// 005f8285  53                   push ebx
// 005f8286  8bce                 mov ecx, esi
// 005f8288  e853e3ffff           call 0x5f65e0
// 005f828d  83f8ff               cmp eax, -1
// 005f8290  7419                 je 0x5f82ab
// 005f8292  014508               add dword ptr [ebp + 8], eax
// 005f8295  8b4508               mov eax, dword ptr [ebp + 8]
// 005f8298  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005f829b  64890d00000000       mov dword ptr fs:[0], ecx
// 005f82a2  5f                   pop edi
// 005f82a3  5e                   pop esi
// 005f82a4  5b                   pop ebx
// 005f82a5  8be5                 mov esp, ebp
// 005f82a7  5d                   pop ebp
// 005f82a8  c20c00               ret 0xc
// 005f82ab  8d450c               lea eax, [ebp + 0xc]
// 005f82ae  50                   push eax
// 005f82af  8bce                 mov ecx, esi
// 005f82b1  895d0c               mov dword ptr [ebp + 0xc], ebx
// 005f82b4  e857fbffff           call 0x5f7e10
// 005f82b9  834e5002             or dword ptr [esi + 0x50], 2
// 005f82bd  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005f82c0  8b4508               mov eax, dword ptr [ebp + 8]
// 005f82c3  5f                   pop edi
// 005f82c4  5e                   pop esi
// 005f82c5  64890d00000000       mov dword ptr fs:[0], ecx
// 005f82cc  5b                   pop ebx
// 005f82cd  8be5                 mov esp, ebp
// 005f82cf  5d                   pop ebp
// 005f82d0  c20c00               ret 0xc
// 005f82d3  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 005f82d6  51                   push ecx
// 005f82d7  8d4dbc               lea ecx, [ebp - 0x44]
// 005f82da  e821d7ffff           call 0x5f5a00
// 005f82df  68346a8f00           push 0x8f6a34
// 005f82e4  8d55bc               lea edx, [ebp - 0x44]
// 005f82e7  52                   push edx
// 005f82e8  e89f920a00           call 0x6a158c

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp
