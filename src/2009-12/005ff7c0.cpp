// roc 2009-12 005ff7c0  unit: G3D::_internal::DialogTemplate  size: 760 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ff7c0
//
// 005ff7c0  83ec18               sub esp, 0x18
// 005ff7c3  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 005ff7c9  80780d00             cmp byte ptr [eax + 0xd], 0
// 005ff7cd  53                   push ebx
// 005ff7ce  55                   push ebp
// 005ff7cf  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 005ff7d2  8b5d00               mov ebx, dword ptr [ebp]
// 005ff7d5  57                   push edi
// 005ff7d6  8b7d04               mov edi, dword ptr [ebp + 4]
// 005ff7d9  896c2420             mov dword ptr [esp + 0x20], ebp
// 005ff7dd  7513                 jne 0x5ff7f2
// 005ff7df  8b0e                 mov ecx, dword ptr [esi]
// 005ff7e1  c741143e000000       mov dword ptr [ecx + 0x14], 0x3e
// 005ff7e8  8b16                 mov edx, dword ptr [esi]
// 005ff7ea  8b02                 mov eax, dword ptr [edx]
// 005ff7ec  56                   push esi
// 005ff7ed  ffd0                 call eax
// 005ff7ef  83c404               add esp, 4
// 005ff7f2  85ff                 test edi, edi
// 005ff7f4  751e                 jne 0x5ff814
// 005ff7f6  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005ff7f9  56                   push esi
// 005ff7fa  ffd1                 call ecx
// 005ff7fc  83c404               add esp, 4
// 005ff7ff  84c0                 test al, al
// 005ff801  7509                 jne 0x5ff80c
// 005ff803  5f                   pop edi
// 005ff804  5d                   pop ebp
// 005ff805  32c0                 xor al, al
// 005ff807  5b                   pop ebx
// 005ff808  83c418               add esp, 0x18
// 005ff80b  c3                   ret 
// 005ff80c  8b5504               mov edx, dword ptr [ebp + 4]
// 005ff80f  8b5d00               mov ebx, dword ptr [ebp]
// 005ff812  8bfa                 mov edi, edx
// 005ff814  0fb603               movzx eax, byte ptr [ebx]
// 005ff817  4f                   dec edi
// 005ff818  c1e008               shl eax, 8
// 005ff81b  43                   inc ebx
// 005ff81c  89442410             mov dword ptr [esp + 0x10], eax
// 005ff820  85ff                 test edi, edi
// 005ff822  7519                 jne 0x5ff83d
// 005ff824  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005ff827  56                   push esi
// 005ff828  ffd0                 call eax
// 005ff82a  83c404               add esp, 4
// 005ff82d  84c0                 test al, al
// 005ff82f  74d2                 je 0x5ff803
// 005ff831  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005ff834  8b5d00               mov ebx, dword ptr [ebp]
// 005ff837  8b442410             mov eax, dword ptr [esp + 0x10]
// 005ff83b  8bf9                 mov edi, ecx
// 005ff83d  0fb613               movzx edx, byte ptr [ebx]
// 005ff840  4f                   dec edi
// 005ff841  03c2                 add eax, edx
// 005ff843  43                   inc ebx
// 005ff844  89442410             mov dword ptr [esp + 0x10], eax
// 005ff848  85ff                 test edi, edi
// 005ff84a  7515                 jne 0x5ff861
// 005ff84c  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005ff84f  56                   push esi
// 005ff850  ffd0                 call eax
// 005ff852  83c404               add esp, 4
// 005ff855  84c0                 test al, al
// 005ff857  74aa                 je 0x5ff803
// 005ff859  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005ff85c  8b5d00               mov ebx, dword ptr [ebp]
// 005ff85f  8bf9                 mov edi, ecx
// 005ff861  0fb603               movzx eax, byte ptr [ebx]
// 005ff864  8b16                 mov edx, dword ptr [esi]
// 005ff866  c7421467000000       mov dword ptr [edx + 0x14], 0x67
// 005ff86d  8b0e                 mov ecx, dword ptr [esi]
// 005ff86f  894118               mov dword ptr [ecx + 0x18], eax
// 005ff872  8b16                 mov edx, dword ptr [esi]
// 005ff874  89442418             mov dword ptr [esp + 0x18], eax
// 005ff878  8b4204               mov eax, dword ptr [edx + 4]
// 005ff87b  6a01                 push 1
// 005ff87d  56                   push esi
// 005ff87e  4f                   dec edi
// 005ff87f  43                   inc ebx
// 005ff880  ffd0                 call eax
// 005ff882  8b442420             mov eax, dword ptr [esp + 0x20]
// 005ff886  8d4c0006             lea ecx, [eax + eax + 6]
// 005ff88a  83c408               add esp, 8
// 005ff88d  394c2410             cmp dword ptr [esp + 0x10], ecx
// 005ff891  750a                 jne 0x5ff89d
// 005ff893  83f801               cmp eax, 1
// 005ff896  7c05                 jl 0x5ff89d
// 005ff898  83f804               cmp eax, 4
// 005ff89b  7e17                 jle 0x5ff8b4
// 005ff89d  8b16                 mov edx, dword ptr [esi]
// 005ff89f  c742140b000000       mov dword ptr [edx + 0x14], 0xb
// 005ff8a6  8b06                 mov eax, dword ptr [esi]
// 005ff8a8  8b08                 mov ecx, dword ptr [eax]
// 005ff8aa  56                   push esi
// 005ff8ab  ffd1                 call ecx
// 005ff8ad  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005ff8b1  83c404               add esp, 4
// 005ff8b4  898624010000         mov dword ptr [esi + 0x124], eax
// 005ff8ba  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005ff8c2  85c0                 test eax, eax
// 005ff8c4  0f8efc000000         jle 0x5ff9c6
// 005ff8ca  8d9628010000         lea edx, [esi + 0x128]
// 005ff8d0  89542414             mov dword ptr [esp + 0x14], edx
// 005ff8d4  85ff                 test edi, edi
// 005ff8d6  751d                 jne 0x5ff8f5
// 005ff8d8  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005ff8db  56                   push esi
// 005ff8dc  ffd0                 call eax
// 005ff8de  83c404               add esp, 4
// 005ff8e1  84c0                 test al, al
// 005ff8e3  0f841affffff         je 0x5ff803
// 005ff8e9  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005ff8ec  8b5d00               mov ebx, dword ptr [ebp]
// 005ff8ef  894c240c             mov dword ptr [esp + 0xc], ecx
// 005ff8f3  8bf9                 mov edi, ecx
// 005ff8f5  0fb613               movzx edx, byte ptr [ebx]
// 005ff8f8  4f                   dec edi
// 005ff8f9  43                   inc ebx
// 005ff8fa  89542410             mov dword ptr [esp + 0x10], edx
// 005ff8fe  85ff                 test edi, edi
// 005ff900  751d                 jne 0x5ff91f
// 005ff902  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005ff905  56                   push esi
// 005ff906  ffd0                 call eax
// 005ff908  83c404               add esp, 4
// 005ff90b  84c0                 test al, al
// 005ff90d  0f84f0feffff         je 0x5ff803
// 005ff913  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005ff916  8b5d00               mov ebx, dword ptr [ebp]
// 005ff919  894c240c             mov dword ptr [esp + 0xc], ecx
// 005ff91d  8bf9                 mov edi, ecx
// 005ff91f  0fb62b               movzx ebp, byte ptr [ebx]
// 005ff922  4f                   dec edi
// 005ff923  33c0                 xor eax, eax
// 005ff925  43                   inc ebx
// 005ff926  394624               cmp dword ptr [esi + 0x24], eax
// 005ff929  897c240c             mov dword ptr [esp + 0xc], edi
// 005ff92d  8bbec4000000         mov edi, dword ptr [esi + 0xc4]
// 005ff933  7e11                 jle 0x5ff946
// 005ff935  8b542410             mov edx, dword ptr [esp + 0x10]
// 005ff939  3b17                 cmp edx, dword ptr [edi]
// 005ff93b  7425                 je 0x5ff962
// 005ff93d  40                   inc eax
// 005ff93e  83c754               add edi, 0x54
// 005ff941  3b4624               cmp eax, dword ptr [esi + 0x24]
// 005ff944  7cef                 jl 0x5ff935
// 005ff946  8b06                 mov eax, dword ptr [esi]
// 005ff948  8b542410             mov edx, dword ptr [esp + 0x10]
// 005ff94c  c7401405000000       mov dword ptr [eax + 0x14], 5
// 005ff953  8b0e                 mov ecx, dword ptr [esi]
// 005ff955  895118               mov dword ptr [ecx + 0x18], edx
// 005ff958  8b06                 mov eax, dword ptr [esi]
// 005ff95a  8b08                 mov ecx, dword ptr [eax]
// 005ff95c  56                   push esi
// 005ff95d  ffd1                 call ecx
// 005ff95f  83c404               add esp, 4
// 005ff962  8b542414             mov edx, dword ptr [esp + 0x14]
// 005ff966  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005ff96a  893a                 mov dword ptr [edx], edi
// 005ff96c  8bc5                 mov eax, ebp
// 005ff96e  c1f804               sar eax, 4
// 005ff971  83e00f               and eax, 0xf
// 005ff974  894714               mov dword ptr [edi + 0x14], eax
// 005ff977  83e50f               and ebp, 0xf
// 005ff97a  896f18               mov dword ptr [edi + 0x18], ebp
// 005ff97d  8b06                 mov eax, dword ptr [esi]
// 005ff97f  83c018               add eax, 0x18
// 005ff982  8908                 mov dword ptr [eax], ecx
// 005ff984  8b5714               mov edx, dword ptr [edi + 0x14]
// 005ff987  895004               mov dword ptr [eax + 4], edx
// 005ff98a  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 005ff98d  894808               mov dword ptr [eax + 8], ecx
// 005ff990  8b16                 mov edx, dword ptr [esi]
// 005ff992  c7421468000000       mov dword ptr [edx + 0x14], 0x68
// 005ff999  8b06                 mov eax, dword ptr [esi]
// 005ff99b  8b4804               mov ecx, dword ptr [eax + 4]
// 005ff99e  6a01                 push 1
// 005ff9a0  56                   push esi
// 005ff9a1  ffd1                 call ecx
// 005ff9a3  8b442424             mov eax, dword ptr [esp + 0x24]
// 005ff9a7  8344241c04           add dword ptr [esp + 0x1c], 4
// 005ff9ac  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005ff9b0  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 005ff9b4  40                   inc eax
// 005ff9b5  83c408               add esp, 8
// 005ff9b8  3b442418             cmp eax, dword ptr [esp + 0x18]
// 005ff9bc  8944241c             mov dword ptr [esp + 0x1c], eax
// 005ff9c0  0f8c0effffff         jl 0x5ff8d4
// 005ff9c6  85ff                 test edi, edi
// 005ff9c8  751d                 jne 0x5ff9e7
// 005ff9ca  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005ff9cd  56                   push esi
// 005ff9ce  ffd2                 call edx
// 005ff9d0  83c404               add esp, 4
// 005ff9d3  84c0                 test al, al
// 005ff9d5  0f8428feffff         je 0x5ff803
// 005ff9db  8b4504               mov eax, dword ptr [ebp + 4]
// 005ff9de  8b5d00               mov ebx, dword ptr [ebp]
// 005ff9e1  8944240c             mov dword ptr [esp + 0xc], eax
// 005ff9e5  8bf8                 mov edi, eax
// 005ff9e7  0fb603               movzx eax, byte ptr [ebx]
// 005ff9ea  4f                   dec edi
// 005ff9eb  43                   inc ebx
// 005ff9ec  89866c010000         mov dword ptr [esi + 0x16c], eax
// 005ff9f2  85ff                 test edi, edi
// 005ff9f4  751d                 jne 0x5ffa13
// 005ff9f6  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005ff9f9  56                   push esi
// 005ff9fa  ffd1                 call ecx
// 005ff9fc  83c404               add esp, 4
// 005ff9ff  84c0                 test al, al
// 005ffa01  0f84fcfdffff         je 0x5ff803
// 005ffa07  8b5504               mov edx, dword ptr [ebp + 4]
// 005ffa0a  8b5d00               mov ebx, dword ptr [ebp]
// 005ffa0d  8954240c             mov dword ptr [esp + 0xc], edx
// 005ffa11  8bfa                 mov edi, edx
// 005ffa13  0fb603               movzx eax, byte ptr [ebx]
// 005ffa16  4f                   dec edi
// 005ffa17  43                   inc ebx
// 005ffa18  898670010000         mov dword ptr [esi + 0x170], eax
// 005ffa1e  85ff                 test edi, edi
// 005ffa20  751d                 jne 0x5ffa3f
// 005ffa22  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005ffa25  56                   push esi
// 005ffa26  ffd0                 call eax
// 005ffa28  83c404               add esp, 4
// 005ffa2b  84c0                 test al, al
// 005ffa2d  0f84d0fdffff         je 0x5ff803
// 005ffa33  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005ffa36  8b5d00               mov ebx, dword ptr [ebp]
// 005ffa39  894c240c             mov dword ptr [esp + 0xc], ecx
// 005ffa3d  8bf9                 mov edi, ecx
// 005ffa3f  0fb603               movzx eax, byte ptr [ebx]
// 005ffa42  8b8e6c010000         mov ecx, dword ptr [esi + 0x16c]
// 005ffa48  8bd0                 mov edx, eax
// 005ffa4a  83e00f               and eax, 0xf
// 005ffa4d  898678010000         mov dword ptr [esi + 0x178], eax
// 005ffa53  8b06                 mov eax, dword ptr [esi]
// 005ffa55  c1fa04               sar edx, 4
// 005ffa58  83e20f               and edx, 0xf
// 005ffa5b  899674010000         mov dword ptr [esi + 0x174], edx
// 005ffa61  83c018               add eax, 0x18
// 005ffa64  8908                 mov dword ptr [eax], ecx
// 005ffa66  8b9670010000         mov edx, dword ptr [esi + 0x170]
// 005ffa6c  895004               mov dword ptr [eax + 4], edx
// 005ffa6f  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 005ffa75  894808               mov dword ptr [eax + 8], ecx
// 005ffa78  8b9678010000         mov edx, dword ptr [esi + 0x178]
// 005ffa7e  89500c               mov dword ptr [eax + 0xc], edx
// 005ffa81  8b06                 mov eax, dword ptr [esi]
// 005ffa83  c7401469000000       mov dword ptr [eax + 0x14], 0x69
// 005ffa8a  8b0e                 mov ecx, dword ptr [esi]
// 005ffa8c  8b5104               mov edx, dword ptr [ecx + 4]
// 005ffa8f  6a01                 push 1
// 005ffa91  56                   push esi
// 005ffa92  ffd2                 call edx
// 005ffa94  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 005ffa9a  c7401000000000       mov dword ptr [eax + 0x10], 0
// 005ffaa1  ff467c               inc dword ptr [esi + 0x7c]
// 005ffaa4  83c408               add esp, 8
// 005ffaa7  43                   inc ebx
// 005ffaa8  4f                   dec edi
// 005ffaa9  897d04               mov dword ptr [ebp + 4], edi
// 005ffaac  5f                   pop edi
// 005ffaad  895d00               mov dword ptr [ebp], ebx
// 005ffab0  5d                   pop ebp
// 005ffab1  b001                 mov al, 1
// 005ffab3  5b                   pop ebx
// 005ffab4  83c418               add esp, 0x18
// 005ffab7  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_sos)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
