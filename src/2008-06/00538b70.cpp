// from server: 100% by auto
// roc 2008-06 00538b70  unit: seg_00530000  size: 479 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00538b70
//
// 00538b70  83ec10               sub esp, 0x10
// 00538b73  55                   push ebp
// 00538b74  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00538b78  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 00538b7b  8b8538010000         mov eax, dword ptr [ebp + 0x138]
// 00538b81  8b11                 mov edx, dword ptr [ecx]
// 00538b83  56                   push esi
// 00538b84  8bb55c010000         mov esi, dword ptr [ebp + 0x15c]
// 00538b8a  57                   push edi
// 00538b8b  8bbd30010000         mov edi, dword ptr [ebp + 0x130]
// 00538b91  895610               mov dword ptr [esi + 0x10], edx
// 00538b94  8944240c             mov dword ptr [esp + 0xc], eax
// 00538b98  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00538b9b  8b4804               mov ecx, dword ptr [eax + 4]
// 00538b9e  894e14               mov dword ptr [esi + 0x14], ecx
// 00538ba1  83bdbc00000000       cmp dword ptr [ebp + 0xbc], 0
// 00538ba8  897c2418             mov dword ptr [esp + 0x18], edi
// 00538bac  7414                 je 0x538bc2
// 00538bae  837e4400             cmp dword ptr [esi + 0x44], 0
// 00538bb2  750e                 jne 0x538bc2
// 00538bb4  8b5648               mov edx, dword ptr [esi + 0x48]
// 00538bb7  52                   push edx
// 00538bb8  8bc6                 mov eax, esi
// 00538bba  e8a1fdffff           call 0x538960
// 00538bbf  83c404               add esp, 4
// 00538bc2  8b442424             mov eax, dword ptr [esp + 0x24]
// 00538bc6  8b08                 mov ecx, dword ptr [eax]
// 00538bc8  8b852c010000         mov eax, dword ptr [ebp + 0x12c]
// 00538bce  53                   push ebx
// 00538bcf  33db                 xor ebx, ebx
// 00538bd1  3bc7                 cmp eax, edi
// 00538bd3  894c2418             mov dword ptr [esp + 0x18], ecx
// 00538bd7  89442414             mov dword ptr [esp + 0x14], eax
// 00538bdb  0f8f33010000         jg 0x538d14
// 00538be1  8b1485b0b18200       mov edx, dword ptr [eax*4 + 0x82b1b0]
// 00538be8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00538bec  0fbf3c51             movsx edi, word ptr [ecx + edx*2]
// 00538bf0  85ff                 test edi, edi
// 00538bf2  7506                 jne 0x538bfa
// 00538bf4  43                   inc ebx
// 00538bf5  e9f4000000           jmp 0x538cee
// 00538bfa  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00538bfe  7d0e                 jge 0x538c0e
// 00538c00  f7df                 neg edi
// 00538c02  d3ff                 sar edi, cl
// 00538c04  8bcf                 mov ecx, edi
// 00538c06  f7d1                 not ecx
// 00538c08  894c2428             mov dword ptr [esp + 0x28], ecx
// 00538c0c  eb06                 jmp 0x538c14
// 00538c0e  d3ff                 sar edi, cl
// 00538c10  897c2428             mov dword ptr [esp + 0x28], edi
// 00538c14  85ff                 test edi, edi
// 00538c16  7506                 jne 0x538c1e
// 00538c18  43                   inc ebx
// 00538c19  e9d0000000           jmp 0x538cee
// 00538c1e  837e3800             cmp dword ptr [esi + 0x38], 0
// 00538c22  7607                 jbe 0x538c2b
// 00538c24  8bc6                 mov eax, esi
// 00538c26  e895fcffff           call 0x5388c0
// 00538c2b  83fb0f               cmp ebx, 0xf
// 00538c2e  7e45                 jle 0x538c75
// 00538c30  8d6bf0               lea ebp, [ebx - 0x10]
// 00538c33  c1ed04               shr ebp, 4
// 00538c36  45                   inc ebp
// 00538c37  8bd5                 mov edx, ebp
// 00538c39  f7da                 neg edx
// 00538c3b  c1e204               shl edx, 4
// 00538c3e  03da                 add ebx, edx
// 00538c40  807e0c00             cmp byte ptr [esi + 0xc], 0
// 00538c44  8b4634               mov eax, dword ptr [esi + 0x34]
// 00538c47  740c                 je 0x538c55
// 00538c49  8b44865c             mov eax, dword ptr [esi + eax*4 + 0x5c]
// 00538c4d  ff80c0030000         inc dword ptr [eax + 0x3c0]
// 00538c53  eb1b                 jmp 0x538c70
// 00538c55  8b44864c             mov eax, dword ptr [esi + eax*4 + 0x4c]
// 00538c59  0fbe88f0040000       movsx ecx, byte ptr [eax + 0x4f0]
// 00538c60  8b90c0030000         mov edx, dword ptr [eax + 0x3c0]
// 00538c66  51                   push ecx
// 00538c67  52                   push edx
// 00538c68  e8e3faffff           call 0x538750
// 00538c6d  83c408               add esp, 8
// 00538c70  83ed01               sub ebp, 1
// 00538c73  75cb                 jne 0x538c40
// 00538c75  d1ff                 sar edi, 1
// 00538c77  bd01000000           mov ebp, 1
// 00538c7c  7423                 je 0x538ca1
// 00538c7e  8bff                 mov edi, edi
// 00538c80  45                   inc ebp
// 00538c81  d1ff                 sar edi, 1
// 00538c83  75fb                 jne 0x538c80
// 00538c85  83fd0a               cmp ebp, 0xa
// 00538c88  7e17                 jle 0x538ca1
// 00538c8a  8b442424             mov eax, dword ptr [esp + 0x24]
// 00538c8e  8b08                 mov ecx, dword ptr [eax]
// 00538c90  c7411406000000       mov dword ptr [ecx + 0x14], 6
// 00538c97  8b10                 mov edx, dword ptr [eax]
// 00538c99  50                   push eax
// 00538c9a  8b02                 mov eax, dword ptr [edx]
// 00538c9c  ffd0                 call eax
// 00538c9e  83c404               add esp, 4
// 00538ca1  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00538ca4  c1e304               shl ebx, 4
// 00538ca7  03dd                 add ebx, ebp
// 00538ca9  807e0c00             cmp byte ptr [esi + 0xc], 0
// 00538cad  8bc3                 mov eax, ebx
// 00538caf  740c                 je 0x538cbd
// 00538cb1  8b4c8e5c             mov ecx, dword ptr [esi + ecx*4 + 0x5c]
// 00538cb5  ff0481               inc dword ptr [ecx + eax*4]
// 00538cb8  8d0481               lea eax, [ecx + eax*4]
// 00538cbb  eb19                 jmp 0x538cd6
// 00538cbd  8b4c8e4c             mov ecx, dword ptr [esi + ecx*4 + 0x4c]
// 00538cc1  0fbe940100040000     movsx edx, byte ptr [ecx + eax + 0x400]
// 00538cc9  8b0481               mov eax, dword ptr [ecx + eax*4]
// 00538ccc  52                   push edx
// 00538ccd  50                   push eax
// 00538cce  e87dfaffff           call 0x538750
// 00538cd3  83c408               add esp, 8
// 00538cd6  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00538cda  55                   push ebp
// 00538cdb  51                   push ecx
// 00538cdc  e86ffaffff           call 0x538750
// 00538ce1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00538ce5  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00538ce9  83c408               add esp, 8
// 00538cec  33db                 xor ebx, ebx
// 00538cee  40                   inc eax
// 00538cef  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 00538cf3  89442414             mov dword ptr [esp + 0x14], eax
// 00538cf7  0f8ee4feffff         jle 0x538be1
// 00538cfd  85db                 test ebx, ebx
// 00538cff  7e13                 jle 0x538d14
// 00538d01  ff4638               inc dword ptr [esi + 0x38]
// 00538d04  817e38ff7f0000       cmp dword ptr [esi + 0x38], 0x7fff
// 00538d0b  7507                 jne 0x538d14
// 00538d0d  8bc6                 mov eax, esi
// 00538d0f  e8acfbffff           call 0x5388c0
// 00538d14  8b5518               mov edx, dword ptr [ebp + 0x18]
// 00538d17  8b4610               mov eax, dword ptr [esi + 0x10]
// 00538d1a  8902                 mov dword ptr [edx], eax
// 00538d1c  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 00538d1f  8b5614               mov edx, dword ptr [esi + 0x14]
// 00538d22  895104               mov dword ptr [ecx + 4], edx
// 00538d25  8badbc000000         mov ebp, dword ptr [ebp + 0xbc]
// 00538d2b  5b                   pop ebx
// 00538d2c  85ed                 test ebp, ebp
// 00538d2e  7416                 je 0x538d46
// 00538d30  837e4400             cmp dword ptr [esi + 0x44], 0
// 00538d34  750d                 jne 0x538d43
// 00538d36  8b4648               mov eax, dword ptr [esi + 0x48]
// 00538d39  40                   inc eax
// 00538d3a  83e007               and eax, 7
// 00538d3d  896e44               mov dword ptr [esi + 0x44], ebp
// 00538d40  894648               mov dword ptr [esi + 0x48], eax
// 00538d43  ff4e44               dec dword ptr [esi + 0x44]
// 00538d46  5f                   pop edi
// 00538d47  5e                   pop esi
// 00538d48  b001                 mov al, 1
// 00538d4a  5d                   pop ebp
// 00538d4b  83c410               add esp, 0x10
// 00538d4e  c3                   ret 
// library jpeg-6b/jcphuff.c (function _encode_mcu_AC_first)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
