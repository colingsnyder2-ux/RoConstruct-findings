// roc 2009-12 00624d10  unit: seg_00620000  size: 356 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00624d10
//
// 00624d10  83ec0c               sub esp, 0xc
// 00624d13  55                   push ebp
// 00624d14  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00624d18  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00624d1b  8b08                 mov ecx, dword ptr [eax]
// 00624d1d  56                   push esi
// 00624d1e  8bb55c010000         mov esi, dword ptr [ebp + 0x15c]
// 00624d24  57                   push edi
// 00624d25  8bbd38010000         mov edi, dword ptr [ebp + 0x138]
// 00624d2b  894e10               mov dword ptr [esi + 0x10], ecx
// 00624d2e  8b5518               mov edx, dword ptr [ebp + 0x18]
// 00624d31  8b4204               mov eax, dword ptr [edx + 4]
// 00624d34  894614               mov dword ptr [esi + 0x14], eax
// 00624d37  83bdbc00000000       cmp dword ptr [ebp + 0xbc], 0
// 00624d3e  7414                 je 0x624d54
// 00624d40  837e4400             cmp dword ptr [esi + 0x44], 0
// 00624d44  750e                 jne 0x624d54
// 00624d46  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 00624d49  51                   push ecx
// 00624d4a  8bc6                 mov eax, esi
// 00624d4c  e81fffffff           call 0x624c70
// 00624d51  83c404               add esp, 4
// 00624d54  83bd0001000000       cmp dword ptr [ebp + 0x100], 0
// 00624d5b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00624d63  0f8ed1000000         jle 0x624e3a
// 00624d69  0fbfd7               movsx edx, di
// 00624d6c  8d8504010000         lea eax, [ebp + 0x104]
// 00624d72  89542414             mov dword ptr [esp + 0x14], edx
// 00624d76  89442410             mov dword ptr [esp + 0x10], eax
// 00624d7a  53                   push ebx
// 00624d7b  eb03                 jmp 0x624d80
// 00624d7d  8d4900               lea ecx, [ecx]
// 00624d80  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00624d84  8b39                 mov edi, dword ptr [ecx]
// 00624d86  8b542424             mov edx, dword ptr [esp + 0x24]
// 00624d8a  8b442410             mov eax, dword ptr [esp + 0x10]
// 00624d8e  8b0c82               mov ecx, dword ptr [edx + eax*4]
// 00624d91  0fbf11               movsx edx, word ptr [ecx]
// 00624d94  8a4c2418             mov cl, byte ptr [esp + 0x18]
// 00624d98  8b9cbde8000000       mov ebx, dword ptr [ebp + edi*4 + 0xe8]
// 00624d9f  d3fa                 sar edx, cl
// 00624da1  8bc2                 mov eax, edx
// 00624da3  2b44be24             sub eax, dword ptr [esi + edi*4 + 0x24]
// 00624da7  8954be24             mov dword ptr [esi + edi*4 + 0x24], edx
// 00624dab  89442420             mov dword ptr [esp + 0x20], eax
// 00624daf  7906                 jns 0x624db7
// 00624db1  f7d8                 neg eax
// 00624db3  ff4c2420             dec dword ptr [esp + 0x20]
// 00624db7  33ff                 xor edi, edi
// 00624db9  85c0                 test eax, eax
// 00624dbb  7422                 je 0x624ddf
// 00624dbd  8d4900               lea ecx, [ecx]
// 00624dc0  47                   inc edi
// 00624dc1  d1f8                 sar eax, 1
// 00624dc3  75fb                 jne 0x624dc0
// 00624dc5  83ff0b               cmp edi, 0xb
// 00624dc8  7e15                 jle 0x624ddf
// 00624dca  8b5500               mov edx, dword ptr [ebp]
// 00624dcd  c7421406000000       mov dword ptr [edx + 0x14], 6
// 00624dd4  8b4500               mov eax, dword ptr [ebp]
// 00624dd7  8b08                 mov ecx, dword ptr [eax]
// 00624dd9  55                   push ebp
// 00624dda  ffd1                 call ecx
// 00624ddc  83c404               add esp, 4
// 00624ddf  807e0c00             cmp byte ptr [esi + 0xc], 0
// 00624de3  8b4314               mov eax, dword ptr [ebx + 0x14]
// 00624de6  740c                 je 0x624df4
// 00624de8  8b54865c             mov edx, dword ptr [esi + eax*4 + 0x5c]
// 00624dec  ff04ba               inc dword ptr [edx + edi*4]
// 00624def  8d04ba               lea eax, [edx + edi*4]
// 00624df2  eb19                 jmp 0x624e0d
// 00624df4  8b44864c             mov eax, dword ptr [esi + eax*4 + 0x4c]
// 00624df8  0fbe8c3800040000     movsx ecx, byte ptr [eax + edi + 0x400]
// 00624e00  8b14b8               mov edx, dword ptr [eax + edi*4]
// 00624e03  51                   push ecx
// 00624e04  52                   push edx
// 00624e05  e856fcffff           call 0x624a60
// 00624e0a  83c408               add esp, 8
// 00624e0d  85ff                 test edi, edi
// 00624e0f  740e                 je 0x624e1f
// 00624e11  8b442420             mov eax, dword ptr [esp + 0x20]
// 00624e15  57                   push edi
// 00624e16  50                   push eax
// 00624e17  e844fcffff           call 0x624a60
// 00624e1c  83c408               add esp, 8
// 00624e1f  8b442410             mov eax, dword ptr [esp + 0x10]
// 00624e23  8344241404           add dword ptr [esp + 0x14], 4
// 00624e28  40                   inc eax
// 00624e29  3b8500010000         cmp eax, dword ptr [ebp + 0x100]
// 00624e2f  89442410             mov dword ptr [esp + 0x10], eax
// 00624e33  0f8c47ffffff         jl 0x624d80
// 00624e39  5b                   pop ebx
// 00624e3a  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 00624e3d  8b5610               mov edx, dword ptr [esi + 0x10]
// 00624e40  8911                 mov dword ptr [ecx], edx
// 00624e42  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00624e45  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00624e48  894804               mov dword ptr [eax + 4], ecx
// 00624e4b  8badbc000000         mov ebp, dword ptr [ebp + 0xbc]
// 00624e51  85ed                 test ebp, ebp
// 00624e53  7416                 je 0x624e6b
// 00624e55  837e4400             cmp dword ptr [esi + 0x44], 0
// 00624e59  750d                 jne 0x624e68
// 00624e5b  8b5648               mov edx, dword ptr [esi + 0x48]
// 00624e5e  42                   inc edx
// 00624e5f  83e207               and edx, 7
// 00624e62  896e44               mov dword ptr [esi + 0x44], ebp
// 00624e65  895648               mov dword ptr [esi + 0x48], edx
// 00624e68  ff4e44               dec dword ptr [esi + 0x44]
// 00624e6b  5f                   pop edi
// 00624e6c  5e                   pop esi
// 00624e6d  b001                 mov al, 1
// 00624e6f  5d                   pop ebp
// 00624e70  83c40c               add esp, 0xc
// 00624e73  c3                   ret 
// library jpeg-6b/jcphuff.c (function _encode_mcu_DC_first)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
