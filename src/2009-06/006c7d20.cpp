// roc 2009-06 006c7d20  unit: seg_006c0000  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c7d20
//
// 006c7d20  8b4604               mov eax, dword ptr [esi + 4]
// 006c7d23  83780806             cmp dword ptr [eax + 8], 6
// 006c7d27  7538                 jne 0x6c7d61
// 006c7d29  8b08                 mov ecx, dword ptr [eax]
// 006c7d2b  80790600             cmp byte ptr [ecx + 6], 0
// 006c7d2f  7530                 jne 0x6c7d61
// 006c7d31  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 006c7d34  85c9                 test ecx, ecx
// 006c7d36  7429                 je 0x6c7d61
// 006c7d38  3b7314               cmp esi, dword ptr [ebx + 0x14]
// 006c7d3b  7506                 jne 0x6c7d43
// 006c7d3d  8b5318               mov edx, dword ptr [ebx + 0x18]
// 006c7d40  89560c               mov dword ptr [esi + 0xc], edx
// 006c7d43  8b00                 mov eax, dword ptr [eax]
// 006c7d45  8b5010               mov edx, dword ptr [eax + 0x10]
// 006c7d48  8b460c               mov eax, dword ptr [esi + 0xc]
// 006c7d4b  2b420c               sub eax, dword ptr [edx + 0xc]
// 006c7d4e  c1f802               sar eax, 2
// 006c7d51  48                   dec eax
// 006c7d52  50                   push eax
// 006c7d53  57                   push edi
// 006c7d54  51                   push ecx
// 006c7d55  e8d6520200           call 0x6ed030
// 006c7d5a  83c40c               add esp, 0xc
// 006c7d5d  85c0                 test eax, eax
// 006c7d5f  7522                 jne 0x6c7d83
// 006c7d61  3b7314               cmp esi, dword ptr [ebx + 0x14]
// 006c7d64  7505                 jne 0x6c7d6b
// 006c7d66  8b4308               mov eax, dword ptr [ebx + 8]
// 006c7d69  eb03                 jmp 0x6c7d6e
// 006c7d6b  8b461c               mov eax, dword ptr [esi + 0x1c]
// 006c7d6e  2b06                 sub eax, dword ptr [esi]
// 006c7d70  c1f804               sar eax, 4
// 006c7d73  3bc7                 cmp eax, edi
// 006c7d75  7c0a                 jl 0x6c7d81
// 006c7d77  85ff                 test edi, edi
// 006c7d79  7e06                 jle 0x6c7d81
// 006c7d7b  b868c28e00           mov eax, 0x8ec268
// 006c7d80  c3                   ret 
// 006c7d81  33c0                 xor eax, eax
// 006c7d83  c3                   ret 
// library lua-5.1.4/ldebug.c (function _findlocal)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
