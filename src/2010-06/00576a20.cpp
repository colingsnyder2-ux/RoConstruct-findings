// roc 2010-06 00576a20  unit: seg_00570000  size: 261 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00576a20
//
// 00576a20  53                   push ebx
// 00576a21  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00576a25  55                   push ebp
// 00576a26  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00576a2a  56                   push esi
// 00576a2b  8b7304               mov esi, dword ptr [ebx + 4]
// 00576a2e  57                   push edi
// 00576a2f  85ed                 test ebp, ebp
// 00576a31  7c05                 jl 0x576a38
// 00576a33  83fd02               cmp ebp, 2
// 00576a36  7c18                 jl 0x576a50
// 00576a38  8b03                 mov eax, dword ptr [ebx]
// 00576a3a  c740140e000000       mov dword ptr [eax + 0x14], 0xe
// 00576a41  8b0b                 mov ecx, dword ptr [ebx]
// 00576a43  896918               mov dword ptr [ecx + 0x18], ebp
// 00576a46  8b13                 mov edx, dword ptr [ebx]
// 00576a48  8b02                 mov eax, dword ptr [edx]
// 00576a4a  53                   push ebx
// 00576a4b  ffd0                 call eax
// 00576a4d  83c404               add esp, 4
// 00576a50  83fd01               cmp ebp, 1
// 00576a53  7560                 jne 0x576ab5
// 00576a55  8b7e44               mov edi, dword ptr [esi + 0x44]
// 00576a58  85ff                 test edi, edi
// 00576a5a  7422                 je 0x576a7e
// 00576a5c  8d642400             lea esp, [esp]
// 00576a60  807f2200             cmp byte ptr [edi + 0x22], 0
// 00576a64  7411                 je 0x576a77
// 00576a66  8b5730               mov edx, dword ptr [edi + 0x30]
// 00576a69  8d4f28               lea ecx, [edi + 0x28]
// 00576a6c  51                   push ecx
// 00576a6d  53                   push ebx
// 00576a6e  c6472200             mov byte ptr [edi + 0x22], 0
// 00576a72  ffd2                 call edx
// 00576a74  83c408               add esp, 8
// 00576a77  8b7f24               mov edi, dword ptr [edi + 0x24]
// 00576a7a  85ff                 test edi, edi
// 00576a7c  75e2                 jne 0x576a60
// 00576a7e  8b7e48               mov edi, dword ptr [esi + 0x48]
// 00576a81  c7464400000000       mov dword ptr [esi + 0x44], 0
// 00576a88  85ff                 test edi, edi
// 00576a8a  7422                 je 0x576aae
// 00576a8c  8d642400             lea esp, [esp]
// 00576a90  807f2200             cmp byte ptr [edi + 0x22], 0
// 00576a94  7411                 je 0x576aa7
// 00576a96  8b4f30               mov ecx, dword ptr [edi + 0x30]
// 00576a99  8d4728               lea eax, [edi + 0x28]
// 00576a9c  50                   push eax
// 00576a9d  53                   push ebx
// 00576a9e  c6472200             mov byte ptr [edi + 0x22], 0
// 00576aa2  ffd1                 call ecx
// 00576aa4  83c408               add esp, 8
// 00576aa7  8b7f24               mov edi, dword ptr [edi + 0x24]
// 00576aaa  85ff                 test edi, edi
// 00576aac  75e2                 jne 0x576a90
// 00576aae  c7464800000000       mov dword ptr [esi + 0x48], 0
// 00576ab5  8b44ae3c             mov eax, dword ptr [esi + ebp*4 + 0x3c]
// 00576ab9  c744ae3c00000000     mov dword ptr [esi + ebp*4 + 0x3c], 0
// 00576ac1  85c0                 test eax, eax
// 00576ac3  7424                 je 0x576ae9
// 00576ac5  8b5008               mov edx, dword ptr [eax + 8]
// 00576ac8  8b4804               mov ecx, dword ptr [eax + 4]
// 00576acb  8b38                 mov edi, dword ptr [eax]
// 00576acd  8d6c0a10             lea ebp, [edx + ecx + 0x10]
// 00576ad1  55                   push ebp
// 00576ad2  50                   push eax
// 00576ad3  53                   push ebx
// 00576ad4  e8077b0000           call 0x57e5e0
// 00576ad9  296e4c               sub dword ptr [esi + 0x4c], ebp
// 00576adc  83c40c               add esp, 0xc
// 00576adf  8bc7                 mov eax, edi
// 00576ae1  85ff                 test edi, edi
// 00576ae3  75e0                 jne 0x576ac5
// 00576ae5  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00576ae9  8b44ae34             mov eax, dword ptr [esi + ebp*4 + 0x34]
// 00576aed  c744ae3400000000     mov dword ptr [esi + ebp*4 + 0x34], 0
// 00576af5  85c0                 test eax, eax
// 00576af7  7427                 je 0x576b20
// 00576af9  8da42400000000       lea esp, [esp]
// 00576b00  8b5008               mov edx, dword ptr [eax + 8]
// 00576b03  8b4804               mov ecx, dword ptr [eax + 4]
// 00576b06  8b38                 mov edi, dword ptr [eax]
// 00576b08  8d6c0a10             lea ebp, [edx + ecx + 0x10]
// 00576b0c  55                   push ebp
// 00576b0d  50                   push eax
// 00576b0e  53                   push ebx
// 00576b0f  e8cc7a0000           call 0x57e5e0
// 00576b14  296e4c               sub dword ptr [esi + 0x4c], ebp
// 00576b17  83c40c               add esp, 0xc
// 00576b1a  8bc7                 mov eax, edi
// 00576b1c  85ff                 test edi, edi
// 00576b1e  75e0                 jne 0x576b00
// 00576b20  5f                   pop edi
// 00576b21  5e                   pop esi
// 00576b22  5d                   pop ebp
// 00576b23  5b                   pop ebx
// 00576b24  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _free_pool)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
