// from server: 100% by auto
// roc 2010-06 00733080  unit: lua_exception  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00733080
//
// 00733080  8b4604               mov eax, dword ptr [esi + 4]
// 00733083  83780806             cmp dword ptr [eax + 8], 6
// 00733087  7538                 jne 0x7330c1
// 00733089  8b08                 mov ecx, dword ptr [eax]
// 0073308b  80790600             cmp byte ptr [ecx + 6], 0
// 0073308f  7530                 jne 0x7330c1
// 00733091  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 00733094  85c9                 test ecx, ecx
// 00733096  7429                 je 0x7330c1
// 00733098  3b7314               cmp esi, dword ptr [ebx + 0x14]
// 0073309b  7506                 jne 0x7330a3
// 0073309d  8b5318               mov edx, dword ptr [ebx + 0x18]
// 007330a0  89560c               mov dword ptr [esi + 0xc], edx
// 007330a3  8b00                 mov eax, dword ptr [eax]
// 007330a5  8b5010               mov edx, dword ptr [eax + 0x10]
// 007330a8  8b460c               mov eax, dword ptr [esi + 0xc]
// 007330ab  2b420c               sub eax, dword ptr [edx + 0xc]
// 007330ae  c1f802               sar eax, 2
// 007330b1  48                   dec eax
// 007330b2  50                   push eax
// 007330b3  57                   push edi
// 007330b4  51                   push ecx
// 007330b5  e816b20400           call 0x77e2d0
// 007330ba  83c40c               add esp, 0xc
// 007330bd  85c0                 test eax, eax
// 007330bf  7522                 jne 0x7330e3
// 007330c1  3b7314               cmp esi, dword ptr [ebx + 0x14]
// 007330c4  7505                 jne 0x7330cb
// 007330c6  8b4308               mov eax, dword ptr [ebx + 8]
// 007330c9  eb03                 jmp 0x7330ce
// 007330cb  8b461c               mov eax, dword ptr [esi + 0x1c]
// 007330ce  2b06                 sub eax, dword ptr [esi]
// 007330d0  c1f804               sar eax, 4
// 007330d3  3bc7                 cmp eax, edi
// 007330d5  7c0a                 jl 0x7330e1
// 007330d7  85ff                 test edi, edi
// 007330d9  7e06                 jle 0x7330e1
// 007330db  b8acdda400           mov eax, 0xa4ddac
// 007330e0  c3                   ret 
// 007330e1  33c0                 xor eax, eax
// 007330e3  c3                   ret 
// library lua-5.1.4/ldebug.c (function _findlocal)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
