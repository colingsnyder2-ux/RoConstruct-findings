// from server: 100% by auto
// roc 2011-06 00555900  unit: G3D::LineSegment  size: 760 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00555900
//
// 00555900  83ec18               sub esp, 0x18
// 00555903  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 00555909  80780d00             cmp byte ptr [eax + 0xd], 0
// 0055590d  53                   push ebx
// 0055590e  55                   push ebp
// 0055590f  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 00555912  8b5d00               mov ebx, dword ptr [ebp]
// 00555915  57                   push edi
// 00555916  8b7d04               mov edi, dword ptr [ebp + 4]
// 00555919  896c2420             mov dword ptr [esp + 0x20], ebp
// 0055591d  7513                 jne 0x555932
// 0055591f  8b0e                 mov ecx, dword ptr [esi]
// 00555921  c741143e000000       mov dword ptr [ecx + 0x14], 0x3e
// 00555928  8b16                 mov edx, dword ptr [esi]
// 0055592a  8b02                 mov eax, dword ptr [edx]
// 0055592c  56                   push esi
// 0055592d  ffd0                 call eax
// 0055592f  83c404               add esp, 4
// 00555932  85ff                 test edi, edi
// 00555934  751e                 jne 0x555954
// 00555936  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00555939  56                   push esi
// 0055593a  ffd1                 call ecx
// 0055593c  83c404               add esp, 4
// 0055593f  84c0                 test al, al
// 00555941  7509                 jne 0x55594c
// 00555943  5f                   pop edi
// 00555944  5d                   pop ebp
// 00555945  32c0                 xor al, al
// 00555947  5b                   pop ebx
// 00555948  83c418               add esp, 0x18
// 0055594b  c3                   ret 
// 0055594c  8b5504               mov edx, dword ptr [ebp + 4]
// 0055594f  8b5d00               mov ebx, dword ptr [ebp]
// 00555952  8bfa                 mov edi, edx
// 00555954  0fb603               movzx eax, byte ptr [ebx]
// 00555957  4f                   dec edi
// 00555958  c1e008               shl eax, 8
// 0055595b  43                   inc ebx
// 0055595c  89442410             mov dword ptr [esp + 0x10], eax
// 00555960  85ff                 test edi, edi
// 00555962  7519                 jne 0x55597d
// 00555964  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00555967  56                   push esi
// 00555968  ffd0                 call eax
// 0055596a  83c404               add esp, 4
// 0055596d  84c0                 test al, al
// 0055596f  74d2                 je 0x555943
// 00555971  8b4d04               mov ecx, dword ptr [ebp + 4]
// 00555974  8b5d00               mov ebx, dword ptr [ebp]
// 00555977  8b442410             mov eax, dword ptr [esp + 0x10]
// 0055597b  8bf9                 mov edi, ecx
// 0055597d  0fb613               movzx edx, byte ptr [ebx]
// 00555980  4f                   dec edi
// 00555981  03c2                 add eax, edx
// 00555983  43                   inc ebx
// 00555984  89442410             mov dword ptr [esp + 0x10], eax
// 00555988  85ff                 test edi, edi
// 0055598a  7515                 jne 0x5559a1
// 0055598c  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0055598f  56                   push esi
// 00555990  ffd0                 call eax
// 00555992  83c404               add esp, 4
// 00555995  84c0                 test al, al
// 00555997  74aa                 je 0x555943
// 00555999  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0055599c  8b5d00               mov ebx, dword ptr [ebp]
// 0055599f  8bf9                 mov edi, ecx
// 005559a1  0fb603               movzx eax, byte ptr [ebx]
// 005559a4  8b16                 mov edx, dword ptr [esi]
// 005559a6  c7421467000000       mov dword ptr [edx + 0x14], 0x67
// 005559ad  8b0e                 mov ecx, dword ptr [esi]
// 005559af  894118               mov dword ptr [ecx + 0x18], eax
// 005559b2  8b16                 mov edx, dword ptr [esi]
// 005559b4  89442418             mov dword ptr [esp + 0x18], eax
// 005559b8  8b4204               mov eax, dword ptr [edx + 4]
// 005559bb  6a01                 push 1
// 005559bd  56                   push esi
// 005559be  4f                   dec edi
// 005559bf  43                   inc ebx
// 005559c0  ffd0                 call eax
// 005559c2  8b442420             mov eax, dword ptr [esp + 0x20]
// 005559c6  8d4c0006             lea ecx, [eax + eax + 6]
// 005559ca  83c408               add esp, 8
// 005559cd  394c2410             cmp dword ptr [esp + 0x10], ecx
// 005559d1  750a                 jne 0x5559dd
// 005559d3  83f801               cmp eax, 1
// 005559d6  7c05                 jl 0x5559dd
// 005559d8  83f804               cmp eax, 4
// 005559db  7e17                 jle 0x5559f4
// 005559dd  8b16                 mov edx, dword ptr [esi]
// 005559df  c742140b000000       mov dword ptr [edx + 0x14], 0xb
// 005559e6  8b06                 mov eax, dword ptr [esi]
// 005559e8  8b08                 mov ecx, dword ptr [eax]
// 005559ea  56                   push esi
// 005559eb  ffd1                 call ecx
// 005559ed  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005559f1  83c404               add esp, 4
// 005559f4  898624010000         mov dword ptr [esi + 0x124], eax
// 005559fa  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00555a02  85c0                 test eax, eax
// 00555a04  0f8efc000000         jle 0x555b06
// 00555a0a  8d9628010000         lea edx, [esi + 0x128]
// 00555a10  89542414             mov dword ptr [esp + 0x14], edx
// 00555a14  85ff                 test edi, edi
// 00555a16  751d                 jne 0x555a35
// 00555a18  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00555a1b  56                   push esi
// 00555a1c  ffd0                 call eax
// 00555a1e  83c404               add esp, 4
// 00555a21  84c0                 test al, al
// 00555a23  0f841affffff         je 0x555943
// 00555a29  8b4d04               mov ecx, dword ptr [ebp + 4]
// 00555a2c  8b5d00               mov ebx, dword ptr [ebp]
// 00555a2f  894c240c             mov dword ptr [esp + 0xc], ecx
// 00555a33  8bf9                 mov edi, ecx
// 00555a35  0fb613               movzx edx, byte ptr [ebx]
// 00555a38  4f                   dec edi
// 00555a39  43                   inc ebx
// 00555a3a  89542410             mov dword ptr [esp + 0x10], edx
// 00555a3e  85ff                 test edi, edi
// 00555a40  751d                 jne 0x555a5f
// 00555a42  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00555a45  56                   push esi
// 00555a46  ffd0                 call eax
// 00555a48  83c404               add esp, 4
// 00555a4b  84c0                 test al, al
// 00555a4d  0f84f0feffff         je 0x555943
// 00555a53  8b4d04               mov ecx, dword ptr [ebp + 4]
// 00555a56  8b5d00               mov ebx, dword ptr [ebp]
// 00555a59  894c240c             mov dword ptr [esp + 0xc], ecx
// 00555a5d  8bf9                 mov edi, ecx
// 00555a5f  0fb62b               movzx ebp, byte ptr [ebx]
// 00555a62  4f                   dec edi
// 00555a63  33c0                 xor eax, eax
// 00555a65  43                   inc ebx
// 00555a66  394624               cmp dword ptr [esi + 0x24], eax
// 00555a69  897c240c             mov dword ptr [esp + 0xc], edi
// 00555a6d  8bbec4000000         mov edi, dword ptr [esi + 0xc4]
// 00555a73  7e11                 jle 0x555a86
// 00555a75  8b542410             mov edx, dword ptr [esp + 0x10]
// 00555a79  3b17                 cmp edx, dword ptr [edi]
// 00555a7b  7425                 je 0x555aa2
// 00555a7d  40                   inc eax
// 00555a7e  83c754               add edi, 0x54
// 00555a81  3b4624               cmp eax, dword ptr [esi + 0x24]
// 00555a84  7cef                 jl 0x555a75
// 00555a86  8b06                 mov eax, dword ptr [esi]
// 00555a88  8b542410             mov edx, dword ptr [esp + 0x10]
// 00555a8c  c7401405000000       mov dword ptr [eax + 0x14], 5
// 00555a93  8b0e                 mov ecx, dword ptr [esi]
// 00555a95  895118               mov dword ptr [ecx + 0x18], edx
// 00555a98  8b06                 mov eax, dword ptr [esi]
// 00555a9a  8b08                 mov ecx, dword ptr [eax]
// 00555a9c  56                   push esi
// 00555a9d  ffd1                 call ecx
// 00555a9f  83c404               add esp, 4
// 00555aa2  8b542414             mov edx, dword ptr [esp + 0x14]
// 00555aa6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00555aaa  893a                 mov dword ptr [edx], edi
// 00555aac  8bc5                 mov eax, ebp
// 00555aae  c1f804               sar eax, 4
// 00555ab1  83e00f               and eax, 0xf
// 00555ab4  894714               mov dword ptr [edi + 0x14], eax
// 00555ab7  83e50f               and ebp, 0xf
// 00555aba  896f18               mov dword ptr [edi + 0x18], ebp
// 00555abd  8b06                 mov eax, dword ptr [esi]
// 00555abf  83c018               add eax, 0x18
// 00555ac2  8908                 mov dword ptr [eax], ecx
// 00555ac4  8b5714               mov edx, dword ptr [edi + 0x14]
// 00555ac7  895004               mov dword ptr [eax + 4], edx
// 00555aca  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00555acd  894808               mov dword ptr [eax + 8], ecx
// 00555ad0  8b16                 mov edx, dword ptr [esi]
// 00555ad2  c7421468000000       mov dword ptr [edx + 0x14], 0x68
// 00555ad9  8b06                 mov eax, dword ptr [esi]
// 00555adb  8b4804               mov ecx, dword ptr [eax + 4]
// 00555ade  6a01                 push 1
// 00555ae0  56                   push esi
// 00555ae1  ffd1                 call ecx
// 00555ae3  8b442424             mov eax, dword ptr [esp + 0x24]
// 00555ae7  8344241c04           add dword ptr [esp + 0x1c], 4
// 00555aec  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00555af0  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00555af4  40                   inc eax
// 00555af5  83c408               add esp, 8
// 00555af8  3b442418             cmp eax, dword ptr [esp + 0x18]
// 00555afc  8944241c             mov dword ptr [esp + 0x1c], eax
// 00555b00  0f8c0effffff         jl 0x555a14
// 00555b06  85ff                 test edi, edi
// 00555b08  751d                 jne 0x555b27
// 00555b0a  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00555b0d  56                   push esi
// 00555b0e  ffd2                 call edx
// 00555b10  83c404               add esp, 4
// 00555b13  84c0                 test al, al
// 00555b15  0f8428feffff         je 0x555943
// 00555b1b  8b4504               mov eax, dword ptr [ebp + 4]
// 00555b1e  8b5d00               mov ebx, dword ptr [ebp]
// 00555b21  8944240c             mov dword ptr [esp + 0xc], eax
// 00555b25  8bf8                 mov edi, eax
// 00555b27  0fb603               movzx eax, byte ptr [ebx]
// 00555b2a  4f                   dec edi
// 00555b2b  43                   inc ebx
// 00555b2c  89866c010000         mov dword ptr [esi + 0x16c], eax
// 00555b32  85ff                 test edi, edi
// 00555b34  751d                 jne 0x555b53
// 00555b36  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00555b39  56                   push esi
// 00555b3a  ffd1                 call ecx
// 00555b3c  83c404               add esp, 4
// 00555b3f  84c0                 test al, al
// 00555b41  0f84fcfdffff         je 0x555943
// 00555b47  8b5504               mov edx, dword ptr [ebp + 4]
// 00555b4a  8b5d00               mov ebx, dword ptr [ebp]
// 00555b4d  8954240c             mov dword ptr [esp + 0xc], edx
// 00555b51  8bfa                 mov edi, edx
// 00555b53  0fb603               movzx eax, byte ptr [ebx]
// 00555b56  4f                   dec edi
// 00555b57  43                   inc ebx
// 00555b58  898670010000         mov dword ptr [esi + 0x170], eax
// 00555b5e  85ff                 test edi, edi
// 00555b60  751d                 jne 0x555b7f
// 00555b62  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00555b65  56                   push esi
// 00555b66  ffd0                 call eax
// 00555b68  83c404               add esp, 4
// 00555b6b  84c0                 test al, al
// 00555b6d  0f84d0fdffff         je 0x555943
// 00555b73  8b4d04               mov ecx, dword ptr [ebp + 4]
// 00555b76  8b5d00               mov ebx, dword ptr [ebp]
// 00555b79  894c240c             mov dword ptr [esp + 0xc], ecx
// 00555b7d  8bf9                 mov edi, ecx
// 00555b7f  0fb603               movzx eax, byte ptr [ebx]
// 00555b82  8b8e6c010000         mov ecx, dword ptr [esi + 0x16c]
// 00555b88  8bd0                 mov edx, eax
// 00555b8a  83e00f               and eax, 0xf
// 00555b8d  898678010000         mov dword ptr [esi + 0x178], eax
// 00555b93  8b06                 mov eax, dword ptr [esi]
// 00555b95  c1fa04               sar edx, 4
// 00555b98  83e20f               and edx, 0xf
// 00555b9b  899674010000         mov dword ptr [esi + 0x174], edx
// 00555ba1  83c018               add eax, 0x18
// 00555ba4  8908                 mov dword ptr [eax], ecx
// 00555ba6  8b9670010000         mov edx, dword ptr [esi + 0x170]
// 00555bac  895004               mov dword ptr [eax + 4], edx
// 00555baf  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 00555bb5  894808               mov dword ptr [eax + 8], ecx
// 00555bb8  8b9678010000         mov edx, dword ptr [esi + 0x178]
// 00555bbe  89500c               mov dword ptr [eax + 0xc], edx
// 00555bc1  8b06                 mov eax, dword ptr [esi]
// 00555bc3  c7401469000000       mov dword ptr [eax + 0x14], 0x69
// 00555bca  8b0e                 mov ecx, dword ptr [esi]
// 00555bcc  8b5104               mov edx, dword ptr [ecx + 4]
// 00555bcf  6a01                 push 1
// 00555bd1  56                   push esi
// 00555bd2  ffd2                 call edx
// 00555bd4  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 00555bda  c7401000000000       mov dword ptr [eax + 0x10], 0
// 00555be1  ff467c               inc dword ptr [esi + 0x7c]
// 00555be4  83c408               add esp, 8
// 00555be7  43                   inc ebx
// 00555be8  4f                   dec edi
// 00555be9  897d04               mov dword ptr [ebp + 4], edi
// 00555bec  5f                   pop edi
// 00555bed  895d00               mov dword ptr [ebp], ebx
// 00555bf0  5d                   pop ebp
// 00555bf1  b001                 mov al, 1
// 00555bf3  5b                   pop ebx
// 00555bf4  83c418               add esp, 0x18
// 00555bf7  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_sos)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
