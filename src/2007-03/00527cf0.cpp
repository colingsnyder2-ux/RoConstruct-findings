// roc 2007-03 00527cf0  unit: seg_00520000  size: 197 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00527cf0
//
// 00527cf0  83ec10               sub esp, 0x10
// 00527cf3  56                   push esi
// 00527cf4  8b742418             mov esi, dword ptr [esp + 0x18]
// 00527cf8  8b865c010000         mov eax, dword ptr [esi + 0x15c]
// 00527cfe  89442410             mov dword ptr [esp + 0x10], eax
// 00527d02  e899f8ffff           call 0x5275a0
// 00527d07  33c0                 xor eax, eax
// 00527d09  39862c010000         cmp dword ptr [esi + 0x12c], eax
// 00527d0f  8944240c             mov dword ptr [esp + 0xc], eax
// 00527d13  0f94c1               sete cl
// 00527d16  3986e4000000         cmp dword ptr [esi + 0xe4], eax
// 00527d1c  884c2418             mov byte ptr [esp + 0x18], cl
// 00527d20  89442408             mov dword ptr [esp + 8], eax
// 00527d24  0f8e86000000         jle 0x527db0
// 00527d2a  53                   push ebx
// 00527d2b  8d86e8000000         lea eax, [esi + 0xe8]
// 00527d31  55                   push ebp
// 00527d32  8944240c             mov dword ptr [esp + 0xc], eax
// 00527d36  57                   push edi
// 00527d37  84c9                 test cl, cl
// 00527d39  8b542410             mov edx, dword ptr [esp + 0x10]
// 00527d3d  8b02                 mov eax, dword ptr [edx]
// 00527d3f  740e                 je 0x527d4f
// 00527d41  83be3401000000       cmp dword ptr [esi + 0x134], 0
// 00527d48  754b                 jne 0x527d95
// 00527d4a  8b6814               mov ebp, dword ptr [eax + 0x14]
// 00527d4d  eb03                 jmp 0x527d52
// 00527d4f  8b6818               mov ebp, dword ptr [eax + 0x18]
// 00527d52  807c2c1800           cmp byte ptr [esp + ebp + 0x18], 0
// 00527d57  8d5c2c18             lea ebx, [esp + ebp + 0x18]
// 00527d5b  7538                 jne 0x527d95
// 00527d5d  84c9                 test cl, cl
// 00527d5f  8d7cae58             lea edi, [esi + ebp*4 + 0x58]
// 00527d63  7504                 jne 0x527d69
// 00527d65  8d7cae68             lea edi, [esi + ebp*4 + 0x68]
// 00527d69  833f00               cmp dword ptr [edi], 0
// 00527d6c  750b                 jne 0x527d79
// 00527d6e  56                   push esi
// 00527d6f  e8acd1feff           call 0x514f20
// 00527d74  83c404               add esp, 4
// 00527d77  8907                 mov dword ptr [edi], eax
// 00527d79  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00527d7d  8b4ca85c             mov ecx, dword ptr [eax + ebp*4 + 0x5c]
// 00527d81  8b17                 mov edx, dword ptr [edi]
// 00527d83  51                   push ecx
// 00527d84  52                   push edx
// 00527d85  56                   push esi
// 00527d86  e8d5f0ffff           call 0x526e60
// 00527d8b  8a4c2430             mov cl, byte ptr [esp + 0x30]
// 00527d8f  83c40c               add esp, 0xc
// 00527d92  c60301               mov byte ptr [ebx], 1
// 00527d95  8b442414             mov eax, dword ptr [esp + 0x14]
// 00527d99  8344241004           add dword ptr [esp + 0x10], 4
// 00527d9e  83c001               add eax, 1
// 00527da1  3b86e4000000         cmp eax, dword ptr [esi + 0xe4]
// 00527da7  89442414             mov dword ptr [esp + 0x14], eax
// 00527dab  7c8a                 jl 0x527d37
// 00527dad  5f                   pop edi
// 00527dae  5d                   pop ebp
// 00527daf  5b                   pop ebx
// 00527db0  5e                   pop esi
// 00527db1  83c410               add esp, 0x10
// 00527db4  c3                   ret 
// library jpeg-6b/jcphuff.c (function _finish_pass_gather_phuff)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
