// from server: 100% by auto
// roc 2011-06 0057d1f0  unit: seg_00570000  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057d1f0
//
// 0057d1f0  83ec10               sub esp, 0x10
// 0057d1f3  56                   push esi
// 0057d1f4  8b742418             mov esi, dword ptr [esp + 0x18]
// 0057d1f8  8b865c010000         mov eax, dword ptr [esi + 0x15c]
// 0057d1fe  89442410             mov dword ptr [esp + 0x10], eax
// 0057d202  e8d9f7ffff           call 0x57c9e0
// 0057d207  33c0                 xor eax, eax
// 0057d209  39862c010000         cmp dword ptr [esi + 0x12c], eax
// 0057d20f  8944240c             mov dword ptr [esp + 0xc], eax
// 0057d213  0f94c1               sete cl
// 0057d216  3986e4000000         cmp dword ptr [esi + 0xe4], eax
// 0057d21c  884c2418             mov byte ptr [esp + 0x18], cl
// 0057d220  89442408             mov dword ptr [esp + 8], eax
// 0057d224  0f8e84000000         jle 0x57d2ae
// 0057d22a  53                   push ebx
// 0057d22b  8d86e8000000         lea eax, [esi + 0xe8]
// 0057d231  55                   push ebp
// 0057d232  8944240c             mov dword ptr [esp + 0xc], eax
// 0057d236  57                   push edi
// 0057d237  8b542410             mov edx, dword ptr [esp + 0x10]
// 0057d23b  8b02                 mov eax, dword ptr [edx]
// 0057d23d  84c9                 test cl, cl
// 0057d23f  740e                 je 0x57d24f
// 0057d241  83be3401000000       cmp dword ptr [esi + 0x134], 0
// 0057d248  754b                 jne 0x57d295
// 0057d24a  8b6814               mov ebp, dword ptr [eax + 0x14]
// 0057d24d  eb03                 jmp 0x57d252
// 0057d24f  8b6818               mov ebp, dword ptr [eax + 0x18]
// 0057d252  807c2c1800           cmp byte ptr [esp + ebp + 0x18], 0
// 0057d257  8d5c2c18             lea ebx, [esp + ebp + 0x18]
// 0057d25b  7538                 jne 0x57d295
// 0057d25d  8d7cae58             lea edi, [esi + ebp*4 + 0x58]
// 0057d261  84c9                 test cl, cl
// 0057d263  7504                 jne 0x57d269
// 0057d265  8d7cae68             lea edi, [esi + ebp*4 + 0x68]
// 0057d269  833f00               cmp dword ptr [edi], 0
// 0057d26c  750b                 jne 0x57d279
// 0057d26e  56                   push esi
// 0057d26f  e80cabfeff           call 0x567d80
// 0057d274  83c404               add esp, 4
// 0057d277  8907                 mov dword ptr [edi], eax
// 0057d279  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0057d27d  8b4ca85c             mov ecx, dword ptr [eax + ebp*4 + 0x5c]
// 0057d281  8b17                 mov edx, dword ptr [edi]
// 0057d283  51                   push ecx
// 0057d284  52                   push edx
// 0057d285  56                   push esi
// 0057d286  e895f0ffff           call 0x57c320
// 0057d28b  8a4c2430             mov cl, byte ptr [esp + 0x30]
// 0057d28f  83c40c               add esp, 0xc
// 0057d292  c60301               mov byte ptr [ebx], 1
// 0057d295  8b442414             mov eax, dword ptr [esp + 0x14]
// 0057d299  8344241004           add dword ptr [esp + 0x10], 4
// 0057d29e  40                   inc eax
// 0057d29f  3b86e4000000         cmp eax, dword ptr [esi + 0xe4]
// 0057d2a5  89442414             mov dword ptr [esp + 0x14], eax
// 0057d2a9  7c8c                 jl 0x57d237
// 0057d2ab  5f                   pop edi
// 0057d2ac  5d                   pop ebp
// 0057d2ad  5b                   pop ebx
// 0057d2ae  5e                   pop esi
// 0057d2af  83c410               add esp, 0x10
// 0057d2b2  c3                   ret 
// library jpeg-6b/jcphuff.c (function _finish_pass_gather_phuff)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
