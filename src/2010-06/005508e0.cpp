// roc 2010-06 005508e0  unit: G3D::Log  size: 905 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005508e0
//
// 005508e0  83ec08               sub esp, 8
// 005508e3  53                   push ebx
// 005508e4  55                   push ebp
// 005508e5  56                   push esi
// 005508e6  8b742418             mov esi, dword ptr [esp + 0x18]
// 005508ea  57                   push edi
// 005508eb  8bf9                 mov edi, ecx
// 005508ed  bd01000000           mov ebp, 1
// 005508f2  55                   push ebp
// 005508f3  8bce                 mov ecx, esi
// 005508f5  897c2414             mov dword ptr [esp + 0x14], edi
// 005508f9  e802000100           call 0x560900
// 005508fe  8b463c               mov eax, dword ptr [esi + 0x3c]
// 00550901  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00550904  03c5                 add eax, ebp
// 00550906  3bc8                 cmp ecx, eax
// 00550908  7c02                 jl 0x55090c
// 0055090a  8bc1                 mov eax, ecx
// 0055090c  3b4638               cmp eax, dword ptr [esi + 0x38]
// 0055090f  894634               mov dword ptr [esi + 0x34], eax
// 00550912  7e09                 jle 0x55091d
// 00550914  51                   push ecx
// 00550915  55                   push ebp
// 00550916  8bce                 mov ecx, esi
// 00550918  e803000100           call 0x560920
// 0055091d  8b463c               mov eax, dword ptr [esi + 0x3c]
// 00550920  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 00550923  c6040800             mov byte ptr [eax + ecx], 0
// 00550927  016e3c               add dword ptr [esi + 0x3c], ebp
// 0055092a  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0055092d  8b4634               mov eax, dword ptr [esi + 0x34]
// 00550930  41                   inc ecx
// 00550931  3bc1                 cmp eax, ecx
// 00550933  7c02                 jl 0x550937
// 00550935  8bc8                 mov ecx, eax
// 00550937  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 0055093a  894e34               mov dword ptr [esi + 0x34], ecx
// 0055093d  7e09                 jle 0x550948
// 0055093f  50                   push eax
// 00550940  55                   push ebp
// 00550941  8bce                 mov ecx, esi
// 00550943  e8d8ff0000           call 0x560920
// 00550948  8b563c               mov edx, dword ptr [esi + 0x3c]
// 0055094b  8b4630               mov eax, dword ptr [esi + 0x30]
// 0055094e  c6040200             mov byte ptr [edx + eax], 0
// 00550952  016e3c               add dword ptr [esi + 0x3c], ebp
// 00550955  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00550958  8b4634               mov eax, dword ptr [esi + 0x34]
// 0055095b  41                   inc ecx
// 0055095c  3bc1                 cmp eax, ecx
// 0055095e  7c02                 jl 0x550962
// 00550960  8bc8                 mov ecx, eax
// 00550962  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 00550965  894e34               mov dword ptr [esi + 0x34], ecx
// 00550968  7e09                 jle 0x550973
// 0055096a  50                   push eax
// 0055096b  55                   push ebp
// 0055096c  8bce                 mov ecx, esi
// 0055096e  e8adff0000           call 0x560920
// 00550973  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00550976  8b5630               mov edx, dword ptr [esi + 0x30]
// 00550979  c6041102             mov byte ptr [ecx + edx], 2
// 0055097d  016e3c               add dword ptr [esi + 0x3c], ebp
// 00550980  8b463c               mov eax, dword ptr [esi + 0x3c]
// 00550983  8d4805               lea ecx, [eax + 5]
// 00550986  3b4e34               cmp ecx, dword ptr [esi + 0x34]
// 00550989  7e0f                 jle 0x55099a
// 0055098b  8b5644               mov edx, dword ptr [esi + 0x44]
// 0055098e  8d440205             lea eax, [edx + eax + 5]
// 00550992  50                   push eax
// 00550993  8bce                 mov ecx, esi
// 00550995  e826f9ffff           call 0x5502c0
// 0055099a  83463c05             add dword ptr [esi + 0x3c], 5
// 0055099e  6a00                 push 0
// 005509a0  8bce                 mov ecx, esi
// 005509a2  e899000100           call 0x560a40
// 005509a7  6a00                 push 0
// 005509a9  8bce                 mov ecx, esi
// 005509ab  e890000100           call 0x560a40
// 005509b0  0fb74f08             movzx ecx, word ptr [edi + 8]
// 005509b4  51                   push ecx
// 005509b5  8bce                 mov ecx, esi
// 005509b7  e884000100           call 0x560a40
// 005509bc  0fb7570c             movzx edx, word ptr [edi + 0xc]
// 005509c0  52                   push edx
// 005509c1  8bce                 mov ecx, esi
// 005509c3  e878000100           call 0x560a40
// 005509c8  8a5f10               mov bl, byte ptr [edi + 0x10]
// 005509cb  8b463c               mov eax, dword ptr [esi + 0x3c]
// 005509ce  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 005509d1  02db                 add bl, bl
// 005509d3  02db                 add bl, bl
// 005509d5  03c5                 add eax, ebp
// 005509d7  02db                 add bl, bl
// 005509d9  3bc8                 cmp ecx, eax
// 005509db  7c02                 jl 0x5509df
// 005509dd  8bc1                 mov eax, ecx
// 005509df  3b4638               cmp eax, dword ptr [esi + 0x38]
// 005509e2  894634               mov dword ptr [esi + 0x34], eax
// 005509e5  7e09                 jle 0x5509f0
// 005509e7  51                   push ecx
// 005509e8  55                   push ebp
// 005509e9  8bce                 mov ecx, esi
// 005509eb  e830ff0000           call 0x560920
// 005509f0  8b463c               mov eax, dword ptr [esi + 0x3c]
// 005509f3  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 005509f6  881c08               mov byte ptr [eax + ecx], bl
// 005509f9  016e3c               add dword ptr [esi + 0x3c], ebp
// 005509fc  8b463c               mov eax, dword ptr [esi + 0x3c]
// 005509ff  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00550a02  bb03000000           mov ebx, 3
// 00550a07  40                   inc eax
// 00550a08  395f10               cmp dword ptr [edi + 0x10], ebx
// 00550a0b  7523                 jne 0x550a30
// 00550a0d  3bc8                 cmp ecx, eax
// 00550a0f  7c02                 jl 0x550a13
// 00550a11  8bc1                 mov eax, ecx
// 00550a13  3b4638               cmp eax, dword ptr [esi + 0x38]
// 00550a16  894634               mov dword ptr [esi + 0x34], eax
// 00550a19  7e09                 jle 0x550a24
// 00550a1b  51                   push ecx
// 00550a1c  55                   push ebp
// 00550a1d  8bce                 mov ecx, esi
// 00550a1f  e8fcfe0000           call 0x560920
// 00550a24  8b563c               mov edx, dword ptr [esi + 0x3c]
// 00550a27  8b4630               mov eax, dword ptr [esi + 0x30]
// 00550a2a  c6040200             mov byte ptr [edx + eax], 0
// 00550a2e  eb21                 jmp 0x550a51
// 00550a30  3bc8                 cmp ecx, eax
// 00550a32  7c02                 jl 0x550a36
// 00550a34  8bc1                 mov eax, ecx
// 00550a36  3b4638               cmp eax, dword ptr [esi + 0x38]
// 00550a39  894634               mov dword ptr [esi + 0x34], eax
// 00550a3c  7e09                 jle 0x550a47
// 00550a3e  51                   push ecx
// 00550a3f  55                   push ebp
// 00550a40  8bce                 mov ecx, esi
// 00550a42  e8d9fe0000           call 0x560920
// 00550a47  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00550a4a  8b5630               mov edx, dword ptr [esi + 0x30]
// 00550a4d  c6041108             mov byte ptr [ecx + edx], 8
// 00550a51  016e3c               add dword ptr [esi + 0x3c], ebp
// 00550a54  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00550a57  8b470c               mov eax, dword ptr [edi + 0xc]
// 00550a5a  395f10               cmp dword ptr [edi + 0x10], ebx
// 00550a5d  0f85d9000000         jne 0x550b3c
// 00550a63  2bc5                 sub eax, ebp
// 00550a65  8944241c             mov dword ptr [esp + 0x1c], eax
// 00550a69  0f88e4010000         js 0x550c53
// 00550a6f  90                   nop 
// 00550a70  8b4708               mov eax, dword ptr [edi + 8]
// 00550a73  33ed                 xor ebp, ebp
// 00550a75  85c0                 test eax, eax
// 00550a77  0f8eaf000000         jle 0x550b2c
// 00550a7d  8d4900               lea ecx, [ecx]
// 00550a80  0faf44241c           imul eax, dword ptr [esp + 0x1c]
// 00550a85  03c5                 add eax, ebp
// 00550a87  8d3c40               lea edi, [eax + eax*2]
// 00550a8a  8b442410             mov eax, dword ptr [esp + 0x10]
// 00550a8e  037804               add edi, dword ptr [eax + 4]
// 00550a91  8b4634               mov eax, dword ptr [esi + 0x34]
// 00550a94  8a5f02               mov bl, byte ptr [edi + 2]
// 00550a97  41                   inc ecx
// 00550a98  3bc1                 cmp eax, ecx
// 00550a9a  7c02                 jl 0x550a9e
// 00550a9c  8bc8                 mov ecx, eax
// 00550a9e  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 00550aa1  894e34               mov dword ptr [esi + 0x34], ecx
// 00550aa4  7e0a                 jle 0x550ab0
// 00550aa6  50                   push eax
// 00550aa7  6a01                 push 1
// 00550aa9  8bce                 mov ecx, esi
// 00550aab  e870fe0000           call 0x560920
// 00550ab0  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00550ab3  8b5630               mov edx, dword ptr [esi + 0x30]
// 00550ab6  881c11               mov byte ptr [ecx + edx], bl
// 00550ab9  ff463c               inc dword ptr [esi + 0x3c]
// 00550abc  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00550abf  8b4634               mov eax, dword ptr [esi + 0x34]
// 00550ac2  8a5f01               mov bl, byte ptr [edi + 1]
// 00550ac5  41                   inc ecx
// 00550ac6  3bc1                 cmp eax, ecx
// 00550ac8  7c02                 jl 0x550acc
// 00550aca  8bc8                 mov ecx, eax
// 00550acc  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 00550acf  894e34               mov dword ptr [esi + 0x34], ecx
// 00550ad2  7e0a                 jle 0x550ade
// 00550ad4  50                   push eax
// 00550ad5  6a01                 push 1
// 00550ad7  8bce                 mov ecx, esi
// 00550ad9  e842fe0000           call 0x560920
// 00550ade  8b463c               mov eax, dword ptr [esi + 0x3c]
// 00550ae1  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 00550ae4  881c08               mov byte ptr [eax + ecx], bl
// 00550ae7  ff463c               inc dword ptr [esi + 0x3c]
// 00550aea  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00550aed  8b4634               mov eax, dword ptr [esi + 0x34]
// 00550af0  8a1f                 mov bl, byte ptr [edi]
// 00550af2  41                   inc ecx
// 00550af3  3bc1                 cmp eax, ecx
// 00550af5  7c02                 jl 0x550af9
// 00550af7  8bc8                 mov ecx, eax
// 00550af9  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 00550afc  894e34               mov dword ptr [esi + 0x34], ecx
// 00550aff  7e0a                 jle 0x550b0b
// 00550b01  50                   push eax
// 00550b02  6a01                 push 1
// 00550b04  8bce                 mov ecx, esi
// 00550b06  e815fe0000           call 0x560920
// 00550b0b  8b563c               mov edx, dword ptr [esi + 0x3c]
// 00550b0e  8b4630               mov eax, dword ptr [esi + 0x30]
// 00550b11  881c02               mov byte ptr [edx + eax], bl
// 00550b14  ff463c               inc dword ptr [esi + 0x3c]
// 00550b17  8b542410             mov edx, dword ptr [esp + 0x10]
// 00550b1b  8b4208               mov eax, dword ptr [edx + 8]
// 00550b1e  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00550b21  45                   inc ebp
// 00550b22  3be8                 cmp ebp, eax
// 00550b24  0f8c56ffffff         jl 0x550a80
// 00550b2a  8bfa                 mov edi, edx
// 00550b2c  836c241c01           sub dword ptr [esp + 0x1c], 1
// 00550b31  0f8939ffffff         jns 0x550a70
// 00550b37  e917010000           jmp 0x550c53
// 00550b3c  2bc5                 sub eax, ebp
// 00550b3e  8944241c             mov dword ptr [esp + 0x1c], eax
// 00550b42  0f880b010000         js 0x550c53
// 00550b48  eb06                 jmp 0x550b50
// 00550b4a  8d9b00000000         lea ebx, [ebx]
// 00550b50  8b4708               mov eax, dword ptr [edi + 8]
// 00550b53  33d2                 xor edx, edx
// 00550b55  89542414             mov dword ptr [esp + 0x14], edx
// 00550b59  85c0                 test eax, eax
// 00550b5b  0f8ee8000000         jle 0x550c49
// 00550b61  0faf44241c           imul eax, dword ptr [esp + 0x1c]
// 00550b66  03c2                 add eax, edx
// 00550b68  8b5704               mov edx, dword ptr [edi + 4]
// 00550b6b  8a5c8202             mov bl, byte ptr [edx + eax*4 + 2]
// 00550b6f  8d3c82               lea edi, [edx + eax*4]
// 00550b72  8b4634               mov eax, dword ptr [esi + 0x34]
// 00550b75  41                   inc ecx
// 00550b76  3bc1                 cmp eax, ecx
// 00550b78  7c02                 jl 0x550b7c
// 00550b7a  8bc8                 mov ecx, eax
// 00550b7c  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 00550b7f  894e34               mov dword ptr [esi + 0x34], ecx
// 00550b82  bd01000000           mov ebp, 1
// 00550b87  7e09                 jle 0x550b92
// 00550b89  50                   push eax
// 00550b8a  55                   push ebp
// 00550b8b  8bce                 mov ecx, esi
// 00550b8d  e88efd0000           call 0x560920
// 00550b92  8b463c               mov eax, dword ptr [esi + 0x3c]
// 00550b95  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 00550b98  881c08               mov byte ptr [eax + ecx], bl
// 00550b9b  016e3c               add dword ptr [esi + 0x3c], ebp
// 00550b9e  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00550ba1  8b4634               mov eax, dword ptr [esi + 0x34]
// 00550ba4  8a5f01               mov bl, byte ptr [edi + 1]
// 00550ba7  41                   inc ecx
// 00550ba8  3bc1                 cmp eax, ecx
// 00550baa  7c02                 jl 0x550bae
// 00550bac  8bc8                 mov ecx, eax
// 00550bae  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 00550bb1  894e34               mov dword ptr [esi + 0x34], ecx
// 00550bb4  7e09                 jle 0x550bbf
// 00550bb6  50                   push eax
// 00550bb7  55                   push ebp
// 00550bb8  8bce                 mov ecx, esi
// 00550bba  e861fd0000           call 0x560920
// 00550bbf  8b563c               mov edx, dword ptr [esi + 0x3c]
// 00550bc2  8b4630               mov eax, dword ptr [esi + 0x30]
// 00550bc5  881c02               mov byte ptr [edx + eax], bl
// 00550bc8  016e3c               add dword ptr [esi + 0x3c], ebp
// 00550bcb  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00550bce  8b4634               mov eax, dword ptr [esi + 0x34]
// 00550bd1  8a1f                 mov bl, byte ptr [edi]
// 00550bd3  41                   inc ecx
// 00550bd4  3bc1                 cmp eax, ecx
// 00550bd6  7c02                 jl 0x550bda
// 00550bd8  8bc8                 mov ecx, eax
// 00550bda  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 00550bdd  894e34               mov dword ptr [esi + 0x34], ecx
// 00550be0  7e09                 jle 0x550beb
// 00550be2  50                   push eax
// 00550be3  55                   push ebp
// 00550be4  8bce                 mov ecx, esi
// 00550be6  e835fd0000           call 0x560920
// 00550beb  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00550bee  8b5630               mov edx, dword ptr [esi + 0x30]
// 00550bf1  881c11               mov byte ptr [ecx + edx], bl
// 00550bf4  016e3c               add dword ptr [esi + 0x3c], ebp
// 00550bf7  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00550bfa  8b4634               mov eax, dword ptr [esi + 0x34]
// 00550bfd  8a5f03               mov bl, byte ptr [edi + 3]
// 00550c00  41                   inc ecx
// 00550c01  3bc1                 cmp eax, ecx
// 00550c03  7c02                 jl 0x550c07
// 00550c05  8bc8                 mov ecx, eax
// 00550c07  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 00550c0a  894e34               mov dword ptr [esi + 0x34], ecx
// 00550c0d  7e09                 jle 0x550c18
// 00550c0f  50                   push eax
// 00550c10  55                   push ebp
// 00550c11  8bce                 mov ecx, esi
// 00550c13  e808fd0000           call 0x560920
// 00550c18  8b463c               mov eax, dword ptr [esi + 0x3c]
// 00550c1b  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 00550c1e  8b542414             mov edx, dword ptr [esp + 0x14]
// 00550c22  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00550c26  881c08               mov byte ptr [eax + ecx], bl
// 00550c29  016e3c               add dword ptr [esi + 0x3c], ebp
// 00550c2c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00550c30  8b4008               mov eax, dword ptr [eax + 8]
// 00550c33  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00550c36  03d5                 add edx, ebp
// 00550c38  3bd0                 cmp edx, eax
// 00550c3a  89542414             mov dword ptr [esp + 0x14], edx
// 00550c3e  0f8c1dffffff         jl 0x550b61
// 00550c44  bd01000000           mov ebp, 1
// 00550c49  296c241c             sub dword ptr [esp + 0x1c], ebp
// 00550c4d  0f89fdfeffff         jns 0x550b50
// 00550c53  680000a200           push 0xa20000
// 00550c58  8bce                 mov ecx, esi
// 00550c5a  e8c1fe0000           call 0x560b20
// 00550c5f  5f                   pop edi
// 00550c60  5e                   pop esi
// 00550c61  5d                   pop ebp
// 00550c62  5b                   pop ebx
// 00550c63  83c408               add esp, 8
// 00550c66  c20400               ret 4
// library g3d-6.09/G3Dcpp\GImage_tga.cpp (function ?encodeTGA@GImage@G3D@@ABEXAAVBinaryOutput@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_tga.cpp
