// roc 2010-06 00573d30  unit: seg_00570000  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00573d30
//
// 00573d30  53                   push ebx
// 00573d31  56                   push esi
// 00573d32  57                   push edi
// 00573d33  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00573d37  33db                 xor ebx, ebx
// 00573d39  3bfb                 cmp edi, ebx
// 00573d3b  7479                 je 0x573db6
// 00573d3d  8b771c               mov esi, dword ptr [edi + 0x1c]
// 00573d40  3bf3                 cmp esi, ebx
// 00573d42  7472                 je 0x573db6
// 00573d44  395f20               cmp dword ptr [edi + 0x20], ebx
// 00573d47  746d                 je 0x573db6
// 00573d49  395f24               cmp dword ptr [edi + 0x24], ebx
// 00573d4c  7468                 je 0x573db6
// 00573d4e  895f14               mov dword ptr [edi + 0x14], ebx
// 00573d51  895f08               mov dword ptr [edi + 8], ebx
// 00573d54  895f18               mov dword ptr [edi + 0x18], ebx
// 00573d57  c7472c02000000       mov dword ptr [edi + 0x2c], 2
// 00573d5e  8b4608               mov eax, dword ptr [esi + 8]
// 00573d61  894610               mov dword ptr [esi + 0x10], eax
// 00573d64  8b4618               mov eax, dword ptr [esi + 0x18]
// 00573d67  3bc3                 cmp eax, ebx
// 00573d69  895e14               mov dword ptr [esi + 0x14], ebx
// 00573d6c  7d05                 jge 0x573d73
// 00573d6e  f7d8                 neg eax
// 00573d70  894618               mov dword ptr [esi + 0x18], eax
// 00573d73  8b4618               mov eax, dword ptr [esi + 0x18]
// 00573d76  8bc8                 mov ecx, eax
// 00573d78  f7d9                 neg ecx
// 00573d7a  1bc9                 sbb ecx, ecx
// 00573d7c  83e1b9               and ecx, 0xffffffb9
// 00573d7f  53                   push ebx
// 00573d80  83c171               add ecx, 0x71
// 00573d83  53                   push ebx
// 00573d84  894e04               mov dword ptr [esi + 4], ecx
// 00573d87  53                   push ebx
// 00573d88  83f802               cmp eax, 2
// 00573d8b  7507                 jne 0x573d94
// 00573d8d  e82e050000           call 0x5742c0
// 00573d92  eb05                 jmp 0x573d99
// 00573d94  e817820000           call 0x57bfb0
// 00573d99  83c40c               add esp, 0xc
// 00573d9c  894730               mov dword ptr [edi + 0x30], eax
// 00573d9f  56                   push esi
// 00573da0  895e28               mov dword ptr [esi + 0x28], ebx
// 00573da3  e878960000           call 0x57d420
// 00573da8  83c404               add esp, 4
// 00573dab  e8e0f1ffff           call 0x572f90
// 00573db0  5f                   pop edi
// 00573db1  5e                   pop esi
// 00573db2  33c0                 xor eax, eax
// 00573db4  5b                   pop ebx
// 00573db5  c3                   ret 
// 00573db6  5f                   pop edi
// 00573db7  5e                   pop esi
// 00573db8  b8feffffff           mov eax, 0xfffffffe
// 00573dbd  5b                   pop ebx
// 00573dbe  c3                   ret 
// library zlib-1.2.3/deflate.c (function _deflateReset)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
