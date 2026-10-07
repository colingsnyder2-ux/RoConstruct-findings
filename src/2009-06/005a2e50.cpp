// roc 2009-06 005a2e50  unit: seg_005a0000  size: 479 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a2e50
//
// 005a2e50  83ec10               sub esp, 0x10
// 005a2e53  55                   push ebp
// 005a2e54  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 005a2e58  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 005a2e5b  8b8538010000         mov eax, dword ptr [ebp + 0x138]
// 005a2e61  8b11                 mov edx, dword ptr [ecx]
// 005a2e63  56                   push esi
// 005a2e64  8bb55c010000         mov esi, dword ptr [ebp + 0x15c]
// 005a2e6a  57                   push edi
// 005a2e6b  8bbd30010000         mov edi, dword ptr [ebp + 0x130]
// 005a2e71  895610               mov dword ptr [esi + 0x10], edx
// 005a2e74  8944240c             mov dword ptr [esp + 0xc], eax
// 005a2e78  8b4518               mov eax, dword ptr [ebp + 0x18]
// 005a2e7b  8b4804               mov ecx, dword ptr [eax + 4]
// 005a2e7e  894e14               mov dword ptr [esi + 0x14], ecx
// 005a2e81  83bdbc00000000       cmp dword ptr [ebp + 0xbc], 0
// 005a2e88  897c2418             mov dword ptr [esp + 0x18], edi
// 005a2e8c  7414                 je 0x5a2ea2
// 005a2e8e  837e4400             cmp dword ptr [esi + 0x44], 0
// 005a2e92  750e                 jne 0x5a2ea2
// 005a2e94  8b5648               mov edx, dword ptr [esi + 0x48]
// 005a2e97  52                   push edx
// 005a2e98  8bc6                 mov eax, esi
// 005a2e9a  e8a1fdffff           call 0x5a2c40
// 005a2e9f  83c404               add esp, 4
// 005a2ea2  8b442424             mov eax, dword ptr [esp + 0x24]
// 005a2ea6  8b08                 mov ecx, dword ptr [eax]
// 005a2ea8  8b852c010000         mov eax, dword ptr [ebp + 0x12c]
// 005a2eae  53                   push ebx
// 005a2eaf  33db                 xor ebx, ebx
// 005a2eb1  3bc7                 cmp eax, edi
// 005a2eb3  894c2418             mov dword ptr [esp + 0x18], ecx
// 005a2eb7  89442414             mov dword ptr [esp + 0x14], eax
// 005a2ebb  0f8f33010000         jg 0x5a2ff4
// 005a2ec1  8b1485f8e88c00       mov edx, dword ptr [eax*4 + 0x8ce8f8]
// 005a2ec8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005a2ecc  0fbf3c51             movsx edi, word ptr [ecx + edx*2]
// 005a2ed0  85ff                 test edi, edi
// 005a2ed2  7506                 jne 0x5a2eda
// 005a2ed4  43                   inc ebx
// 005a2ed5  e9f4000000           jmp 0x5a2fce
// 005a2eda  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a2ede  7d0e                 jge 0x5a2eee
// 005a2ee0  f7df                 neg edi
// 005a2ee2  d3ff                 sar edi, cl
// 005a2ee4  8bcf                 mov ecx, edi
// 005a2ee6  f7d1                 not ecx
// 005a2ee8  894c2428             mov dword ptr [esp + 0x28], ecx
// 005a2eec  eb06                 jmp 0x5a2ef4
// 005a2eee  d3ff                 sar edi, cl
// 005a2ef0  897c2428             mov dword ptr [esp + 0x28], edi
// 005a2ef4  85ff                 test edi, edi
// 005a2ef6  7506                 jne 0x5a2efe
// 005a2ef8  43                   inc ebx
// 005a2ef9  e9d0000000           jmp 0x5a2fce
// 005a2efe  837e3800             cmp dword ptr [esi + 0x38], 0
// 005a2f02  7607                 jbe 0x5a2f0b
// 005a2f04  8bc6                 mov eax, esi
// 005a2f06  e895fcffff           call 0x5a2ba0
// 005a2f0b  83fb0f               cmp ebx, 0xf
// 005a2f0e  7e45                 jle 0x5a2f55
// 005a2f10  8d6bf0               lea ebp, [ebx - 0x10]
// 005a2f13  c1ed04               shr ebp, 4
// 005a2f16  45                   inc ebp
// 005a2f17  8bd5                 mov edx, ebp
// 005a2f19  f7da                 neg edx
// 005a2f1b  c1e204               shl edx, 4
// 005a2f1e  03da                 add ebx, edx
// 005a2f20  807e0c00             cmp byte ptr [esi + 0xc], 0
// 005a2f24  8b4634               mov eax, dword ptr [esi + 0x34]
// 005a2f27  740c                 je 0x5a2f35
// 005a2f29  8b44865c             mov eax, dword ptr [esi + eax*4 + 0x5c]
// 005a2f2d  ff80c0030000         inc dword ptr [eax + 0x3c0]
// 005a2f33  eb1b                 jmp 0x5a2f50
// 005a2f35  8b44864c             mov eax, dword ptr [esi + eax*4 + 0x4c]
// 005a2f39  0fbe88f0040000       movsx ecx, byte ptr [eax + 0x4f0]
// 005a2f40  8b90c0030000         mov edx, dword ptr [eax + 0x3c0]
// 005a2f46  51                   push ecx
// 005a2f47  52                   push edx
// 005a2f48  e8e3faffff           call 0x5a2a30
// 005a2f4d  83c408               add esp, 8
// 005a2f50  83ed01               sub ebp, 1
// 005a2f53  75cb                 jne 0x5a2f20
// 005a2f55  d1ff                 sar edi, 1
// 005a2f57  bd01000000           mov ebp, 1
// 005a2f5c  7423                 je 0x5a2f81
// 005a2f5e  8bff                 mov edi, edi
// 005a2f60  45                   inc ebp
// 005a2f61  d1ff                 sar edi, 1
// 005a2f63  75fb                 jne 0x5a2f60
// 005a2f65  83fd0a               cmp ebp, 0xa
// 005a2f68  7e17                 jle 0x5a2f81
// 005a2f6a  8b442424             mov eax, dword ptr [esp + 0x24]
// 005a2f6e  8b08                 mov ecx, dword ptr [eax]
// 005a2f70  c7411406000000       mov dword ptr [ecx + 0x14], 6
// 005a2f77  8b10                 mov edx, dword ptr [eax]
// 005a2f79  50                   push eax
// 005a2f7a  8b02                 mov eax, dword ptr [edx]
// 005a2f7c  ffd0                 call eax
// 005a2f7e  83c404               add esp, 4
// 005a2f81  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 005a2f84  c1e304               shl ebx, 4
// 005a2f87  03dd                 add ebx, ebp
// 005a2f89  807e0c00             cmp byte ptr [esi + 0xc], 0
// 005a2f8d  8bc3                 mov eax, ebx
// 005a2f8f  740c                 je 0x5a2f9d
// 005a2f91  8b4c8e5c             mov ecx, dword ptr [esi + ecx*4 + 0x5c]
// 005a2f95  ff0481               inc dword ptr [ecx + eax*4]
// 005a2f98  8d0481               lea eax, [ecx + eax*4]
// 005a2f9b  eb19                 jmp 0x5a2fb6
// 005a2f9d  8b4c8e4c             mov ecx, dword ptr [esi + ecx*4 + 0x4c]
// 005a2fa1  0fbe940100040000     movsx edx, byte ptr [ecx + eax + 0x400]
// 005a2fa9  8b0481               mov eax, dword ptr [ecx + eax*4]
// 005a2fac  52                   push edx
// 005a2fad  50                   push eax
// 005a2fae  e87dfaffff           call 0x5a2a30
// 005a2fb3  83c408               add esp, 8
// 005a2fb6  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005a2fba  55                   push ebp
// 005a2fbb  51                   push ecx
// 005a2fbc  e86ffaffff           call 0x5a2a30
// 005a2fc1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005a2fc5  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 005a2fc9  83c408               add esp, 8
// 005a2fcc  33db                 xor ebx, ebx
// 005a2fce  40                   inc eax
// 005a2fcf  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 005a2fd3  89442414             mov dword ptr [esp + 0x14], eax
// 005a2fd7  0f8ee4feffff         jle 0x5a2ec1
// 005a2fdd  85db                 test ebx, ebx
// 005a2fdf  7e13                 jle 0x5a2ff4
// 005a2fe1  ff4638               inc dword ptr [esi + 0x38]
// 005a2fe4  817e38ff7f0000       cmp dword ptr [esi + 0x38], 0x7fff
// 005a2feb  7507                 jne 0x5a2ff4
// 005a2fed  8bc6                 mov eax, esi
// 005a2fef  e8acfbffff           call 0x5a2ba0
// 005a2ff4  8b5518               mov edx, dword ptr [ebp + 0x18]
// 005a2ff7  8b4610               mov eax, dword ptr [esi + 0x10]
// 005a2ffa  8902                 mov dword ptr [edx], eax
// 005a2ffc  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 005a2fff  8b5614               mov edx, dword ptr [esi + 0x14]
// 005a3002  895104               mov dword ptr [ecx + 4], edx
// 005a3005  8badbc000000         mov ebp, dword ptr [ebp + 0xbc]
// 005a300b  5b                   pop ebx
// 005a300c  85ed                 test ebp, ebp
// 005a300e  7416                 je 0x5a3026
// 005a3010  837e4400             cmp dword ptr [esi + 0x44], 0
// 005a3014  750d                 jne 0x5a3023
// 005a3016  8b4648               mov eax, dword ptr [esi + 0x48]
// 005a3019  40                   inc eax
// 005a301a  83e007               and eax, 7
// 005a301d  896e44               mov dword ptr [esi + 0x44], ebp
// 005a3020  894648               mov dword ptr [esi + 0x48], eax
// 005a3023  ff4e44               dec dword ptr [esi + 0x44]
// 005a3026  5f                   pop edi
// 005a3027  5e                   pop esi
// 005a3028  b001                 mov al, 1
// 005a302a  5d                   pop ebp
// 005a302b  83c410               add esp, 0x10
// 005a302e  c3                   ret 
// library jpeg-6b/jcphuff.c (function _encode_mcu_AC_first)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
