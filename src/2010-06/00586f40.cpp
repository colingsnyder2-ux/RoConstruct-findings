// from server: 100% by auto
// roc 2010-06 00586f40  unit: seg_00580000  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00586f40
//
// 00586f40  83ec10               sub esp, 0x10
// 00586f43  56                   push esi
// 00586f44  8b742418             mov esi, dword ptr [esp + 0x18]
// 00586f48  8b865c010000         mov eax, dword ptr [esi + 0x15c]
// 00586f4e  89442410             mov dword ptr [esp + 0x10], eax
// 00586f52  e8d9f7ffff           call 0x586730
// 00586f57  33c0                 xor eax, eax
// 00586f59  39862c010000         cmp dword ptr [esi + 0x12c], eax
// 00586f5f  8944240c             mov dword ptr [esp + 0xc], eax
// 00586f63  0f94c1               sete cl
// 00586f66  3986e4000000         cmp dword ptr [esi + 0xe4], eax
// 00586f6c  884c2418             mov byte ptr [esp + 0x18], cl
// 00586f70  89442408             mov dword ptr [esp + 8], eax
// 00586f74  0f8e84000000         jle 0x586ffe
// 00586f7a  53                   push ebx
// 00586f7b  8d86e8000000         lea eax, [esi + 0xe8]
// 00586f81  55                   push ebp
// 00586f82  8944240c             mov dword ptr [esp + 0xc], eax
// 00586f86  57                   push edi
// 00586f87  8b542410             mov edx, dword ptr [esp + 0x10]
// 00586f8b  8b02                 mov eax, dword ptr [edx]
// 00586f8d  84c9                 test cl, cl
// 00586f8f  740e                 je 0x586f9f
// 00586f91  83be3401000000       cmp dword ptr [esi + 0x134], 0
// 00586f98  754b                 jne 0x586fe5
// 00586f9a  8b6814               mov ebp, dword ptr [eax + 0x14]
// 00586f9d  eb03                 jmp 0x586fa2
// 00586f9f  8b6818               mov ebp, dword ptr [eax + 0x18]
// 00586fa2  807c2c1800           cmp byte ptr [esp + ebp + 0x18], 0
// 00586fa7  8d5c2c18             lea ebx, [esp + ebp + 0x18]
// 00586fab  7538                 jne 0x586fe5
// 00586fad  8d7cae58             lea edi, [esi + ebp*4 + 0x58]
// 00586fb1  84c9                 test cl, cl
// 00586fb3  7504                 jne 0x586fb9
// 00586fb5  8d7cae68             lea edi, [esi + ebp*4 + 0x68]
// 00586fb9  833f00               cmp dword ptr [edi], 0
// 00586fbc  750b                 jne 0x586fc9
// 00586fbe  56                   push esi
// 00586fbf  e82cb8fdff           call 0x5627f0
// 00586fc4  83c404               add esp, 4
// 00586fc7  8907                 mov dword ptr [edi], eax
// 00586fc9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00586fcd  8b4ca85c             mov ecx, dword ptr [eax + ebp*4 + 0x5c]
// 00586fd1  8b17                 mov edx, dword ptr [edi]
// 00586fd3  51                   push ecx
// 00586fd4  52                   push edx
// 00586fd5  56                   push esi
// 00586fd6  e895f0ffff           call 0x586070
// 00586fdb  8a4c2430             mov cl, byte ptr [esp + 0x30]
// 00586fdf  83c40c               add esp, 0xc
// 00586fe2  c60301               mov byte ptr [ebx], 1
// 00586fe5  8b442414             mov eax, dword ptr [esp + 0x14]
// 00586fe9  8344241004           add dword ptr [esp + 0x10], 4
// 00586fee  40                   inc eax
// 00586fef  3b86e4000000         cmp eax, dword ptr [esi + 0xe4]
// 00586ff5  89442414             mov dword ptr [esp + 0x14], eax
// 00586ff9  7c8c                 jl 0x586f87
// 00586ffb  5f                   pop edi
// 00586ffc  5d                   pop ebp
// 00586ffd  5b                   pop ebx
// 00586ffe  5e                   pop esi
// 00586fff  83c410               add esp, 0x10
// 00587002  c3                   ret 
// library jpeg-6b/jcphuff.c (function _finish_pass_gather_phuff)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
