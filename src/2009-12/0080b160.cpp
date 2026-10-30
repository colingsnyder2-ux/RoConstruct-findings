// roc 2009-12 0080b160  unit: CXTPImageManagerResource::CBitmapDC  size: 239 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080b160
//
// 0080b160  51                   push ecx
// 0080b161  57                   push edi
// 0080b162  0fb77c240c           movzx edi, word ptr [esp + 0xc]
// 0080b167  85ff                 test edi, edi
// 0080b169  7507                 jne 0x80b172
// 0080b16b  33c0                 xor eax, eax
// 0080b16d  5f                   pop edi
// 0080b16e  59                   pop ecx
// 0080b16f  c21000               ret 0x10
// 0080b172  56                   push esi
// 0080b173  68f1000000           push 0xf1
// 0080b178  57                   push edi
// 0080b179  e86090feff           call 0x7f41de
// 0080b17e  68f1000000           push 0xf1
// 0080b183  8bf0                 mov esi, eax
// 0080b185  57                   push edi
// 0080b186  56                   push esi
// 0080b187  ff15ecb19800         call dword ptr [0x98b1ec]
// 0080b18d  85c0                 test eax, eax
// 0080b18f  7506                 jne 0x80b197
// 0080b191  5e                   pop esi
// 0080b192  5f                   pop edi
// 0080b193  59                   pop ecx
// 0080b194  c21000               ret 0x10
// 0080b197  55                   push ebp
// 0080b198  50                   push eax
// 0080b199  56                   push esi
// 0080b19a  ff15f0b19800         call dword ptr [0x98b1f0]
// 0080b1a0  8be8                 mov ebp, eax
// 0080b1a2  896c240c             mov dword ptr [esp + 0xc], ebp
// 0080b1a6  85ed                 test ebp, ebp
// 0080b1a8  740d                 je 0x80b1b7
// 0080b1aa  55                   push ebp
// 0080b1ab  ff157cb29800         call dword ptr [0x98b27c]
// 0080b1b1  8bf0                 mov esi, eax
// 0080b1b3  85f6                 test esi, esi
// 0080b1b5  7509                 jne 0x80b1c0
// 0080b1b7  5d                   pop ebp
// 0080b1b8  5e                   pop esi
// 0080b1b9  33c0                 xor eax, eax
// 0080b1bb  5f                   pop edi
// 0080b1bc  59                   pop ecx
// 0080b1bd  c21000               ret 0x10
// 0080b1c0  0fb74606             movzx eax, word ptr [esi + 6]
// 0080b1c4  33c9                 xor ecx, ecx
// 0080b1c6  ba04000000           mov edx, 4
// 0080b1cb  f7e2                 mul edx
// 0080b1cd  0f90c1               seto cl
// 0080b1d0  53                   push ebx
// 0080b1d1  f7d9                 neg ecx
// 0080b1d3  0bc8                 or ecx, eax
// 0080b1d5  51                   push ecx
// 0080b1d6  e86789feff           call 0x7f3b42
// 0080b1db  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0080b1df  8b542424             mov edx, dword ptr [esp + 0x24]
// 0080b1e3  8903                 mov dword ptr [ebx], eax
// 0080b1e5  33c0                 xor eax, eax
// 0080b1e7  83c404               add esp, 4
// 0080b1ea  c70200000000         mov dword ptr [edx], 0
// 0080b1f0  33ff                 xor edi, edi
// 0080b1f2  663b4606             cmp ax, word ptr [esi + 6]
// 0080b1f6  7332                 jae 0x80b22a
// 0080b1f8  8bc6                 mov eax, esi
// 0080b1fa  e851e0ffff           call 0x809250
// 0080b1ff  89442418             mov dword ptr [esp + 0x18], eax
// 0080b203  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0080b207  0fb70c79             movzx ecx, word ptr [ecx + edi*2]
// 0080b20b  6685c9               test cx, cx
// 0080b20e  7411                 je 0x80b221
// 0080b210  8b2b                 mov ebp, dword ptr [ebx]
// 0080b212  0fb7c1               movzx eax, cx
// 0080b215  8b0a                 mov ecx, dword ptr [edx]
// 0080b217  89448d00             mov dword ptr [ebp + ecx*4], eax
// 0080b21b  ff02                 inc dword ptr [edx]
// 0080b21d  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0080b221  0fb74606             movzx eax, word ptr [esi + 6]
// 0080b225  47                   inc edi
// 0080b226  3bf8                 cmp edi, eax
// 0080b228  7cd9                 jl 0x80b203
// 0080b22a  0fb74602             movzx eax, word ptr [esi + 2]
// 0080b22e  0fb74e04             movzx ecx, word ptr [esi + 4]
// 0080b232  8b542424             mov edx, dword ptr [esp + 0x24]
// 0080b236  55                   push ebp
// 0080b237  8902                 mov dword ptr [edx], eax
// 0080b239  894a04               mov dword ptr [edx + 4], ecx
// 0080b23c  ff1578b29800         call dword ptr [0x98b278]
// 0080b242  5b                   pop ebx
// 0080b243  5d                   pop ebp
// 0080b244  5e                   pop esi
// 0080b245  b801000000           mov eax, 1
// 0080b24a  5f                   pop edi
// 0080b24b  59                   pop ecx
// 0080b24c  c21000               ret 0x10
// copied from an identical function in another client (function ?LoadToolbar@CXTPImageManager@@ABEHIAAPAIAAHAAVCSize@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-imports Source\Common\XTPImageManager.cpp