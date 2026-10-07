// roc 2011-06 0057c560  unit: seg_00570000  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057c560
//
// 0057c560  83ec10               sub esp, 0x10
// 0057c563  56                   push esi
// 0057c564  8b742418             mov esi, dword ptr [esp + 0x18]
// 0057c568  8b865c010000         mov eax, dword ptr [esi + 0x15c]
// 0057c56e  89442404             mov dword ptr [esp + 4], eax
// 0057c572  33c0                 xor eax, eax
// 0057c574  3986e4000000         cmp dword ptr [esi + 0xe4], eax
// 0057c57a  8944240c             mov dword ptr [esp + 0xc], eax
// 0057c57e  89442410             mov dword ptr [esp + 0x10], eax
// 0057c582  89442408             mov dword ptr [esp + 8], eax
// 0057c586  0f8eaf000000         jle 0x57c63b
// 0057c58c  53                   push ebx
// 0057c58d  8d8ee8000000         lea ecx, [esi + 0xe8]
// 0057c593  55                   push ebp
// 0057c594  894c2420             mov dword ptr [esp + 0x20], ecx
// 0057c598  57                   push edi
// 0057c599  8da42400000000       lea esp, [esp]
// 0057c5a0  8b542424             mov edx, dword ptr [esp + 0x24]
// 0057c5a4  8b02                 mov eax, dword ptr [edx]
// 0057c5a6  8b7814               mov edi, dword ptr [eax + 0x14]
// 0057c5a9  807c3c1800           cmp byte ptr [esp + edi + 0x18], 0
// 0057c5ae  8b6818               mov ebp, dword ptr [eax + 0x18]
// 0057c5b1  8d5c3c18             lea ebx, [esp + edi + 0x18]
// 0057c5b5  752e                 jne 0x57c5e5
// 0057c5b7  837cbe5800           cmp dword ptr [esi + edi*4 + 0x58], 0
// 0057c5bc  750d                 jne 0x57c5cb
// 0057c5be  56                   push esi
// 0057c5bf  e8bcb7feff           call 0x567d80
// 0057c5c4  83c404               add esp, 4
// 0057c5c7  8944be58             mov dword ptr [esi + edi*4 + 0x58], eax
// 0057c5cb  8b442410             mov eax, dword ptr [esp + 0x10]
// 0057c5cf  8b4cb84c             mov ecx, dword ptr [eax + edi*4 + 0x4c]
// 0057c5d3  8b54be58             mov edx, dword ptr [esi + edi*4 + 0x58]
// 0057c5d7  51                   push ecx
// 0057c5d8  52                   push edx
// 0057c5d9  56                   push esi
// 0057c5da  e841fdffff           call 0x57c320
// 0057c5df  83c40c               add esp, 0xc
// 0057c5e2  c60301               mov byte ptr [ebx], 1
// 0057c5e5  807c2c1c00           cmp byte ptr [esp + ebp + 0x1c], 0
// 0057c5ea  8d7c2c1c             lea edi, [esp + ebp + 0x1c]
// 0057c5ee  752e                 jne 0x57c61e
// 0057c5f0  837cae6800           cmp dword ptr [esi + ebp*4 + 0x68], 0
// 0057c5f5  750d                 jne 0x57c604
// 0057c5f7  56                   push esi
// 0057c5f8  e883b7feff           call 0x567d80
// 0057c5fd  83c404               add esp, 4
// 0057c600  8944ae68             mov dword ptr [esi + ebp*4 + 0x68], eax
// 0057c604  8b442410             mov eax, dword ptr [esp + 0x10]
// 0057c608  8b4ca85c             mov ecx, dword ptr [eax + ebp*4 + 0x5c]
// 0057c60c  8b54ae68             mov edx, dword ptr [esi + ebp*4 + 0x68]
// 0057c610  51                   push ecx
// 0057c611  52                   push edx
// 0057c612  56                   push esi
// 0057c613  e808fdffff           call 0x57c320
// 0057c618  83c40c               add esp, 0xc
// 0057c61b  c60701               mov byte ptr [edi], 1
// 0057c61e  8b442414             mov eax, dword ptr [esp + 0x14]
// 0057c622  8344242404           add dword ptr [esp + 0x24], 4
// 0057c627  40                   inc eax
// 0057c628  3b86e4000000         cmp eax, dword ptr [esi + 0xe4]
// 0057c62e  89442414             mov dword ptr [esp + 0x14], eax
// 0057c632  0f8c68ffffff         jl 0x57c5a0
// 0057c638  5f                   pop edi
// 0057c639  5d                   pop ebp
// 0057c63a  5b                   pop ebx
// 0057c63b  5e                   pop esi
// 0057c63c  83c410               add esp, 0x10
// 0057c63f  c3                   ret 
// library jpeg-6b/jchuff.c (function _finish_pass_gather)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
