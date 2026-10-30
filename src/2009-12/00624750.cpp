// roc 2009-12 00624750  unit: seg_00620000  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00624750
//
// 00624750  83ec10               sub esp, 0x10
// 00624753  56                   push esi
// 00624754  8b742418             mov esi, dword ptr [esp + 0x18]
// 00624758  8b865c010000         mov eax, dword ptr [esi + 0x15c]
// 0062475e  89442404             mov dword ptr [esp + 4], eax
// 00624762  33c0                 xor eax, eax
// 00624764  3986e4000000         cmp dword ptr [esi + 0xe4], eax
// 0062476a  8944240c             mov dword ptr [esp + 0xc], eax
// 0062476e  89442410             mov dword ptr [esp + 0x10], eax
// 00624772  89442408             mov dword ptr [esp + 8], eax
// 00624776  0f8eaf000000         jle 0x62482b
// 0062477c  53                   push ebx
// 0062477d  8d8ee8000000         lea ecx, [esi + 0xe8]
// 00624783  55                   push ebp
// 00624784  894c2420             mov dword ptr [esp + 0x20], ecx
// 00624788  57                   push edi
// 00624789  8da42400000000       lea esp, [esp]
// 00624790  8b542424             mov edx, dword ptr [esp + 0x24]
// 00624794  8b02                 mov eax, dword ptr [edx]
// 00624796  8b7814               mov edi, dword ptr [eax + 0x14]
// 00624799  807c3c1800           cmp byte ptr [esp + edi + 0x18], 0
// 0062479e  8b6818               mov ebp, dword ptr [eax + 0x18]
// 006247a1  8d5c3c18             lea ebx, [esp + edi + 0x18]
// 006247a5  752e                 jne 0x6247d5
// 006247a7  837cbe5800           cmp dword ptr [esi + edi*4 + 0x58], 0
// 006247ac  750d                 jne 0x6247bb
// 006247ae  56                   push esi
// 006247af  e8ccc6fdff           call 0x600e80
// 006247b4  83c404               add esp, 4
// 006247b7  8944be58             mov dword ptr [esi + edi*4 + 0x58], eax
// 006247bb  8b442410             mov eax, dword ptr [esp + 0x10]
// 006247bf  8b4cb84c             mov ecx, dword ptr [eax + edi*4 + 0x4c]
// 006247c3  8b54be58             mov edx, dword ptr [esi + edi*4 + 0x58]
// 006247c7  51                   push ecx
// 006247c8  52                   push edx
// 006247c9  56                   push esi
// 006247ca  e841fdffff           call 0x624510
// 006247cf  83c40c               add esp, 0xc
// 006247d2  c60301               mov byte ptr [ebx], 1
// 006247d5  807c2c1c00           cmp byte ptr [esp + ebp + 0x1c], 0
// 006247da  8d7c2c1c             lea edi, [esp + ebp + 0x1c]
// 006247de  752e                 jne 0x62480e
// 006247e0  837cae6800           cmp dword ptr [esi + ebp*4 + 0x68], 0
// 006247e5  750d                 jne 0x6247f4
// 006247e7  56                   push esi
// 006247e8  e893c6fdff           call 0x600e80
// 006247ed  83c404               add esp, 4
// 006247f0  8944ae68             mov dword ptr [esi + ebp*4 + 0x68], eax
// 006247f4  8b442410             mov eax, dword ptr [esp + 0x10]
// 006247f8  8b4ca85c             mov ecx, dword ptr [eax + ebp*4 + 0x5c]
// 006247fc  8b54ae68             mov edx, dword ptr [esi + ebp*4 + 0x68]
// 00624800  51                   push ecx
// 00624801  52                   push edx
// 00624802  56                   push esi
// 00624803  e808fdffff           call 0x624510
// 00624808  83c40c               add esp, 0xc
// 0062480b  c60701               mov byte ptr [edi], 1
// 0062480e  8b442414             mov eax, dword ptr [esp + 0x14]
// 00624812  8344242404           add dword ptr [esp + 0x24], 4
// 00624817  40                   inc eax
// 00624818  3b86e4000000         cmp eax, dword ptr [esi + 0xe4]
// 0062481e  89442414             mov dword ptr [esp + 0x14], eax
// 00624822  0f8c68ffffff         jl 0x624790
// 00624828  5f                   pop edi
// 00624829  5d                   pop ebp
// 0062482a  5b                   pop ebx
// 0062482b  5e                   pop esi
// 0062482c  83c410               add esp, 0x10
// 0062482f  c3                   ret 
// library jpeg-6b/jchuff.c (function _finish_pass_gather)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
