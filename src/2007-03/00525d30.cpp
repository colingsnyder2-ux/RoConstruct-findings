// roc 2007-03 00525d30  unit: seg_00520000  size: 581 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00525d30
//
// 00525d30  83ec2c               sub esp, 0x2c
// 00525d33  53                   push ebx
// 00525d34  55                   push ebp
// 00525d35  56                   push esi
// 00525d36  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00525d3a  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 00525d40  8b9e48010000         mov ebx, dword ptr [esi + 0x148]
// 00525d46  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 00525d4c  83e801               sub eax, 1
// 00525d4f  89442430             mov dword ptr [esp + 0x30], eax
// 00525d53  8b4310               mov eax, dword ptr [ebx + 0x10]
// 00525d56  83e901               sub ecx, 1
// 00525d59  3b4314               cmp eax, dword ptr [ebx + 0x14]
// 00525d5c  57                   push edi
// 00525d5d  894c2420             mov dword ptr [esp + 0x20], ecx
// 00525d61  89442410             mov dword ptr [esp + 0x10], eax
// 00525d65  7c1d                 jl 0x525d84
// 00525d67  83430801             add dword ptr [ebx + 8], 1
// 00525d6b  8bce                 mov ecx, esi
// 00525d6d  e86effffff           call 0x525ce0
// 00525d72  5f                   pop edi
// 00525d73  5e                   pop esi
// 00525d74  5d                   pop ebp
// 00525d75  b001                 mov al, 1
// 00525d77  5b                   pop ebx
// 00525d78  83c42c               add esp, 0x2c
// 00525d7b  c3                   ret 
// 00525d7c  8d642400             lea esp, [esp]
// 00525d80  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00525d84  8b6b0c               mov ebp, dword ptr [ebx + 0xc]
// 00525d87  3be9                 cmp ebp, ecx
// 00525d89  896c2414             mov dword ptr [esp + 0x14], ebp
// 00525d8d  0f87b2010000         ja 0x525f45
// 00525d93  33ff                 xor edi, edi
// 00525d95  39bee4000000         cmp dword ptr [esi + 0xe4], edi
// 00525d9b  897c242c             mov dword ptr [esp + 0x2c], edi
// 00525d9f  0f8e74010000         jle 0x525f19
// 00525da5  81c6e8000000         add esi, 0xe8
// 00525dab  89742430             mov dword ptr [esp + 0x30], esi
// 00525daf  90                   nop 
// 00525db0  3b6c2420             cmp ebp, dword ptr [esp + 0x20]
// 00525db4  8b36                 mov esi, dword ptr [esi]
// 00525db6  7305                 jae 0x525dbd
// 00525db8  8b6e34               mov ebp, dword ptr [esi + 0x34]
// 00525dbb  eb03                 jmp 0x525dc0
// 00525dbd  8b6e44               mov ebp, dword ptr [esi + 0x44]
// 00525dc0  8b4640               mov eax, dword ptr [esi + 0x40]
// 00525dc3  0faf442414           imul eax, dword ptr [esp + 0x14]
// 00525dc8  89442438             mov dword ptr [esp + 0x38], eax
// 00525dcc  8b442410             mov eax, dword ptr [esp + 0x10]
// 00525dd0  03c0                 add eax, eax
// 00525dd2  03c0                 add eax, eax
// 00525dd4  03c0                 add eax, eax
// 00525dd6  837e3800             cmp dword ptr [esi + 0x38], 0
// 00525dda  896c2424             mov dword ptr [esp + 0x24], ebp
// 00525dde  89442418             mov dword ptr [esp + 0x18], eax
// 00525de2  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00525dea  0f8efd000000         jle 0x525eed
// 00525df0  8b4634               mov eax, dword ptr [esi + 0x34]
// 00525df3  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00525df7  394b08               cmp dword ptr [ebx + 8], ecx
// 00525dfa  7255                 jb 0x525e51
// 00525dfc  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00525e00  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00525e04  03d1                 add edx, ecx
// 00525e06  3b5648               cmp edx, dword ptr [esi + 0x48]
// 00525e09  7c46                 jl 0x525e51
// 00525e0b  8b54bb18             mov edx, dword ptr [ebx + edi*4 + 0x18]
// 00525e0f  c1e007               shl eax, 7
// 00525e12  50                   push eax
// 00525e13  52                   push edx
// 00525e14  e897e8feff           call 0x5146b0
// 00525e19  33c0                 xor eax, eax
// 00525e1b  83c408               add esp, 8
// 00525e1e  394634               cmp dword ptr [esi + 0x34], eax
// 00525e21  0f8ea8000000         jle 0x525ecf
// 00525e27  8d4cbb18             lea ecx, [ebx + edi*4 + 0x18]
// 00525e2b  eb03                 jmp 0x525e30
// 00525e2d  8d4900               lea ecx, [ecx]
// 00525e30  8b54bb14             mov edx, dword ptr [ebx + edi*4 + 0x14]
// 00525e34  8b29                 mov ebp, dword ptr [ecx]
// 00525e36  668b12               mov dx, word ptr [edx]
// 00525e39  83c001               add eax, 1
// 00525e3c  66895500             mov word ptr [ebp], dx
// 00525e40  83c104               add ecx, 4
// 00525e43  3b4634               cmp eax, dword ptr [esi + 0x34]
// 00525e46  7ce8                 jl 0x525e30
// 00525e48  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00525e4c  e97e000000           jmp 0x525ecf
// 00525e51  8b442440             mov eax, dword ptr [esp + 0x40]
// 00525e55  8b8858010000         mov ecx, dword ptr [eax + 0x158]
// 00525e5b  8b542438             mov edx, dword ptr [esp + 0x38]
// 00525e5f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00525e63  55                   push ebp
// 00525e64  52                   push edx
// 00525e65  8b54bb18             mov edx, dword ptr [ebx + edi*4 + 0x18]
// 00525e69  50                   push eax
// 00525e6a  8b4604               mov eax, dword ptr [esi + 4]
// 00525e6d  52                   push edx
// 00525e6e  8b542454             mov edx, dword ptr [esp + 0x54]
// 00525e72  8b0482               mov eax, dword ptr [edx + eax*4]
// 00525e75  8b542450             mov edx, dword ptr [esp + 0x50]
// 00525e79  50                   push eax
// 00525e7a  8b4104               mov eax, dword ptr [ecx + 4]
// 00525e7d  56                   push esi
// 00525e7e  52                   push edx
// 00525e7f  ffd0                 call eax
// 00525e81  8b4634               mov eax, dword ptr [esi + 0x34]
// 00525e84  83c41c               add esp, 0x1c
// 00525e87  3be8                 cmp ebp, eax
// 00525e89  7d44                 jge 0x525ecf
// 00525e8b  2bc5                 sub eax, ebp
// 00525e8d  c1e007               shl eax, 7
// 00525e90  8d0c2f               lea ecx, [edi + ebp]
// 00525e93  8b548b18             mov edx, dword ptr [ebx + ecx*4 + 0x18]
// 00525e97  50                   push eax
// 00525e98  52                   push edx
// 00525e99  e812e8feff           call 0x5146b0
// 00525e9e  83c408               add esp, 8
// 00525ea1  3b6e34               cmp ebp, dword ptr [esi + 0x34]
// 00525ea4  896c2428             mov dword ptr [esp + 0x28], ebp
// 00525ea8  7d25                 jge 0x525ecf
// 00525eaa  8d042f               lea eax, [edi + ebp]
// 00525ead  8d448318             lea eax, [ebx + eax*4 + 0x18]
// 00525eb1  8b48fc               mov ecx, dword ptr [eax - 4]
// 00525eb4  668b09               mov cx, word ptr [ecx]
// 00525eb7  8b10                 mov edx, dword ptr [eax]
// 00525eb9  66890a               mov word ptr [edx], cx
// 00525ebc  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00525ec0  83c101               add ecx, 1
// 00525ec3  83c004               add eax, 4
// 00525ec6  3b4e34               cmp ecx, dword ptr [esi + 0x34]
// 00525ec9  894c2428             mov dword ptr [esp + 0x28], ecx
// 00525ecd  7ce2                 jl 0x525eb1
// 00525ecf  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00525ed3  8b4634               mov eax, dword ptr [esi + 0x34]
// 00525ed6  8344241808           add dword ptr [esp + 0x18], 8
// 00525edb  83c101               add ecx, 1
// 00525ede  03f8                 add edi, eax
// 00525ee0  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 00525ee3  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00525ee7  0f8c06ffffff         jl 0x525df3
// 00525eed  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00525ef1  8b742430             mov esi, dword ptr [esp + 0x30]
// 00525ef5  8b542440             mov edx, dword ptr [esp + 0x40]
// 00525ef9  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00525efd  83c001               add eax, 1
// 00525f00  83c604               add esi, 4
// 00525f03  3b82e4000000         cmp eax, dword ptr [edx + 0xe4]
// 00525f09  8944242c             mov dword ptr [esp + 0x2c], eax
// 00525f0d  89742430             mov dword ptr [esp + 0x30], esi
// 00525f11  0f8c99feffff         jl 0x525db0
// 00525f17  8bf2                 mov esi, edx
// 00525f19  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00525f1f  8b5104               mov edx, dword ptr [ecx + 4]
// 00525f22  8d4318               lea eax, [ebx + 0x18]
// 00525f25  50                   push eax
// 00525f26  56                   push esi
// 00525f27  ffd2                 call edx
// 00525f29  83c408               add esp, 8
// 00525f2c  84c0                 test al, al
// 00525f2e  7431                 je 0x525f61
// 00525f30  83c501               add ebp, 1
// 00525f33  3b6c2420             cmp ebp, dword ptr [esp + 0x20]
// 00525f37  896c2414             mov dword ptr [esp + 0x14], ebp
// 00525f3b  0f8652feffff         jbe 0x525d93
// 00525f41  8b442410             mov eax, dword ptr [esp + 0x10]
// 00525f45  83c001               add eax, 1
// 00525f48  c7430c00000000       mov dword ptr [ebx + 0xc], 0
// 00525f4f  3b4314               cmp eax, dword ptr [ebx + 0x14]
// 00525f52  89442410             mov dword ptr [esp + 0x10], eax
// 00525f56  0f8c24feffff         jl 0x525d80
// 00525f5c  e906feffff           jmp 0x525d67
// 00525f61  8b442410             mov eax, dword ptr [esp + 0x10]
// 00525f65  5f                   pop edi
// 00525f66  5e                   pop esi
// 00525f67  896b0c               mov dword ptr [ebx + 0xc], ebp
// 00525f6a  894310               mov dword ptr [ebx + 0x10], eax
// 00525f6d  5d                   pop ebp
// 00525f6e  32c0                 xor al, al
// 00525f70  5b                   pop ebx
// 00525f71  83c42c               add esp, 0x2c
// 00525f74  c3                   ret 
// library jpeg-6b/jccoefct.c (function _compress_data)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jccoefct.c
