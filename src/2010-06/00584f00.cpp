// from server: 100% by auto
// roc 2010-06 00584f00  unit: seg_00580000  size: 649 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00584f00
//
// 00584f00  83ec2c               sub esp, 0x2c
// 00584f03  53                   push ebx
// 00584f04  55                   push ebp
// 00584f05  56                   push esi
// 00584f06  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00584f0a  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 00584f10  8bae48010000         mov ebp, dword ptr [esi + 0x148]
// 00584f16  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 00584f1c  48                   dec eax
// 00584f1d  89442430             mov dword ptr [esp + 0x30], eax
// 00584f21  8b4510               mov eax, dword ptr [ebp + 0x10]
// 00584f24  49                   dec ecx
// 00584f25  3b4514               cmp eax, dword ptr [ebp + 0x14]
// 00584f28  57                   push edi
// 00584f29  894c2420             mov dword ptr [esp + 0x20], ecx
// 00584f2d  89442410             mov dword ptr [esp + 0x10], eax
// 00584f31  7c33                 jl 0x584f66
// 00584f33  ff4508               inc dword ptr [ebp + 8]
// 00584f36  83bee400000001       cmp dword ptr [esi + 0xe4], 1
// 00584f3d  8b8648010000         mov eax, dword ptr [esi + 0x148]
// 00584f43  0f8e11020000         jle 0x58515a
// 00584f49  5f                   pop edi
// 00584f4a  5e                   pop esi
// 00584f4b  33c9                 xor ecx, ecx
// 00584f4d  5d                   pop ebp
// 00584f4e  c7401401000000       mov dword ptr [eax + 0x14], 1
// 00584f55  89480c               mov dword ptr [eax + 0xc], ecx
// 00584f58  894810               mov dword ptr [eax + 0x10], ecx
// 00584f5b  b001                 mov al, 1
// 00584f5d  5b                   pop ebx
// 00584f5e  83c42c               add esp, 0x2c
// 00584f61  c3                   ret 
// 00584f62  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00584f66  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 00584f69  895c2414             mov dword ptr [esp + 0x14], ebx
// 00584f6d  3bd9                 cmp ebx, ecx
// 00584f6f  0f87b7010000         ja 0x58512c
// 00584f75  eb09                 jmp 0x584f80
// 00584f77  8da42400000000       lea esp, [esp]
// 00584f7e  8bff                 mov edi, edi
// 00584f80  33ff                 xor edi, edi
// 00584f82  39bee4000000         cmp dword ptr [esi + 0xe4], edi
// 00584f88  897c242c             mov dword ptr [esp + 0x2c], edi
// 00584f8c  0f8e70010000         jle 0x585102
// 00584f92  81c6e8000000         add esi, 0xe8
// 00584f98  89742430             mov dword ptr [esp + 0x30], esi
// 00584f9c  8d642400             lea esp, [esp]
// 00584fa0  8b36                 mov esi, dword ptr [esi]
// 00584fa2  3b5c2420             cmp ebx, dword ptr [esp + 0x20]
// 00584fa6  7305                 jae 0x584fad
// 00584fa8  8b5e34               mov ebx, dword ptr [esi + 0x34]
// 00584fab  eb03                 jmp 0x584fb0
// 00584fad  8b5e44               mov ebx, dword ptr [esi + 0x44]
// 00584fb0  8b4640               mov eax, dword ptr [esi + 0x40]
// 00584fb3  0faf442414           imul eax, dword ptr [esp + 0x14]
// 00584fb8  89442438             mov dword ptr [esp + 0x38], eax
// 00584fbc  8b442410             mov eax, dword ptr [esp + 0x10]
// 00584fc0  03c0                 add eax, eax
// 00584fc2  03c0                 add eax, eax
// 00584fc4  03c0                 add eax, eax
// 00584fc6  837e3800             cmp dword ptr [esi + 0x38], 0
// 00584fca  895c2424             mov dword ptr [esp + 0x24], ebx
// 00584fce  89442418             mov dword ptr [esp + 0x18], eax
// 00584fd2  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00584fda  0f8ef8000000         jle 0x5850d8
// 00584fe0  8b4634               mov eax, dword ptr [esi + 0x34]
// 00584fe3  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00584fe7  394d08               cmp dword ptr [ebp + 8], ecx
// 00584fea  7252                 jb 0x58503e
// 00584fec  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00584ff0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00584ff4  03d1                 add edx, ecx
// 00584ff6  3b5648               cmp edx, dword ptr [esi + 0x48]
// 00584ff9  7c43                 jl 0x58503e
// 00584ffb  8b54bd18             mov edx, dword ptr [ebp + edi*4 + 0x18]
// 00584fff  c1e007               shl eax, 7
// 00585002  50                   push eax
// 00585003  52                   push edx
// 00585004  e8d783feff           call 0x56d3e0
// 00585009  33c0                 xor eax, eax
// 0058500b  83c408               add esp, 8
// 0058500e  394634               cmp dword ptr [esi + 0x34], eax
// 00585011  0f8ea5000000         jle 0x5850bc
// 00585017  8d4cbd18             lea ecx, [ebp + edi*4 + 0x18]
// 0058501b  eb03                 jmp 0x585020
// 0058501d  8d4900               lea ecx, [ecx]
// 00585020  8b54bd14             mov edx, dword ptr [ebp + edi*4 + 0x14]
// 00585024  8b19                 mov ebx, dword ptr [ecx]
// 00585026  668b12               mov dx, word ptr [edx]
// 00585029  40                   inc eax
// 0058502a  668913               mov word ptr [ebx], dx
// 0058502d  83c104               add ecx, 4
// 00585030  3b4634               cmp eax, dword ptr [esi + 0x34]
// 00585033  7ceb                 jl 0x585020
// 00585035  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00585039  e97e000000           jmp 0x5850bc
// 0058503e  8b442440             mov eax, dword ptr [esp + 0x40]
// 00585042  8b8858010000         mov ecx, dword ptr [eax + 0x158]
// 00585048  8b542438             mov edx, dword ptr [esp + 0x38]
// 0058504c  8b442418             mov eax, dword ptr [esp + 0x18]
// 00585050  53                   push ebx
// 00585051  52                   push edx
// 00585052  8b54bd18             mov edx, dword ptr [ebp + edi*4 + 0x18]
// 00585056  50                   push eax
// 00585057  8b4604               mov eax, dword ptr [esi + 4]
// 0058505a  52                   push edx
// 0058505b  8b542454             mov edx, dword ptr [esp + 0x54]
// 0058505f  8b0482               mov eax, dword ptr [edx + eax*4]
// 00585062  8b542450             mov edx, dword ptr [esp + 0x50]
// 00585066  50                   push eax
// 00585067  8b4104               mov eax, dword ptr [ecx + 4]
// 0058506a  56                   push esi
// 0058506b  52                   push edx
// 0058506c  ffd0                 call eax
// 0058506e  8b4634               mov eax, dword ptr [esi + 0x34]
// 00585071  83c41c               add esp, 0x1c
// 00585074  3bd8                 cmp ebx, eax
// 00585076  7d44                 jge 0x5850bc
// 00585078  2bc3                 sub eax, ebx
// 0058507a  c1e007               shl eax, 7
// 0058507d  8d0c3b               lea ecx, [ebx + edi]
// 00585080  8b548d18             mov edx, dword ptr [ebp + ecx*4 + 0x18]
// 00585084  50                   push eax
// 00585085  52                   push edx
// 00585086  e85583feff           call 0x56d3e0
// 0058508b  83c408               add esp, 8
// 0058508e  3b5e34               cmp ebx, dword ptr [esi + 0x34]
// 00585091  895c2428             mov dword ptr [esp + 0x28], ebx
// 00585095  7d25                 jge 0x5850bc
// 00585097  8d043b               lea eax, [ebx + edi]
// 0058509a  8d448518             lea eax, [ebp + eax*4 + 0x18]
// 0058509e  8bff                 mov edi, edi
// 005850a0  8b48fc               mov ecx, dword ptr [eax - 4]
// 005850a3  668b09               mov cx, word ptr [ecx]
// 005850a6  8b10                 mov edx, dword ptr [eax]
// 005850a8  66890a               mov word ptr [edx], cx
// 005850ab  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005850af  41                   inc ecx
// 005850b0  83c004               add eax, 4
// 005850b3  3b4e34               cmp ecx, dword ptr [esi + 0x34]
// 005850b6  894c2428             mov dword ptr [esp + 0x28], ecx
// 005850ba  7ce4                 jl 0x5850a0
// 005850bc  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005850c0  8b4634               mov eax, dword ptr [esi + 0x34]
// 005850c3  8344241808           add dword ptr [esp + 0x18], 8
// 005850c8  41                   inc ecx
// 005850c9  03f8                 add edi, eax
// 005850cb  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 005850ce  894c241c             mov dword ptr [esp + 0x1c], ecx
// 005850d2  0f8c0bffffff         jl 0x584fe3
// 005850d8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005850dc  8b742430             mov esi, dword ptr [esp + 0x30]
// 005850e0  8b542440             mov edx, dword ptr [esp + 0x40]
// 005850e4  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 005850e8  40                   inc eax
// 005850e9  83c604               add esi, 4
// 005850ec  3b82e4000000         cmp eax, dword ptr [edx + 0xe4]
// 005850f2  8944242c             mov dword ptr [esp + 0x2c], eax
// 005850f6  89742430             mov dword ptr [esp + 0x30], esi
// 005850fa  0f8ca0feffff         jl 0x584fa0
// 00585100  8bf2                 mov esi, edx
// 00585102  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00585108  8b5104               mov edx, dword ptr [ecx + 4]
// 0058510b  8d4518               lea eax, [ebp + 0x18]
// 0058510e  50                   push eax
// 0058510f  56                   push esi
// 00585110  ffd2                 call edx
// 00585112  83c408               add esp, 8
// 00585115  84c0                 test al, al
// 00585117  742d                 je 0x585146
// 00585119  43                   inc ebx
// 0058511a  895c2414             mov dword ptr [esp + 0x14], ebx
// 0058511e  3b5c2420             cmp ebx, dword ptr [esp + 0x20]
// 00585122  0f8658feffff         jbe 0x584f80
// 00585128  8b442410             mov eax, dword ptr [esp + 0x10]
// 0058512c  40                   inc eax
// 0058512d  c7450c00000000       mov dword ptr [ebp + 0xc], 0
// 00585134  3b4514               cmp eax, dword ptr [ebp + 0x14]
// 00585137  89442410             mov dword ptr [esp + 0x10], eax
// 0058513b  0f8c21feffff         jl 0x584f62
// 00585141  e9edfdffff           jmp 0x584f33
// 00585146  8b442410             mov eax, dword ptr [esp + 0x10]
// 0058514a  5f                   pop edi
// 0058514b  5e                   pop esi
// 0058514c  894510               mov dword ptr [ebp + 0x10], eax
// 0058514f  895d0c               mov dword ptr [ebp + 0xc], ebx
// 00585152  5d                   pop ebp
// 00585153  32c0                 xor al, al
// 00585155  5b                   pop ebx
// 00585156  83c42c               add esp, 0x2c
// 00585159  c3                   ret 
// 0058515a  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 00585160  8b96e8000000         mov edx, dword ptr [esi + 0xe8]
// 00585166  49                   dec ecx
// 00585167  394808               cmp dword ptr [eax + 8], ecx
// 0058516a  7305                 jae 0x585171
// 0058516c  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 0058516f  eb03                 jmp 0x585174
// 00585171  8b4a48               mov ecx, dword ptr [edx + 0x48]
// 00585174  5f                   pop edi
// 00585175  894814               mov dword ptr [eax + 0x14], ecx
// 00585178  5e                   pop esi
// 00585179  33c9                 xor ecx, ecx
// 0058517b  5d                   pop ebp
// 0058517c  89480c               mov dword ptr [eax + 0xc], ecx
// 0058517f  894810               mov dword ptr [eax + 0x10], ecx
// 00585182  b001                 mov al, 1
// 00585184  5b                   pop ebx
// 00585185  83c42c               add esp, 0x2c
// 00585188  c3                   ret 
// library jpeg-6b/jccoefct.c (function _compress_data)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccoefct.c
