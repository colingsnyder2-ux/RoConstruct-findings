// from server: 100% by auto
// roc 2009-06 005a2420  unit: seg_005a0000  size: 192 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a2420
//
// 005a2420  51                   push ecx
// 005a2421  55                   push ebp
// 005a2422  56                   push esi
// 005a2423  8b742410             mov esi, dword ptr [esp + 0x10]
// 005a2427  83bebc00000000       cmp dword ptr [esi + 0xbc], 0
// 005a242e  57                   push edi
// 005a242f  8bbe5c010000         mov edi, dword ptr [esi + 0x15c]
// 005a2435  7437                 je 0x5a246e
// 005a2437  837f2400             cmp dword ptr [edi + 0x24], 0
// 005a243b  752e                 jne 0x5a246b
// 005a243d  33c0                 xor eax, eax
// 005a243f  3986e4000000         cmp dword ptr [esi + 0xe4], eax
// 005a2445  7e1b                 jle 0x5a2462
// 005a2447  8d4f14               lea ecx, [edi + 0x14]
// 005a244a  8d9b00000000         lea ebx, [ebx]
// 005a2450  c70100000000         mov dword ptr [ecx], 0
// 005a2456  40                   inc eax
// 005a2457  83c104               add ecx, 4
// 005a245a  3b86e4000000         cmp eax, dword ptr [esi + 0xe4]
// 005a2460  7cee                 jl 0x5a2450
// 005a2462  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 005a2468  894724               mov dword ptr [edi + 0x24], eax
// 005a246b  ff4f24               dec dword ptr [edi + 0x24]
// 005a246e  33ed                 xor ebp, ebp
// 005a2470  39ae00010000         cmp dword ptr [esi + 0x100], ebp
// 005a2476  7e61                 jle 0x5a24d9
// 005a2478  8d8e04010000         lea ecx, [esi + 0x104]
// 005a247e  894c2414             mov dword ptr [esp + 0x14], ecx
// 005a2482  53                   push ebx
// 005a2483  8b542418             mov edx, dword ptr [esp + 0x18]
// 005a2487  8b0a                 mov ecx, dword ptr [edx]
// 005a2489  8b848ee8000000       mov eax, dword ptr [esi + ecx*4 + 0xe8]
// 005a2490  8b5018               mov edx, dword ptr [eax + 0x18]
// 005a2493  8b4014               mov eax, dword ptr [eax + 0x14]
// 005a2496  8b5c975c             mov ebx, dword ptr [edi + edx*4 + 0x5c]
// 005a249a  8b44874c             mov eax, dword ptr [edi + eax*4 + 0x4c]
// 005a249e  894c2410             mov dword ptr [esp + 0x10], ecx
// 005a24a2  8b4c8f14             mov ecx, dword ptr [edi + ecx*4 + 0x14]
// 005a24a6  51                   push ecx
// 005a24a7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005a24ab  8b0ca9               mov ecx, dword ptr [ecx + ebp*4]
// 005a24ae  51                   push ecx
// 005a24af  56                   push esi
// 005a24b0  e88bfeffff           call 0x5a2340
// 005a24b5  8b542428             mov edx, dword ptr [esp + 0x28]
// 005a24b9  8b04aa               mov eax, dword ptr [edx + ebp*4]
// 005a24bc  0fbf08               movsx ecx, word ptr [eax]
// 005a24bf  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005a24c3  8344242404           add dword ptr [esp + 0x24], 4
// 005a24c8  45                   inc ebp
// 005a24c9  83c40c               add esp, 0xc
// 005a24cc  894c9714             mov dword ptr [edi + edx*4 + 0x14], ecx
// 005a24d0  3bae00010000         cmp ebp, dword ptr [esi + 0x100]
// 005a24d6  7cab                 jl 0x5a2483
// 005a24d8  5b                   pop ebx
// 005a24d9  5f                   pop edi
// 005a24da  5e                   pop esi
// 005a24db  b001                 mov al, 1
// 005a24dd  5d                   pop ebp
// 005a24de  59                   pop ecx
// 005a24df  c3                   ret 
// library jpeg-6b/jchuff.c (function _encode_mcu_gather)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
