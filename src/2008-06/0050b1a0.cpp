// roc 2008-06 0050b1a0  unit: G3D::Log  size: 905 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0050b1a0
//
// 0050b1a0  83ec08               sub esp, 8
// 0050b1a3  53                   push ebx
// 0050b1a4  55                   push ebp
// 0050b1a5  56                   push esi
// 0050b1a6  8b742418             mov esi, dword ptr [esp + 0x18]
// 0050b1aa  57                   push edi
// 0050b1ab  8bf9                 mov edi, ecx
// 0050b1ad  bd01000000           mov ebp, 1
// 0050b1b2  55                   push ebp
// 0050b1b3  8bce                 mov ecx, esi
// 0050b1b5  897c2414             mov dword ptr [esp + 0x14], edi
// 0050b1b9  e852e60000           call 0x519810
// 0050b1be  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0050b1c1  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0050b1c4  03c5                 add eax, ebp
// 0050b1c6  3bc8                 cmp ecx, eax
// 0050b1c8  7c02                 jl 0x50b1cc
// 0050b1ca  8bc1                 mov eax, ecx
// 0050b1cc  3b4638               cmp eax, dword ptr [esi + 0x38]
// 0050b1cf  894634               mov dword ptr [esi + 0x34], eax
// 0050b1d2  7e09                 jle 0x50b1dd
// 0050b1d4  51                   push ecx
// 0050b1d5  55                   push ebp
// 0050b1d6  8bce                 mov ecx, esi
// 0050b1d8  e853e60000           call 0x519830
// 0050b1dd  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0050b1e0  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0050b1e3  c6040800             mov byte ptr [eax + ecx], 0
// 0050b1e7  016e3c               add dword ptr [esi + 0x3c], ebp
// 0050b1ea  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0050b1ed  8b4634               mov eax, dword ptr [esi + 0x34]
// 0050b1f0  41                   inc ecx
// 0050b1f1  3bc1                 cmp eax, ecx
// 0050b1f3  7c02                 jl 0x50b1f7
// 0050b1f5  8bc8                 mov ecx, eax
// 0050b1f7  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 0050b1fa  894e34               mov dword ptr [esi + 0x34], ecx
// 0050b1fd  7e09                 jle 0x50b208
// 0050b1ff  50                   push eax
// 0050b200  55                   push ebp
// 0050b201  8bce                 mov ecx, esi
// 0050b203  e828e60000           call 0x519830
// 0050b208  8b563c               mov edx, dword ptr [esi + 0x3c]
// 0050b20b  8b4630               mov eax, dword ptr [esi + 0x30]
// 0050b20e  c6040200             mov byte ptr [edx + eax], 0
// 0050b212  016e3c               add dword ptr [esi + 0x3c], ebp
// 0050b215  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0050b218  8b4634               mov eax, dword ptr [esi + 0x34]
// 0050b21b  41                   inc ecx
// 0050b21c  3bc1                 cmp eax, ecx
// 0050b21e  7c02                 jl 0x50b222
// 0050b220  8bc8                 mov ecx, eax
// 0050b222  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 0050b225  894e34               mov dword ptr [esi + 0x34], ecx
// 0050b228  7e09                 jle 0x50b233
// 0050b22a  50                   push eax
// 0050b22b  55                   push ebp
// 0050b22c  8bce                 mov ecx, esi
// 0050b22e  e8fde50000           call 0x519830
// 0050b233  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0050b236  8b5630               mov edx, dword ptr [esi + 0x30]
// 0050b239  c6041102             mov byte ptr [ecx + edx], 2
// 0050b23d  016e3c               add dword ptr [esi + 0x3c], ebp
// 0050b240  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0050b243  8d4805               lea ecx, [eax + 5]
// 0050b246  3b4e34               cmp ecx, dword ptr [esi + 0x34]
// 0050b249  7e0f                 jle 0x50b25a
// 0050b24b  8b5644               mov edx, dword ptr [esi + 0x44]
// 0050b24e  8d440205             lea eax, [edx + eax + 5]
// 0050b252  50                   push eax
// 0050b253  8bce                 mov ecx, esi
// 0050b255  e826f9ffff           call 0x50ab80
// 0050b25a  83463c05             add dword ptr [esi + 0x3c], 5
// 0050b25e  6a00                 push 0
// 0050b260  8bce                 mov ecx, esi
// 0050b262  e8e9e60000           call 0x519950
// 0050b267  6a00                 push 0
// 0050b269  8bce                 mov ecx, esi
// 0050b26b  e8e0e60000           call 0x519950
// 0050b270  0fb74f08             movzx ecx, word ptr [edi + 8]
// 0050b274  51                   push ecx
// 0050b275  8bce                 mov ecx, esi
// 0050b277  e8d4e60000           call 0x519950
// 0050b27c  0fb7570c             movzx edx, word ptr [edi + 0xc]
// 0050b280  52                   push edx
// 0050b281  8bce                 mov ecx, esi
// 0050b283  e8c8e60000           call 0x519950
// 0050b288  8a5f10               mov bl, byte ptr [edi + 0x10]
// 0050b28b  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0050b28e  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0050b291  02db                 add bl, bl
// 0050b293  02db                 add bl, bl
// 0050b295  03c5                 add eax, ebp
// 0050b297  02db                 add bl, bl
// 0050b299  3bc8                 cmp ecx, eax
// 0050b29b  7c02                 jl 0x50b29f
// 0050b29d  8bc1                 mov eax, ecx
// 0050b29f  3b4638               cmp eax, dword ptr [esi + 0x38]
// 0050b2a2  894634               mov dword ptr [esi + 0x34], eax
// 0050b2a5  7e09                 jle 0x50b2b0
// 0050b2a7  51                   push ecx
// 0050b2a8  55                   push ebp
// 0050b2a9  8bce                 mov ecx, esi
// 0050b2ab  e880e50000           call 0x519830
// 0050b2b0  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0050b2b3  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0050b2b6  881c08               mov byte ptr [eax + ecx], bl
// 0050b2b9  016e3c               add dword ptr [esi + 0x3c], ebp
// 0050b2bc  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0050b2bf  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0050b2c2  bb03000000           mov ebx, 3
// 0050b2c7  40                   inc eax
// 0050b2c8  395f10               cmp dword ptr [edi + 0x10], ebx
// 0050b2cb  7523                 jne 0x50b2f0
// 0050b2cd  3bc8                 cmp ecx, eax
// 0050b2cf  7c02                 jl 0x50b2d3
// 0050b2d1  8bc1                 mov eax, ecx
// 0050b2d3  3b4638               cmp eax, dword ptr [esi + 0x38]
// 0050b2d6  894634               mov dword ptr [esi + 0x34], eax
// 0050b2d9  7e09                 jle 0x50b2e4
// 0050b2db  51                   push ecx
// 0050b2dc  55                   push ebp
// 0050b2dd  8bce                 mov ecx, esi
// 0050b2df  e84ce50000           call 0x519830
// 0050b2e4  8b563c               mov edx, dword ptr [esi + 0x3c]
// 0050b2e7  8b4630               mov eax, dword ptr [esi + 0x30]
// 0050b2ea  c6040200             mov byte ptr [edx + eax], 0
// 0050b2ee  eb21                 jmp 0x50b311
// 0050b2f0  3bc8                 cmp ecx, eax
// 0050b2f2  7c02                 jl 0x50b2f6
// 0050b2f4  8bc1                 mov eax, ecx
// 0050b2f6  3b4638               cmp eax, dword ptr [esi + 0x38]
// 0050b2f9  894634               mov dword ptr [esi + 0x34], eax
// 0050b2fc  7e09                 jle 0x50b307
// 0050b2fe  51                   push ecx
// 0050b2ff  55                   push ebp
// 0050b300  8bce                 mov ecx, esi
// 0050b302  e829e50000           call 0x519830
// 0050b307  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0050b30a  8b5630               mov edx, dword ptr [esi + 0x30]
// 0050b30d  c6041108             mov byte ptr [ecx + edx], 8
// 0050b311  016e3c               add dword ptr [esi + 0x3c], ebp
// 0050b314  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0050b317  8b470c               mov eax, dword ptr [edi + 0xc]
// 0050b31a  395f10               cmp dword ptr [edi + 0x10], ebx
// 0050b31d  0f85d9000000         jne 0x50b3fc
// 0050b323  2bc5                 sub eax, ebp
// 0050b325  8944241c             mov dword ptr [esp + 0x1c], eax
// 0050b329  0f88e4010000         js 0x50b513
// 0050b32f  90                   nop 
// 0050b330  8b4708               mov eax, dword ptr [edi + 8]
// 0050b333  33ed                 xor ebp, ebp
// 0050b335  85c0                 test eax, eax
// 0050b337  0f8eaf000000         jle 0x50b3ec
// 0050b33d  8d4900               lea ecx, [ecx]
// 0050b340  0faf44241c           imul eax, dword ptr [esp + 0x1c]
// 0050b345  03c5                 add eax, ebp
// 0050b347  8d3c40               lea edi, [eax + eax*2]
// 0050b34a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0050b34e  037804               add edi, dword ptr [eax + 4]
// 0050b351  8b4634               mov eax, dword ptr [esi + 0x34]
// 0050b354  8a5f02               mov bl, byte ptr [edi + 2]
// 0050b357  41                   inc ecx
// 0050b358  3bc1                 cmp eax, ecx
// 0050b35a  7c02                 jl 0x50b35e
// 0050b35c  8bc8                 mov ecx, eax
// 0050b35e  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 0050b361  894e34               mov dword ptr [esi + 0x34], ecx
// 0050b364  7e0a                 jle 0x50b370
// 0050b366  50                   push eax
// 0050b367  6a01                 push 1
// 0050b369  8bce                 mov ecx, esi
// 0050b36b  e8c0e40000           call 0x519830
// 0050b370  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0050b373  8b5630               mov edx, dword ptr [esi + 0x30]
// 0050b376  881c11               mov byte ptr [ecx + edx], bl
// 0050b379  ff463c               inc dword ptr [esi + 0x3c]
// 0050b37c  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0050b37f  8b4634               mov eax, dword ptr [esi + 0x34]
// 0050b382  8a5f01               mov bl, byte ptr [edi + 1]
// 0050b385  41                   inc ecx
// 0050b386  3bc1                 cmp eax, ecx
// 0050b388  7c02                 jl 0x50b38c
// 0050b38a  8bc8                 mov ecx, eax
// 0050b38c  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 0050b38f  894e34               mov dword ptr [esi + 0x34], ecx
// 0050b392  7e0a                 jle 0x50b39e
// 0050b394  50                   push eax
// 0050b395  6a01                 push 1
// 0050b397  8bce                 mov ecx, esi
// 0050b399  e892e40000           call 0x519830
// 0050b39e  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0050b3a1  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0050b3a4  881c08               mov byte ptr [eax + ecx], bl
// 0050b3a7  ff463c               inc dword ptr [esi + 0x3c]
// 0050b3aa  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0050b3ad  8b4634               mov eax, dword ptr [esi + 0x34]
// 0050b3b0  8a1f                 mov bl, byte ptr [edi]
// 0050b3b2  41                   inc ecx
// 0050b3b3  3bc1                 cmp eax, ecx
// 0050b3b5  7c02                 jl 0x50b3b9
// 0050b3b7  8bc8                 mov ecx, eax
// 0050b3b9  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 0050b3bc  894e34               mov dword ptr [esi + 0x34], ecx
// 0050b3bf  7e0a                 jle 0x50b3cb
// 0050b3c1  50                   push eax
// 0050b3c2  6a01                 push 1
// 0050b3c4  8bce                 mov ecx, esi
// 0050b3c6  e865e40000           call 0x519830
// 0050b3cb  8b563c               mov edx, dword ptr [esi + 0x3c]
// 0050b3ce  8b4630               mov eax, dword ptr [esi + 0x30]
// 0050b3d1  881c02               mov byte ptr [edx + eax], bl
// 0050b3d4  ff463c               inc dword ptr [esi + 0x3c]
// 0050b3d7  8b542410             mov edx, dword ptr [esp + 0x10]
// 0050b3db  8b4208               mov eax, dword ptr [edx + 8]
// 0050b3de  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0050b3e1  45                   inc ebp
// 0050b3e2  3be8                 cmp ebp, eax
// 0050b3e4  0f8c56ffffff         jl 0x50b340
// 0050b3ea  8bfa                 mov edi, edx
// 0050b3ec  836c241c01           sub dword ptr [esp + 0x1c], 1
// 0050b3f1  0f8939ffffff         jns 0x50b330
// 0050b3f7  e917010000           jmp 0x50b513
// 0050b3fc  2bc5                 sub eax, ebp
// 0050b3fe  8944241c             mov dword ptr [esp + 0x1c], eax
// 0050b402  0f880b010000         js 0x50b513
// 0050b408  eb06                 jmp 0x50b410
// 0050b40a  8d9b00000000         lea ebx, [ebx]
// 0050b410  8b4708               mov eax, dword ptr [edi + 8]
// 0050b413  33d2                 xor edx, edx
// 0050b415  89542414             mov dword ptr [esp + 0x14], edx
// 0050b419  85c0                 test eax, eax
// 0050b41b  0f8ee8000000         jle 0x50b509
// 0050b421  0faf44241c           imul eax, dword ptr [esp + 0x1c]
// 0050b426  03c2                 add eax, edx
// 0050b428  8b5704               mov edx, dword ptr [edi + 4]
// 0050b42b  8a5c8202             mov bl, byte ptr [edx + eax*4 + 2]
// 0050b42f  8d3c82               lea edi, [edx + eax*4]
// 0050b432  8b4634               mov eax, dword ptr [esi + 0x34]
// 0050b435  41                   inc ecx
// 0050b436  3bc1                 cmp eax, ecx
// 0050b438  7c02                 jl 0x50b43c
// 0050b43a  8bc8                 mov ecx, eax
// 0050b43c  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 0050b43f  894e34               mov dword ptr [esi + 0x34], ecx
// 0050b442  bd01000000           mov ebp, 1
// 0050b447  7e09                 jle 0x50b452
// 0050b449  50                   push eax
// 0050b44a  55                   push ebp
// 0050b44b  8bce                 mov ecx, esi
// 0050b44d  e8dee30000           call 0x519830
// 0050b452  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0050b455  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0050b458  881c08               mov byte ptr [eax + ecx], bl
// 0050b45b  016e3c               add dword ptr [esi + 0x3c], ebp
// 0050b45e  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0050b461  8b4634               mov eax, dword ptr [esi + 0x34]
// 0050b464  8a5f01               mov bl, byte ptr [edi + 1]
// 0050b467  41                   inc ecx
// 0050b468  3bc1                 cmp eax, ecx
// 0050b46a  7c02                 jl 0x50b46e
// 0050b46c  8bc8                 mov ecx, eax
// 0050b46e  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 0050b471  894e34               mov dword ptr [esi + 0x34], ecx
// 0050b474  7e09                 jle 0x50b47f
// 0050b476  50                   push eax
// 0050b477  55                   push ebp
// 0050b478  8bce                 mov ecx, esi
// 0050b47a  e8b1e30000           call 0x519830
// 0050b47f  8b563c               mov edx, dword ptr [esi + 0x3c]
// 0050b482  8b4630               mov eax, dword ptr [esi + 0x30]
// 0050b485  881c02               mov byte ptr [edx + eax], bl
// 0050b488  016e3c               add dword ptr [esi + 0x3c], ebp
// 0050b48b  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0050b48e  8b4634               mov eax, dword ptr [esi + 0x34]
// 0050b491  8a1f                 mov bl, byte ptr [edi]
// 0050b493  41                   inc ecx
// 0050b494  3bc1                 cmp eax, ecx
// 0050b496  7c02                 jl 0x50b49a
// 0050b498  8bc8                 mov ecx, eax
// 0050b49a  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 0050b49d  894e34               mov dword ptr [esi + 0x34], ecx
// 0050b4a0  7e09                 jle 0x50b4ab
// 0050b4a2  50                   push eax
// 0050b4a3  55                   push ebp
// 0050b4a4  8bce                 mov ecx, esi
// 0050b4a6  e885e30000           call 0x519830
// 0050b4ab  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0050b4ae  8b5630               mov edx, dword ptr [esi + 0x30]
// 0050b4b1  881c11               mov byte ptr [ecx + edx], bl
// 0050b4b4  016e3c               add dword ptr [esi + 0x3c], ebp
// 0050b4b7  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0050b4ba  8b4634               mov eax, dword ptr [esi + 0x34]
// 0050b4bd  8a5f03               mov bl, byte ptr [edi + 3]
// 0050b4c0  41                   inc ecx
// 0050b4c1  3bc1                 cmp eax, ecx
// 0050b4c3  7c02                 jl 0x50b4c7
// 0050b4c5  8bc8                 mov ecx, eax
// 0050b4c7  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 0050b4ca  894e34               mov dword ptr [esi + 0x34], ecx
// 0050b4cd  7e09                 jle 0x50b4d8
// 0050b4cf  50                   push eax
// 0050b4d0  55                   push ebp
// 0050b4d1  8bce                 mov ecx, esi
// 0050b4d3  e858e30000           call 0x519830
// 0050b4d8  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0050b4db  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0050b4de  8b542414             mov edx, dword ptr [esp + 0x14]
// 0050b4e2  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0050b4e6  881c08               mov byte ptr [eax + ecx], bl
// 0050b4e9  016e3c               add dword ptr [esi + 0x3c], ebp
// 0050b4ec  8b442410             mov eax, dword ptr [esp + 0x10]
// 0050b4f0  8b4008               mov eax, dword ptr [eax + 8]
// 0050b4f3  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0050b4f6  03d5                 add edx, ebp
// 0050b4f8  3bd0                 cmp edx, eax
// 0050b4fa  89542414             mov dword ptr [esp + 0x14], edx
// 0050b4fe  0f8c1dffffff         jl 0x50b421
// 0050b504  bd01000000           mov ebp, 1
// 0050b509  296c241c             sub dword ptr [esp + 0x1c], ebp
// 0050b50d  0f89fdfeffff         jns 0x50b410
// 0050b513  68987e8200           push 0x827e98
// 0050b518  8bce                 mov ecx, esi
// 0050b51a  e811e50000           call 0x519a30
// 0050b51f  5f                   pop edi
// 0050b520  5e                   pop esi
// 0050b521  5d                   pop ebp
// 0050b522  5b                   pop ebx
// 0050b523  83c408               add esp, 8
// 0050b526  c20400               ret 4
// library g3d-6.09/G3Dcpp\GImage_tga.cpp (function ?encodeTGA@GImage@G3D@@ABEXAAVBinaryOutput@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_tga.cpp
