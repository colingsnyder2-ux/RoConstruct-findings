// from server: 100% by auto
// roc 2008-06 0051a040  unit: G3D::_internal::DialogTemplate  size: 760 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051a040
//
// 0051a040  83ec18               sub esp, 0x18
// 0051a043  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 0051a049  80780d00             cmp byte ptr [eax + 0xd], 0
// 0051a04d  53                   push ebx
// 0051a04e  55                   push ebp
// 0051a04f  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 0051a052  8b5d00               mov ebx, dword ptr [ebp]
// 0051a055  57                   push edi
// 0051a056  8b7d04               mov edi, dword ptr [ebp + 4]
// 0051a059  896c2420             mov dword ptr [esp + 0x20], ebp
// 0051a05d  7513                 jne 0x51a072
// 0051a05f  8b0e                 mov ecx, dword ptr [esi]
// 0051a061  c741143e000000       mov dword ptr [ecx + 0x14], 0x3e
// 0051a068  8b16                 mov edx, dword ptr [esi]
// 0051a06a  8b02                 mov eax, dword ptr [edx]
// 0051a06c  56                   push esi
// 0051a06d  ffd0                 call eax
// 0051a06f  83c404               add esp, 4
// 0051a072  85ff                 test edi, edi
// 0051a074  751e                 jne 0x51a094
// 0051a076  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0051a079  56                   push esi
// 0051a07a  ffd1                 call ecx
// 0051a07c  83c404               add esp, 4
// 0051a07f  84c0                 test al, al
// 0051a081  7509                 jne 0x51a08c
// 0051a083  5f                   pop edi
// 0051a084  5d                   pop ebp
// 0051a085  32c0                 xor al, al
// 0051a087  5b                   pop ebx
// 0051a088  83c418               add esp, 0x18
// 0051a08b  c3                   ret 
// 0051a08c  8b5504               mov edx, dword ptr [ebp + 4]
// 0051a08f  8b5d00               mov ebx, dword ptr [ebp]
// 0051a092  8bfa                 mov edi, edx
// 0051a094  0fb603               movzx eax, byte ptr [ebx]
// 0051a097  4f                   dec edi
// 0051a098  c1e008               shl eax, 8
// 0051a09b  43                   inc ebx
// 0051a09c  89442410             mov dword ptr [esp + 0x10], eax
// 0051a0a0  85ff                 test edi, edi
// 0051a0a2  7519                 jne 0x51a0bd
// 0051a0a4  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0051a0a7  56                   push esi
// 0051a0a8  ffd0                 call eax
// 0051a0aa  83c404               add esp, 4
// 0051a0ad  84c0                 test al, al
// 0051a0af  74d2                 je 0x51a083
// 0051a0b1  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0051a0b4  8b5d00               mov ebx, dword ptr [ebp]
// 0051a0b7  8b442410             mov eax, dword ptr [esp + 0x10]
// 0051a0bb  8bf9                 mov edi, ecx
// 0051a0bd  0fb613               movzx edx, byte ptr [ebx]
// 0051a0c0  4f                   dec edi
// 0051a0c1  03c2                 add eax, edx
// 0051a0c3  43                   inc ebx
// 0051a0c4  89442410             mov dword ptr [esp + 0x10], eax
// 0051a0c8  85ff                 test edi, edi
// 0051a0ca  7515                 jne 0x51a0e1
// 0051a0cc  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0051a0cf  56                   push esi
// 0051a0d0  ffd0                 call eax
// 0051a0d2  83c404               add esp, 4
// 0051a0d5  84c0                 test al, al
// 0051a0d7  74aa                 je 0x51a083
// 0051a0d9  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0051a0dc  8b5d00               mov ebx, dword ptr [ebp]
// 0051a0df  8bf9                 mov edi, ecx
// 0051a0e1  0fb603               movzx eax, byte ptr [ebx]
// 0051a0e4  8b16                 mov edx, dword ptr [esi]
// 0051a0e6  c7421467000000       mov dword ptr [edx + 0x14], 0x67
// 0051a0ed  8b0e                 mov ecx, dword ptr [esi]
// 0051a0ef  894118               mov dword ptr [ecx + 0x18], eax
// 0051a0f2  8b16                 mov edx, dword ptr [esi]
// 0051a0f4  89442418             mov dword ptr [esp + 0x18], eax
// 0051a0f8  8b4204               mov eax, dword ptr [edx + 4]
// 0051a0fb  6a01                 push 1
// 0051a0fd  56                   push esi
// 0051a0fe  4f                   dec edi
// 0051a0ff  43                   inc ebx
// 0051a100  ffd0                 call eax
// 0051a102  8b442420             mov eax, dword ptr [esp + 0x20]
// 0051a106  8d4c0006             lea ecx, [eax + eax + 6]
// 0051a10a  83c408               add esp, 8
// 0051a10d  394c2410             cmp dword ptr [esp + 0x10], ecx
// 0051a111  750a                 jne 0x51a11d
// 0051a113  83f801               cmp eax, 1
// 0051a116  7c05                 jl 0x51a11d
// 0051a118  83f804               cmp eax, 4
// 0051a11b  7e17                 jle 0x51a134
// 0051a11d  8b16                 mov edx, dword ptr [esi]
// 0051a11f  c742140b000000       mov dword ptr [edx + 0x14], 0xb
// 0051a126  8b06                 mov eax, dword ptr [esi]
// 0051a128  8b08                 mov ecx, dword ptr [eax]
// 0051a12a  56                   push esi
// 0051a12b  ffd1                 call ecx
// 0051a12d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0051a131  83c404               add esp, 4
// 0051a134  898624010000         mov dword ptr [esi + 0x124], eax
// 0051a13a  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0051a142  85c0                 test eax, eax
// 0051a144  0f8efc000000         jle 0x51a246
// 0051a14a  8d9628010000         lea edx, [esi + 0x128]
// 0051a150  89542414             mov dword ptr [esp + 0x14], edx
// 0051a154  85ff                 test edi, edi
// 0051a156  751d                 jne 0x51a175
// 0051a158  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0051a15b  56                   push esi
// 0051a15c  ffd0                 call eax
// 0051a15e  83c404               add esp, 4
// 0051a161  84c0                 test al, al
// 0051a163  0f841affffff         je 0x51a083
// 0051a169  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0051a16c  8b5d00               mov ebx, dword ptr [ebp]
// 0051a16f  894c240c             mov dword ptr [esp + 0xc], ecx
// 0051a173  8bf9                 mov edi, ecx
// 0051a175  0fb613               movzx edx, byte ptr [ebx]
// 0051a178  4f                   dec edi
// 0051a179  43                   inc ebx
// 0051a17a  89542410             mov dword ptr [esp + 0x10], edx
// 0051a17e  85ff                 test edi, edi
// 0051a180  751d                 jne 0x51a19f
// 0051a182  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0051a185  56                   push esi
// 0051a186  ffd0                 call eax
// 0051a188  83c404               add esp, 4
// 0051a18b  84c0                 test al, al
// 0051a18d  0f84f0feffff         je 0x51a083
// 0051a193  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0051a196  8b5d00               mov ebx, dword ptr [ebp]
// 0051a199  894c240c             mov dword ptr [esp + 0xc], ecx
// 0051a19d  8bf9                 mov edi, ecx
// 0051a19f  0fb62b               movzx ebp, byte ptr [ebx]
// 0051a1a2  4f                   dec edi
// 0051a1a3  33c0                 xor eax, eax
// 0051a1a5  43                   inc ebx
// 0051a1a6  394624               cmp dword ptr [esi + 0x24], eax
// 0051a1a9  897c240c             mov dword ptr [esp + 0xc], edi
// 0051a1ad  8bbec4000000         mov edi, dword ptr [esi + 0xc4]
// 0051a1b3  7e11                 jle 0x51a1c6
// 0051a1b5  8b542410             mov edx, dword ptr [esp + 0x10]
// 0051a1b9  3b17                 cmp edx, dword ptr [edi]
// 0051a1bb  7425                 je 0x51a1e2
// 0051a1bd  40                   inc eax
// 0051a1be  83c754               add edi, 0x54
// 0051a1c1  3b4624               cmp eax, dword ptr [esi + 0x24]
// 0051a1c4  7cef                 jl 0x51a1b5
// 0051a1c6  8b06                 mov eax, dword ptr [esi]
// 0051a1c8  8b542410             mov edx, dword ptr [esp + 0x10]
// 0051a1cc  c7401405000000       mov dword ptr [eax + 0x14], 5
// 0051a1d3  8b0e                 mov ecx, dword ptr [esi]
// 0051a1d5  895118               mov dword ptr [ecx + 0x18], edx
// 0051a1d8  8b06                 mov eax, dword ptr [esi]
// 0051a1da  8b08                 mov ecx, dword ptr [eax]
// 0051a1dc  56                   push esi
// 0051a1dd  ffd1                 call ecx
// 0051a1df  83c404               add esp, 4
// 0051a1e2  8b542414             mov edx, dword ptr [esp + 0x14]
// 0051a1e6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0051a1ea  893a                 mov dword ptr [edx], edi
// 0051a1ec  8bc5                 mov eax, ebp
// 0051a1ee  c1f804               sar eax, 4
// 0051a1f1  83e00f               and eax, 0xf
// 0051a1f4  894714               mov dword ptr [edi + 0x14], eax
// 0051a1f7  83e50f               and ebp, 0xf
// 0051a1fa  896f18               mov dword ptr [edi + 0x18], ebp
// 0051a1fd  8b06                 mov eax, dword ptr [esi]
// 0051a1ff  83c018               add eax, 0x18
// 0051a202  8908                 mov dword ptr [eax], ecx
// 0051a204  8b5714               mov edx, dword ptr [edi + 0x14]
// 0051a207  895004               mov dword ptr [eax + 4], edx
// 0051a20a  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 0051a20d  894808               mov dword ptr [eax + 8], ecx
// 0051a210  8b16                 mov edx, dword ptr [esi]
// 0051a212  c7421468000000       mov dword ptr [edx + 0x14], 0x68
// 0051a219  8b06                 mov eax, dword ptr [esi]
// 0051a21b  8b4804               mov ecx, dword ptr [eax + 4]
// 0051a21e  6a01                 push 1
// 0051a220  56                   push esi
// 0051a221  ffd1                 call ecx
// 0051a223  8b442424             mov eax, dword ptr [esp + 0x24]
// 0051a227  8344241c04           add dword ptr [esp + 0x1c], 4
// 0051a22c  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0051a230  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0051a234  40                   inc eax
// 0051a235  83c408               add esp, 8
// 0051a238  3b442418             cmp eax, dword ptr [esp + 0x18]
// 0051a23c  8944241c             mov dword ptr [esp + 0x1c], eax
// 0051a240  0f8c0effffff         jl 0x51a154
// 0051a246  85ff                 test edi, edi
// 0051a248  751d                 jne 0x51a267
// 0051a24a  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0051a24d  56                   push esi
// 0051a24e  ffd2                 call edx
// 0051a250  83c404               add esp, 4
// 0051a253  84c0                 test al, al
// 0051a255  0f8428feffff         je 0x51a083
// 0051a25b  8b4504               mov eax, dword ptr [ebp + 4]
// 0051a25e  8b5d00               mov ebx, dword ptr [ebp]
// 0051a261  8944240c             mov dword ptr [esp + 0xc], eax
// 0051a265  8bf8                 mov edi, eax
// 0051a267  0fb603               movzx eax, byte ptr [ebx]
// 0051a26a  4f                   dec edi
// 0051a26b  43                   inc ebx
// 0051a26c  89866c010000         mov dword ptr [esi + 0x16c], eax
// 0051a272  85ff                 test edi, edi
// 0051a274  751d                 jne 0x51a293
// 0051a276  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0051a279  56                   push esi
// 0051a27a  ffd1                 call ecx
// 0051a27c  83c404               add esp, 4
// 0051a27f  84c0                 test al, al
// 0051a281  0f84fcfdffff         je 0x51a083
// 0051a287  8b5504               mov edx, dword ptr [ebp + 4]
// 0051a28a  8b5d00               mov ebx, dword ptr [ebp]
// 0051a28d  8954240c             mov dword ptr [esp + 0xc], edx
// 0051a291  8bfa                 mov edi, edx
// 0051a293  0fb603               movzx eax, byte ptr [ebx]
// 0051a296  4f                   dec edi
// 0051a297  43                   inc ebx
// 0051a298  898670010000         mov dword ptr [esi + 0x170], eax
// 0051a29e  85ff                 test edi, edi
// 0051a2a0  751d                 jne 0x51a2bf
// 0051a2a2  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0051a2a5  56                   push esi
// 0051a2a6  ffd0                 call eax
// 0051a2a8  83c404               add esp, 4
// 0051a2ab  84c0                 test al, al
// 0051a2ad  0f84d0fdffff         je 0x51a083
// 0051a2b3  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0051a2b6  8b5d00               mov ebx, dword ptr [ebp]
// 0051a2b9  894c240c             mov dword ptr [esp + 0xc], ecx
// 0051a2bd  8bf9                 mov edi, ecx
// 0051a2bf  0fb603               movzx eax, byte ptr [ebx]
// 0051a2c2  8b8e6c010000         mov ecx, dword ptr [esi + 0x16c]
// 0051a2c8  8bd0                 mov edx, eax
// 0051a2ca  83e00f               and eax, 0xf
// 0051a2cd  898678010000         mov dword ptr [esi + 0x178], eax
// 0051a2d3  8b06                 mov eax, dword ptr [esi]
// 0051a2d5  c1fa04               sar edx, 4
// 0051a2d8  83e20f               and edx, 0xf
// 0051a2db  899674010000         mov dword ptr [esi + 0x174], edx
// 0051a2e1  83c018               add eax, 0x18
// 0051a2e4  8908                 mov dword ptr [eax], ecx
// 0051a2e6  8b9670010000         mov edx, dword ptr [esi + 0x170]
// 0051a2ec  895004               mov dword ptr [eax + 4], edx
// 0051a2ef  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 0051a2f5  894808               mov dword ptr [eax + 8], ecx
// 0051a2f8  8b9678010000         mov edx, dword ptr [esi + 0x178]
// 0051a2fe  89500c               mov dword ptr [eax + 0xc], edx
// 0051a301  8b06                 mov eax, dword ptr [esi]
// 0051a303  c7401469000000       mov dword ptr [eax + 0x14], 0x69
// 0051a30a  8b0e                 mov ecx, dword ptr [esi]
// 0051a30c  8b5104               mov edx, dword ptr [ecx + 4]
// 0051a30f  6a01                 push 1
// 0051a311  56                   push esi
// 0051a312  ffd2                 call edx
// 0051a314  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 0051a31a  c7401000000000       mov dword ptr [eax + 0x10], 0
// 0051a321  ff467c               inc dword ptr [esi + 0x7c]
// 0051a324  83c408               add esp, 8
// 0051a327  43                   inc ebx
// 0051a328  4f                   dec edi
// 0051a329  897d04               mov dword ptr [ebp + 4], edi
// 0051a32c  5f                   pop edi
// 0051a32d  895d00               mov dword ptr [ebp], ebx
// 0051a330  5d                   pop ebp
// 0051a331  b001                 mov al, 1
// 0051a333  5b                   pop ebx
// 0051a334  83c418               add esp, 0x18
// 0051a337  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_sos)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
