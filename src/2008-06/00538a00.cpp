// from server: 100% by auto
// roc 2008-06 00538a00  unit: seg_00530000  size: 356 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00538a00
//
// 00538a00  83ec0c               sub esp, 0xc
// 00538a03  55                   push ebp
// 00538a04  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00538a08  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00538a0b  8b08                 mov ecx, dword ptr [eax]
// 00538a0d  56                   push esi
// 00538a0e  8bb55c010000         mov esi, dword ptr [ebp + 0x15c]
// 00538a14  57                   push edi
// 00538a15  8bbd38010000         mov edi, dword ptr [ebp + 0x138]
// 00538a1b  894e10               mov dword ptr [esi + 0x10], ecx
// 00538a1e  8b5518               mov edx, dword ptr [ebp + 0x18]
// 00538a21  8b4204               mov eax, dword ptr [edx + 4]
// 00538a24  894614               mov dword ptr [esi + 0x14], eax
// 00538a27  83bdbc00000000       cmp dword ptr [ebp + 0xbc], 0
// 00538a2e  7414                 je 0x538a44
// 00538a30  837e4400             cmp dword ptr [esi + 0x44], 0
// 00538a34  750e                 jne 0x538a44
// 00538a36  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 00538a39  51                   push ecx
// 00538a3a  8bc6                 mov eax, esi
// 00538a3c  e81fffffff           call 0x538960
// 00538a41  83c404               add esp, 4
// 00538a44  83bd0001000000       cmp dword ptr [ebp + 0x100], 0
// 00538a4b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00538a53  0f8ed1000000         jle 0x538b2a
// 00538a59  0fbfd7               movsx edx, di
// 00538a5c  8d8504010000         lea eax, [ebp + 0x104]
// 00538a62  89542414             mov dword ptr [esp + 0x14], edx
// 00538a66  89442410             mov dword ptr [esp + 0x10], eax
// 00538a6a  53                   push ebx
// 00538a6b  eb03                 jmp 0x538a70
// 00538a6d  8d4900               lea ecx, [ecx]
// 00538a70  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00538a74  8b39                 mov edi, dword ptr [ecx]
// 00538a76  8b542424             mov edx, dword ptr [esp + 0x24]
// 00538a7a  8b442410             mov eax, dword ptr [esp + 0x10]
// 00538a7e  8b0c82               mov ecx, dword ptr [edx + eax*4]
// 00538a81  0fbf11               movsx edx, word ptr [ecx]
// 00538a84  8a4c2418             mov cl, byte ptr [esp + 0x18]
// 00538a88  8b9cbde8000000       mov ebx, dword ptr [ebp + edi*4 + 0xe8]
// 00538a8f  d3fa                 sar edx, cl
// 00538a91  8bc2                 mov eax, edx
// 00538a93  2b44be24             sub eax, dword ptr [esi + edi*4 + 0x24]
// 00538a97  8954be24             mov dword ptr [esi + edi*4 + 0x24], edx
// 00538a9b  89442420             mov dword ptr [esp + 0x20], eax
// 00538a9f  7906                 jns 0x538aa7
// 00538aa1  f7d8                 neg eax
// 00538aa3  ff4c2420             dec dword ptr [esp + 0x20]
// 00538aa7  33ff                 xor edi, edi
// 00538aa9  85c0                 test eax, eax
// 00538aab  7422                 je 0x538acf
// 00538aad  8d4900               lea ecx, [ecx]
// 00538ab0  47                   inc edi
// 00538ab1  d1f8                 sar eax, 1
// 00538ab3  75fb                 jne 0x538ab0
// 00538ab5  83ff0b               cmp edi, 0xb
// 00538ab8  7e15                 jle 0x538acf
// 00538aba  8b5500               mov edx, dword ptr [ebp]
// 00538abd  c7421406000000       mov dword ptr [edx + 0x14], 6
// 00538ac4  8b4500               mov eax, dword ptr [ebp]
// 00538ac7  8b08                 mov ecx, dword ptr [eax]
// 00538ac9  55                   push ebp
// 00538aca  ffd1                 call ecx
// 00538acc  83c404               add esp, 4
// 00538acf  807e0c00             cmp byte ptr [esi + 0xc], 0
// 00538ad3  8b4314               mov eax, dword ptr [ebx + 0x14]
// 00538ad6  740c                 je 0x538ae4
// 00538ad8  8b54865c             mov edx, dword ptr [esi + eax*4 + 0x5c]
// 00538adc  ff04ba               inc dword ptr [edx + edi*4]
// 00538adf  8d04ba               lea eax, [edx + edi*4]
// 00538ae2  eb19                 jmp 0x538afd
// 00538ae4  8b44864c             mov eax, dword ptr [esi + eax*4 + 0x4c]
// 00538ae8  0fbe8c3800040000     movsx ecx, byte ptr [eax + edi + 0x400]
// 00538af0  8b14b8               mov edx, dword ptr [eax + edi*4]
// 00538af3  51                   push ecx
// 00538af4  52                   push edx
// 00538af5  e856fcffff           call 0x538750
// 00538afa  83c408               add esp, 8
// 00538afd  85ff                 test edi, edi
// 00538aff  740e                 je 0x538b0f
// 00538b01  8b442420             mov eax, dword ptr [esp + 0x20]
// 00538b05  57                   push edi
// 00538b06  50                   push eax
// 00538b07  e844fcffff           call 0x538750
// 00538b0c  83c408               add esp, 8
// 00538b0f  8b442410             mov eax, dword ptr [esp + 0x10]
// 00538b13  8344241404           add dword ptr [esp + 0x14], 4
// 00538b18  40                   inc eax
// 00538b19  3b8500010000         cmp eax, dword ptr [ebp + 0x100]
// 00538b1f  89442410             mov dword ptr [esp + 0x10], eax
// 00538b23  0f8c47ffffff         jl 0x538a70
// 00538b29  5b                   pop ebx
// 00538b2a  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 00538b2d  8b5610               mov edx, dword ptr [esi + 0x10]
// 00538b30  8911                 mov dword ptr [ecx], edx
// 00538b32  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00538b35  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00538b38  894804               mov dword ptr [eax + 4], ecx
// 00538b3b  8badbc000000         mov ebp, dword ptr [ebp + 0xbc]
// 00538b41  85ed                 test ebp, ebp
// 00538b43  7416                 je 0x538b5b
// 00538b45  837e4400             cmp dword ptr [esi + 0x44], 0
// 00538b49  750d                 jne 0x538b58
// 00538b4b  8b5648               mov edx, dword ptr [esi + 0x48]
// 00538b4e  42                   inc edx
// 00538b4f  83e207               and edx, 7
// 00538b52  896e44               mov dword ptr [esi + 0x44], ebp
// 00538b55  895648               mov dword ptr [esi + 0x48], edx
// 00538b58  ff4e44               dec dword ptr [esi + 0x44]
// 00538b5b  5f                   pop edi
// 00538b5c  5e                   pop esi
// 00538b5d  b001                 mov al, 1
// 00538b5f  5d                   pop ebp
// 00538b60  83c40c               add esp, 0xc
// 00538b63  c3                   ret 
// library jpeg-6b/jcphuff.c (function _encode_mcu_DC_first)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
