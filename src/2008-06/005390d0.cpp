// from server: 100% by auto
// roc 2008-06 005390d0  unit: seg_00530000  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005390d0
//
// 005390d0  83ec10               sub esp, 0x10
// 005390d3  56                   push esi
// 005390d4  8b742418             mov esi, dword ptr [esp + 0x18]
// 005390d8  8b865c010000         mov eax, dword ptr [esi + 0x15c]
// 005390de  89442410             mov dword ptr [esp + 0x10], eax
// 005390e2  e8d9f7ffff           call 0x5388c0
// 005390e7  33c0                 xor eax, eax
// 005390e9  39862c010000         cmp dword ptr [esi + 0x12c], eax
// 005390ef  8944240c             mov dword ptr [esp + 0xc], eax
// 005390f3  0f94c1               sete cl
// 005390f6  3986e4000000         cmp dword ptr [esi + 0xe4], eax
// 005390fc  884c2418             mov byte ptr [esp + 0x18], cl
// 00539100  89442408             mov dword ptr [esp + 8], eax
// 00539104  0f8e84000000         jle 0x53918e
// 0053910a  53                   push ebx
// 0053910b  8d86e8000000         lea eax, [esi + 0xe8]
// 00539111  55                   push ebp
// 00539112  8944240c             mov dword ptr [esp + 0xc], eax
// 00539116  57                   push edi
// 00539117  8b542410             mov edx, dword ptr [esp + 0x10]
// 0053911b  8b02                 mov eax, dword ptr [edx]
// 0053911d  84c9                 test cl, cl
// 0053911f  740e                 je 0x53912f
// 00539121  83be3401000000       cmp dword ptr [esi + 0x134], 0
// 00539128  754b                 jne 0x539175
// 0053912a  8b6814               mov ebp, dword ptr [eax + 0x14]
// 0053912d  eb03                 jmp 0x539132
// 0053912f  8b6818               mov ebp, dword ptr [eax + 0x18]
// 00539132  807c2c1800           cmp byte ptr [esp + ebp + 0x18], 0
// 00539137  8d5c2c18             lea ebx, [esp + ebp + 0x18]
// 0053913b  7538                 jne 0x539175
// 0053913d  8d7cae58             lea edi, [esi + ebp*4 + 0x58]
// 00539141  84c9                 test cl, cl
// 00539143  7504                 jne 0x539149
// 00539145  8d7cae68             lea edi, [esi + ebp*4 + 0x68]
// 00539149  833f00               cmp dword ptr [edi], 0
// 0053914c  750b                 jne 0x539159
// 0053914e  56                   push esi
// 0053914f  e8ac25feff           call 0x51b700
// 00539154  83c404               add esp, 4
// 00539157  8907                 mov dword ptr [edi], eax
// 00539159  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0053915d  8b4ca85c             mov ecx, dword ptr [eax + ebp*4 + 0x5c]
// 00539161  8b17                 mov edx, dword ptr [edi]
// 00539163  51                   push ecx
// 00539164  52                   push edx
// 00539165  56                   push esi
// 00539166  e895f0ffff           call 0x538200
// 0053916b  8a4c2430             mov cl, byte ptr [esp + 0x30]
// 0053916f  83c40c               add esp, 0xc
// 00539172  c60301               mov byte ptr [ebx], 1
// 00539175  8b442414             mov eax, dword ptr [esp + 0x14]
// 00539179  8344241004           add dword ptr [esp + 0x10], 4
// 0053917e  40                   inc eax
// 0053917f  3b86e4000000         cmp eax, dword ptr [esi + 0xe4]
// 00539185  89442414             mov dword ptr [esp + 0x14], eax
// 00539189  7c8c                 jl 0x539117
// 0053918b  5f                   pop edi
// 0053918c  5d                   pop ebp
// 0053918d  5b                   pop ebx
// 0053918e  5e                   pop esi
// 0053918f  83c410               add esp, 0x10
// 00539192  c3                   ret 
// library jpeg-6b/jcphuff.c (function _finish_pass_gather_phuff)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
