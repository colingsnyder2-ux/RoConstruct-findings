// roc 2009-06 005903f0  unit: seg_00590000  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005903f0
//
// 005903f0  53                   push ebx
// 005903f1  56                   push esi
// 005903f2  57                   push edi
// 005903f3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005903f7  33db                 xor ebx, ebx
// 005903f9  3bfb                 cmp edi, ebx
// 005903fb  7479                 je 0x590476
// 005903fd  8b771c               mov esi, dword ptr [edi + 0x1c]
// 00590400  3bf3                 cmp esi, ebx
// 00590402  7472                 je 0x590476
// 00590404  395f20               cmp dword ptr [edi + 0x20], ebx
// 00590407  746d                 je 0x590476
// 00590409  395f24               cmp dword ptr [edi + 0x24], ebx
// 0059040c  7468                 je 0x590476
// 0059040e  895f14               mov dword ptr [edi + 0x14], ebx
// 00590411  895f08               mov dword ptr [edi + 8], ebx
// 00590414  895f18               mov dword ptr [edi + 0x18], ebx
// 00590417  c7472c02000000       mov dword ptr [edi + 0x2c], 2
// 0059041e  8b4608               mov eax, dword ptr [esi + 8]
// 00590421  894610               mov dword ptr [esi + 0x10], eax
// 00590424  8b4618               mov eax, dword ptr [esi + 0x18]
// 00590427  3bc3                 cmp eax, ebx
// 00590429  895e14               mov dword ptr [esi + 0x14], ebx
// 0059042c  7d05                 jge 0x590433
// 0059042e  f7d8                 neg eax
// 00590430  894618               mov dword ptr [esi + 0x18], eax
// 00590433  8b4618               mov eax, dword ptr [esi + 0x18]
// 00590436  8bc8                 mov ecx, eax
// 00590438  f7d9                 neg ecx
// 0059043a  1bc9                 sbb ecx, ecx
// 0059043c  83e1b9               and ecx, 0xffffffb9
// 0059043f  53                   push ebx
// 00590440  83c171               add ecx, 0x71
// 00590443  53                   push ebx
// 00590444  894e04               mov dword ptr [esi + 4], ecx
// 00590447  53                   push ebx
// 00590448  83f802               cmp eax, 2
// 0059044b  7507                 jne 0x590454
// 0059044d  e82e050000           call 0x590980
// 00590452  eb05                 jmp 0x590459
// 00590454  e8c77f0000           call 0x598420
// 00590459  83c40c               add esp, 0xc
// 0059045c  894730               mov dword ptr [edi + 0x30], eax
// 0059045f  56                   push esi
// 00590460  895e28               mov dword ptr [esi + 0x28], ebx
// 00590463  e828940000           call 0x599890
// 00590468  83c404               add esp, 4
// 0059046b  e8d0f1ffff           call 0x58f640
// 00590470  5f                   pop edi
// 00590471  5e                   pop esi
// 00590472  33c0                 xor eax, eax
// 00590474  5b                   pop ebx
// 00590475  c3                   ret 
// 00590476  5f                   pop edi
// 00590477  5e                   pop esi
// 00590478  b8feffffff           mov eax, 0xfffffffe
// 0059047d  5b                   pop ebx
// 0059047e  c3                   ret 
// library zlib-1.2.3/deflate.c (function _deflateReset)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
