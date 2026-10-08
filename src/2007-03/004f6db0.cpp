// roc 2007-03 004f6db0  unit: seg_004f0000  size: 916 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f6db0
//
// 004f6db0  83ec08               sub esp, 8
// 004f6db3  53                   push ebx
// 004f6db4  55                   push ebp
// 004f6db5  56                   push esi
// 004f6db6  8b742418             mov esi, dword ptr [esp + 0x18]
// 004f6dba  57                   push edi
// 004f6dbb  8bf9                 mov edi, ecx
// 004f6dbd  bd01000000           mov ebp, 1
// 004f6dc2  55                   push ebp
// 004f6dc3  8bce                 mov ecx, esi
// 004f6dc5  897c2414             mov dword ptr [esp + 0x14], edi
// 004f6dc9  e8a26a0000           call 0x4fd870
// 004f6dce  8b463c               mov eax, dword ptr [esi + 0x3c]
// 004f6dd1  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 004f6dd4  03c5                 add eax, ebp
// 004f6dd6  3bc8                 cmp ecx, eax
// 004f6dd8  7c02                 jl 0x4f6ddc
// 004f6dda  8bc1                 mov eax, ecx
// 004f6ddc  3b4638               cmp eax, dword ptr [esi + 0x38]
// 004f6ddf  894634               mov dword ptr [esi + 0x34], eax
// 004f6de2  7e09                 jle 0x4f6ded
// 004f6de4  51                   push ecx
// 004f6de5  55                   push ebp
// 004f6de6  8bce                 mov ecx, esi
// 004f6de8  e8a36a0000           call 0x4fd890
// 004f6ded  8b463c               mov eax, dword ptr [esi + 0x3c]
// 004f6df0  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 004f6df3  c6040800             mov byte ptr [eax + ecx], 0
// 004f6df7  016e3c               add dword ptr [esi + 0x3c], ebp
// 004f6dfa  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 004f6dfd  8b4634               mov eax, dword ptr [esi + 0x34]
// 004f6e00  03cd                 add ecx, ebp
// 004f6e02  3bc1                 cmp eax, ecx
// 004f6e04  7c02                 jl 0x4f6e08
// 004f6e06  8bc8                 mov ecx, eax
// 004f6e08  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 004f6e0b  894e34               mov dword ptr [esi + 0x34], ecx
// 004f6e0e  7e09                 jle 0x4f6e19
// 004f6e10  50                   push eax
// 004f6e11  55                   push ebp
// 004f6e12  8bce                 mov ecx, esi
// 004f6e14  e8776a0000           call 0x4fd890
// 004f6e19  8b563c               mov edx, dword ptr [esi + 0x3c]
// 004f6e1c  8b4630               mov eax, dword ptr [esi + 0x30]
// 004f6e1f  c6040200             mov byte ptr [edx + eax], 0
// 004f6e23  016e3c               add dword ptr [esi + 0x3c], ebp
// 004f6e26  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 004f6e29  8b4634               mov eax, dword ptr [esi + 0x34]
// 004f6e2c  03cd                 add ecx, ebp
// 004f6e2e  3bc1                 cmp eax, ecx
// 004f6e30  7c02                 jl 0x4f6e34
// 004f6e32  8bc8                 mov ecx, eax
// 004f6e34  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 004f6e37  894e34               mov dword ptr [esi + 0x34], ecx
// 004f6e3a  7e09                 jle 0x4f6e45
// 004f6e3c  50                   push eax
// 004f6e3d  55                   push ebp
// 004f6e3e  8bce                 mov ecx, esi
// 004f6e40  e84b6a0000           call 0x4fd890
// 004f6e45  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 004f6e48  8b5630               mov edx, dword ptr [esi + 0x30]
// 004f6e4b  c6041102             mov byte ptr [ecx + edx], 2
// 004f6e4f  016e3c               add dword ptr [esi + 0x3c], ebp
// 004f6e52  8b463c               mov eax, dword ptr [esi + 0x3c]
// 004f6e55  8d4805               lea ecx, [eax + 5]
// 004f6e58  3b4e34               cmp ecx, dword ptr [esi + 0x34]
// 004f6e5b  7e0f                 jle 0x4f6e6c
// 004f6e5d  8b5644               mov edx, dword ptr [esi + 0x44]
// 004f6e60  8d440205             lea eax, [edx + eax + 5]
// 004f6e64  50                   push eax
// 004f6e65  8bce                 mov ecx, esi
// 004f6e67  e8c4f7ffff           call 0x4f6630
// 004f6e6c  83463c05             add dword ptr [esi + 0x3c], 5
// 004f6e70  6a00                 push 0
// 004f6e72  8bce                 mov ecx, esi
// 004f6e74  e8b76a0000           call 0x4fd930
// 004f6e79  6a00                 push 0
// 004f6e7b  8bce                 mov ecx, esi
// 004f6e7d  e8ae6a0000           call 0x4fd930
// 004f6e82  0fb74f08             movzx ecx, word ptr [edi + 8]
// 004f6e86  51                   push ecx
// 004f6e87  8bce                 mov ecx, esi
// 004f6e89  e8a26a0000           call 0x4fd930
// 004f6e8e  0fb7570c             movzx edx, word ptr [edi + 0xc]
// 004f6e92  52                   push edx
// 004f6e93  8bce                 mov ecx, esi
// 004f6e95  e8966a0000           call 0x4fd930
// 004f6e9a  8a5f10               mov bl, byte ptr [edi + 0x10]
// 004f6e9d  8b463c               mov eax, dword ptr [esi + 0x3c]
// 004f6ea0  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 004f6ea3  02db                 add bl, bl
// 004f6ea5  02db                 add bl, bl
// 004f6ea7  03c5                 add eax, ebp
// 004f6ea9  02db                 add bl, bl
// 004f6eab  3bc8                 cmp ecx, eax
// 004f6ead  7c02                 jl 0x4f6eb1
// 004f6eaf  8bc1                 mov eax, ecx
// 004f6eb1  3b4638               cmp eax, dword ptr [esi + 0x38]
// 004f6eb4  894634               mov dword ptr [esi + 0x34], eax
// 004f6eb7  7e09                 jle 0x4f6ec2
// 004f6eb9  51                   push ecx
// 004f6eba  55                   push ebp
// 004f6ebb  8bce                 mov ecx, esi
// 004f6ebd  e8ce690000           call 0x4fd890
// 004f6ec2  8b463c               mov eax, dword ptr [esi + 0x3c]
// 004f6ec5  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 004f6ec8  881c08               mov byte ptr [eax + ecx], bl
// 004f6ecb  016e3c               add dword ptr [esi + 0x3c], ebp
// 004f6ece  8b463c               mov eax, dword ptr [esi + 0x3c]
// 004f6ed1  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 004f6ed4  bb03000000           mov ebx, 3
// 004f6ed9  83c001               add eax, 1
// 004f6edc  395f10               cmp dword ptr [edi + 0x10], ebx
// 004f6edf  7523                 jne 0x4f6f04
// 004f6ee1  3bc8                 cmp ecx, eax
// 004f6ee3  7c02                 jl 0x4f6ee7
// 004f6ee5  8bc1                 mov eax, ecx
// 004f6ee7  3b4638               cmp eax, dword ptr [esi + 0x38]
// 004f6eea  894634               mov dword ptr [esi + 0x34], eax
// 004f6eed  7e09                 jle 0x4f6ef8
// 004f6eef  51                   push ecx
// 004f6ef0  55                   push ebp
// 004f6ef1  8bce                 mov ecx, esi
// 004f6ef3  e898690000           call 0x4fd890
// 004f6ef8  8b563c               mov edx, dword ptr [esi + 0x3c]
// 004f6efb  8b4630               mov eax, dword ptr [esi + 0x30]
// 004f6efe  c6040200             mov byte ptr [edx + eax], 0
// 004f6f02  eb21                 jmp 0x4f6f25
// 004f6f04  3bc8                 cmp ecx, eax
// 004f6f06  7c02                 jl 0x4f6f0a
// 004f6f08  8bc1                 mov eax, ecx
// 004f6f0a  3b4638               cmp eax, dword ptr [esi + 0x38]
// 004f6f0d  894634               mov dword ptr [esi + 0x34], eax
// 004f6f10  7e09                 jle 0x4f6f1b
// 004f6f12  51                   push ecx
// 004f6f13  55                   push ebp
// 004f6f14  8bce                 mov ecx, esi
// 004f6f16  e875690000           call 0x4fd890
// 004f6f1b  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 004f6f1e  8b5630               mov edx, dword ptr [esi + 0x30]
// 004f6f21  c6041108             mov byte ptr [ecx + edx], 8
// 004f6f25  016e3c               add dword ptr [esi + 0x3c], ebp
// 004f6f28  395f10               cmp dword ptr [edi + 0x10], ebx
// 004f6f2b  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 004f6f2e  8b470c               mov eax, dword ptr [edi + 0xc]
// 004f6f31  0f85e0000000         jne 0x4f7017
// 004f6f37  2bc5                 sub eax, ebp
// 004f6f39  8944241c             mov dword ptr [esp + 0x1c], eax
// 004f6f3d  0f88eb010000         js 0x4f712e
// 004f6f43  8b4708               mov eax, dword ptr [edi + 8]
// 004f6f46  33ed                 xor ebp, ebp
// 004f6f48  85c0                 test eax, eax
// 004f6f4a  0f8eb7000000         jle 0x4f7007
// 004f6f50  0faf44241c           imul eax, dword ptr [esp + 0x1c]
// 004f6f55  03c5                 add eax, ebp
// 004f6f57  8d3c40               lea edi, [eax + eax*2]
// 004f6f5a  8b442410             mov eax, dword ptr [esp + 0x10]
// 004f6f5e  037804               add edi, dword ptr [eax + 4]
// 004f6f61  8b4634               mov eax, dword ptr [esi + 0x34]
// 004f6f64  8a5f02               mov bl, byte ptr [edi + 2]
// 004f6f67  83c101               add ecx, 1
// 004f6f6a  3bc1                 cmp eax, ecx
// 004f6f6c  7c02                 jl 0x4f6f70
// 004f6f6e  8bc8                 mov ecx, eax
// 004f6f70  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 004f6f73  894e34               mov dword ptr [esi + 0x34], ecx
// 004f6f76  7e0a                 jle 0x4f6f82
// 004f6f78  50                   push eax
// 004f6f79  6a01                 push 1
// 004f6f7b  8bce                 mov ecx, esi
// 004f6f7d  e80e690000           call 0x4fd890
// 004f6f82  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 004f6f85  8b5630               mov edx, dword ptr [esi + 0x30]
// 004f6f88  881c11               mov byte ptr [ecx + edx], bl
// 004f6f8b  83463c01             add dword ptr [esi + 0x3c], 1
// 004f6f8f  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 004f6f92  8b4634               mov eax, dword ptr [esi + 0x34]
// 004f6f95  8a5f01               mov bl, byte ptr [edi + 1]
// 004f6f98  83c101               add ecx, 1
// 004f6f9b  3bc1                 cmp eax, ecx
// 004f6f9d  7c02                 jl 0x4f6fa1
// 004f6f9f  8bc8                 mov ecx, eax
// 004f6fa1  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 004f6fa4  894e34               mov dword ptr [esi + 0x34], ecx
// 004f6fa7  7e0a                 jle 0x4f6fb3
// 004f6fa9  50                   push eax
// 004f6faa  6a01                 push 1
// 004f6fac  8bce                 mov ecx, esi
// 004f6fae  e8dd680000           call 0x4fd890
// 004f6fb3  8b463c               mov eax, dword ptr [esi + 0x3c]
// 004f6fb6  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 004f6fb9  881c08               mov byte ptr [eax + ecx], bl
// 004f6fbc  83463c01             add dword ptr [esi + 0x3c], 1
// 004f6fc0  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 004f6fc3  8b4634               mov eax, dword ptr [esi + 0x34]
// 004f6fc6  8a1f                 mov bl, byte ptr [edi]
// 004f6fc8  83c101               add ecx, 1
// 004f6fcb  3bc1                 cmp eax, ecx
// 004f6fcd  7c02                 jl 0x4f6fd1
// 004f6fcf  8bc8                 mov ecx, eax
// 004f6fd1  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 004f6fd4  894e34               mov dword ptr [esi + 0x34], ecx
// 004f6fd7  7e0a                 jle 0x4f6fe3
// 004f6fd9  50                   push eax
// 004f6fda  6a01                 push 1
// 004f6fdc  8bce                 mov ecx, esi
// 004f6fde  e8ad680000           call 0x4fd890
// 004f6fe3  8b563c               mov edx, dword ptr [esi + 0x3c]
// 004f6fe6  8b4630               mov eax, dword ptr [esi + 0x30]
// 004f6fe9  881c02               mov byte ptr [edx + eax], bl
// 004f6fec  83463c01             add dword ptr [esi + 0x3c], 1
// 004f6ff0  8b542410             mov edx, dword ptr [esp + 0x10]
// 004f6ff4  8b4208               mov eax, dword ptr [edx + 8]
// 004f6ff7  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 004f6ffa  83c501               add ebp, 1
// 004f6ffd  3be8                 cmp ebp, eax
// 004f6fff  0f8c4bffffff         jl 0x4f6f50
// 004f7005  8bfa                 mov edi, edx
// 004f7007  836c241c01           sub dword ptr [esp + 0x1c], 1
// 004f700c  0f8931ffffff         jns 0x4f6f43
// 004f7012  e917010000           jmp 0x4f712e
// 004f7017  2bc5                 sub eax, ebp
// 004f7019  8944241c             mov dword ptr [esp + 0x1c], eax
// 004f701d  0f880b010000         js 0x4f712e
// 004f7023  8b4708               mov eax, dword ptr [edi + 8]
// 004f7026  33d2                 xor edx, edx
// 004f7028  85c0                 test eax, eax
// 004f702a  89542414             mov dword ptr [esp + 0x14], edx
// 004f702e  0f8ef0000000         jle 0x4f7124
// 004f7034  0faf44241c           imul eax, dword ptr [esp + 0x1c]
// 004f7039  03c2                 add eax, edx
// 004f703b  8b5704               mov edx, dword ptr [edi + 4]
// 004f703e  8a5c8202             mov bl, byte ptr [edx + eax*4 + 2]
// 004f7042  8d3c82               lea edi, [edx + eax*4]
// 004f7045  8b4634               mov eax, dword ptr [esi + 0x34]
// 004f7048  83c101               add ecx, 1
// 004f704b  3bc1                 cmp eax, ecx
// 004f704d  7c02                 jl 0x4f7051
// 004f704f  8bc8                 mov ecx, eax
// 004f7051  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 004f7054  894e34               mov dword ptr [esi + 0x34], ecx
// 004f7057  bd01000000           mov ebp, 1
// 004f705c  7e09                 jle 0x4f7067
// 004f705e  50                   push eax
// 004f705f  55                   push ebp
// 004f7060  8bce                 mov ecx, esi
// 004f7062  e829680000           call 0x4fd890
// 004f7067  8b463c               mov eax, dword ptr [esi + 0x3c]
// 004f706a  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 004f706d  881c08               mov byte ptr [eax + ecx], bl
// 004f7070  016e3c               add dword ptr [esi + 0x3c], ebp
// 004f7073  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 004f7076  8b4634               mov eax, dword ptr [esi + 0x34]
// 004f7079  8a5f01               mov bl, byte ptr [edi + 1]
// 004f707c  83c101               add ecx, 1
// 004f707f  3bc1                 cmp eax, ecx
// 004f7081  7c02                 jl 0x4f7085
// 004f7083  8bc8                 mov ecx, eax
// 004f7085  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 004f7088  894e34               mov dword ptr [esi + 0x34], ecx
// 004f708b  7e09                 jle 0x4f7096
// 004f708d  50                   push eax
// 004f708e  55                   push ebp
// 004f708f  8bce                 mov ecx, esi
// 004f7091  e8fa670000           call 0x4fd890
// 004f7096  8b563c               mov edx, dword ptr [esi + 0x3c]
// 004f7099  8b4630               mov eax, dword ptr [esi + 0x30]
// 004f709c  881c02               mov byte ptr [edx + eax], bl
// 004f709f  016e3c               add dword ptr [esi + 0x3c], ebp
// 004f70a2  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 004f70a5  8b4634               mov eax, dword ptr [esi + 0x34]
// 004f70a8  8a1f                 mov bl, byte ptr [edi]
// 004f70aa  83c101               add ecx, 1
// 004f70ad  3bc1                 cmp eax, ecx
// 004f70af  7c02                 jl 0x4f70b3
// 004f70b1  8bc8                 mov ecx, eax
// 004f70b3  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 004f70b6  894e34               mov dword ptr [esi + 0x34], ecx
// 004f70b9  7e09                 jle 0x4f70c4
// 004f70bb  50                   push eax
// 004f70bc  55                   push ebp
// 004f70bd  8bce                 mov ecx, esi
// 004f70bf  e8cc670000           call 0x4fd890
// 004f70c4  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 004f70c7  8b5630               mov edx, dword ptr [esi + 0x30]
// 004f70ca  881c11               mov byte ptr [ecx + edx], bl
// 004f70cd  016e3c               add dword ptr [esi + 0x3c], ebp
// 004f70d0  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 004f70d3  8b4634               mov eax, dword ptr [esi + 0x34]
// 004f70d6  8a5f03               mov bl, byte ptr [edi + 3]
// 004f70d9  83c101               add ecx, 1
// 004f70dc  3bc1                 cmp eax, ecx
// 004f70de  7c02                 jl 0x4f70e2
// 004f70e0  8bc8                 mov ecx, eax
// 004f70e2  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 004f70e5  894e34               mov dword ptr [esi + 0x34], ecx
// 004f70e8  7e09                 jle 0x4f70f3
// 004f70ea  50                   push eax
// 004f70eb  55                   push ebp
// 004f70ec  8bce                 mov ecx, esi
// 004f70ee  e89d670000           call 0x4fd890
// 004f70f3  8b463c               mov eax, dword ptr [esi + 0x3c]
// 004f70f6  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 004f70f9  8b542414             mov edx, dword ptr [esp + 0x14]
// 004f70fd  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004f7101  881c08               mov byte ptr [eax + ecx], bl
// 004f7104  016e3c               add dword ptr [esi + 0x3c], ebp
// 004f7107  8b442410             mov eax, dword ptr [esp + 0x10]
// 004f710b  8b4008               mov eax, dword ptr [eax + 8]
// 004f710e  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 004f7111  03d5                 add edx, ebp
// 004f7113  3bd0                 cmp edx, eax
// 004f7115  89542414             mov dword ptr [esp + 0x14], edx
// 004f7119  0f8c15ffffff         jl 0x4f7034
// 004f711f  bd01000000           mov ebp, 1
// 004f7124  296c241c             sub dword ptr [esp + 0x1c], ebp
// 004f7128  0f89f5feffff         jns 0x4f7023
// 004f712e  6808f97900           push 0x79f908
// 004f7133  8bce                 mov ecx, esi
// 004f7135  e8d6680000           call 0x4fda10
// 004f713a  5f                   pop edi
// 004f713b  5e                   pop esi
// 004f713c  5d                   pop ebp
// 004f713d  5b                   pop ebx
// 004f713e  83c408               add esp, 8
// 004f7141  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\GImage_tga.cpp (function ?encodeTGA@GImage@G3D@@ABEXAAVBinaryOutput@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/GImage_tga.cpp
