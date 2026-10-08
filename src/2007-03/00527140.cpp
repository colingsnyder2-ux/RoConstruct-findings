// roc 2007-03 00527140  unit: seg_00520000  size: 226 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00527140
//
// 00527140  83ec10               sub esp, 0x10
// 00527143  56                   push esi
// 00527144  8b742418             mov esi, dword ptr [esp + 0x18]
// 00527148  8b865c010000         mov eax, dword ptr [esi + 0x15c]
// 0052714e  89442404             mov dword ptr [esp + 4], eax
// 00527152  33c0                 xor eax, eax
// 00527154  3986e4000000         cmp dword ptr [esi + 0xe4], eax
// 0052715a  8944240c             mov dword ptr [esp + 0xc], eax
// 0052715e  89442410             mov dword ptr [esp + 0x10], eax
// 00527162  89442408             mov dword ptr [esp + 8], eax
// 00527166  0f8eb1000000         jle 0x52721d
// 0052716c  53                   push ebx
// 0052716d  8d8ee8000000         lea ecx, [esi + 0xe8]
// 00527173  55                   push ebp
// 00527174  894c2420             mov dword ptr [esp + 0x20], ecx
// 00527178  57                   push edi
// 00527179  8da42400000000       lea esp, [esp]
// 00527180  8b542424             mov edx, dword ptr [esp + 0x24]
// 00527184  8b02                 mov eax, dword ptr [edx]
// 00527186  8b7814               mov edi, dword ptr [eax + 0x14]
// 00527189  807c3c1800           cmp byte ptr [esp + edi + 0x18], 0
// 0052718e  8b6818               mov ebp, dword ptr [eax + 0x18]
// 00527191  8d5c3c18             lea ebx, [esp + edi + 0x18]
// 00527195  752e                 jne 0x5271c5
// 00527197  837cbe5800           cmp dword ptr [esi + edi*4 + 0x58], 0
// 0052719c  750d                 jne 0x5271ab
// 0052719e  56                   push esi
// 0052719f  e87cddfeff           call 0x514f20
// 005271a4  83c404               add esp, 4
// 005271a7  8944be58             mov dword ptr [esi + edi*4 + 0x58], eax
// 005271ab  8b442410             mov eax, dword ptr [esp + 0x10]
// 005271af  8b4cb84c             mov ecx, dword ptr [eax + edi*4 + 0x4c]
// 005271b3  8b54be58             mov edx, dword ptr [esi + edi*4 + 0x58]
// 005271b7  51                   push ecx
// 005271b8  52                   push edx
// 005271b9  56                   push esi
// 005271ba  e8a1fcffff           call 0x526e60
// 005271bf  83c40c               add esp, 0xc
// 005271c2  c60301               mov byte ptr [ebx], 1
// 005271c5  807c2c1c00           cmp byte ptr [esp + ebp + 0x1c], 0
// 005271ca  8d7c2c1c             lea edi, [esp + ebp + 0x1c]
// 005271ce  752e                 jne 0x5271fe
// 005271d0  837cae6800           cmp dword ptr [esi + ebp*4 + 0x68], 0
// 005271d5  750d                 jne 0x5271e4
// 005271d7  56                   push esi
// 005271d8  e843ddfeff           call 0x514f20
// 005271dd  83c404               add esp, 4
// 005271e0  8944ae68             mov dword ptr [esi + ebp*4 + 0x68], eax
// 005271e4  8b442410             mov eax, dword ptr [esp + 0x10]
// 005271e8  8b4ca85c             mov ecx, dword ptr [eax + ebp*4 + 0x5c]
// 005271ec  8b54ae68             mov edx, dword ptr [esi + ebp*4 + 0x68]
// 005271f0  51                   push ecx
// 005271f1  52                   push edx
// 005271f2  56                   push esi
// 005271f3  e868fcffff           call 0x526e60
// 005271f8  83c40c               add esp, 0xc
// 005271fb  c60701               mov byte ptr [edi], 1
// 005271fe  8b442414             mov eax, dword ptr [esp + 0x14]
// 00527202  8344242404           add dword ptr [esp + 0x24], 4
// 00527207  83c001               add eax, 1
// 0052720a  3b86e4000000         cmp eax, dword ptr [esi + 0xe4]
// 00527210  89442414             mov dword ptr [esp + 0x14], eax
// 00527214  0f8c66ffffff         jl 0x527180
// 0052721a  5f                   pop edi
// 0052721b  5d                   pop ebp
// 0052721c  5b                   pop ebx
// 0052721d  5e                   pop esi
// 0052721e  83c410               add esp, 0x10
// 00527221  c3                   ret 
// library jpeg-6b/jchuff.c (function _finish_pass_gather)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
