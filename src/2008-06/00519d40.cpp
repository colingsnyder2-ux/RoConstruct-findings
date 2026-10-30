// from server: 100% by auto
// roc 2008-06 00519d40  unit: G3D::_internal::DialogTemplate  size: 768 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00519d40
//
// 00519d40  83ec08               sub esp, 8
// 00519d43  53                   push ebx
// 00519d44  55                   push ebp
// 00519d45  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 00519d48  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00519d4b  57                   push edi
// 00519d4c  8b7d00               mov edi, dword ptr [ebp]
// 00519d4f  896c2410             mov dword ptr [esp + 0x10], ebp
// 00519d53  8886c8000000         mov byte ptr [esi + 0xc8], al
// 00519d59  888ec9000000         mov byte ptr [esi + 0xc9], cl
// 00519d5f  85db                 test ebx, ebx
// 00519d61  751c                 jne 0x519d7f
// 00519d63  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00519d66  56                   push esi
// 00519d67  ffd2                 call edx
// 00519d69  83c404               add esp, 4
// 00519d6c  84c0                 test al, al
// 00519d6e  7509                 jne 0x519d79
// 00519d70  5f                   pop edi
// 00519d71  5d                   pop ebp
// 00519d72  32c0                 xor al, al
// 00519d74  5b                   pop ebx
// 00519d75  83c408               add esp, 8
// 00519d78  c3                   ret 
// 00519d79  8b7d00               mov edi, dword ptr [ebp]
// 00519d7c  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00519d7f  0fb607               movzx eax, byte ptr [edi]
// 00519d82  4b                   dec ebx
// 00519d83  c1e008               shl eax, 8
// 00519d86  47                   inc edi
// 00519d87  8944240c             mov dword ptr [esp + 0xc], eax
// 00519d8b  85db                 test ebx, ebx
// 00519d8d  7513                 jne 0x519da2
// 00519d8f  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00519d92  56                   push esi
// 00519d93  ffd0                 call eax
// 00519d95  83c404               add esp, 4
// 00519d98  84c0                 test al, al
// 00519d9a  74d4                 je 0x519d70
// 00519d9c  8b7d00               mov edi, dword ptr [ebp]
// 00519d9f  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00519da2  0fb60f               movzx ecx, byte ptr [edi]
// 00519da5  014c240c             add dword ptr [esp + 0xc], ecx
// 00519da9  4b                   dec ebx
// 00519daa  47                   inc edi
// 00519dab  85db                 test ebx, ebx
// 00519dad  7513                 jne 0x519dc2
// 00519daf  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00519db2  56                   push esi
// 00519db3  ffd2                 call edx
// 00519db5  83c404               add esp, 4
// 00519db8  84c0                 test al, al
// 00519dba  74b4                 je 0x519d70
// 00519dbc  8b7d00               mov edi, dword ptr [ebp]
// 00519dbf  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00519dc2  0fb607               movzx eax, byte ptr [edi]
// 00519dc5  4b                   dec ebx
// 00519dc6  47                   inc edi
// 00519dc7  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 00519dcd  85db                 test ebx, ebx
// 00519dcf  7513                 jne 0x519de4
// 00519dd1  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00519dd4  56                   push esi
// 00519dd5  ffd1                 call ecx
// 00519dd7  83c404               add esp, 4
// 00519dda  84c0                 test al, al
// 00519ddc  7492                 je 0x519d70
// 00519dde  8b7d00               mov edi, dword ptr [ebp]
// 00519de1  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00519de4  0fb617               movzx edx, byte ptr [edi]
// 00519de7  4b                   dec ebx
// 00519de8  c1e208               shl edx, 8
// 00519deb  47                   inc edi
// 00519dec  895620               mov dword ptr [esi + 0x20], edx
// 00519def  85db                 test ebx, ebx
// 00519df1  7517                 jne 0x519e0a
// 00519df3  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00519df6  56                   push esi
// 00519df7  ffd0                 call eax
// 00519df9  83c404               add esp, 4
// 00519dfc  84c0                 test al, al
// 00519dfe  0f846cffffff         je 0x519d70
// 00519e04  8b7d00               mov edi, dword ptr [ebp]
// 00519e07  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00519e0a  0fb60f               movzx ecx, byte ptr [edi]
// 00519e0d  014e20               add dword ptr [esi + 0x20], ecx
// 00519e10  4b                   dec ebx
// 00519e11  47                   inc edi
// 00519e12  85db                 test ebx, ebx
// 00519e14  7517                 jne 0x519e2d
// 00519e16  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00519e19  56                   push esi
// 00519e1a  ffd2                 call edx
// 00519e1c  83c404               add esp, 4
// 00519e1f  84c0                 test al, al
// 00519e21  0f8449ffffff         je 0x519d70
// 00519e27  8b7d00               mov edi, dword ptr [ebp]
// 00519e2a  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00519e2d  0fb607               movzx eax, byte ptr [edi]
// 00519e30  4b                   dec ebx
// 00519e31  c1e008               shl eax, 8
// 00519e34  47                   inc edi
// 00519e35  89461c               mov dword ptr [esi + 0x1c], eax
// 00519e38  85db                 test ebx, ebx
// 00519e3a  7517                 jne 0x519e53
// 00519e3c  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00519e3f  56                   push esi
// 00519e40  ffd1                 call ecx
// 00519e42  83c404               add esp, 4
// 00519e45  84c0                 test al, al
// 00519e47  0f8423ffffff         je 0x519d70
// 00519e4d  8b7d00               mov edi, dword ptr [ebp]
// 00519e50  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00519e53  0fb617               movzx edx, byte ptr [edi]
// 00519e56  01561c               add dword ptr [esi + 0x1c], edx
// 00519e59  4b                   dec ebx
// 00519e5a  47                   inc edi
// 00519e5b  85db                 test ebx, ebx
// 00519e5d  7517                 jne 0x519e76
// 00519e5f  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00519e62  56                   push esi
// 00519e63  ffd0                 call eax
// 00519e65  83c404               add esp, 4
// 00519e68  84c0                 test al, al
// 00519e6a  0f8400ffffff         je 0x519d70
// 00519e70  8b7d00               mov edi, dword ptr [ebp]
// 00519e73  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00519e76  0fb60f               movzx ecx, byte ptr [edi]
// 00519e79  8b06                 mov eax, dword ptr [esi]
// 00519e7b  8b967c010000         mov edx, dword ptr [esi + 0x17c]
// 00519e81  836c240c08           sub dword ptr [esp + 0xc], 8
// 00519e86  894e24               mov dword ptr [esi + 0x24], ecx
// 00519e89  83c018               add eax, 0x18
// 00519e8c  8910                 mov dword ptr [eax], edx
// 00519e8e  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00519e91  894804               mov dword ptr [eax + 4], ecx
// 00519e94  8b5620               mov edx, dword ptr [esi + 0x20]
// 00519e97  895008               mov dword ptr [eax + 8], edx
// 00519e9a  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00519e9d  89480c               mov dword ptr [eax + 0xc], ecx
// 00519ea0  8b16                 mov edx, dword ptr [esi]
// 00519ea2  c7421464000000       mov dword ptr [edx + 0x14], 0x64
// 00519ea9  8b06                 mov eax, dword ptr [esi]
// 00519eab  8b4804               mov ecx, dword ptr [eax + 4]
// 00519eae  6a01                 push 1
// 00519eb0  56                   push esi
// 00519eb1  4b                   dec ebx
// 00519eb2  47                   inc edi
// 00519eb3  ffd1                 call ecx
// 00519eb5  8b9694010000         mov edx, dword ptr [esi + 0x194]
// 00519ebb  83c408               add esp, 8
// 00519ebe  807a0d00             cmp byte ptr [edx + 0xd], 0
// 00519ec2  7413                 je 0x519ed7
// 00519ec4  8b06                 mov eax, dword ptr [esi]
// 00519ec6  c740143a000000       mov dword ptr [eax + 0x14], 0x3a
// 00519ecd  8b0e                 mov ecx, dword ptr [esi]
// 00519ecf  8b11                 mov edx, dword ptr [ecx]
// 00519ed1  56                   push esi
// 00519ed2  ffd2                 call edx
// 00519ed4  83c404               add esp, 4
// 00519ed7  837e2000             cmp dword ptr [esi + 0x20], 0
// 00519edb  760c                 jbe 0x519ee9
// 00519edd  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 00519ee1  7606                 jbe 0x519ee9
// 00519ee3  837e2400             cmp dword ptr [esi + 0x24], 0
// 00519ee7  7f13                 jg 0x519efc
// 00519ee9  8b06                 mov eax, dword ptr [esi]
// 00519eeb  c7401420000000       mov dword ptr [eax + 0x14], 0x20
// 00519ef2  8b0e                 mov ecx, dword ptr [esi]
// 00519ef4  8b11                 mov edx, dword ptr [ecx]
// 00519ef6  56                   push esi
// 00519ef7  ffd2                 call edx
// 00519ef9  83c404               add esp, 4
// 00519efc  8b4624               mov eax, dword ptr [esi + 0x24]
// 00519eff  8d0440               lea eax, [eax + eax*2]
// 00519f02  3944240c             cmp dword ptr [esp + 0xc], eax
// 00519f06  7413                 je 0x519f1b
// 00519f08  8b0e                 mov ecx, dword ptr [esi]
// 00519f0a  c741140b000000       mov dword ptr [ecx + 0x14], 0xb
// 00519f11  8b16                 mov edx, dword ptr [esi]
// 00519f13  8b02                 mov eax, dword ptr [edx]
// 00519f15  56                   push esi
// 00519f16  ffd0                 call eax
// 00519f18  83c404               add esp, 4
// 00519f1b  83bec400000000       cmp dword ptr [esi + 0xc4], 0
// 00519f22  751a                 jne 0x519f3e
// 00519f24  8b5624               mov edx, dword ptr [esi + 0x24]
// 00519f27  8b4e04               mov ecx, dword ptr [esi + 4]
// 00519f2a  6bd254               imul edx, edx, 0x54
// 00519f2d  8b01                 mov eax, dword ptr [ecx]
// 00519f2f  52                   push edx
// 00519f30  6a01                 push 1
// 00519f32  56                   push esi
// 00519f33  ffd0                 call eax
// 00519f35  83c40c               add esp, 0xc
// 00519f38  8986c4000000         mov dword ptr [esi + 0xc4], eax
// 00519f3e  837e2400             cmp dword ptr [esi + 0x24], 0
// 00519f42  8baec4000000         mov ebp, dword ptr [esi + 0xc4]
// 00519f48  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00519f50  0f8ece000000         jle 0x51a024
// 00519f56  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00519f5a  894d04               mov dword ptr [ebp + 4], ecx
// 00519f5d  85db                 test ebx, ebx
// 00519f5f  751a                 jne 0x519f7b
// 00519f61  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00519f65  8b530c               mov edx, dword ptr [ebx + 0xc]
// 00519f68  56                   push esi
// 00519f69  ffd2                 call edx
// 00519f6b  83c404               add esp, 4
// 00519f6e  84c0                 test al, al
// 00519f70  0f84fafdffff         je 0x519d70
// 00519f76  8b3b                 mov edi, dword ptr [ebx]
// 00519f78  8b5b04               mov ebx, dword ptr [ebx + 4]
// 00519f7b  0fb607               movzx eax, byte ptr [edi]
// 00519f7e  4b                   dec ebx
// 00519f7f  47                   inc edi
// 00519f80  894500               mov dword ptr [ebp], eax
// 00519f83  85db                 test ebx, ebx
// 00519f85  751a                 jne 0x519fa1
// 00519f87  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00519f8b  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 00519f8e  56                   push esi
// 00519f8f  ffd1                 call ecx
// 00519f91  83c404               add esp, 4
// 00519f94  84c0                 test al, al
// 00519f96  0f84d4fdffff         je 0x519d70
// 00519f9c  8b3b                 mov edi, dword ptr [ebx]
// 00519f9e  8b5b04               mov ebx, dword ptr [ebx + 4]
// 00519fa1  0fb607               movzx eax, byte ptr [edi]
// 00519fa4  8bd0                 mov edx, eax
// 00519fa6  c1fa04               sar edx, 4
// 00519fa9  4b                   dec ebx
// 00519faa  83e20f               and edx, 0xf
// 00519fad  83e00f               and eax, 0xf
// 00519fb0  47                   inc edi
// 00519fb1  895508               mov dword ptr [ebp + 8], edx
// 00519fb4  89450c               mov dword ptr [ebp + 0xc], eax
// 00519fb7  85db                 test ebx, ebx
// 00519fb9  751a                 jne 0x519fd5
// 00519fbb  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00519fbf  8b430c               mov eax, dword ptr [ebx + 0xc]
// 00519fc2  56                   push esi
// 00519fc3  ffd0                 call eax
// 00519fc5  83c404               add esp, 4
// 00519fc8  84c0                 test al, al
// 00519fca  0f84a0fdffff         je 0x519d70
// 00519fd0  8b3b                 mov edi, dword ptr [ebx]
// 00519fd2  8b5b04               mov ebx, dword ptr [ebx + 4]
// 00519fd5  0fb60f               movzx ecx, byte ptr [edi]
// 00519fd8  8b5500               mov edx, dword ptr [ebp]
// 00519fdb  894d10               mov dword ptr [ebp + 0x10], ecx
// 00519fde  8b06                 mov eax, dword ptr [esi]
// 00519fe0  83c018               add eax, 0x18
// 00519fe3  8910                 mov dword ptr [eax], edx
// 00519fe5  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00519fe8  894804               mov dword ptr [eax + 4], ecx
// 00519feb  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00519fee  895008               mov dword ptr [eax + 8], edx
// 00519ff1  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 00519ff4  89480c               mov dword ptr [eax + 0xc], ecx
// 00519ff7  8b16                 mov edx, dword ptr [esi]
// 00519ff9  c7421465000000       mov dword ptr [edx + 0x14], 0x65
// 0051a000  8b06                 mov eax, dword ptr [esi]
// 0051a002  8b4804               mov ecx, dword ptr [eax + 4]
// 0051a005  6a01                 push 1
// 0051a007  56                   push esi
// 0051a008  4b                   dec ebx
// 0051a009  47                   inc edi
// 0051a00a  ffd1                 call ecx
// 0051a00c  8b442414             mov eax, dword ptr [esp + 0x14]
// 0051a010  40                   inc eax
// 0051a011  83c408               add esp, 8
// 0051a014  83c554               add ebp, 0x54
// 0051a017  3b4624               cmp eax, dword ptr [esi + 0x24]
// 0051a01a  8944240c             mov dword ptr [esp + 0xc], eax
// 0051a01e  0f8c32ffffff         jl 0x519f56
// 0051a024  8b9694010000         mov edx, dword ptr [esi + 0x194]
// 0051a02a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0051a02e  c6420d01             mov byte ptr [edx + 0xd], 1
// 0051a032  8938                 mov dword ptr [eax], edi
// 0051a034  5f                   pop edi
// 0051a035  895804               mov dword ptr [eax + 4], ebx
// 0051a038  5d                   pop ebp
// 0051a039  b001                 mov al, 1
// 0051a03b  5b                   pop ebx
// 0051a03c  83c408               add esp, 8
// 0051a03f  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_sof)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
