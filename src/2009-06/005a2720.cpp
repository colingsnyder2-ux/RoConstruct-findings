// roc 2009-06 005a2720  unit: seg_005a0000  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a2720
//
// 005a2720  83ec10               sub esp, 0x10
// 005a2723  56                   push esi
// 005a2724  8b742418             mov esi, dword ptr [esp + 0x18]
// 005a2728  8b865c010000         mov eax, dword ptr [esi + 0x15c]
// 005a272e  89442404             mov dword ptr [esp + 4], eax
// 005a2732  33c0                 xor eax, eax
// 005a2734  3986e4000000         cmp dword ptr [esi + 0xe4], eax
// 005a273a  8944240c             mov dword ptr [esp + 0xc], eax
// 005a273e  89442410             mov dword ptr [esp + 0x10], eax
// 005a2742  89442408             mov dword ptr [esp + 8], eax
// 005a2746  0f8eaf000000         jle 0x5a27fb
// 005a274c  53                   push ebx
// 005a274d  8d8ee8000000         lea ecx, [esi + 0xe8]
// 005a2753  55                   push ebp
// 005a2754  894c2420             mov dword ptr [esp + 0x20], ecx
// 005a2758  57                   push edi
// 005a2759  8da42400000000       lea esp, [esp]
// 005a2760  8b542424             mov edx, dword ptr [esp + 0x24]
// 005a2764  8b02                 mov eax, dword ptr [edx]
// 005a2766  8b7814               mov edi, dword ptr [eax + 0x14]
// 005a2769  807c3c1800           cmp byte ptr [esp + edi + 0x18], 0
// 005a276e  8b6818               mov ebp, dword ptr [eax + 0x18]
// 005a2771  8d5c3c18             lea ebx, [esp + edi + 0x18]
// 005a2775  752e                 jne 0x5a27a5
// 005a2777  837cbe5800           cmp dword ptr [esi + edi*4 + 0x58], 0
// 005a277c  750d                 jne 0x5a278b
// 005a277e  56                   push esi
// 005a277f  e81cc9fdff           call 0x57f0a0
// 005a2784  83c404               add esp, 4
// 005a2787  8944be58             mov dword ptr [esi + edi*4 + 0x58], eax
// 005a278b  8b442410             mov eax, dword ptr [esp + 0x10]
// 005a278f  8b4cb84c             mov ecx, dword ptr [eax + edi*4 + 0x4c]
// 005a2793  8b54be58             mov edx, dword ptr [esi + edi*4 + 0x58]
// 005a2797  51                   push ecx
// 005a2798  52                   push edx
// 005a2799  56                   push esi
// 005a279a  e841fdffff           call 0x5a24e0
// 005a279f  83c40c               add esp, 0xc
// 005a27a2  c60301               mov byte ptr [ebx], 1
// 005a27a5  807c2c1c00           cmp byte ptr [esp + ebp + 0x1c], 0
// 005a27aa  8d7c2c1c             lea edi, [esp + ebp + 0x1c]
// 005a27ae  752e                 jne 0x5a27de
// 005a27b0  837cae6800           cmp dword ptr [esi + ebp*4 + 0x68], 0
// 005a27b5  750d                 jne 0x5a27c4
// 005a27b7  56                   push esi
// 005a27b8  e8e3c8fdff           call 0x57f0a0
// 005a27bd  83c404               add esp, 4
// 005a27c0  8944ae68             mov dword ptr [esi + ebp*4 + 0x68], eax
// 005a27c4  8b442410             mov eax, dword ptr [esp + 0x10]
// 005a27c8  8b4ca85c             mov ecx, dword ptr [eax + ebp*4 + 0x5c]
// 005a27cc  8b54ae68             mov edx, dword ptr [esi + ebp*4 + 0x68]
// 005a27d0  51                   push ecx
// 005a27d1  52                   push edx
// 005a27d2  56                   push esi
// 005a27d3  e808fdffff           call 0x5a24e0
// 005a27d8  83c40c               add esp, 0xc
// 005a27db  c60701               mov byte ptr [edi], 1
// 005a27de  8b442414             mov eax, dword ptr [esp + 0x14]
// 005a27e2  8344242404           add dword ptr [esp + 0x24], 4
// 005a27e7  40                   inc eax
// 005a27e8  3b86e4000000         cmp eax, dword ptr [esi + 0xe4]
// 005a27ee  89442414             mov dword ptr [esp + 0x14], eax
// 005a27f2  0f8c68ffffff         jl 0x5a2760
// 005a27f8  5f                   pop edi
// 005a27f9  5d                   pop ebp
// 005a27fa  5b                   pop ebx
// 005a27fb  5e                   pop esi
// 005a27fc  83c410               add esp, 0x10
// 005a27ff  c3                   ret 
// library jpeg-6b/jchuff.c (function _finish_pass_gather)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
