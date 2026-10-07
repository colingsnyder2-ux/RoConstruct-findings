// roc 2008-06 00622d60  unit: lua_exception  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00622d60
//
// 00622d60  8b4604               mov eax, dword ptr [esi + 4]
// 00622d63  83780806             cmp dword ptr [eax + 8], 6
// 00622d67  7538                 jne 0x622da1
// 00622d69  8b08                 mov ecx, dword ptr [eax]
// 00622d6b  80790600             cmp byte ptr [ecx + 6], 0
// 00622d6f  7530                 jne 0x622da1
// 00622d71  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 00622d74  85c9                 test ecx, ecx
// 00622d76  7429                 je 0x622da1
// 00622d78  3b7314               cmp esi, dword ptr [ebx + 0x14]
// 00622d7b  7506                 jne 0x622d83
// 00622d7d  8b5318               mov edx, dword ptr [ebx + 0x18]
// 00622d80  89560c               mov dword ptr [esi + 0xc], edx
// 00622d83  8b00                 mov eax, dword ptr [eax]
// 00622d85  8b5010               mov edx, dword ptr [eax + 0x10]
// 00622d88  8b460c               mov eax, dword ptr [esi + 0xc]
// 00622d8b  2b420c               sub eax, dword ptr [edx + 0xc]
// 00622d8e  c1f802               sar eax, 2
// 00622d91  48                   dec eax
// 00622d92  50                   push eax
// 00622d93  57                   push edi
// 00622d94  51                   push ecx
// 00622d95  e846ca0300           call 0x65f7e0
// 00622d9a  83c40c               add esp, 0xc
// 00622d9d  85c0                 test eax, eax
// 00622d9f  7522                 jne 0x622dc3
// 00622da1  3b7314               cmp esi, dword ptr [ebx + 0x14]
// 00622da4  7505                 jne 0x622dab
// 00622da6  8b4308               mov eax, dword ptr [ebx + 8]
// 00622da9  eb03                 jmp 0x622dae
// 00622dab  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00622dae  2b06                 sub eax, dword ptr [esi]
// 00622db0  c1f804               sar eax, 4
// 00622db3  3bc7                 cmp eax, edi
// 00622db5  7c0a                 jl 0x622dc1
// 00622db7  85ff                 test edi, edi
// 00622db9  7e06                 jle 0x622dc1
// 00622dbb  b8b4498400           mov eax, 0x8449b4
// 00622dc0  c3                   ret 
// 00622dc1  33c0                 xor eax, eax
// 00622dc3  c3                   ret 
// library lua-5.1.4/ldebug.c (function _findlocal)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
