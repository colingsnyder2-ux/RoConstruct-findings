// roc 2009-06 0057d6e0  unit: G3D::_internal::DialogTemplate  size: 768 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057d6e0
//
// 0057d6e0  83ec08               sub esp, 8
// 0057d6e3  53                   push ebx
// 0057d6e4  55                   push ebp
// 0057d6e5  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 0057d6e8  8b5d04               mov ebx, dword ptr [ebp + 4]
// 0057d6eb  57                   push edi
// 0057d6ec  8b7d00               mov edi, dword ptr [ebp]
// 0057d6ef  896c2410             mov dword ptr [esp + 0x10], ebp
// 0057d6f3  8886c8000000         mov byte ptr [esi + 0xc8], al
// 0057d6f9  888ec9000000         mov byte ptr [esi + 0xc9], cl
// 0057d6ff  85db                 test ebx, ebx
// 0057d701  751c                 jne 0x57d71f
// 0057d703  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0057d706  56                   push esi
// 0057d707  ffd2                 call edx
// 0057d709  83c404               add esp, 4
// 0057d70c  84c0                 test al, al
// 0057d70e  7509                 jne 0x57d719
// 0057d710  5f                   pop edi
// 0057d711  5d                   pop ebp
// 0057d712  32c0                 xor al, al
// 0057d714  5b                   pop ebx
// 0057d715  83c408               add esp, 8
// 0057d718  c3                   ret 
// 0057d719  8b7d00               mov edi, dword ptr [ebp]
// 0057d71c  8b5d04               mov ebx, dword ptr [ebp + 4]
// 0057d71f  0fb607               movzx eax, byte ptr [edi]
// 0057d722  4b                   dec ebx
// 0057d723  c1e008               shl eax, 8
// 0057d726  47                   inc edi
// 0057d727  8944240c             mov dword ptr [esp + 0xc], eax
// 0057d72b  85db                 test ebx, ebx
// 0057d72d  7513                 jne 0x57d742
// 0057d72f  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0057d732  56                   push esi
// 0057d733  ffd0                 call eax
// 0057d735  83c404               add esp, 4
// 0057d738  84c0                 test al, al
// 0057d73a  74d4                 je 0x57d710
// 0057d73c  8b7d00               mov edi, dword ptr [ebp]
// 0057d73f  8b5d04               mov ebx, dword ptr [ebp + 4]
// 0057d742  0fb60f               movzx ecx, byte ptr [edi]
// 0057d745  014c240c             add dword ptr [esp + 0xc], ecx
// 0057d749  4b                   dec ebx
// 0057d74a  47                   inc edi
// 0057d74b  85db                 test ebx, ebx
// 0057d74d  7513                 jne 0x57d762
// 0057d74f  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0057d752  56                   push esi
// 0057d753  ffd2                 call edx
// 0057d755  83c404               add esp, 4
// 0057d758  84c0                 test al, al
// 0057d75a  74b4                 je 0x57d710
// 0057d75c  8b7d00               mov edi, dword ptr [ebp]
// 0057d75f  8b5d04               mov ebx, dword ptr [ebp + 4]
// 0057d762  0fb607               movzx eax, byte ptr [edi]
// 0057d765  4b                   dec ebx
// 0057d766  47                   inc edi
// 0057d767  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 0057d76d  85db                 test ebx, ebx
// 0057d76f  7513                 jne 0x57d784
// 0057d771  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0057d774  56                   push esi
// 0057d775  ffd1                 call ecx
// 0057d777  83c404               add esp, 4
// 0057d77a  84c0                 test al, al
// 0057d77c  7492                 je 0x57d710
// 0057d77e  8b7d00               mov edi, dword ptr [ebp]
// 0057d781  8b5d04               mov ebx, dword ptr [ebp + 4]
// 0057d784  0fb617               movzx edx, byte ptr [edi]
// 0057d787  4b                   dec ebx
// 0057d788  c1e208               shl edx, 8
// 0057d78b  47                   inc edi
// 0057d78c  895620               mov dword ptr [esi + 0x20], edx
// 0057d78f  85db                 test ebx, ebx
// 0057d791  7517                 jne 0x57d7aa
// 0057d793  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0057d796  56                   push esi
// 0057d797  ffd0                 call eax
// 0057d799  83c404               add esp, 4
// 0057d79c  84c0                 test al, al
// 0057d79e  0f846cffffff         je 0x57d710
// 0057d7a4  8b7d00               mov edi, dword ptr [ebp]
// 0057d7a7  8b5d04               mov ebx, dword ptr [ebp + 4]
// 0057d7aa  0fb60f               movzx ecx, byte ptr [edi]
// 0057d7ad  014e20               add dword ptr [esi + 0x20], ecx
// 0057d7b0  4b                   dec ebx
// 0057d7b1  47                   inc edi
// 0057d7b2  85db                 test ebx, ebx
// 0057d7b4  7517                 jne 0x57d7cd
// 0057d7b6  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0057d7b9  56                   push esi
// 0057d7ba  ffd2                 call edx
// 0057d7bc  83c404               add esp, 4
// 0057d7bf  84c0                 test al, al
// 0057d7c1  0f8449ffffff         je 0x57d710
// 0057d7c7  8b7d00               mov edi, dword ptr [ebp]
// 0057d7ca  8b5d04               mov ebx, dword ptr [ebp + 4]
// 0057d7cd  0fb607               movzx eax, byte ptr [edi]
// 0057d7d0  4b                   dec ebx
// 0057d7d1  c1e008               shl eax, 8
// 0057d7d4  47                   inc edi
// 0057d7d5  89461c               mov dword ptr [esi + 0x1c], eax
// 0057d7d8  85db                 test ebx, ebx
// 0057d7da  7517                 jne 0x57d7f3
// 0057d7dc  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0057d7df  56                   push esi
// 0057d7e0  ffd1                 call ecx
// 0057d7e2  83c404               add esp, 4
// 0057d7e5  84c0                 test al, al
// 0057d7e7  0f8423ffffff         je 0x57d710
// 0057d7ed  8b7d00               mov edi, dword ptr [ebp]
// 0057d7f0  8b5d04               mov ebx, dword ptr [ebp + 4]
// 0057d7f3  0fb617               movzx edx, byte ptr [edi]
// 0057d7f6  01561c               add dword ptr [esi + 0x1c], edx
// 0057d7f9  4b                   dec ebx
// 0057d7fa  47                   inc edi
// 0057d7fb  85db                 test ebx, ebx
// 0057d7fd  7517                 jne 0x57d816
// 0057d7ff  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0057d802  56                   push esi
// 0057d803  ffd0                 call eax
// 0057d805  83c404               add esp, 4
// 0057d808  84c0                 test al, al
// 0057d80a  0f8400ffffff         je 0x57d710
// 0057d810  8b7d00               mov edi, dword ptr [ebp]
// 0057d813  8b5d04               mov ebx, dword ptr [ebp + 4]
// 0057d816  0fb60f               movzx ecx, byte ptr [edi]
// 0057d819  8b06                 mov eax, dword ptr [esi]
// 0057d81b  8b967c010000         mov edx, dword ptr [esi + 0x17c]
// 0057d821  836c240c08           sub dword ptr [esp + 0xc], 8
// 0057d826  894e24               mov dword ptr [esi + 0x24], ecx
// 0057d829  83c018               add eax, 0x18
// 0057d82c  8910                 mov dword ptr [eax], edx
// 0057d82e  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0057d831  894804               mov dword ptr [eax + 4], ecx
// 0057d834  8b5620               mov edx, dword ptr [esi + 0x20]
// 0057d837  895008               mov dword ptr [eax + 8], edx
// 0057d83a  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0057d83d  89480c               mov dword ptr [eax + 0xc], ecx
// 0057d840  8b16                 mov edx, dword ptr [esi]
// 0057d842  c7421464000000       mov dword ptr [edx + 0x14], 0x64
// 0057d849  8b06                 mov eax, dword ptr [esi]
// 0057d84b  8b4804               mov ecx, dword ptr [eax + 4]
// 0057d84e  6a01                 push 1
// 0057d850  56                   push esi
// 0057d851  4b                   dec ebx
// 0057d852  47                   inc edi
// 0057d853  ffd1                 call ecx
// 0057d855  8b9694010000         mov edx, dword ptr [esi + 0x194]
// 0057d85b  83c408               add esp, 8
// 0057d85e  807a0d00             cmp byte ptr [edx + 0xd], 0
// 0057d862  7413                 je 0x57d877
// 0057d864  8b06                 mov eax, dword ptr [esi]
// 0057d866  c740143a000000       mov dword ptr [eax + 0x14], 0x3a
// 0057d86d  8b0e                 mov ecx, dword ptr [esi]
// 0057d86f  8b11                 mov edx, dword ptr [ecx]
// 0057d871  56                   push esi
// 0057d872  ffd2                 call edx
// 0057d874  83c404               add esp, 4
// 0057d877  837e2000             cmp dword ptr [esi + 0x20], 0
// 0057d87b  760c                 jbe 0x57d889
// 0057d87d  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 0057d881  7606                 jbe 0x57d889
// 0057d883  837e2400             cmp dword ptr [esi + 0x24], 0
// 0057d887  7f13                 jg 0x57d89c
// 0057d889  8b06                 mov eax, dword ptr [esi]
// 0057d88b  c7401420000000       mov dword ptr [eax + 0x14], 0x20
// 0057d892  8b0e                 mov ecx, dword ptr [esi]
// 0057d894  8b11                 mov edx, dword ptr [ecx]
// 0057d896  56                   push esi
// 0057d897  ffd2                 call edx
// 0057d899  83c404               add esp, 4
// 0057d89c  8b4624               mov eax, dword ptr [esi + 0x24]
// 0057d89f  8d0440               lea eax, [eax + eax*2]
// 0057d8a2  3944240c             cmp dword ptr [esp + 0xc], eax
// 0057d8a6  7413                 je 0x57d8bb
// 0057d8a8  8b0e                 mov ecx, dword ptr [esi]
// 0057d8aa  c741140b000000       mov dword ptr [ecx + 0x14], 0xb
// 0057d8b1  8b16                 mov edx, dword ptr [esi]
// 0057d8b3  8b02                 mov eax, dword ptr [edx]
// 0057d8b5  56                   push esi
// 0057d8b6  ffd0                 call eax
// 0057d8b8  83c404               add esp, 4
// 0057d8bb  83bec400000000       cmp dword ptr [esi + 0xc4], 0
// 0057d8c2  751a                 jne 0x57d8de
// 0057d8c4  8b5624               mov edx, dword ptr [esi + 0x24]
// 0057d8c7  8b4e04               mov ecx, dword ptr [esi + 4]
// 0057d8ca  6bd254               imul edx, edx, 0x54
// 0057d8cd  8b01                 mov eax, dword ptr [ecx]
// 0057d8cf  52                   push edx
// 0057d8d0  6a01                 push 1
// 0057d8d2  56                   push esi
// 0057d8d3  ffd0                 call eax
// 0057d8d5  83c40c               add esp, 0xc
// 0057d8d8  8986c4000000         mov dword ptr [esi + 0xc4], eax
// 0057d8de  837e2400             cmp dword ptr [esi + 0x24], 0
// 0057d8e2  8baec4000000         mov ebp, dword ptr [esi + 0xc4]
// 0057d8e8  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0057d8f0  0f8ece000000         jle 0x57d9c4
// 0057d8f6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057d8fa  894d04               mov dword ptr [ebp + 4], ecx
// 0057d8fd  85db                 test ebx, ebx
// 0057d8ff  751a                 jne 0x57d91b
// 0057d901  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0057d905  8b530c               mov edx, dword ptr [ebx + 0xc]
// 0057d908  56                   push esi
// 0057d909  ffd2                 call edx
// 0057d90b  83c404               add esp, 4
// 0057d90e  84c0                 test al, al
// 0057d910  0f84fafdffff         je 0x57d710
// 0057d916  8b3b                 mov edi, dword ptr [ebx]
// 0057d918  8b5b04               mov ebx, dword ptr [ebx + 4]
// 0057d91b  0fb607               movzx eax, byte ptr [edi]
// 0057d91e  4b                   dec ebx
// 0057d91f  47                   inc edi
// 0057d920  894500               mov dword ptr [ebp], eax
// 0057d923  85db                 test ebx, ebx
// 0057d925  751a                 jne 0x57d941
// 0057d927  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0057d92b  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 0057d92e  56                   push esi
// 0057d92f  ffd1                 call ecx
// 0057d931  83c404               add esp, 4
// 0057d934  84c0                 test al, al
// 0057d936  0f84d4fdffff         je 0x57d710
// 0057d93c  8b3b                 mov edi, dword ptr [ebx]
// 0057d93e  8b5b04               mov ebx, dword ptr [ebx + 4]
// 0057d941  0fb607               movzx eax, byte ptr [edi]
// 0057d944  8bd0                 mov edx, eax
// 0057d946  c1fa04               sar edx, 4
// 0057d949  4b                   dec ebx
// 0057d94a  83e20f               and edx, 0xf
// 0057d94d  83e00f               and eax, 0xf
// 0057d950  47                   inc edi
// 0057d951  895508               mov dword ptr [ebp + 8], edx
// 0057d954  89450c               mov dword ptr [ebp + 0xc], eax
// 0057d957  85db                 test ebx, ebx
// 0057d959  751a                 jne 0x57d975
// 0057d95b  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0057d95f  8b430c               mov eax, dword ptr [ebx + 0xc]
// 0057d962  56                   push esi
// 0057d963  ffd0                 call eax
// 0057d965  83c404               add esp, 4
// 0057d968  84c0                 test al, al
// 0057d96a  0f84a0fdffff         je 0x57d710
// 0057d970  8b3b                 mov edi, dword ptr [ebx]
// 0057d972  8b5b04               mov ebx, dword ptr [ebx + 4]
// 0057d975  0fb60f               movzx ecx, byte ptr [edi]
// 0057d978  8b5500               mov edx, dword ptr [ebp]
// 0057d97b  894d10               mov dword ptr [ebp + 0x10], ecx
// 0057d97e  8b06                 mov eax, dword ptr [esi]
// 0057d980  83c018               add eax, 0x18
// 0057d983  8910                 mov dword ptr [eax], edx
// 0057d985  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0057d988  894804               mov dword ptr [eax + 4], ecx
// 0057d98b  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0057d98e  895008               mov dword ptr [eax + 8], edx
// 0057d991  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 0057d994  89480c               mov dword ptr [eax + 0xc], ecx
// 0057d997  8b16                 mov edx, dword ptr [esi]
// 0057d999  c7421465000000       mov dword ptr [edx + 0x14], 0x65
// 0057d9a0  8b06                 mov eax, dword ptr [esi]
// 0057d9a2  8b4804               mov ecx, dword ptr [eax + 4]
// 0057d9a5  6a01                 push 1
// 0057d9a7  56                   push esi
// 0057d9a8  4b                   dec ebx
// 0057d9a9  47                   inc edi
// 0057d9aa  ffd1                 call ecx
// 0057d9ac  8b442414             mov eax, dword ptr [esp + 0x14]
// 0057d9b0  40                   inc eax
// 0057d9b1  83c408               add esp, 8
// 0057d9b4  83c554               add ebp, 0x54
// 0057d9b7  3b4624               cmp eax, dword ptr [esi + 0x24]
// 0057d9ba  8944240c             mov dword ptr [esp + 0xc], eax
// 0057d9be  0f8c32ffffff         jl 0x57d8f6
// 0057d9c4  8b9694010000         mov edx, dword ptr [esi + 0x194]
// 0057d9ca  8b442410             mov eax, dword ptr [esp + 0x10]
// 0057d9ce  c6420d01             mov byte ptr [edx + 0xd], 1
// 0057d9d2  8938                 mov dword ptr [eax], edi
// 0057d9d4  5f                   pop edi
// 0057d9d5  895804               mov dword ptr [eax + 4], ebx
// 0057d9d8  5d                   pop ebp
// 0057d9d9  b001                 mov al, 1
// 0057d9db  5b                   pop ebx
// 0057d9dc  83c408               add esp, 8
// 0057d9df  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_sof)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
