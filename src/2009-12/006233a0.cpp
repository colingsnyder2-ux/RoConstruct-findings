// roc 2009-12 006233a0  unit: seg_00620000  size: 649 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006233a0
//
// 006233a0  83ec2c               sub esp, 0x2c
// 006233a3  53                   push ebx
// 006233a4  55                   push ebp
// 006233a5  56                   push esi
// 006233a6  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 006233aa  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 006233b0  8bae48010000         mov ebp, dword ptr [esi + 0x148]
// 006233b6  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 006233bc  48                   dec eax
// 006233bd  89442430             mov dword ptr [esp + 0x30], eax
// 006233c1  8b4510               mov eax, dword ptr [ebp + 0x10]
// 006233c4  49                   dec ecx
// 006233c5  3b4514               cmp eax, dword ptr [ebp + 0x14]
// 006233c8  57                   push edi
// 006233c9  894c2420             mov dword ptr [esp + 0x20], ecx
// 006233cd  89442410             mov dword ptr [esp + 0x10], eax
// 006233d1  7c33                 jl 0x623406
// 006233d3  ff4508               inc dword ptr [ebp + 8]
// 006233d6  83bee400000001       cmp dword ptr [esi + 0xe4], 1
// 006233dd  8b8648010000         mov eax, dword ptr [esi + 0x148]
// 006233e3  0f8e11020000         jle 0x6235fa
// 006233e9  5f                   pop edi
// 006233ea  5e                   pop esi
// 006233eb  33c9                 xor ecx, ecx
// 006233ed  5d                   pop ebp
// 006233ee  c7401401000000       mov dword ptr [eax + 0x14], 1
// 006233f5  89480c               mov dword ptr [eax + 0xc], ecx
// 006233f8  894810               mov dword ptr [eax + 0x10], ecx
// 006233fb  b001                 mov al, 1
// 006233fd  5b                   pop ebx
// 006233fe  83c42c               add esp, 0x2c
// 00623401  c3                   ret 
// 00623402  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00623406  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 00623409  895c2414             mov dword ptr [esp + 0x14], ebx
// 0062340d  3bd9                 cmp ebx, ecx
// 0062340f  0f87b7010000         ja 0x6235cc
// 00623415  eb09                 jmp 0x623420
// 00623417  8da42400000000       lea esp, [esp]
// 0062341e  8bff                 mov edi, edi
// 00623420  33ff                 xor edi, edi
// 00623422  39bee4000000         cmp dword ptr [esi + 0xe4], edi
// 00623428  897c242c             mov dword ptr [esp + 0x2c], edi
// 0062342c  0f8e70010000         jle 0x6235a2
// 00623432  81c6e8000000         add esi, 0xe8
// 00623438  89742430             mov dword ptr [esp + 0x30], esi
// 0062343c  8d642400             lea esp, [esp]
// 00623440  8b36                 mov esi, dword ptr [esi]
// 00623442  3b5c2420             cmp ebx, dword ptr [esp + 0x20]
// 00623446  7305                 jae 0x62344d
// 00623448  8b5e34               mov ebx, dword ptr [esi + 0x34]
// 0062344b  eb03                 jmp 0x623450
// 0062344d  8b5e44               mov ebx, dword ptr [esi + 0x44]
// 00623450  8b4640               mov eax, dword ptr [esi + 0x40]
// 00623453  0faf442414           imul eax, dword ptr [esp + 0x14]
// 00623458  89442438             mov dword ptr [esp + 0x38], eax
// 0062345c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00623460  03c0                 add eax, eax
// 00623462  03c0                 add eax, eax
// 00623464  03c0                 add eax, eax
// 00623466  837e3800             cmp dword ptr [esi + 0x38], 0
// 0062346a  895c2424             mov dword ptr [esp + 0x24], ebx
// 0062346e  89442418             mov dword ptr [esp + 0x18], eax
// 00623472  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0062347a  0f8ef8000000         jle 0x623578
// 00623480  8b4634               mov eax, dword ptr [esi + 0x34]
// 00623483  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00623487  394d08               cmp dword ptr [ebp + 8], ecx
// 0062348a  7252                 jb 0x6234de
// 0062348c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00623490  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00623494  03d1                 add edx, ecx
// 00623496  3b5648               cmp edx, dword ptr [esi + 0x48]
// 00623499  7c43                 jl 0x6234de
// 0062349b  8b54bd18             mov edx, dword ptr [ebp + edi*4 + 0x18]
// 0062349f  c1e007               shl eax, 7
// 006234a2  50                   push eax
// 006234a3  52                   push edx
// 006234a4  e85788feff           call 0x60bd00
// 006234a9  33c0                 xor eax, eax
// 006234ab  83c408               add esp, 8
// 006234ae  394634               cmp dword ptr [esi + 0x34], eax
// 006234b1  0f8ea5000000         jle 0x62355c
// 006234b7  8d4cbd18             lea ecx, [ebp + edi*4 + 0x18]
// 006234bb  eb03                 jmp 0x6234c0
// 006234bd  8d4900               lea ecx, [ecx]
// 006234c0  8b54bd14             mov edx, dword ptr [ebp + edi*4 + 0x14]
// 006234c4  8b19                 mov ebx, dword ptr [ecx]
// 006234c6  668b12               mov dx, word ptr [edx]
// 006234c9  40                   inc eax
// 006234ca  668913               mov word ptr [ebx], dx
// 006234cd  83c104               add ecx, 4
// 006234d0  3b4634               cmp eax, dword ptr [esi + 0x34]
// 006234d3  7ceb                 jl 0x6234c0
// 006234d5  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 006234d9  e97e000000           jmp 0x62355c
// 006234de  8b442440             mov eax, dword ptr [esp + 0x40]
// 006234e2  8b8858010000         mov ecx, dword ptr [eax + 0x158]
// 006234e8  8b542438             mov edx, dword ptr [esp + 0x38]
// 006234ec  8b442418             mov eax, dword ptr [esp + 0x18]
// 006234f0  53                   push ebx
// 006234f1  52                   push edx
// 006234f2  8b54bd18             mov edx, dword ptr [ebp + edi*4 + 0x18]
// 006234f6  50                   push eax
// 006234f7  8b4604               mov eax, dword ptr [esi + 4]
// 006234fa  52                   push edx
// 006234fb  8b542454             mov edx, dword ptr [esp + 0x54]
// 006234ff  8b0482               mov eax, dword ptr [edx + eax*4]
// 00623502  8b542450             mov edx, dword ptr [esp + 0x50]
// 00623506  50                   push eax
// 00623507  8b4104               mov eax, dword ptr [ecx + 4]
// 0062350a  56                   push esi
// 0062350b  52                   push edx
// 0062350c  ffd0                 call eax
// 0062350e  8b4634               mov eax, dword ptr [esi + 0x34]
// 00623511  83c41c               add esp, 0x1c
// 00623514  3bd8                 cmp ebx, eax
// 00623516  7d44                 jge 0x62355c
// 00623518  2bc3                 sub eax, ebx
// 0062351a  c1e007               shl eax, 7
// 0062351d  8d0c3b               lea ecx, [ebx + edi]
// 00623520  8b548d18             mov edx, dword ptr [ebp + ecx*4 + 0x18]
// 00623524  50                   push eax
// 00623525  52                   push edx
// 00623526  e8d587feff           call 0x60bd00
// 0062352b  83c408               add esp, 8
// 0062352e  3b5e34               cmp ebx, dword ptr [esi + 0x34]
// 00623531  895c2428             mov dword ptr [esp + 0x28], ebx
// 00623535  7d25                 jge 0x62355c
// 00623537  8d043b               lea eax, [ebx + edi]
// 0062353a  8d448518             lea eax, [ebp + eax*4 + 0x18]
// 0062353e  8bff                 mov edi, edi
// 00623540  8b48fc               mov ecx, dword ptr [eax - 4]
// 00623543  668b09               mov cx, word ptr [ecx]
// 00623546  8b10                 mov edx, dword ptr [eax]
// 00623548  66890a               mov word ptr [edx], cx
// 0062354b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0062354f  41                   inc ecx
// 00623550  83c004               add eax, 4
// 00623553  3b4e34               cmp ecx, dword ptr [esi + 0x34]
// 00623556  894c2428             mov dword ptr [esp + 0x28], ecx
// 0062355a  7ce4                 jl 0x623540
// 0062355c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00623560  8b4634               mov eax, dword ptr [esi + 0x34]
// 00623563  8344241808           add dword ptr [esp + 0x18], 8
// 00623568  41                   inc ecx
// 00623569  03f8                 add edi, eax
// 0062356b  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 0062356e  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00623572  0f8c0bffffff         jl 0x623483
// 00623578  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0062357c  8b742430             mov esi, dword ptr [esp + 0x30]
// 00623580  8b542440             mov edx, dword ptr [esp + 0x40]
// 00623584  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00623588  40                   inc eax
// 00623589  83c604               add esi, 4
// 0062358c  3b82e4000000         cmp eax, dword ptr [edx + 0xe4]
// 00623592  8944242c             mov dword ptr [esp + 0x2c], eax
// 00623596  89742430             mov dword ptr [esp + 0x30], esi
// 0062359a  0f8ca0feffff         jl 0x623440
// 006235a0  8bf2                 mov esi, edx
// 006235a2  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 006235a8  8b5104               mov edx, dword ptr [ecx + 4]
// 006235ab  8d4518               lea eax, [ebp + 0x18]
// 006235ae  50                   push eax
// 006235af  56                   push esi
// 006235b0  ffd2                 call edx
// 006235b2  83c408               add esp, 8
// 006235b5  84c0                 test al, al
// 006235b7  742d                 je 0x6235e6
// 006235b9  43                   inc ebx
// 006235ba  895c2414             mov dword ptr [esp + 0x14], ebx
// 006235be  3b5c2420             cmp ebx, dword ptr [esp + 0x20]
// 006235c2  0f8658feffff         jbe 0x623420
// 006235c8  8b442410             mov eax, dword ptr [esp + 0x10]
// 006235cc  40                   inc eax
// 006235cd  c7450c00000000       mov dword ptr [ebp + 0xc], 0
// 006235d4  3b4514               cmp eax, dword ptr [ebp + 0x14]
// 006235d7  89442410             mov dword ptr [esp + 0x10], eax
// 006235db  0f8c21feffff         jl 0x623402
// 006235e1  e9edfdffff           jmp 0x6233d3
// 006235e6  8b442410             mov eax, dword ptr [esp + 0x10]
// 006235ea  5f                   pop edi
// 006235eb  5e                   pop esi
// 006235ec  894510               mov dword ptr [ebp + 0x10], eax
// 006235ef  895d0c               mov dword ptr [ebp + 0xc], ebx
// 006235f2  5d                   pop ebp
// 006235f3  32c0                 xor al, al
// 006235f5  5b                   pop ebx
// 006235f6  83c42c               add esp, 0x2c
// 006235f9  c3                   ret 
// 006235fa  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 00623600  8b96e8000000         mov edx, dword ptr [esi + 0xe8]
// 00623606  49                   dec ecx
// 00623607  394808               cmp dword ptr [eax + 8], ecx
// 0062360a  7305                 jae 0x623611
// 0062360c  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 0062360f  eb03                 jmp 0x623614
// 00623611  8b4a48               mov ecx, dword ptr [edx + 0x48]
// 00623614  5f                   pop edi
// 00623615  894814               mov dword ptr [eax + 0x14], ecx
// 00623618  5e                   pop esi
// 00623619  33c9                 xor ecx, ecx
// 0062361b  5d                   pop ebp
// 0062361c  89480c               mov dword ptr [eax + 0xc], ecx
// 0062361f  894810               mov dword ptr [eax + 0x10], ecx
// 00623622  b001                 mov al, 1
// 00623624  5b                   pop ebx
// 00623625  83c42c               add esp, 0x2c
// 00623628  c3                   ret 
// library jpeg-6b/jccoefct.c (function _compress_data)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccoefct.c
