// roc 2009-12 00624e80  unit: seg_00620000  size: 479 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00624e80
//
// 00624e80  83ec10               sub esp, 0x10
// 00624e83  55                   push ebp
// 00624e84  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00624e88  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 00624e8b  8b8538010000         mov eax, dword ptr [ebp + 0x138]
// 00624e91  8b11                 mov edx, dword ptr [ecx]
// 00624e93  56                   push esi
// 00624e94  8bb55c010000         mov esi, dword ptr [ebp + 0x15c]
// 00624e9a  57                   push edi
// 00624e9b  8bbd30010000         mov edi, dword ptr [ebp + 0x130]
// 00624ea1  895610               mov dword ptr [esi + 0x10], edx
// 00624ea4  8944240c             mov dword ptr [esp + 0xc], eax
// 00624ea8  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00624eab  8b4804               mov ecx, dword ptr [eax + 4]
// 00624eae  894e14               mov dword ptr [esi + 0x14], ecx
// 00624eb1  83bdbc00000000       cmp dword ptr [ebp + 0xbc], 0
// 00624eb8  897c2418             mov dword ptr [esp + 0x18], edi
// 00624ebc  7414                 je 0x624ed2
// 00624ebe  837e4400             cmp dword ptr [esi + 0x44], 0
// 00624ec2  750e                 jne 0x624ed2
// 00624ec4  8b5648               mov edx, dword ptr [esi + 0x48]
// 00624ec7  52                   push edx
// 00624ec8  8bc6                 mov eax, esi
// 00624eca  e8a1fdffff           call 0x624c70
// 00624ecf  83c404               add esp, 4
// 00624ed2  8b442424             mov eax, dword ptr [esp + 0x24]
// 00624ed6  8b08                 mov ecx, dword ptr [eax]
// 00624ed8  8b852c010000         mov eax, dword ptr [ebp + 0x12c]
// 00624ede  53                   push ebx
// 00624edf  33db                 xor ebx, ebx
// 00624ee1  3bc7                 cmp eax, edi
// 00624ee3  894c2418             mov dword ptr [esp + 0x18], ecx
// 00624ee7  89442414             mov dword ptr [esp + 0x14], eax
// 00624eeb  0f8f33010000         jg 0x625024
// 00624ef1  8b148598579c00       mov edx, dword ptr [eax*4 + 0x9c5798]
// 00624ef8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00624efc  0fbf3c51             movsx edi, word ptr [ecx + edx*2]
// 00624f00  85ff                 test edi, edi
// 00624f02  7506                 jne 0x624f0a
// 00624f04  43                   inc ebx
// 00624f05  e9f4000000           jmp 0x624ffe
// 00624f0a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00624f0e  7d0e                 jge 0x624f1e
// 00624f10  f7df                 neg edi
// 00624f12  d3ff                 sar edi, cl
// 00624f14  8bcf                 mov ecx, edi
// 00624f16  f7d1                 not ecx
// 00624f18  894c2428             mov dword ptr [esp + 0x28], ecx
// 00624f1c  eb06                 jmp 0x624f24
// 00624f1e  d3ff                 sar edi, cl
// 00624f20  897c2428             mov dword ptr [esp + 0x28], edi
// 00624f24  85ff                 test edi, edi
// 00624f26  7506                 jne 0x624f2e
// 00624f28  43                   inc ebx
// 00624f29  e9d0000000           jmp 0x624ffe
// 00624f2e  837e3800             cmp dword ptr [esi + 0x38], 0
// 00624f32  7607                 jbe 0x624f3b
// 00624f34  8bc6                 mov eax, esi
// 00624f36  e895fcffff           call 0x624bd0
// 00624f3b  83fb0f               cmp ebx, 0xf
// 00624f3e  7e45                 jle 0x624f85
// 00624f40  8d6bf0               lea ebp, [ebx - 0x10]
// 00624f43  c1ed04               shr ebp, 4
// 00624f46  45                   inc ebp
// 00624f47  8bd5                 mov edx, ebp
// 00624f49  f7da                 neg edx
// 00624f4b  c1e204               shl edx, 4
// 00624f4e  03da                 add ebx, edx
// 00624f50  807e0c00             cmp byte ptr [esi + 0xc], 0
// 00624f54  8b4634               mov eax, dword ptr [esi + 0x34]
// 00624f57  740c                 je 0x624f65
// 00624f59  8b44865c             mov eax, dword ptr [esi + eax*4 + 0x5c]
// 00624f5d  ff80c0030000         inc dword ptr [eax + 0x3c0]
// 00624f63  eb1b                 jmp 0x624f80
// 00624f65  8b44864c             mov eax, dword ptr [esi + eax*4 + 0x4c]
// 00624f69  0fbe88f0040000       movsx ecx, byte ptr [eax + 0x4f0]
// 00624f70  8b90c0030000         mov edx, dword ptr [eax + 0x3c0]
// 00624f76  51                   push ecx
// 00624f77  52                   push edx
// 00624f78  e8e3faffff           call 0x624a60
// 00624f7d  83c408               add esp, 8
// 00624f80  83ed01               sub ebp, 1
// 00624f83  75cb                 jne 0x624f50
// 00624f85  d1ff                 sar edi, 1
// 00624f87  bd01000000           mov ebp, 1
// 00624f8c  7423                 je 0x624fb1
// 00624f8e  8bff                 mov edi, edi
// 00624f90  45                   inc ebp
// 00624f91  d1ff                 sar edi, 1
// 00624f93  75fb                 jne 0x624f90
// 00624f95  83fd0a               cmp ebp, 0xa
// 00624f98  7e17                 jle 0x624fb1
// 00624f9a  8b442424             mov eax, dword ptr [esp + 0x24]
// 00624f9e  8b08                 mov ecx, dword ptr [eax]
// 00624fa0  c7411406000000       mov dword ptr [ecx + 0x14], 6
// 00624fa7  8b10                 mov edx, dword ptr [eax]
// 00624fa9  50                   push eax
// 00624faa  8b02                 mov eax, dword ptr [edx]
// 00624fac  ffd0                 call eax
// 00624fae  83c404               add esp, 4
// 00624fb1  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00624fb4  c1e304               shl ebx, 4
// 00624fb7  03dd                 add ebx, ebp
// 00624fb9  807e0c00             cmp byte ptr [esi + 0xc], 0
// 00624fbd  8bc3                 mov eax, ebx
// 00624fbf  740c                 je 0x624fcd
// 00624fc1  8b4c8e5c             mov ecx, dword ptr [esi + ecx*4 + 0x5c]
// 00624fc5  ff0481               inc dword ptr [ecx + eax*4]
// 00624fc8  8d0481               lea eax, [ecx + eax*4]
// 00624fcb  eb19                 jmp 0x624fe6
// 00624fcd  8b4c8e4c             mov ecx, dword ptr [esi + ecx*4 + 0x4c]
// 00624fd1  0fbe940100040000     movsx edx, byte ptr [ecx + eax + 0x400]
// 00624fd9  8b0481               mov eax, dword ptr [ecx + eax*4]
// 00624fdc  52                   push edx
// 00624fdd  50                   push eax
// 00624fde  e87dfaffff           call 0x624a60
// 00624fe3  83c408               add esp, 8
// 00624fe6  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00624fea  55                   push ebp
// 00624feb  51                   push ecx
// 00624fec  e86ffaffff           call 0x624a60
// 00624ff1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00624ff5  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00624ff9  83c408               add esp, 8
// 00624ffc  33db                 xor ebx, ebx
// 00624ffe  40                   inc eax
// 00624fff  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 00625003  89442414             mov dword ptr [esp + 0x14], eax
// 00625007  0f8ee4feffff         jle 0x624ef1
// 0062500d  85db                 test ebx, ebx
// 0062500f  7e13                 jle 0x625024
// 00625011  ff4638               inc dword ptr [esi + 0x38]
// 00625014  817e38ff7f0000       cmp dword ptr [esi + 0x38], 0x7fff
// 0062501b  7507                 jne 0x625024
// 0062501d  8bc6                 mov eax, esi
// 0062501f  e8acfbffff           call 0x624bd0
// 00625024  8b5518               mov edx, dword ptr [ebp + 0x18]
// 00625027  8b4610               mov eax, dword ptr [esi + 0x10]
// 0062502a  8902                 mov dword ptr [edx], eax
// 0062502c  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 0062502f  8b5614               mov edx, dword ptr [esi + 0x14]
// 00625032  895104               mov dword ptr [ecx + 4], edx
// 00625035  8badbc000000         mov ebp, dword ptr [ebp + 0xbc]
// 0062503b  5b                   pop ebx
// 0062503c  85ed                 test ebp, ebp
// 0062503e  7416                 je 0x625056
// 00625040  837e4400             cmp dword ptr [esi + 0x44], 0
// 00625044  750d                 jne 0x625053
// 00625046  8b4648               mov eax, dword ptr [esi + 0x48]
// 00625049  40                   inc eax
// 0062504a  83e007               and eax, 7
// 0062504d  896e44               mov dword ptr [esi + 0x44], ebp
// 00625050  894648               mov dword ptr [esi + 0x48], eax
// 00625053  ff4e44               dec dword ptr [esi + 0x44]
// 00625056  5f                   pop edi
// 00625057  5e                   pop esi
// 00625058  b001                 mov al, 1
// 0062505a  5d                   pop ebp
// 0062505b  83c410               add esp, 0x10
// 0062505e  c3                   ret 
// library jpeg-6b/jcphuff.c (function _encode_mcu_AC_first)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
