// from server: 100% by auto
// roc 2011-06 00580060  unit: seg_00580000  size: 416 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00580060
//
// 00580060  56                   push esi
// 00580061  8b742408             mov esi, dword ptr [esp + 8]
// 00580065  57                   push edi
// 00580066  8bbe3c010000         mov edi, dword ptr [esi + 0x13c]
// 0058006c  8b4710               mov eax, dword ptr [edi + 0x10]
// 0058006f  83e800               sub eax, 0
// 00580072  0f84d4000000         je 0x58014c
// 00580078  83e801               sub eax, 1
// 0058007b  741d                 je 0x58009a
// 0058007d  83e801               sub eax, 1
// 00580080  7447                 je 0x5800c9
// 00580082  8b06                 mov eax, dword ptr [esi]
// 00580084  c7401430000000       mov dword ptr [eax + 0x14], 0x30
// 0058008b  8b0e                 mov ecx, dword ptr [esi]
// 0058008d  8b11                 mov edx, dword ptr [ecx]
// 0058008f  56                   push esi
// 00580090  ffd2                 call edx
// 00580092  83c404               add esp, 4
// 00580095  e93f010000           jmp 0x5801d9
// 0058009a  e801fdffff           call 0x57fda0
// 0058009f  e8ecfdffff           call 0x57fe90
// 005800a4  83be2c01000000       cmp dword ptr [esi + 0x12c], 0
// 005800ab  7579                 jne 0x580126
// 005800ad  83be3401000000       cmp dword ptr [esi + 0x134], 0
// 005800b4  7470                 je 0x580126
// 005800b6  80beb100000000       cmp byte ptr [esi + 0xb1], 0
// 005800bd  7567                 jne 0x580126
// 005800bf  ff4714               inc dword ptr [edi + 0x14]
// 005800c2  c7471002000000       mov dword ptr [edi + 0x10], 2
// 005800c9  80beb200000000       cmp byte ptr [esi + 0xb2], 0
// 005800d0  750a                 jne 0x5800dc
// 005800d2  e8c9fcffff           call 0x57fda0
// 005800d7  e8b4fdffff           call 0x57fe90
// 005800dc  8b865c010000         mov eax, dword ptr [esi + 0x15c]
// 005800e2  8b08                 mov ecx, dword ptr [eax]
// 005800e4  6a00                 push 0
// 005800e6  56                   push esi
// 005800e7  ffd1                 call ecx
// 005800e9  8b9648010000         mov edx, dword ptr [esi + 0x148]
// 005800ef  8b02                 mov eax, dword ptr [edx]
// 005800f1  6a02                 push 2
// 005800f3  56                   push esi
// 005800f4  ffd0                 call eax
// 005800f6  83c410               add esp, 0x10
// 005800f9  837f1c00             cmp dword ptr [edi + 0x1c], 0
// 005800fd  750f                 jne 0x58010e
// 005800ff  8b8e4c010000         mov ecx, dword ptr [esi + 0x14c]
// 00580105  8b5104               mov edx, dword ptr [ecx + 4]
// 00580108  56                   push esi
// 00580109  ffd2                 call edx
// 0058010b  83c404               add esp, 4
// 0058010e  8b864c010000         mov eax, dword ptr [esi + 0x14c]
// 00580114  8b4808               mov ecx, dword ptr [eax + 8]
// 00580117  56                   push esi
// 00580118  ffd1                 call ecx
// 0058011a  83c404               add esp, 4
// 0058011d  c6470c00             mov byte ptr [edi + 0xc], 0
// 00580121  e9b3000000           jmp 0x5801d9
// 00580126  8b965c010000         mov edx, dword ptr [esi + 0x15c]
// 0058012c  8b02                 mov eax, dword ptr [edx]
// 0058012e  6a01                 push 1
// 00580130  56                   push esi
// 00580131  ffd0                 call eax
// 00580133  8b8e48010000         mov ecx, dword ptr [esi + 0x148]
// 00580139  8b11                 mov edx, dword ptr [ecx]
// 0058013b  6a02                 push 2
// 0058013d  56                   push esi
// 0058013e  ffd2                 call edx
// 00580140  83c410               add esp, 0x10
// 00580143  c6470c00             mov byte ptr [edi + 0xc], 0
// 00580147  e98d000000           jmp 0x5801d9
// 0058014c  e84ffcffff           call 0x57fda0
// 00580151  e83afdffff           call 0x57fe90
// 00580156  80beb000000000       cmp byte ptr [esi + 0xb0], 0
// 0058015d  7526                 jne 0x580185
// 0058015f  8b8650010000         mov eax, dword ptr [esi + 0x150]
// 00580165  8b08                 mov ecx, dword ptr [eax]
// 00580167  56                   push esi
// 00580168  ffd1                 call ecx
// 0058016a  8b9654010000         mov edx, dword ptr [esi + 0x154]
// 00580170  8b02                 mov eax, dword ptr [edx]
// 00580172  56                   push esi
// 00580173  ffd0                 call eax
// 00580175  8b8e44010000         mov ecx, dword ptr [esi + 0x144]
// 0058017b  8b11                 mov edx, dword ptr [ecx]
// 0058017d  6a00                 push 0
// 0058017f  56                   push esi
// 00580180  ffd2                 call edx
// 00580182  83c410               add esp, 0x10
// 00580185  8b8658010000         mov eax, dword ptr [esi + 0x158]
// 0058018b  8b08                 mov ecx, dword ptr [eax]
// 0058018d  56                   push esi
// 0058018e  ffd1                 call ecx
// 00580190  0fb686b2000000       movzx eax, byte ptr [esi + 0xb2]
// 00580197  8b965c010000         mov edx, dword ptr [esi + 0x15c]
// 0058019d  8b0a                 mov ecx, dword ptr [edx]
// 0058019f  50                   push eax
// 005801a0  56                   push esi
// 005801a1  ffd1                 call ecx
// 005801a3  8b9648010000         mov edx, dword ptr [esi + 0x148]
// 005801a9  8b0a                 mov ecx, dword ptr [edx]
// 005801ab  33c0                 xor eax, eax
// 005801ad  837f1801             cmp dword ptr [edi + 0x18], 1
// 005801b1  0f9ec0               setle al
// 005801b4  48                   dec eax
// 005801b5  83e003               and eax, 3
// 005801b8  50                   push eax
// 005801b9  56                   push esi
// 005801ba  ffd1                 call ecx
// 005801bc  8b9640010000         mov edx, dword ptr [esi + 0x140]
// 005801c2  8b02                 mov eax, dword ptr [edx]
// 005801c4  6a00                 push 0
// 005801c6  56                   push esi
// 005801c7  ffd0                 call eax
// 005801c9  83c41c               add esp, 0x1c
// 005801cc  80beb200000000       cmp byte ptr [esi + 0xb2], 0
// 005801d3  0f94c1               sete cl
// 005801d6  884f0c               mov byte ptr [edi + 0xc], cl
// 005801d9  8b5718               mov edx, dword ptr [edi + 0x18]
// 005801dc  8b4714               mov eax, dword ptr [edi + 0x14]
// 005801df  4a                   dec edx
// 005801e0  3bc2                 cmp eax, edx
// 005801e2  0f94c1               sete cl
// 005801e5  884f0d               mov byte ptr [edi + 0xd], cl
// 005801e8  837e0800             cmp dword ptr [esi + 8], 0
// 005801ec  740f                 je 0x5801fd
// 005801ee  8b5608               mov edx, dword ptr [esi + 8]
// 005801f1  89420c               mov dword ptr [edx + 0xc], eax
// 005801f4  8b4608               mov eax, dword ptr [esi + 8]
// 005801f7  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 005801fa  894810               mov dword ptr [eax + 0x10], ecx
// 005801fd  5f                   pop edi
// 005801fe  5e                   pop esi
// 005801ff  c3                   ret 
// library jpeg-6b/jcmaster.c (function _prepare_for_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c
