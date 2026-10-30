// roc 2007-03 005219e0  unit: seg_00520000  size: 229 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005219e0
//
// 005219e0  83ec18               sub esp, 0x18
// 005219e3  56                   push esi
// 005219e4  8b742420             mov esi, dword ptr [esp + 0x20]
// 005219e8  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 005219ee  b801000000           mov eax, 1
// 005219f3  d3e0                 shl eax, cl
// 005219f5  83befc00000000       cmp dword ptr [esi + 0xfc], 0
// 005219fc  57                   push edi
// 005219fd  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 00521a03  89442408             mov dword ptr [esp + 8], eax
// 00521a07  7415                 je 0x521a1e
// 00521a09  837f2800             cmp dword ptr [edi + 0x28], 0
// 00521a0d  750f                 jne 0x521a1e
// 00521a0f  e8acfaffff           call 0x5214c0
// 00521a14  84c0                 test al, al
// 00521a16  7506                 jne 0x521a1e
// 00521a18  5f                   pop edi
// 00521a19  5e                   pop esi
// 00521a1a  83c418               add esp, 0x18
// 00521a1d  c3                   ret 
// 00521a1e  8b4618               mov eax, dword ptr [esi + 0x18]
// 00521a21  8974241c             mov dword ptr [esp + 0x1c], esi
// 00521a25  8b08                 mov ecx, dword ptr [eax]
// 00521a27  894c240c             mov dword ptr [esp + 0xc], ecx
// 00521a2b  8b5004               mov edx, dword ptr [eax + 4]
// 00521a2e  53                   push ebx
// 00521a2f  33db                 xor ebx, ebx
// 00521a31  399e40010000         cmp dword ptr [esi + 0x140], ebx
// 00521a37  89542414             mov dword ptr [esp + 0x14], edx
// 00521a3b  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00521a3e  55                   push ebp
// 00521a3f  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 00521a42  7e50                 jle 0x521a94
// 00521a44  83f901               cmp ecx, 1
// 00521a47  8b442430             mov eax, dword ptr [esp + 0x30]
// 00521a4b  8b0498               mov eax, dword ptr [eax + ebx*4]
// 00521a4e  8944242c             mov dword ptr [esp + 0x2c], eax
// 00521a52  7d21                 jge 0x521a75
// 00521a54  6a01                 push 1
// 00521a56  51                   push ecx
// 00521a57  8d4c241c             lea ecx, [esp + 0x1c]
// 00521a5b  55                   push ebp
// 00521a5c  51                   push ecx
// 00521a5d  e8fef1ffff           call 0x520c60
// 00521a62  83c410               add esp, 0x10
// 00521a65  84c0                 test al, al
// 00521a67  7452                 je 0x521abb
// 00521a69  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00521a6d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00521a71  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00521a75  83e901               sub ecx, 1
// 00521a78  8bd5                 mov edx, ebp
// 00521a7a  d3fa                 sar edx, cl
// 00521a7c  f6c201               test dl, 1
// 00521a7f  7408                 je 0x521a89
// 00521a81  668b542410           mov dx, word ptr [esp + 0x10]
// 00521a86  660910               or word ptr [eax], dx
// 00521a89  83c301               add ebx, 1
// 00521a8c  3b9e40010000         cmp ebx, dword ptr [esi + 0x140]
// 00521a92  7cb0                 jl 0x521a44
// 00521a94  8b4618               mov eax, dword ptr [esi + 0x18]
// 00521a97  8b542414             mov edx, dword ptr [esp + 0x14]
// 00521a9b  8910                 mov dword ptr [eax], edx
// 00521a9d  8b4618               mov eax, dword ptr [esi + 0x18]
// 00521aa0  8b542418             mov edx, dword ptr [esp + 0x18]
// 00521aa4  895004               mov dword ptr [eax + 4], edx
// 00521aa7  834728ff             add dword ptr [edi + 0x28], -1
// 00521aab  896f0c               mov dword ptr [edi + 0xc], ebp
// 00521aae  5d                   pop ebp
// 00521aaf  5b                   pop ebx
// 00521ab0  894f10               mov dword ptr [edi + 0x10], ecx
// 00521ab3  5f                   pop edi
// 00521ab4  b001                 mov al, 1
// 00521ab6  5e                   pop esi
// 00521ab7  83c418               add esp, 0x18
// 00521aba  c3                   ret 
// 00521abb  5d                   pop ebp
// 00521abc  5b                   pop ebx
// 00521abd  5f                   pop edi
// 00521abe  32c0                 xor al, al
// 00521ac0  5e                   pop esi
// 00521ac1  83c418               add esp, 0x18
// 00521ac4  c3                   ret 
// library jpeg-6b/jdphuff.c (function _decode_mcu_DC_refine)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
