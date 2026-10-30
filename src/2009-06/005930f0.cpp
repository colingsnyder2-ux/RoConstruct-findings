// from server: 100% by auto
// roc 2009-06 005930f0  unit: seg_00590000  size: 261 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005930f0
//
// 005930f0  53                   push ebx
// 005930f1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005930f5  55                   push ebp
// 005930f6  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005930fa  56                   push esi
// 005930fb  8b7304               mov esi, dword ptr [ebx + 4]
// 005930fe  57                   push edi
// 005930ff  85ed                 test ebp, ebp
// 00593101  7c05                 jl 0x593108
// 00593103  83fd02               cmp ebp, 2
// 00593106  7c18                 jl 0x593120
// 00593108  8b03                 mov eax, dword ptr [ebx]
// 0059310a  c740140e000000       mov dword ptr [eax + 0x14], 0xe
// 00593111  8b0b                 mov ecx, dword ptr [ebx]
// 00593113  896918               mov dword ptr [ecx + 0x18], ebp
// 00593116  8b13                 mov edx, dword ptr [ebx]
// 00593118  8b02                 mov eax, dword ptr [edx]
// 0059311a  53                   push ebx
// 0059311b  ffd0                 call eax
// 0059311d  83c404               add esp, 4
// 00593120  83fd01               cmp ebp, 1
// 00593123  7560                 jne 0x593185
// 00593125  8b7e44               mov edi, dword ptr [esi + 0x44]
// 00593128  85ff                 test edi, edi
// 0059312a  7422                 je 0x59314e
// 0059312c  8d642400             lea esp, [esp]
// 00593130  807f2200             cmp byte ptr [edi + 0x22], 0
// 00593134  7411                 je 0x593147
// 00593136  8b5730               mov edx, dword ptr [edi + 0x30]
// 00593139  8d4f28               lea ecx, [edi + 0x28]
// 0059313c  51                   push ecx
// 0059313d  53                   push ebx
// 0059313e  c6472200             mov byte ptr [edi + 0x22], 0
// 00593142  ffd2                 call edx
// 00593144  83c408               add esp, 8
// 00593147  8b7f24               mov edi, dword ptr [edi + 0x24]
// 0059314a  85ff                 test edi, edi
// 0059314c  75e2                 jne 0x593130
// 0059314e  8b7e48               mov edi, dword ptr [esi + 0x48]
// 00593151  c7464400000000       mov dword ptr [esi + 0x44], 0
// 00593158  85ff                 test edi, edi
// 0059315a  7422                 je 0x59317e
// 0059315c  8d642400             lea esp, [esp]
// 00593160  807f2200             cmp byte ptr [edi + 0x22], 0
// 00593164  7411                 je 0x593177
// 00593166  8b4f30               mov ecx, dword ptr [edi + 0x30]
// 00593169  8d4728               lea eax, [edi + 0x28]
// 0059316c  50                   push eax
// 0059316d  53                   push ebx
// 0059316e  c6472200             mov byte ptr [edi + 0x22], 0
// 00593172  ffd1                 call ecx
// 00593174  83c408               add esp, 8
// 00593177  8b7f24               mov edi, dword ptr [edi + 0x24]
// 0059317a  85ff                 test edi, edi
// 0059317c  75e2                 jne 0x593160
// 0059317e  c7464800000000       mov dword ptr [esi + 0x48], 0
// 00593185  8b44ae3c             mov eax, dword ptr [esi + ebp*4 + 0x3c]
// 00593189  c744ae3c00000000     mov dword ptr [esi + ebp*4 + 0x3c], 0
// 00593191  85c0                 test eax, eax
// 00593193  7424                 je 0x5931b9
// 00593195  8b5008               mov edx, dword ptr [eax + 8]
// 00593198  8b4804               mov ecx, dword ptr [eax + 4]
// 0059319b  8b38                 mov edi, dword ptr [eax]
// 0059319d  8d6c0a10             lea ebp, [edx + ecx + 0x10]
// 005931a1  55                   push ebp
// 005931a2  50                   push eax
// 005931a3  53                   push ebx
// 005931a4  e8a7780000           call 0x59aa50
// 005931a9  296e4c               sub dword ptr [esi + 0x4c], ebp
// 005931ac  83c40c               add esp, 0xc
// 005931af  8bc7                 mov eax, edi
// 005931b1  85ff                 test edi, edi
// 005931b3  75e0                 jne 0x593195
// 005931b5  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 005931b9  8b44ae34             mov eax, dword ptr [esi + ebp*4 + 0x34]
// 005931bd  c744ae3400000000     mov dword ptr [esi + ebp*4 + 0x34], 0
// 005931c5  85c0                 test eax, eax
// 005931c7  7427                 je 0x5931f0
// 005931c9  8da42400000000       lea esp, [esp]
// 005931d0  8b5008               mov edx, dword ptr [eax + 8]
// 005931d3  8b4804               mov ecx, dword ptr [eax + 4]
// 005931d6  8b38                 mov edi, dword ptr [eax]
// 005931d8  8d6c0a10             lea ebp, [edx + ecx + 0x10]
// 005931dc  55                   push ebp
// 005931dd  50                   push eax
// 005931de  53                   push ebx
// 005931df  e86c780000           call 0x59aa50
// 005931e4  296e4c               sub dword ptr [esi + 0x4c], ebp
// 005931e7  83c40c               add esp, 0xc
// 005931ea  8bc7                 mov eax, edi
// 005931ec  85ff                 test edi, edi
// 005931ee  75e0                 jne 0x5931d0
// 005931f0  5f                   pop edi
// 005931f1  5e                   pop esi
// 005931f2  5d                   pop ebp
// 005931f3  5b                   pop ebx
// 005931f4  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _free_pool)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
