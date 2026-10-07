// roc 2010-06 00560e30  unit: G3D::_internal::DialogTemplate  size: 768 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00560e30
//
// 00560e30  83ec08               sub esp, 8
// 00560e33  53                   push ebx
// 00560e34  55                   push ebp
// 00560e35  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 00560e38  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00560e3b  57                   push edi
// 00560e3c  8b7d00               mov edi, dword ptr [ebp]
// 00560e3f  896c2410             mov dword ptr [esp + 0x10], ebp
// 00560e43  8886c8000000         mov byte ptr [esi + 0xc8], al
// 00560e49  888ec9000000         mov byte ptr [esi + 0xc9], cl
// 00560e4f  85db                 test ebx, ebx
// 00560e51  751c                 jne 0x560e6f
// 00560e53  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00560e56  56                   push esi
// 00560e57  ffd2                 call edx
// 00560e59  83c404               add esp, 4
// 00560e5c  84c0                 test al, al
// 00560e5e  7509                 jne 0x560e69
// 00560e60  5f                   pop edi
// 00560e61  5d                   pop ebp
// 00560e62  32c0                 xor al, al
// 00560e64  5b                   pop ebx
// 00560e65  83c408               add esp, 8
// 00560e68  c3                   ret 
// 00560e69  8b7d00               mov edi, dword ptr [ebp]
// 00560e6c  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00560e6f  0fb607               movzx eax, byte ptr [edi]
// 00560e72  4b                   dec ebx
// 00560e73  c1e008               shl eax, 8
// 00560e76  47                   inc edi
// 00560e77  8944240c             mov dword ptr [esp + 0xc], eax
// 00560e7b  85db                 test ebx, ebx
// 00560e7d  7513                 jne 0x560e92
// 00560e7f  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00560e82  56                   push esi
// 00560e83  ffd0                 call eax
// 00560e85  83c404               add esp, 4
// 00560e88  84c0                 test al, al
// 00560e8a  74d4                 je 0x560e60
// 00560e8c  8b7d00               mov edi, dword ptr [ebp]
// 00560e8f  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00560e92  0fb60f               movzx ecx, byte ptr [edi]
// 00560e95  014c240c             add dword ptr [esp + 0xc], ecx
// 00560e99  4b                   dec ebx
// 00560e9a  47                   inc edi
// 00560e9b  85db                 test ebx, ebx
// 00560e9d  7513                 jne 0x560eb2
// 00560e9f  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00560ea2  56                   push esi
// 00560ea3  ffd2                 call edx
// 00560ea5  83c404               add esp, 4
// 00560ea8  84c0                 test al, al
// 00560eaa  74b4                 je 0x560e60
// 00560eac  8b7d00               mov edi, dword ptr [ebp]
// 00560eaf  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00560eb2  0fb607               movzx eax, byte ptr [edi]
// 00560eb5  4b                   dec ebx
// 00560eb6  47                   inc edi
// 00560eb7  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 00560ebd  85db                 test ebx, ebx
// 00560ebf  7513                 jne 0x560ed4
// 00560ec1  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00560ec4  56                   push esi
// 00560ec5  ffd1                 call ecx
// 00560ec7  83c404               add esp, 4
// 00560eca  84c0                 test al, al
// 00560ecc  7492                 je 0x560e60
// 00560ece  8b7d00               mov edi, dword ptr [ebp]
// 00560ed1  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00560ed4  0fb617               movzx edx, byte ptr [edi]
// 00560ed7  4b                   dec ebx
// 00560ed8  c1e208               shl edx, 8
// 00560edb  47                   inc edi
// 00560edc  895620               mov dword ptr [esi + 0x20], edx
// 00560edf  85db                 test ebx, ebx
// 00560ee1  7517                 jne 0x560efa
// 00560ee3  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00560ee6  56                   push esi
// 00560ee7  ffd0                 call eax
// 00560ee9  83c404               add esp, 4
// 00560eec  84c0                 test al, al
// 00560eee  0f846cffffff         je 0x560e60
// 00560ef4  8b7d00               mov edi, dword ptr [ebp]
// 00560ef7  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00560efa  0fb60f               movzx ecx, byte ptr [edi]
// 00560efd  014e20               add dword ptr [esi + 0x20], ecx
// 00560f00  4b                   dec ebx
// 00560f01  47                   inc edi
// 00560f02  85db                 test ebx, ebx
// 00560f04  7517                 jne 0x560f1d
// 00560f06  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00560f09  56                   push esi
// 00560f0a  ffd2                 call edx
// 00560f0c  83c404               add esp, 4
// 00560f0f  84c0                 test al, al
// 00560f11  0f8449ffffff         je 0x560e60
// 00560f17  8b7d00               mov edi, dword ptr [ebp]
// 00560f1a  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00560f1d  0fb607               movzx eax, byte ptr [edi]
// 00560f20  4b                   dec ebx
// 00560f21  c1e008               shl eax, 8
// 00560f24  47                   inc edi
// 00560f25  89461c               mov dword ptr [esi + 0x1c], eax
// 00560f28  85db                 test ebx, ebx
// 00560f2a  7517                 jne 0x560f43
// 00560f2c  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00560f2f  56                   push esi
// 00560f30  ffd1                 call ecx
// 00560f32  83c404               add esp, 4
// 00560f35  84c0                 test al, al
// 00560f37  0f8423ffffff         je 0x560e60
// 00560f3d  8b7d00               mov edi, dword ptr [ebp]
// 00560f40  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00560f43  0fb617               movzx edx, byte ptr [edi]
// 00560f46  01561c               add dword ptr [esi + 0x1c], edx
// 00560f49  4b                   dec ebx
// 00560f4a  47                   inc edi
// 00560f4b  85db                 test ebx, ebx
// 00560f4d  7517                 jne 0x560f66
// 00560f4f  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00560f52  56                   push esi
// 00560f53  ffd0                 call eax
// 00560f55  83c404               add esp, 4
// 00560f58  84c0                 test al, al
// 00560f5a  0f8400ffffff         je 0x560e60
// 00560f60  8b7d00               mov edi, dword ptr [ebp]
// 00560f63  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00560f66  0fb60f               movzx ecx, byte ptr [edi]
// 00560f69  8b06                 mov eax, dword ptr [esi]
// 00560f6b  8b967c010000         mov edx, dword ptr [esi + 0x17c]
// 00560f71  836c240c08           sub dword ptr [esp + 0xc], 8
// 00560f76  894e24               mov dword ptr [esi + 0x24], ecx
// 00560f79  83c018               add eax, 0x18
// 00560f7c  8910                 mov dword ptr [eax], edx
// 00560f7e  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00560f81  894804               mov dword ptr [eax + 4], ecx
// 00560f84  8b5620               mov edx, dword ptr [esi + 0x20]
// 00560f87  895008               mov dword ptr [eax + 8], edx
// 00560f8a  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00560f8d  89480c               mov dword ptr [eax + 0xc], ecx
// 00560f90  8b16                 mov edx, dword ptr [esi]
// 00560f92  c7421464000000       mov dword ptr [edx + 0x14], 0x64
// 00560f99  8b06                 mov eax, dword ptr [esi]
// 00560f9b  8b4804               mov ecx, dword ptr [eax + 4]
// 00560f9e  6a01                 push 1
// 00560fa0  56                   push esi
// 00560fa1  4b                   dec ebx
// 00560fa2  47                   inc edi
// 00560fa3  ffd1                 call ecx
// 00560fa5  8b9694010000         mov edx, dword ptr [esi + 0x194]
// 00560fab  83c408               add esp, 8
// 00560fae  807a0d00             cmp byte ptr [edx + 0xd], 0
// 00560fb2  7413                 je 0x560fc7
// 00560fb4  8b06                 mov eax, dword ptr [esi]
// 00560fb6  c740143a000000       mov dword ptr [eax + 0x14], 0x3a
// 00560fbd  8b0e                 mov ecx, dword ptr [esi]
// 00560fbf  8b11                 mov edx, dword ptr [ecx]
// 00560fc1  56                   push esi
// 00560fc2  ffd2                 call edx
// 00560fc4  83c404               add esp, 4
// 00560fc7  837e2000             cmp dword ptr [esi + 0x20], 0
// 00560fcb  760c                 jbe 0x560fd9
// 00560fcd  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 00560fd1  7606                 jbe 0x560fd9
// 00560fd3  837e2400             cmp dword ptr [esi + 0x24], 0
// 00560fd7  7f13                 jg 0x560fec
// 00560fd9  8b06                 mov eax, dword ptr [esi]
// 00560fdb  c7401420000000       mov dword ptr [eax + 0x14], 0x20
// 00560fe2  8b0e                 mov ecx, dword ptr [esi]
// 00560fe4  8b11                 mov edx, dword ptr [ecx]
// 00560fe6  56                   push esi
// 00560fe7  ffd2                 call edx
// 00560fe9  83c404               add esp, 4
// 00560fec  8b4624               mov eax, dword ptr [esi + 0x24]
// 00560fef  8d0440               lea eax, [eax + eax*2]
// 00560ff2  3944240c             cmp dword ptr [esp + 0xc], eax
// 00560ff6  7413                 je 0x56100b
// 00560ff8  8b0e                 mov ecx, dword ptr [esi]
// 00560ffa  c741140b000000       mov dword ptr [ecx + 0x14], 0xb
// 00561001  8b16                 mov edx, dword ptr [esi]
// 00561003  8b02                 mov eax, dword ptr [edx]
// 00561005  56                   push esi
// 00561006  ffd0                 call eax
// 00561008  83c404               add esp, 4
// 0056100b  83bec400000000       cmp dword ptr [esi + 0xc4], 0
// 00561012  751a                 jne 0x56102e
// 00561014  8b5624               mov edx, dword ptr [esi + 0x24]
// 00561017  8b4e04               mov ecx, dword ptr [esi + 4]
// 0056101a  6bd254               imul edx, edx, 0x54
// 0056101d  8b01                 mov eax, dword ptr [ecx]
// 0056101f  52                   push edx
// 00561020  6a01                 push 1
// 00561022  56                   push esi
// 00561023  ffd0                 call eax
// 00561025  83c40c               add esp, 0xc
// 00561028  8986c4000000         mov dword ptr [esi + 0xc4], eax
// 0056102e  837e2400             cmp dword ptr [esi + 0x24], 0
// 00561032  8baec4000000         mov ebp, dword ptr [esi + 0xc4]
// 00561038  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00561040  0f8ece000000         jle 0x561114
// 00561046  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0056104a  894d04               mov dword ptr [ebp + 4], ecx
// 0056104d  85db                 test ebx, ebx
// 0056104f  751a                 jne 0x56106b
// 00561051  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00561055  8b530c               mov edx, dword ptr [ebx + 0xc]
// 00561058  56                   push esi
// 00561059  ffd2                 call edx
// 0056105b  83c404               add esp, 4
// 0056105e  84c0                 test al, al
// 00561060  0f84fafdffff         je 0x560e60
// 00561066  8b3b                 mov edi, dword ptr [ebx]
// 00561068  8b5b04               mov ebx, dword ptr [ebx + 4]
// 0056106b  0fb607               movzx eax, byte ptr [edi]
// 0056106e  4b                   dec ebx
// 0056106f  47                   inc edi
// 00561070  894500               mov dword ptr [ebp], eax
// 00561073  85db                 test ebx, ebx
// 00561075  751a                 jne 0x561091
// 00561077  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0056107b  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 0056107e  56                   push esi
// 0056107f  ffd1                 call ecx
// 00561081  83c404               add esp, 4
// 00561084  84c0                 test al, al
// 00561086  0f84d4fdffff         je 0x560e60
// 0056108c  8b3b                 mov edi, dword ptr [ebx]
// 0056108e  8b5b04               mov ebx, dword ptr [ebx + 4]
// 00561091  0fb607               movzx eax, byte ptr [edi]
// 00561094  8bd0                 mov edx, eax
// 00561096  c1fa04               sar edx, 4
// 00561099  4b                   dec ebx
// 0056109a  83e20f               and edx, 0xf
// 0056109d  83e00f               and eax, 0xf
// 005610a0  47                   inc edi
// 005610a1  895508               mov dword ptr [ebp + 8], edx
// 005610a4  89450c               mov dword ptr [ebp + 0xc], eax
// 005610a7  85db                 test ebx, ebx
// 005610a9  751a                 jne 0x5610c5
// 005610ab  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005610af  8b430c               mov eax, dword ptr [ebx + 0xc]
// 005610b2  56                   push esi
// 005610b3  ffd0                 call eax
// 005610b5  83c404               add esp, 4
// 005610b8  84c0                 test al, al
// 005610ba  0f84a0fdffff         je 0x560e60
// 005610c0  8b3b                 mov edi, dword ptr [ebx]
// 005610c2  8b5b04               mov ebx, dword ptr [ebx + 4]
// 005610c5  0fb60f               movzx ecx, byte ptr [edi]
// 005610c8  8b5500               mov edx, dword ptr [ebp]
// 005610cb  894d10               mov dword ptr [ebp + 0x10], ecx
// 005610ce  8b06                 mov eax, dword ptr [esi]
// 005610d0  83c018               add eax, 0x18
// 005610d3  8910                 mov dword ptr [eax], edx
// 005610d5  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005610d8  894804               mov dword ptr [eax + 4], ecx
// 005610db  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005610de  895008               mov dword ptr [eax + 8], edx
// 005610e1  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 005610e4  89480c               mov dword ptr [eax + 0xc], ecx
// 005610e7  8b16                 mov edx, dword ptr [esi]
// 005610e9  c7421465000000       mov dword ptr [edx + 0x14], 0x65
// 005610f0  8b06                 mov eax, dword ptr [esi]
// 005610f2  8b4804               mov ecx, dword ptr [eax + 4]
// 005610f5  6a01                 push 1
// 005610f7  56                   push esi
// 005610f8  4b                   dec ebx
// 005610f9  47                   inc edi
// 005610fa  ffd1                 call ecx
// 005610fc  8b442414             mov eax, dword ptr [esp + 0x14]
// 00561100  40                   inc eax
// 00561101  83c408               add esp, 8
// 00561104  83c554               add ebp, 0x54
// 00561107  3b4624               cmp eax, dword ptr [esi + 0x24]
// 0056110a  8944240c             mov dword ptr [esp + 0xc], eax
// 0056110e  0f8c32ffffff         jl 0x561046
// 00561114  8b9694010000         mov edx, dword ptr [esi + 0x194]
// 0056111a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0056111e  c6420d01             mov byte ptr [edx + 0xd], 1
// 00561122  8938                 mov dword ptr [eax], edi
// 00561124  5f                   pop edi
// 00561125  895804               mov dword ptr [eax + 4], ebx
// 00561128  5d                   pop ebp
// 00561129  b001                 mov al, 1
// 0056112b  5b                   pop ebx
// 0056112c  83c408               add esp, 8
// 0056112f  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_sof)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
