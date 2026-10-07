// roc 2010-06 005862b0  unit: seg_00580000  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005862b0
//
// 005862b0  83ec10               sub esp, 0x10
// 005862b3  56                   push esi
// 005862b4  8b742418             mov esi, dword ptr [esp + 0x18]
// 005862b8  8b865c010000         mov eax, dword ptr [esi + 0x15c]
// 005862be  89442404             mov dword ptr [esp + 4], eax
// 005862c2  33c0                 xor eax, eax
// 005862c4  3986e4000000         cmp dword ptr [esi + 0xe4], eax
// 005862ca  8944240c             mov dword ptr [esp + 0xc], eax
// 005862ce  89442410             mov dword ptr [esp + 0x10], eax
// 005862d2  89442408             mov dword ptr [esp + 8], eax
// 005862d6  0f8eaf000000         jle 0x58638b
// 005862dc  53                   push ebx
// 005862dd  8d8ee8000000         lea ecx, [esi + 0xe8]
// 005862e3  55                   push ebp
// 005862e4  894c2420             mov dword ptr [esp + 0x20], ecx
// 005862e8  57                   push edi
// 005862e9  8da42400000000       lea esp, [esp]
// 005862f0  8b542424             mov edx, dword ptr [esp + 0x24]
// 005862f4  8b02                 mov eax, dword ptr [edx]
// 005862f6  8b7814               mov edi, dword ptr [eax + 0x14]
// 005862f9  807c3c1800           cmp byte ptr [esp + edi + 0x18], 0
// 005862fe  8b6818               mov ebp, dword ptr [eax + 0x18]
// 00586301  8d5c3c18             lea ebx, [esp + edi + 0x18]
// 00586305  752e                 jne 0x586335
// 00586307  837cbe5800           cmp dword ptr [esi + edi*4 + 0x58], 0
// 0058630c  750d                 jne 0x58631b
// 0058630e  56                   push esi
// 0058630f  e8dcc4fdff           call 0x5627f0
// 00586314  83c404               add esp, 4
// 00586317  8944be58             mov dword ptr [esi + edi*4 + 0x58], eax
// 0058631b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0058631f  8b4cb84c             mov ecx, dword ptr [eax + edi*4 + 0x4c]
// 00586323  8b54be58             mov edx, dword ptr [esi + edi*4 + 0x58]
// 00586327  51                   push ecx
// 00586328  52                   push edx
// 00586329  56                   push esi
// 0058632a  e841fdffff           call 0x586070
// 0058632f  83c40c               add esp, 0xc
// 00586332  c60301               mov byte ptr [ebx], 1
// 00586335  807c2c1c00           cmp byte ptr [esp + ebp + 0x1c], 0
// 0058633a  8d7c2c1c             lea edi, [esp + ebp + 0x1c]
// 0058633e  752e                 jne 0x58636e
// 00586340  837cae6800           cmp dword ptr [esi + ebp*4 + 0x68], 0
// 00586345  750d                 jne 0x586354
// 00586347  56                   push esi
// 00586348  e8a3c4fdff           call 0x5627f0
// 0058634d  83c404               add esp, 4
// 00586350  8944ae68             mov dword ptr [esi + ebp*4 + 0x68], eax
// 00586354  8b442410             mov eax, dword ptr [esp + 0x10]
// 00586358  8b4ca85c             mov ecx, dword ptr [eax + ebp*4 + 0x5c]
// 0058635c  8b54ae68             mov edx, dword ptr [esi + ebp*4 + 0x68]
// 00586360  51                   push ecx
// 00586361  52                   push edx
// 00586362  56                   push esi
// 00586363  e808fdffff           call 0x586070
// 00586368  83c40c               add esp, 0xc
// 0058636b  c60701               mov byte ptr [edi], 1
// 0058636e  8b442414             mov eax, dword ptr [esp + 0x14]
// 00586372  8344242404           add dword ptr [esp + 0x24], 4
// 00586377  40                   inc eax
// 00586378  3b86e4000000         cmp eax, dword ptr [esi + 0xe4]
// 0058637e  89442414             mov dword ptr [esp + 0x14], eax
// 00586382  0f8c68ffffff         jl 0x5862f0
// 00586388  5f                   pop edi
// 00586389  5d                   pop ebp
// 0058638a  5b                   pop ebx
// 0058638b  5e                   pop esi
// 0058638c  83c410               add esp, 0x10
// 0058638f  c3                   ret 
// library jpeg-6b/jchuff.c (function _finish_pass_gather)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
