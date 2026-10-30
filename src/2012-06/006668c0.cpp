// from server: 100% by auto
// roc 2012-06 006668c0  unit: seg_00660000  size: 649 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006668c0
//
// 006668c0  83ec2c               sub esp, 0x2c
// 006668c3  53                   push ebx
// 006668c4  55                   push ebp
// 006668c5  56                   push esi
// 006668c6  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 006668ca  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 006668d0  8bae48010000         mov ebp, dword ptr [esi + 0x148]
// 006668d6  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 006668dc  48                   dec eax
// 006668dd  89442430             mov dword ptr [esp + 0x30], eax
// 006668e1  8b4510               mov eax, dword ptr [ebp + 0x10]
// 006668e4  49                   dec ecx
// 006668e5  3b4514               cmp eax, dword ptr [ebp + 0x14]
// 006668e8  57                   push edi
// 006668e9  894c2420             mov dword ptr [esp + 0x20], ecx
// 006668ed  89442410             mov dword ptr [esp + 0x10], eax
// 006668f1  7c33                 jl 0x666926
// 006668f3  ff4508               inc dword ptr [ebp + 8]
// 006668f6  83bee400000001       cmp dword ptr [esi + 0xe4], 1
// 006668fd  8b8648010000         mov eax, dword ptr [esi + 0x148]
// 00666903  0f8e11020000         jle 0x666b1a
// 00666909  5f                   pop edi
// 0066690a  5e                   pop esi
// 0066690b  33c9                 xor ecx, ecx
// 0066690d  5d                   pop ebp
// 0066690e  c7401401000000       mov dword ptr [eax + 0x14], 1
// 00666915  89480c               mov dword ptr [eax + 0xc], ecx
// 00666918  894810               mov dword ptr [eax + 0x10], ecx
// 0066691b  b001                 mov al, 1
// 0066691d  5b                   pop ebx
// 0066691e  83c42c               add esp, 0x2c
// 00666921  c3                   ret 
// 00666922  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00666926  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 00666929  895c2414             mov dword ptr [esp + 0x14], ebx
// 0066692d  3bd9                 cmp ebx, ecx
// 0066692f  0f87b7010000         ja 0x666aec
// 00666935  eb09                 jmp 0x666940
// 00666937  8da42400000000       lea esp, [esp]
// 0066693e  8bff                 mov edi, edi
// 00666940  33ff                 xor edi, edi
// 00666942  39bee4000000         cmp dword ptr [esi + 0xe4], edi
// 00666948  897c242c             mov dword ptr [esp + 0x2c], edi
// 0066694c  0f8e70010000         jle 0x666ac2
// 00666952  81c6e8000000         add esi, 0xe8
// 00666958  89742430             mov dword ptr [esp + 0x30], esi
// 0066695c  8d642400             lea esp, [esp]
// 00666960  8b36                 mov esi, dword ptr [esi]
// 00666962  3b5c2420             cmp ebx, dword ptr [esp + 0x20]
// 00666966  7305                 jae 0x66696d
// 00666968  8b5e34               mov ebx, dword ptr [esi + 0x34]
// 0066696b  eb03                 jmp 0x666970
// 0066696d  8b5e44               mov ebx, dword ptr [esi + 0x44]
// 00666970  8b4640               mov eax, dword ptr [esi + 0x40]
// 00666973  0faf442414           imul eax, dword ptr [esp + 0x14]
// 00666978  89442438             mov dword ptr [esp + 0x38], eax
// 0066697c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00666980  03c0                 add eax, eax
// 00666982  03c0                 add eax, eax
// 00666984  03c0                 add eax, eax
// 00666986  837e3800             cmp dword ptr [esi + 0x38], 0
// 0066698a  895c2424             mov dword ptr [esp + 0x24], ebx
// 0066698e  89442418             mov dword ptr [esp + 0x18], eax
// 00666992  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0066699a  0f8ef8000000         jle 0x666a98
// 006669a0  8b4634               mov eax, dword ptr [esi + 0x34]
// 006669a3  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006669a7  394d08               cmp dword ptr [ebp + 8], ecx
// 006669aa  7252                 jb 0x6669fe
// 006669ac  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006669b0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006669b4  03d1                 add edx, ecx
// 006669b6  3b5648               cmp edx, dword ptr [esi + 0x48]
// 006669b9  7c43                 jl 0x6669fe
// 006669bb  8b54bd18             mov edx, dword ptr [ebp + edi*4 + 0x18]
// 006669bf  c1e007               shl eax, 7
// 006669c2  50                   push eax
// 006669c3  52                   push edx
// 006669c4  e887cbfeff           call 0x653550
// 006669c9  33c0                 xor eax, eax
// 006669cb  83c408               add esp, 8
// 006669ce  394634               cmp dword ptr [esi + 0x34], eax
// 006669d1  0f8ea5000000         jle 0x666a7c
// 006669d7  8d4cbd18             lea ecx, [ebp + edi*4 + 0x18]
// 006669db  eb03                 jmp 0x6669e0
// 006669dd  8d4900               lea ecx, [ecx]
// 006669e0  8b54bd14             mov edx, dword ptr [ebp + edi*4 + 0x14]
// 006669e4  8b19                 mov ebx, dword ptr [ecx]
// 006669e6  668b12               mov dx, word ptr [edx]
// 006669e9  40                   inc eax
// 006669ea  668913               mov word ptr [ebx], dx
// 006669ed  83c104               add ecx, 4
// 006669f0  3b4634               cmp eax, dword ptr [esi + 0x34]
// 006669f3  7ceb                 jl 0x6669e0
// 006669f5  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 006669f9  e97e000000           jmp 0x666a7c
// 006669fe  8b442440             mov eax, dword ptr [esp + 0x40]
// 00666a02  8b8858010000         mov ecx, dword ptr [eax + 0x158]
// 00666a08  8b542438             mov edx, dword ptr [esp + 0x38]
// 00666a0c  8b442418             mov eax, dword ptr [esp + 0x18]
// 00666a10  53                   push ebx
// 00666a11  52                   push edx
// 00666a12  8b54bd18             mov edx, dword ptr [ebp + edi*4 + 0x18]
// 00666a16  50                   push eax
// 00666a17  8b4604               mov eax, dword ptr [esi + 4]
// 00666a1a  52                   push edx
// 00666a1b  8b542454             mov edx, dword ptr [esp + 0x54]
// 00666a1f  8b0482               mov eax, dword ptr [edx + eax*4]
// 00666a22  8b542450             mov edx, dword ptr [esp + 0x50]
// 00666a26  50                   push eax
// 00666a27  8b4104               mov eax, dword ptr [ecx + 4]
// 00666a2a  56                   push esi
// 00666a2b  52                   push edx
// 00666a2c  ffd0                 call eax
// 00666a2e  8b4634               mov eax, dword ptr [esi + 0x34]
// 00666a31  83c41c               add esp, 0x1c
// 00666a34  3bd8                 cmp ebx, eax
// 00666a36  7d44                 jge 0x666a7c
// 00666a38  2bc3                 sub eax, ebx
// 00666a3a  c1e007               shl eax, 7
// 00666a3d  8d0c3b               lea ecx, [ebx + edi]
// 00666a40  8b548d18             mov edx, dword ptr [ebp + ecx*4 + 0x18]
// 00666a44  50                   push eax
// 00666a45  52                   push edx
// 00666a46  e805cbfeff           call 0x653550
// 00666a4b  83c408               add esp, 8
// 00666a4e  3b5e34               cmp ebx, dword ptr [esi + 0x34]
// 00666a51  895c2428             mov dword ptr [esp + 0x28], ebx
// 00666a55  7d25                 jge 0x666a7c
// 00666a57  8d043b               lea eax, [ebx + edi]
// 00666a5a  8d448518             lea eax, [ebp + eax*4 + 0x18]
// 00666a5e  8bff                 mov edi, edi
// 00666a60  8b48fc               mov ecx, dword ptr [eax - 4]
// 00666a63  668b09               mov cx, word ptr [ecx]
// 00666a66  8b10                 mov edx, dword ptr [eax]
// 00666a68  66890a               mov word ptr [edx], cx
// 00666a6b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00666a6f  41                   inc ecx
// 00666a70  83c004               add eax, 4
// 00666a73  3b4e34               cmp ecx, dword ptr [esi + 0x34]
// 00666a76  894c2428             mov dword ptr [esp + 0x28], ecx
// 00666a7a  7ce4                 jl 0x666a60
// 00666a7c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00666a80  8b4634               mov eax, dword ptr [esi + 0x34]
// 00666a83  8344241808           add dword ptr [esp + 0x18], 8
// 00666a88  41                   inc ecx
// 00666a89  03f8                 add edi, eax
// 00666a8b  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 00666a8e  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00666a92  0f8c0bffffff         jl 0x6669a3
// 00666a98  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00666a9c  8b742430             mov esi, dword ptr [esp + 0x30]
// 00666aa0  8b542440             mov edx, dword ptr [esp + 0x40]
// 00666aa4  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00666aa8  40                   inc eax
// 00666aa9  83c604               add esi, 4
// 00666aac  3b82e4000000         cmp eax, dword ptr [edx + 0xe4]
// 00666ab2  8944242c             mov dword ptr [esp + 0x2c], eax
// 00666ab6  89742430             mov dword ptr [esp + 0x30], esi
// 00666aba  0f8ca0feffff         jl 0x666960
// 00666ac0  8bf2                 mov esi, edx
// 00666ac2  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00666ac8  8b5104               mov edx, dword ptr [ecx + 4]
// 00666acb  8d4518               lea eax, [ebp + 0x18]
// 00666ace  50                   push eax
// 00666acf  56                   push esi
// 00666ad0  ffd2                 call edx
// 00666ad2  83c408               add esp, 8
// 00666ad5  84c0                 test al, al
// 00666ad7  742d                 je 0x666b06
// 00666ad9  43                   inc ebx
// 00666ada  895c2414             mov dword ptr [esp + 0x14], ebx
// 00666ade  3b5c2420             cmp ebx, dword ptr [esp + 0x20]
// 00666ae2  0f8658feffff         jbe 0x666940
// 00666ae8  8b442410             mov eax, dword ptr [esp + 0x10]
// 00666aec  40                   inc eax
// 00666aed  c7450c00000000       mov dword ptr [ebp + 0xc], 0
// 00666af4  3b4514               cmp eax, dword ptr [ebp + 0x14]
// 00666af7  89442410             mov dword ptr [esp + 0x10], eax
// 00666afb  0f8c21feffff         jl 0x666922
// 00666b01  e9edfdffff           jmp 0x6668f3
// 00666b06  8b442410             mov eax, dword ptr [esp + 0x10]
// 00666b0a  5f                   pop edi
// 00666b0b  5e                   pop esi
// 00666b0c  894510               mov dword ptr [ebp + 0x10], eax
// 00666b0f  895d0c               mov dword ptr [ebp + 0xc], ebx
// 00666b12  5d                   pop ebp
// 00666b13  32c0                 xor al, al
// 00666b15  5b                   pop ebx
// 00666b16  83c42c               add esp, 0x2c
// 00666b19  c3                   ret 
// 00666b1a  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 00666b20  8b96e8000000         mov edx, dword ptr [esi + 0xe8]
// 00666b26  49                   dec ecx
// 00666b27  394808               cmp dword ptr [eax + 8], ecx
// 00666b2a  7305                 jae 0x666b31
// 00666b2c  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 00666b2f  eb03                 jmp 0x666b34
// 00666b31  8b4a48               mov ecx, dword ptr [edx + 0x48]
// 00666b34  5f                   pop edi
// 00666b35  894814               mov dword ptr [eax + 0x14], ecx
// 00666b38  5e                   pop esi
// 00666b39  33c9                 xor ecx, ecx
// 00666b3b  5d                   pop ebp
// 00666b3c  89480c               mov dword ptr [eax + 0xc], ecx
// 00666b3f  894810               mov dword ptr [eax + 0x10], ecx
// 00666b42  b001                 mov al, 1
// 00666b44  5b                   pop ebx
// 00666b45  83c42c               add esp, 0x2c
// 00666b48  c3                   ret 
// library jpeg-6b/jccoefct.c (function _compress_data)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccoefct.c
