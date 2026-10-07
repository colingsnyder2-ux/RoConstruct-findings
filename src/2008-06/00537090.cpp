// roc 2008-06 00537090  unit: seg_00530000  size: 649 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00537090
//
// 00537090  83ec2c               sub esp, 0x2c
// 00537093  53                   push ebx
// 00537094  55                   push ebp
// 00537095  56                   push esi
// 00537096  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 0053709a  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 005370a0  8bae48010000         mov ebp, dword ptr [esi + 0x148]
// 005370a6  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 005370ac  48                   dec eax
// 005370ad  89442430             mov dword ptr [esp + 0x30], eax
// 005370b1  8b4510               mov eax, dword ptr [ebp + 0x10]
// 005370b4  49                   dec ecx
// 005370b5  3b4514               cmp eax, dword ptr [ebp + 0x14]
// 005370b8  57                   push edi
// 005370b9  894c2420             mov dword ptr [esp + 0x20], ecx
// 005370bd  89442410             mov dword ptr [esp + 0x10], eax
// 005370c1  7c33                 jl 0x5370f6
// 005370c3  ff4508               inc dword ptr [ebp + 8]
// 005370c6  83bee400000001       cmp dword ptr [esi + 0xe4], 1
// 005370cd  8b8648010000         mov eax, dword ptr [esi + 0x148]
// 005370d3  0f8e11020000         jle 0x5372ea
// 005370d9  5f                   pop edi
// 005370da  5e                   pop esi
// 005370db  33c9                 xor ecx, ecx
// 005370dd  5d                   pop ebp
// 005370de  c7401401000000       mov dword ptr [eax + 0x14], 1
// 005370e5  89480c               mov dword ptr [eax + 0xc], ecx
// 005370e8  894810               mov dword ptr [eax + 0x10], ecx
// 005370eb  b001                 mov al, 1
// 005370ed  5b                   pop ebx
// 005370ee  83c42c               add esp, 0x2c
// 005370f1  c3                   ret 
// 005370f2  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005370f6  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 005370f9  895c2414             mov dword ptr [esp + 0x14], ebx
// 005370fd  3bd9                 cmp ebx, ecx
// 005370ff  0f87b7010000         ja 0x5372bc
// 00537105  eb09                 jmp 0x537110
// 00537107  8da42400000000       lea esp, [esp]
// 0053710e  8bff                 mov edi, edi
// 00537110  33ff                 xor edi, edi
// 00537112  39bee4000000         cmp dword ptr [esi + 0xe4], edi
// 00537118  897c242c             mov dword ptr [esp + 0x2c], edi
// 0053711c  0f8e70010000         jle 0x537292
// 00537122  81c6e8000000         add esi, 0xe8
// 00537128  89742430             mov dword ptr [esp + 0x30], esi
// 0053712c  8d642400             lea esp, [esp]
// 00537130  8b36                 mov esi, dword ptr [esi]
// 00537132  3b5c2420             cmp ebx, dword ptr [esp + 0x20]
// 00537136  7305                 jae 0x53713d
// 00537138  8b5e34               mov ebx, dword ptr [esi + 0x34]
// 0053713b  eb03                 jmp 0x537140
// 0053713d  8b5e44               mov ebx, dword ptr [esi + 0x44]
// 00537140  8b4640               mov eax, dword ptr [esi + 0x40]
// 00537143  0faf442414           imul eax, dword ptr [esp + 0x14]
// 00537148  89442438             mov dword ptr [esp + 0x38], eax
// 0053714c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00537150  03c0                 add eax, eax
// 00537152  03c0                 add eax, eax
// 00537154  03c0                 add eax, eax
// 00537156  837e3800             cmp dword ptr [esi + 0x38], 0
// 0053715a  895c2424             mov dword ptr [esp + 0x24], ebx
// 0053715e  89442418             mov dword ptr [esp + 0x18], eax
// 00537162  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0053716a  0f8ef8000000         jle 0x537268
// 00537170  8b4634               mov eax, dword ptr [esi + 0x34]
// 00537173  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00537177  394d08               cmp dword ptr [ebp + 8], ecx
// 0053717a  7252                 jb 0x5371ce
// 0053717c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00537180  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00537184  03d1                 add edx, ecx
// 00537186  3b5648               cmp edx, dword ptr [esi + 0x48]
// 00537189  7c43                 jl 0x5371ce
// 0053718b  8b54bd18             mov edx, dword ptr [ebp + edi*4 + 0x18]
// 0053718f  c1e007               shl eax, 7
// 00537192  50                   push eax
// 00537193  52                   push edx
// 00537194  e807eafeff           call 0x525ba0
// 00537199  33c0                 xor eax, eax
// 0053719b  83c408               add esp, 8
// 0053719e  394634               cmp dword ptr [esi + 0x34], eax
// 005371a1  0f8ea5000000         jle 0x53724c
// 005371a7  8d4cbd18             lea ecx, [ebp + edi*4 + 0x18]
// 005371ab  eb03                 jmp 0x5371b0
// 005371ad  8d4900               lea ecx, [ecx]
// 005371b0  8b54bd14             mov edx, dword ptr [ebp + edi*4 + 0x14]
// 005371b4  8b19                 mov ebx, dword ptr [ecx]
// 005371b6  668b12               mov dx, word ptr [edx]
// 005371b9  40                   inc eax
// 005371ba  668913               mov word ptr [ebx], dx
// 005371bd  83c104               add ecx, 4
// 005371c0  3b4634               cmp eax, dword ptr [esi + 0x34]
// 005371c3  7ceb                 jl 0x5371b0
// 005371c5  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 005371c9  e97e000000           jmp 0x53724c
// 005371ce  8b442440             mov eax, dword ptr [esp + 0x40]
// 005371d2  8b8858010000         mov ecx, dword ptr [eax + 0x158]
// 005371d8  8b542438             mov edx, dword ptr [esp + 0x38]
// 005371dc  8b442418             mov eax, dword ptr [esp + 0x18]
// 005371e0  53                   push ebx
// 005371e1  52                   push edx
// 005371e2  8b54bd18             mov edx, dword ptr [ebp + edi*4 + 0x18]
// 005371e6  50                   push eax
// 005371e7  8b4604               mov eax, dword ptr [esi + 4]
// 005371ea  52                   push edx
// 005371eb  8b542454             mov edx, dword ptr [esp + 0x54]
// 005371ef  8b0482               mov eax, dword ptr [edx + eax*4]
// 005371f2  8b542450             mov edx, dword ptr [esp + 0x50]
// 005371f6  50                   push eax
// 005371f7  8b4104               mov eax, dword ptr [ecx + 4]
// 005371fa  56                   push esi
// 005371fb  52                   push edx
// 005371fc  ffd0                 call eax
// 005371fe  8b4634               mov eax, dword ptr [esi + 0x34]
// 00537201  83c41c               add esp, 0x1c
// 00537204  3bd8                 cmp ebx, eax
// 00537206  7d44                 jge 0x53724c
// 00537208  2bc3                 sub eax, ebx
// 0053720a  c1e007               shl eax, 7
// 0053720d  8d0c3b               lea ecx, [ebx + edi]
// 00537210  8b548d18             mov edx, dword ptr [ebp + ecx*4 + 0x18]
// 00537214  50                   push eax
// 00537215  52                   push edx
// 00537216  e885e9feff           call 0x525ba0
// 0053721b  83c408               add esp, 8
// 0053721e  3b5e34               cmp ebx, dword ptr [esi + 0x34]
// 00537221  895c2428             mov dword ptr [esp + 0x28], ebx
// 00537225  7d25                 jge 0x53724c
// 00537227  8d043b               lea eax, [ebx + edi]
// 0053722a  8d448518             lea eax, [ebp + eax*4 + 0x18]
// 0053722e  8bff                 mov edi, edi
// 00537230  8b48fc               mov ecx, dword ptr [eax - 4]
// 00537233  668b09               mov cx, word ptr [ecx]
// 00537236  8b10                 mov edx, dword ptr [eax]
// 00537238  66890a               mov word ptr [edx], cx
// 0053723b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0053723f  41                   inc ecx
// 00537240  83c004               add eax, 4
// 00537243  3b4e34               cmp ecx, dword ptr [esi + 0x34]
// 00537246  894c2428             mov dword ptr [esp + 0x28], ecx
// 0053724a  7ce4                 jl 0x537230
// 0053724c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00537250  8b4634               mov eax, dword ptr [esi + 0x34]
// 00537253  8344241808           add dword ptr [esp + 0x18], 8
// 00537258  41                   inc ecx
// 00537259  03f8                 add edi, eax
// 0053725b  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 0053725e  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00537262  0f8c0bffffff         jl 0x537173
// 00537268  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0053726c  8b742430             mov esi, dword ptr [esp + 0x30]
// 00537270  8b542440             mov edx, dword ptr [esp + 0x40]
// 00537274  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00537278  40                   inc eax
// 00537279  83c604               add esi, 4
// 0053727c  3b82e4000000         cmp eax, dword ptr [edx + 0xe4]
// 00537282  8944242c             mov dword ptr [esp + 0x2c], eax
// 00537286  89742430             mov dword ptr [esp + 0x30], esi
// 0053728a  0f8ca0feffff         jl 0x537130
// 00537290  8bf2                 mov esi, edx
// 00537292  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00537298  8b5104               mov edx, dword ptr [ecx + 4]
// 0053729b  8d4518               lea eax, [ebp + 0x18]
// 0053729e  50                   push eax
// 0053729f  56                   push esi
// 005372a0  ffd2                 call edx
// 005372a2  83c408               add esp, 8
// 005372a5  84c0                 test al, al
// 005372a7  742d                 je 0x5372d6
// 005372a9  43                   inc ebx
// 005372aa  895c2414             mov dword ptr [esp + 0x14], ebx
// 005372ae  3b5c2420             cmp ebx, dword ptr [esp + 0x20]
// 005372b2  0f8658feffff         jbe 0x537110
// 005372b8  8b442410             mov eax, dword ptr [esp + 0x10]
// 005372bc  40                   inc eax
// 005372bd  c7450c00000000       mov dword ptr [ebp + 0xc], 0
// 005372c4  3b4514               cmp eax, dword ptr [ebp + 0x14]
// 005372c7  89442410             mov dword ptr [esp + 0x10], eax
// 005372cb  0f8c21feffff         jl 0x5370f2
// 005372d1  e9edfdffff           jmp 0x5370c3
// 005372d6  8b442410             mov eax, dword ptr [esp + 0x10]
// 005372da  5f                   pop edi
// 005372db  5e                   pop esi
// 005372dc  894510               mov dword ptr [ebp + 0x10], eax
// 005372df  895d0c               mov dword ptr [ebp + 0xc], ebx
// 005372e2  5d                   pop ebp
// 005372e3  32c0                 xor al, al
// 005372e5  5b                   pop ebx
// 005372e6  83c42c               add esp, 0x2c
// 005372e9  c3                   ret 
// 005372ea  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 005372f0  8b96e8000000         mov edx, dword ptr [esi + 0xe8]
// 005372f6  49                   dec ecx
// 005372f7  394808               cmp dword ptr [eax + 8], ecx
// 005372fa  7305                 jae 0x537301
// 005372fc  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 005372ff  eb03                 jmp 0x537304
// 00537301  8b4a48               mov ecx, dword ptr [edx + 0x48]
// 00537304  5f                   pop edi
// 00537305  894814               mov dword ptr [eax + 0x14], ecx
// 00537308  5e                   pop esi
// 00537309  33c9                 xor ecx, ecx
// 0053730b  5d                   pop ebp
// 0053730c  89480c               mov dword ptr [eax + 0xc], ecx
// 0053730f  894810               mov dword ptr [eax + 0x10], ecx
// 00537312  b001                 mov al, 1
// 00537314  5b                   pop ebx
// 00537315  83c42c               add esp, 0x2c
// 00537318  c3                   ret 
// library jpeg-6b/jccoefct.c (function _compress_data)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccoefct.c
