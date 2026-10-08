// roc 2009-12 00612410  unit: seg_00610000  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00612410
//
// 00612410  53                   push ebx
// 00612411  56                   push esi
// 00612412  57                   push edi
// 00612413  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00612417  33db                 xor ebx, ebx
// 00612419  3bfb                 cmp edi, ebx
// 0061241b  7479                 je 0x612496
// 0061241d  8b771c               mov esi, dword ptr [edi + 0x1c]
// 00612420  3bf3                 cmp esi, ebx
// 00612422  7472                 je 0x612496
// 00612424  395f20               cmp dword ptr [edi + 0x20], ebx
// 00612427  746d                 je 0x612496
// 00612429  395f24               cmp dword ptr [edi + 0x24], ebx
// 0061242c  7468                 je 0x612496
// 0061242e  895f14               mov dword ptr [edi + 0x14], ebx
// 00612431  895f08               mov dword ptr [edi + 8], ebx
// 00612434  895f18               mov dword ptr [edi + 0x18], ebx
// 00612437  c7472c02000000       mov dword ptr [edi + 0x2c], 2
// 0061243e  8b4608               mov eax, dword ptr [esi + 8]
// 00612441  894610               mov dword ptr [esi + 0x10], eax
// 00612444  8b4618               mov eax, dword ptr [esi + 0x18]
// 00612447  3bc3                 cmp eax, ebx
// 00612449  895e14               mov dword ptr [esi + 0x14], ebx
// 0061244c  7d05                 jge 0x612453
// 0061244e  f7d8                 neg eax
// 00612450  894618               mov dword ptr [esi + 0x18], eax
// 00612453  8b4618               mov eax, dword ptr [esi + 0x18]
// 00612456  8bc8                 mov ecx, eax
// 00612458  f7d9                 neg ecx
// 0061245a  1bc9                 sbb ecx, ecx
// 0061245c  83e1b9               and ecx, 0xffffffb9
// 0061245f  53                   push ebx
// 00612460  83c171               add ecx, 0x71
// 00612463  53                   push ebx
// 00612464  894e04               mov dword ptr [esi + 4], ecx
// 00612467  53                   push ebx
// 00612468  83f802               cmp eax, 2
// 0061246b  7507                 jne 0x612474
// 0061246d  e82e050000           call 0x6129a0
// 00612472  eb05                 jmp 0x612479
// 00612474  e8d77f0000           call 0x61a450
// 00612479  83c40c               add esp, 0xc
// 0061247c  894730               mov dword ptr [edi + 0x30], eax
// 0061247f  56                   push esi
// 00612480  895e28               mov dword ptr [esi + 0x28], ebx
// 00612483  e838940000           call 0x61b8c0
// 00612488  83c404               add esp, 4
// 0061248b  e8e0f1ffff           call 0x611670
// 00612490  5f                   pop edi
// 00612491  5e                   pop esi
// 00612492  33c0                 xor eax, eax
// 00612494  5b                   pop ebx
// 00612495  c3                   ret 
// 00612496  5f                   pop edi
// 00612497  5e                   pop esi
// 00612498  b8feffffff           mov eax, 0xfffffffe
// 0061249d  5b                   pop ebx
// 0061249e  c3                   ret 
// library zlib-1.2.3/deflate.c (function _deflateReset)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
