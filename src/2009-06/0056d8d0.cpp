// roc 2009-06 0056d8d0  unit: G3D::Log  size: 905 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056d8d0
//
// 0056d8d0  83ec08               sub esp, 8
// 0056d8d3  53                   push ebx
// 0056d8d4  55                   push ebp
// 0056d8d5  56                   push esi
// 0056d8d6  8b742418             mov esi, dword ptr [esp + 0x18]
// 0056d8da  57                   push edi
// 0056d8db  8bf9                 mov edi, ecx
// 0056d8dd  bd01000000           mov ebp, 1
// 0056d8e2  55                   push ebp
// 0056d8e3  8bce                 mov ecx, esi
// 0056d8e5  897c2414             mov dword ptr [esp + 0x14], edi
// 0056d8e9  e8c2f80000           call 0x57d1b0
// 0056d8ee  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0056d8f1  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0056d8f4  03c5                 add eax, ebp
// 0056d8f6  3bc8                 cmp ecx, eax
// 0056d8f8  7c02                 jl 0x56d8fc
// 0056d8fa  8bc1                 mov eax, ecx
// 0056d8fc  3b4638               cmp eax, dword ptr [esi + 0x38]
// 0056d8ff  894634               mov dword ptr [esi + 0x34], eax
// 0056d902  7e09                 jle 0x56d90d
// 0056d904  51                   push ecx
// 0056d905  55                   push ebp
// 0056d906  8bce                 mov ecx, esi
// 0056d908  e8c3f80000           call 0x57d1d0
// 0056d90d  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0056d910  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0056d913  c6040800             mov byte ptr [eax + ecx], 0
// 0056d917  016e3c               add dword ptr [esi + 0x3c], ebp
// 0056d91a  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0056d91d  8b4634               mov eax, dword ptr [esi + 0x34]
// 0056d920  41                   inc ecx
// 0056d921  3bc1                 cmp eax, ecx
// 0056d923  7c02                 jl 0x56d927
// 0056d925  8bc8                 mov ecx, eax
// 0056d927  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 0056d92a  894e34               mov dword ptr [esi + 0x34], ecx
// 0056d92d  7e09                 jle 0x56d938
// 0056d92f  50                   push eax
// 0056d930  55                   push ebp
// 0056d931  8bce                 mov ecx, esi
// 0056d933  e898f80000           call 0x57d1d0
// 0056d938  8b563c               mov edx, dword ptr [esi + 0x3c]
// 0056d93b  8b4630               mov eax, dword ptr [esi + 0x30]
// 0056d93e  c6040200             mov byte ptr [edx + eax], 0
// 0056d942  016e3c               add dword ptr [esi + 0x3c], ebp
// 0056d945  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0056d948  8b4634               mov eax, dword ptr [esi + 0x34]
// 0056d94b  41                   inc ecx
// 0056d94c  3bc1                 cmp eax, ecx
// 0056d94e  7c02                 jl 0x56d952
// 0056d950  8bc8                 mov ecx, eax
// 0056d952  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 0056d955  894e34               mov dword ptr [esi + 0x34], ecx
// 0056d958  7e09                 jle 0x56d963
// 0056d95a  50                   push eax
// 0056d95b  55                   push ebp
// 0056d95c  8bce                 mov ecx, esi
// 0056d95e  e86df80000           call 0x57d1d0
// 0056d963  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0056d966  8b5630               mov edx, dword ptr [esi + 0x30]
// 0056d969  c6041102             mov byte ptr [ecx + edx], 2
// 0056d96d  016e3c               add dword ptr [esi + 0x3c], ebp
// 0056d970  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0056d973  8d4805               lea ecx, [eax + 5]
// 0056d976  3b4e34               cmp ecx, dword ptr [esi + 0x34]
// 0056d979  7e0f                 jle 0x56d98a
// 0056d97b  8b5644               mov edx, dword ptr [esi + 0x44]
// 0056d97e  8d440205             lea eax, [edx + eax + 5]
// 0056d982  50                   push eax
// 0056d983  8bce                 mov ecx, esi
// 0056d985  e826f9ffff           call 0x56d2b0
// 0056d98a  83463c05             add dword ptr [esi + 0x3c], 5
// 0056d98e  6a00                 push 0
// 0056d990  8bce                 mov ecx, esi
// 0056d992  e859f90000           call 0x57d2f0
// 0056d997  6a00                 push 0
// 0056d999  8bce                 mov ecx, esi
// 0056d99b  e850f90000           call 0x57d2f0
// 0056d9a0  0fb74f08             movzx ecx, word ptr [edi + 8]
// 0056d9a4  51                   push ecx
// 0056d9a5  8bce                 mov ecx, esi
// 0056d9a7  e844f90000           call 0x57d2f0
// 0056d9ac  0fb7570c             movzx edx, word ptr [edi + 0xc]
// 0056d9b0  52                   push edx
// 0056d9b1  8bce                 mov ecx, esi
// 0056d9b3  e838f90000           call 0x57d2f0
// 0056d9b8  8a5f10               mov bl, byte ptr [edi + 0x10]
// 0056d9bb  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0056d9be  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0056d9c1  02db                 add bl, bl
// 0056d9c3  02db                 add bl, bl
// 0056d9c5  03c5                 add eax, ebp
// 0056d9c7  02db                 add bl, bl
// 0056d9c9  3bc8                 cmp ecx, eax
// 0056d9cb  7c02                 jl 0x56d9cf
// 0056d9cd  8bc1                 mov eax, ecx
// 0056d9cf  3b4638               cmp eax, dword ptr [esi + 0x38]
// 0056d9d2  894634               mov dword ptr [esi + 0x34], eax
// 0056d9d5  7e09                 jle 0x56d9e0
// 0056d9d7  51                   push ecx
// 0056d9d8  55                   push ebp
// 0056d9d9  8bce                 mov ecx, esi
// 0056d9db  e8f0f70000           call 0x57d1d0
// 0056d9e0  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0056d9e3  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0056d9e6  881c08               mov byte ptr [eax + ecx], bl
// 0056d9e9  016e3c               add dword ptr [esi + 0x3c], ebp
// 0056d9ec  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0056d9ef  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0056d9f2  bb03000000           mov ebx, 3
// 0056d9f7  40                   inc eax
// 0056d9f8  395f10               cmp dword ptr [edi + 0x10], ebx
// 0056d9fb  7523                 jne 0x56da20
// 0056d9fd  3bc8                 cmp ecx, eax
// 0056d9ff  7c02                 jl 0x56da03
// 0056da01  8bc1                 mov eax, ecx
// 0056da03  3b4638               cmp eax, dword ptr [esi + 0x38]
// 0056da06  894634               mov dword ptr [esi + 0x34], eax
// 0056da09  7e09                 jle 0x56da14
// 0056da0b  51                   push ecx
// 0056da0c  55                   push ebp
// 0056da0d  8bce                 mov ecx, esi
// 0056da0f  e8bcf70000           call 0x57d1d0
// 0056da14  8b563c               mov edx, dword ptr [esi + 0x3c]
// 0056da17  8b4630               mov eax, dword ptr [esi + 0x30]
// 0056da1a  c6040200             mov byte ptr [edx + eax], 0
// 0056da1e  eb21                 jmp 0x56da41
// 0056da20  3bc8                 cmp ecx, eax
// 0056da22  7c02                 jl 0x56da26
// 0056da24  8bc1                 mov eax, ecx
// 0056da26  3b4638               cmp eax, dword ptr [esi + 0x38]
// 0056da29  894634               mov dword ptr [esi + 0x34], eax
// 0056da2c  7e09                 jle 0x56da37
// 0056da2e  51                   push ecx
// 0056da2f  55                   push ebp
// 0056da30  8bce                 mov ecx, esi
// 0056da32  e899f70000           call 0x57d1d0
// 0056da37  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0056da3a  8b5630               mov edx, dword ptr [esi + 0x30]
// 0056da3d  c6041108             mov byte ptr [ecx + edx], 8
// 0056da41  016e3c               add dword ptr [esi + 0x3c], ebp
// 0056da44  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0056da47  8b470c               mov eax, dword ptr [edi + 0xc]
// 0056da4a  395f10               cmp dword ptr [edi + 0x10], ebx
// 0056da4d  0f85d9000000         jne 0x56db2c
// 0056da53  2bc5                 sub eax, ebp
// 0056da55  8944241c             mov dword ptr [esp + 0x1c], eax
// 0056da59  0f88e4010000         js 0x56dc43
// 0056da5f  90                   nop 
// 0056da60  8b4708               mov eax, dword ptr [edi + 8]
// 0056da63  33ed                 xor ebp, ebp
// 0056da65  85c0                 test eax, eax
// 0056da67  0f8eaf000000         jle 0x56db1c
// 0056da6d  8d4900               lea ecx, [ecx]
// 0056da70  0faf44241c           imul eax, dword ptr [esp + 0x1c]
// 0056da75  03c5                 add eax, ebp
// 0056da77  8d3c40               lea edi, [eax + eax*2]
// 0056da7a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0056da7e  037804               add edi, dword ptr [eax + 4]
// 0056da81  8b4634               mov eax, dword ptr [esi + 0x34]
// 0056da84  8a5f02               mov bl, byte ptr [edi + 2]
// 0056da87  41                   inc ecx
// 0056da88  3bc1                 cmp eax, ecx
// 0056da8a  7c02                 jl 0x56da8e
// 0056da8c  8bc8                 mov ecx, eax
// 0056da8e  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 0056da91  894e34               mov dword ptr [esi + 0x34], ecx
// 0056da94  7e0a                 jle 0x56daa0
// 0056da96  50                   push eax
// 0056da97  6a01                 push 1
// 0056da99  8bce                 mov ecx, esi
// 0056da9b  e830f70000           call 0x57d1d0
// 0056daa0  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0056daa3  8b5630               mov edx, dword ptr [esi + 0x30]
// 0056daa6  881c11               mov byte ptr [ecx + edx], bl
// 0056daa9  ff463c               inc dword ptr [esi + 0x3c]
// 0056daac  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0056daaf  8b4634               mov eax, dword ptr [esi + 0x34]
// 0056dab2  8a5f01               mov bl, byte ptr [edi + 1]
// 0056dab5  41                   inc ecx
// 0056dab6  3bc1                 cmp eax, ecx
// 0056dab8  7c02                 jl 0x56dabc
// 0056daba  8bc8                 mov ecx, eax
// 0056dabc  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 0056dabf  894e34               mov dword ptr [esi + 0x34], ecx
// 0056dac2  7e0a                 jle 0x56dace
// 0056dac4  50                   push eax
// 0056dac5  6a01                 push 1
// 0056dac7  8bce                 mov ecx, esi
// 0056dac9  e802f70000           call 0x57d1d0
// 0056dace  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0056dad1  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0056dad4  881c08               mov byte ptr [eax + ecx], bl
// 0056dad7  ff463c               inc dword ptr [esi + 0x3c]
// 0056dada  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0056dadd  8b4634               mov eax, dword ptr [esi + 0x34]
// 0056dae0  8a1f                 mov bl, byte ptr [edi]
// 0056dae2  41                   inc ecx
// 0056dae3  3bc1                 cmp eax, ecx
// 0056dae5  7c02                 jl 0x56dae9
// 0056dae7  8bc8                 mov ecx, eax
// 0056dae9  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 0056daec  894e34               mov dword ptr [esi + 0x34], ecx
// 0056daef  7e0a                 jle 0x56dafb
// 0056daf1  50                   push eax
// 0056daf2  6a01                 push 1
// 0056daf4  8bce                 mov ecx, esi
// 0056daf6  e8d5f60000           call 0x57d1d0
// 0056dafb  8b563c               mov edx, dword ptr [esi + 0x3c]
// 0056dafe  8b4630               mov eax, dword ptr [esi + 0x30]
// 0056db01  881c02               mov byte ptr [edx + eax], bl
// 0056db04  ff463c               inc dword ptr [esi + 0x3c]
// 0056db07  8b542410             mov edx, dword ptr [esp + 0x10]
// 0056db0b  8b4208               mov eax, dword ptr [edx + 8]
// 0056db0e  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0056db11  45                   inc ebp
// 0056db12  3be8                 cmp ebp, eax
// 0056db14  0f8c56ffffff         jl 0x56da70
// 0056db1a  8bfa                 mov edi, edx
// 0056db1c  836c241c01           sub dword ptr [esp + 0x1c], 1
// 0056db21  0f8939ffffff         jns 0x56da60
// 0056db27  e917010000           jmp 0x56dc43
// 0056db2c  2bc5                 sub eax, ebp
// 0056db2e  8944241c             mov dword ptr [esp + 0x1c], eax
// 0056db32  0f880b010000         js 0x56dc43
// 0056db38  eb06                 jmp 0x56db40
// 0056db3a  8d9b00000000         lea ebx, [ebx]
// 0056db40  8b4708               mov eax, dword ptr [edi + 8]
// 0056db43  33d2                 xor edx, edx
// 0056db45  89542414             mov dword ptr [esp + 0x14], edx
// 0056db49  85c0                 test eax, eax
// 0056db4b  0f8ee8000000         jle 0x56dc39
// 0056db51  0faf44241c           imul eax, dword ptr [esp + 0x1c]
// 0056db56  03c2                 add eax, edx
// 0056db58  8b5704               mov edx, dword ptr [edi + 4]
// 0056db5b  8a5c8202             mov bl, byte ptr [edx + eax*4 + 2]
// 0056db5f  8d3c82               lea edi, [edx + eax*4]
// 0056db62  8b4634               mov eax, dword ptr [esi + 0x34]
// 0056db65  41                   inc ecx
// 0056db66  3bc1                 cmp eax, ecx
// 0056db68  7c02                 jl 0x56db6c
// 0056db6a  8bc8                 mov ecx, eax
// 0056db6c  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 0056db6f  894e34               mov dword ptr [esi + 0x34], ecx
// 0056db72  bd01000000           mov ebp, 1
// 0056db77  7e09                 jle 0x56db82
// 0056db79  50                   push eax
// 0056db7a  55                   push ebp
// 0056db7b  8bce                 mov ecx, esi
// 0056db7d  e84ef60000           call 0x57d1d0
// 0056db82  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0056db85  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0056db88  881c08               mov byte ptr [eax + ecx], bl
// 0056db8b  016e3c               add dword ptr [esi + 0x3c], ebp
// 0056db8e  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0056db91  8b4634               mov eax, dword ptr [esi + 0x34]
// 0056db94  8a5f01               mov bl, byte ptr [edi + 1]
// 0056db97  41                   inc ecx
// 0056db98  3bc1                 cmp eax, ecx
// 0056db9a  7c02                 jl 0x56db9e
// 0056db9c  8bc8                 mov ecx, eax
// 0056db9e  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 0056dba1  894e34               mov dword ptr [esi + 0x34], ecx
// 0056dba4  7e09                 jle 0x56dbaf
// 0056dba6  50                   push eax
// 0056dba7  55                   push ebp
// 0056dba8  8bce                 mov ecx, esi
// 0056dbaa  e821f60000           call 0x57d1d0
// 0056dbaf  8b563c               mov edx, dword ptr [esi + 0x3c]
// 0056dbb2  8b4630               mov eax, dword ptr [esi + 0x30]
// 0056dbb5  881c02               mov byte ptr [edx + eax], bl
// 0056dbb8  016e3c               add dword ptr [esi + 0x3c], ebp
// 0056dbbb  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0056dbbe  8b4634               mov eax, dword ptr [esi + 0x34]
// 0056dbc1  8a1f                 mov bl, byte ptr [edi]
// 0056dbc3  41                   inc ecx
// 0056dbc4  3bc1                 cmp eax, ecx
// 0056dbc6  7c02                 jl 0x56dbca
// 0056dbc8  8bc8                 mov ecx, eax
// 0056dbca  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 0056dbcd  894e34               mov dword ptr [esi + 0x34], ecx
// 0056dbd0  7e09                 jle 0x56dbdb
// 0056dbd2  50                   push eax
// 0056dbd3  55                   push ebp
// 0056dbd4  8bce                 mov ecx, esi
// 0056dbd6  e8f5f50000           call 0x57d1d0
// 0056dbdb  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0056dbde  8b5630               mov edx, dword ptr [esi + 0x30]
// 0056dbe1  881c11               mov byte ptr [ecx + edx], bl
// 0056dbe4  016e3c               add dword ptr [esi + 0x3c], ebp
// 0056dbe7  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0056dbea  8b4634               mov eax, dword ptr [esi + 0x34]
// 0056dbed  8a5f03               mov bl, byte ptr [edi + 3]
// 0056dbf0  41                   inc ecx
// 0056dbf1  3bc1                 cmp eax, ecx
// 0056dbf3  7c02                 jl 0x56dbf7
// 0056dbf5  8bc8                 mov ecx, eax
// 0056dbf7  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 0056dbfa  894e34               mov dword ptr [esi + 0x34], ecx
// 0056dbfd  7e09                 jle 0x56dc08
// 0056dbff  50                   push eax
// 0056dc00  55                   push ebp
// 0056dc01  8bce                 mov ecx, esi
// 0056dc03  e8c8f50000           call 0x57d1d0
// 0056dc08  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0056dc0b  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0056dc0e  8b542414             mov edx, dword ptr [esp + 0x14]
// 0056dc12  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0056dc16  881c08               mov byte ptr [eax + ecx], bl
// 0056dc19  016e3c               add dword ptr [esi + 0x3c], ebp
// 0056dc1c  8b442410             mov eax, dword ptr [esp + 0x10]
// 0056dc20  8b4008               mov eax, dword ptr [eax + 8]
// 0056dc23  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0056dc26  03d5                 add edx, ebp
// 0056dc28  3bd0                 cmp edx, eax
// 0056dc2a  89542414             mov dword ptr [esp + 0x14], edx
// 0056dc2e  0f8c1dffffff         jl 0x56db51
// 0056dc34  bd01000000           mov ebp, 1
// 0056dc39  296c241c             sub dword ptr [esp + 0x1c], ebp
// 0056dc3d  0f89fdfeffff         jns 0x56db40
// 0056dc43  68f0b28c00           push 0x8cb2f0
// 0056dc48  8bce                 mov ecx, esi
// 0056dc4a  e881f70000           call 0x57d3d0
// 0056dc4f  5f                   pop edi
// 0056dc50  5e                   pop esi
// 0056dc51  5d                   pop ebp
// 0056dc52  5b                   pop ebx
// 0056dc53  83c408               add esp, 8
// 0056dc56  c20400               ret 4
// library g3d-6.09/G3Dcpp\GImage_tga.cpp (function ?encodeTGA@GImage@G3D@@ABEXAAVBinaryOutput@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_tga.cpp
