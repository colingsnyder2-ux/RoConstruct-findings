// roc 2009-06 0057d9e0  unit: G3D::_internal::DialogTemplate  size: 760 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057d9e0
//
// 0057d9e0  83ec18               sub esp, 0x18
// 0057d9e3  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 0057d9e9  80780d00             cmp byte ptr [eax + 0xd], 0
// 0057d9ed  53                   push ebx
// 0057d9ee  55                   push ebp
// 0057d9ef  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 0057d9f2  8b5d00               mov ebx, dword ptr [ebp]
// 0057d9f5  57                   push edi
// 0057d9f6  8b7d04               mov edi, dword ptr [ebp + 4]
// 0057d9f9  896c2420             mov dword ptr [esp + 0x20], ebp
// 0057d9fd  7513                 jne 0x57da12
// 0057d9ff  8b0e                 mov ecx, dword ptr [esi]
// 0057da01  c741143e000000       mov dword ptr [ecx + 0x14], 0x3e
// 0057da08  8b16                 mov edx, dword ptr [esi]
// 0057da0a  8b02                 mov eax, dword ptr [edx]
// 0057da0c  56                   push esi
// 0057da0d  ffd0                 call eax
// 0057da0f  83c404               add esp, 4
// 0057da12  85ff                 test edi, edi
// 0057da14  751e                 jne 0x57da34
// 0057da16  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0057da19  56                   push esi
// 0057da1a  ffd1                 call ecx
// 0057da1c  83c404               add esp, 4
// 0057da1f  84c0                 test al, al
// 0057da21  7509                 jne 0x57da2c
// 0057da23  5f                   pop edi
// 0057da24  5d                   pop ebp
// 0057da25  32c0                 xor al, al
// 0057da27  5b                   pop ebx
// 0057da28  83c418               add esp, 0x18
// 0057da2b  c3                   ret 
// 0057da2c  8b5504               mov edx, dword ptr [ebp + 4]
// 0057da2f  8b5d00               mov ebx, dword ptr [ebp]
// 0057da32  8bfa                 mov edi, edx
// 0057da34  0fb603               movzx eax, byte ptr [ebx]
// 0057da37  4f                   dec edi
// 0057da38  c1e008               shl eax, 8
// 0057da3b  43                   inc ebx
// 0057da3c  89442410             mov dword ptr [esp + 0x10], eax
// 0057da40  85ff                 test edi, edi
// 0057da42  7519                 jne 0x57da5d
// 0057da44  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0057da47  56                   push esi
// 0057da48  ffd0                 call eax
// 0057da4a  83c404               add esp, 4
// 0057da4d  84c0                 test al, al
// 0057da4f  74d2                 je 0x57da23
// 0057da51  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0057da54  8b5d00               mov ebx, dword ptr [ebp]
// 0057da57  8b442410             mov eax, dword ptr [esp + 0x10]
// 0057da5b  8bf9                 mov edi, ecx
// 0057da5d  0fb613               movzx edx, byte ptr [ebx]
// 0057da60  4f                   dec edi
// 0057da61  03c2                 add eax, edx
// 0057da63  43                   inc ebx
// 0057da64  89442410             mov dword ptr [esp + 0x10], eax
// 0057da68  85ff                 test edi, edi
// 0057da6a  7515                 jne 0x57da81
// 0057da6c  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0057da6f  56                   push esi
// 0057da70  ffd0                 call eax
// 0057da72  83c404               add esp, 4
// 0057da75  84c0                 test al, al
// 0057da77  74aa                 je 0x57da23
// 0057da79  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0057da7c  8b5d00               mov ebx, dword ptr [ebp]
// 0057da7f  8bf9                 mov edi, ecx
// 0057da81  0fb603               movzx eax, byte ptr [ebx]
// 0057da84  8b16                 mov edx, dword ptr [esi]
// 0057da86  c7421467000000       mov dword ptr [edx + 0x14], 0x67
// 0057da8d  8b0e                 mov ecx, dword ptr [esi]
// 0057da8f  894118               mov dword ptr [ecx + 0x18], eax
// 0057da92  8b16                 mov edx, dword ptr [esi]
// 0057da94  89442418             mov dword ptr [esp + 0x18], eax
// 0057da98  8b4204               mov eax, dword ptr [edx + 4]
// 0057da9b  6a01                 push 1
// 0057da9d  56                   push esi
// 0057da9e  4f                   dec edi
// 0057da9f  43                   inc ebx
// 0057daa0  ffd0                 call eax
// 0057daa2  8b442420             mov eax, dword ptr [esp + 0x20]
// 0057daa6  8d4c0006             lea ecx, [eax + eax + 6]
// 0057daaa  83c408               add esp, 8
// 0057daad  394c2410             cmp dword ptr [esp + 0x10], ecx
// 0057dab1  750a                 jne 0x57dabd
// 0057dab3  83f801               cmp eax, 1
// 0057dab6  7c05                 jl 0x57dabd
// 0057dab8  83f804               cmp eax, 4
// 0057dabb  7e17                 jle 0x57dad4
// 0057dabd  8b16                 mov edx, dword ptr [esi]
// 0057dabf  c742140b000000       mov dword ptr [edx + 0x14], 0xb
// 0057dac6  8b06                 mov eax, dword ptr [esi]
// 0057dac8  8b08                 mov ecx, dword ptr [eax]
// 0057daca  56                   push esi
// 0057dacb  ffd1                 call ecx
// 0057dacd  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0057dad1  83c404               add esp, 4
// 0057dad4  898624010000         mov dword ptr [esi + 0x124], eax
// 0057dada  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0057dae2  85c0                 test eax, eax
// 0057dae4  0f8efc000000         jle 0x57dbe6
// 0057daea  8d9628010000         lea edx, [esi + 0x128]
// 0057daf0  89542414             mov dword ptr [esp + 0x14], edx
// 0057daf4  85ff                 test edi, edi
// 0057daf6  751d                 jne 0x57db15
// 0057daf8  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0057dafb  56                   push esi
// 0057dafc  ffd0                 call eax
// 0057dafe  83c404               add esp, 4
// 0057db01  84c0                 test al, al
// 0057db03  0f841affffff         je 0x57da23
// 0057db09  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0057db0c  8b5d00               mov ebx, dword ptr [ebp]
// 0057db0f  894c240c             mov dword ptr [esp + 0xc], ecx
// 0057db13  8bf9                 mov edi, ecx
// 0057db15  0fb613               movzx edx, byte ptr [ebx]
// 0057db18  4f                   dec edi
// 0057db19  43                   inc ebx
// 0057db1a  89542410             mov dword ptr [esp + 0x10], edx
// 0057db1e  85ff                 test edi, edi
// 0057db20  751d                 jne 0x57db3f
// 0057db22  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0057db25  56                   push esi
// 0057db26  ffd0                 call eax
// 0057db28  83c404               add esp, 4
// 0057db2b  84c0                 test al, al
// 0057db2d  0f84f0feffff         je 0x57da23
// 0057db33  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0057db36  8b5d00               mov ebx, dword ptr [ebp]
// 0057db39  894c240c             mov dword ptr [esp + 0xc], ecx
// 0057db3d  8bf9                 mov edi, ecx
// 0057db3f  0fb62b               movzx ebp, byte ptr [ebx]
// 0057db42  4f                   dec edi
// 0057db43  33c0                 xor eax, eax
// 0057db45  43                   inc ebx
// 0057db46  394624               cmp dword ptr [esi + 0x24], eax
// 0057db49  897c240c             mov dword ptr [esp + 0xc], edi
// 0057db4d  8bbec4000000         mov edi, dword ptr [esi + 0xc4]
// 0057db53  7e11                 jle 0x57db66
// 0057db55  8b542410             mov edx, dword ptr [esp + 0x10]
// 0057db59  3b17                 cmp edx, dword ptr [edi]
// 0057db5b  7425                 je 0x57db82
// 0057db5d  40                   inc eax
// 0057db5e  83c754               add edi, 0x54
// 0057db61  3b4624               cmp eax, dword ptr [esi + 0x24]
// 0057db64  7cef                 jl 0x57db55
// 0057db66  8b06                 mov eax, dword ptr [esi]
// 0057db68  8b542410             mov edx, dword ptr [esp + 0x10]
// 0057db6c  c7401405000000       mov dword ptr [eax + 0x14], 5
// 0057db73  8b0e                 mov ecx, dword ptr [esi]
// 0057db75  895118               mov dword ptr [ecx + 0x18], edx
// 0057db78  8b06                 mov eax, dword ptr [esi]
// 0057db7a  8b08                 mov ecx, dword ptr [eax]
// 0057db7c  56                   push esi
// 0057db7d  ffd1                 call ecx
// 0057db7f  83c404               add esp, 4
// 0057db82  8b542414             mov edx, dword ptr [esp + 0x14]
// 0057db86  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057db8a  893a                 mov dword ptr [edx], edi
// 0057db8c  8bc5                 mov eax, ebp
// 0057db8e  c1f804               sar eax, 4
// 0057db91  83e00f               and eax, 0xf
// 0057db94  894714               mov dword ptr [edi + 0x14], eax
// 0057db97  83e50f               and ebp, 0xf
// 0057db9a  896f18               mov dword ptr [edi + 0x18], ebp
// 0057db9d  8b06                 mov eax, dword ptr [esi]
// 0057db9f  83c018               add eax, 0x18
// 0057dba2  8908                 mov dword ptr [eax], ecx
// 0057dba4  8b5714               mov edx, dword ptr [edi + 0x14]
// 0057dba7  895004               mov dword ptr [eax + 4], edx
// 0057dbaa  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 0057dbad  894808               mov dword ptr [eax + 8], ecx
// 0057dbb0  8b16                 mov edx, dword ptr [esi]
// 0057dbb2  c7421468000000       mov dword ptr [edx + 0x14], 0x68
// 0057dbb9  8b06                 mov eax, dword ptr [esi]
// 0057dbbb  8b4804               mov ecx, dword ptr [eax + 4]
// 0057dbbe  6a01                 push 1
// 0057dbc0  56                   push esi
// 0057dbc1  ffd1                 call ecx
// 0057dbc3  8b442424             mov eax, dword ptr [esp + 0x24]
// 0057dbc7  8344241c04           add dword ptr [esp + 0x1c], 4
// 0057dbcc  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0057dbd0  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0057dbd4  40                   inc eax
// 0057dbd5  83c408               add esp, 8
// 0057dbd8  3b442418             cmp eax, dword ptr [esp + 0x18]
// 0057dbdc  8944241c             mov dword ptr [esp + 0x1c], eax
// 0057dbe0  0f8c0effffff         jl 0x57daf4
// 0057dbe6  85ff                 test edi, edi
// 0057dbe8  751d                 jne 0x57dc07
// 0057dbea  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0057dbed  56                   push esi
// 0057dbee  ffd2                 call edx
// 0057dbf0  83c404               add esp, 4
// 0057dbf3  84c0                 test al, al
// 0057dbf5  0f8428feffff         je 0x57da23
// 0057dbfb  8b4504               mov eax, dword ptr [ebp + 4]
// 0057dbfe  8b5d00               mov ebx, dword ptr [ebp]
// 0057dc01  8944240c             mov dword ptr [esp + 0xc], eax
// 0057dc05  8bf8                 mov edi, eax
// 0057dc07  0fb603               movzx eax, byte ptr [ebx]
// 0057dc0a  4f                   dec edi
// 0057dc0b  43                   inc ebx
// 0057dc0c  89866c010000         mov dword ptr [esi + 0x16c], eax
// 0057dc12  85ff                 test edi, edi
// 0057dc14  751d                 jne 0x57dc33
// 0057dc16  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0057dc19  56                   push esi
// 0057dc1a  ffd1                 call ecx
// 0057dc1c  83c404               add esp, 4
// 0057dc1f  84c0                 test al, al
// 0057dc21  0f84fcfdffff         je 0x57da23
// 0057dc27  8b5504               mov edx, dword ptr [ebp + 4]
// 0057dc2a  8b5d00               mov ebx, dword ptr [ebp]
// 0057dc2d  8954240c             mov dword ptr [esp + 0xc], edx
// 0057dc31  8bfa                 mov edi, edx
// 0057dc33  0fb603               movzx eax, byte ptr [ebx]
// 0057dc36  4f                   dec edi
// 0057dc37  43                   inc ebx
// 0057dc38  898670010000         mov dword ptr [esi + 0x170], eax
// 0057dc3e  85ff                 test edi, edi
// 0057dc40  751d                 jne 0x57dc5f
// 0057dc42  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0057dc45  56                   push esi
// 0057dc46  ffd0                 call eax
// 0057dc48  83c404               add esp, 4
// 0057dc4b  84c0                 test al, al
// 0057dc4d  0f84d0fdffff         je 0x57da23
// 0057dc53  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0057dc56  8b5d00               mov ebx, dword ptr [ebp]
// 0057dc59  894c240c             mov dword ptr [esp + 0xc], ecx
// 0057dc5d  8bf9                 mov edi, ecx
// 0057dc5f  0fb603               movzx eax, byte ptr [ebx]
// 0057dc62  8b8e6c010000         mov ecx, dword ptr [esi + 0x16c]
// 0057dc68  8bd0                 mov edx, eax
// 0057dc6a  83e00f               and eax, 0xf
// 0057dc6d  898678010000         mov dword ptr [esi + 0x178], eax
// 0057dc73  8b06                 mov eax, dword ptr [esi]
// 0057dc75  c1fa04               sar edx, 4
// 0057dc78  83e20f               and edx, 0xf
// 0057dc7b  899674010000         mov dword ptr [esi + 0x174], edx
// 0057dc81  83c018               add eax, 0x18
// 0057dc84  8908                 mov dword ptr [eax], ecx
// 0057dc86  8b9670010000         mov edx, dword ptr [esi + 0x170]
// 0057dc8c  895004               mov dword ptr [eax + 4], edx
// 0057dc8f  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 0057dc95  894808               mov dword ptr [eax + 8], ecx
// 0057dc98  8b9678010000         mov edx, dword ptr [esi + 0x178]
// 0057dc9e  89500c               mov dword ptr [eax + 0xc], edx
// 0057dca1  8b06                 mov eax, dword ptr [esi]
// 0057dca3  c7401469000000       mov dword ptr [eax + 0x14], 0x69
// 0057dcaa  8b0e                 mov ecx, dword ptr [esi]
// 0057dcac  8b5104               mov edx, dword ptr [ecx + 4]
// 0057dcaf  6a01                 push 1
// 0057dcb1  56                   push esi
// 0057dcb2  ffd2                 call edx
// 0057dcb4  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 0057dcba  c7401000000000       mov dword ptr [eax + 0x10], 0
// 0057dcc1  ff467c               inc dword ptr [esi + 0x7c]
// 0057dcc4  83c408               add esp, 8
// 0057dcc7  43                   inc ebx
// 0057dcc8  4f                   dec edi
// 0057dcc9  897d04               mov dword ptr [ebp + 4], edi
// 0057dccc  5f                   pop edi
// 0057dccd  895d00               mov dword ptr [ebp], ebx
// 0057dcd0  5d                   pop ebp
// 0057dcd1  b001                 mov al, 1
// 0057dcd3  5b                   pop ebx
// 0057dcd4  83c418               add esp, 0x18
// 0057dcd7  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_sos)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
