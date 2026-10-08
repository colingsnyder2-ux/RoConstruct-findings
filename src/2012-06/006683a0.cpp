// from server: 100% by auto
// roc 2012-06 006683a0  unit: seg_00660000  size: 479 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006683a0
//
// 006683a0  83ec10               sub esp, 0x10
// 006683a3  55                   push ebp
// 006683a4  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 006683a8  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 006683ab  8b8538010000         mov eax, dword ptr [ebp + 0x138]
// 006683b1  8b11                 mov edx, dword ptr [ecx]
// 006683b3  56                   push esi
// 006683b4  8bb55c010000         mov esi, dword ptr [ebp + 0x15c]
// 006683ba  57                   push edi
// 006683bb  8bbd30010000         mov edi, dword ptr [ebp + 0x130]
// 006683c1  895610               mov dword ptr [esi + 0x10], edx
// 006683c4  8944240c             mov dword ptr [esp + 0xc], eax
// 006683c8  8b4518               mov eax, dword ptr [ebp + 0x18]
// 006683cb  8b4804               mov ecx, dword ptr [eax + 4]
// 006683ce  894e14               mov dword ptr [esi + 0x14], ecx
// 006683d1  83bdbc00000000       cmp dword ptr [ebp + 0xbc], 0
// 006683d8  897c2418             mov dword ptr [esp + 0x18], edi
// 006683dc  7414                 je 0x6683f2
// 006683de  837e4400             cmp dword ptr [esi + 0x44], 0
// 006683e2  750e                 jne 0x6683f2
// 006683e4  8b5648               mov edx, dword ptr [esi + 0x48]
// 006683e7  52                   push edx
// 006683e8  8bc6                 mov eax, esi
// 006683ea  e8a1fdffff           call 0x668190
// 006683ef  83c404               add esp, 4
// 006683f2  8b442424             mov eax, dword ptr [esp + 0x24]
// 006683f6  8b08                 mov ecx, dword ptr [eax]
// 006683f8  8b852c010000         mov eax, dword ptr [ebp + 0x12c]
// 006683fe  53                   push ebx
// 006683ff  33db                 xor ebx, ebx
// 00668401  3bc7                 cmp eax, edi
// 00668403  894c2418             mov dword ptr [esp + 0x18], ecx
// 00668407  89442414             mov dword ptr [esp + 0x14], eax
// 0066840b  0f8f33010000         jg 0x668544
// 00668411  8b14854097b800       mov edx, dword ptr [eax*4 + 0xb89740]
// 00668418  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0066841c  0fbf3c51             movsx edi, word ptr [ecx + edx*2]
// 00668420  85ff                 test edi, edi
// 00668422  7506                 jne 0x66842a
// 00668424  43                   inc ebx
// 00668425  e9f4000000           jmp 0x66851e
// 0066842a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0066842e  7d0e                 jge 0x66843e
// 00668430  f7df                 neg edi
// 00668432  d3ff                 sar edi, cl
// 00668434  8bcf                 mov ecx, edi
// 00668436  f7d1                 not ecx
// 00668438  894c2428             mov dword ptr [esp + 0x28], ecx
// 0066843c  eb06                 jmp 0x668444
// 0066843e  d3ff                 sar edi, cl
// 00668440  897c2428             mov dword ptr [esp + 0x28], edi
// 00668444  85ff                 test edi, edi
// 00668446  7506                 jne 0x66844e
// 00668448  43                   inc ebx
// 00668449  e9d0000000           jmp 0x66851e
// 0066844e  837e3800             cmp dword ptr [esi + 0x38], 0
// 00668452  7607                 jbe 0x66845b
// 00668454  8bc6                 mov eax, esi
// 00668456  e895fcffff           call 0x6680f0
// 0066845b  83fb0f               cmp ebx, 0xf
// 0066845e  7e45                 jle 0x6684a5
// 00668460  8d6bf0               lea ebp, [ebx - 0x10]
// 00668463  c1ed04               shr ebp, 4
// 00668466  45                   inc ebp
// 00668467  8bd5                 mov edx, ebp
// 00668469  f7da                 neg edx
// 0066846b  c1e204               shl edx, 4
// 0066846e  03da                 add ebx, edx
// 00668470  807e0c00             cmp byte ptr [esi + 0xc], 0
// 00668474  8b4634               mov eax, dword ptr [esi + 0x34]
// 00668477  740c                 je 0x668485
// 00668479  8b44865c             mov eax, dword ptr [esi + eax*4 + 0x5c]
// 0066847d  ff80c0030000         inc dword ptr [eax + 0x3c0]
// 00668483  eb1b                 jmp 0x6684a0
// 00668485  8b44864c             mov eax, dword ptr [esi + eax*4 + 0x4c]
// 00668489  0fbe88f0040000       movsx ecx, byte ptr [eax + 0x4f0]
// 00668490  8b90c0030000         mov edx, dword ptr [eax + 0x3c0]
// 00668496  51                   push ecx
// 00668497  52                   push edx
// 00668498  e8e3faffff           call 0x667f80
// 0066849d  83c408               add esp, 8
// 006684a0  83ed01               sub ebp, 1
// 006684a3  75cb                 jne 0x668470
// 006684a5  d1ff                 sar edi, 1
// 006684a7  bd01000000           mov ebp, 1
// 006684ac  7423                 je 0x6684d1
// 006684ae  8bff                 mov edi, edi
// 006684b0  45                   inc ebp
// 006684b1  d1ff                 sar edi, 1
// 006684b3  75fb                 jne 0x6684b0
// 006684b5  83fd0a               cmp ebp, 0xa
// 006684b8  7e17                 jle 0x6684d1
// 006684ba  8b442424             mov eax, dword ptr [esp + 0x24]
// 006684be  8b08                 mov ecx, dword ptr [eax]
// 006684c0  c7411406000000       mov dword ptr [ecx + 0x14], 6
// 006684c7  8b10                 mov edx, dword ptr [eax]
// 006684c9  50                   push eax
// 006684ca  8b02                 mov eax, dword ptr [edx]
// 006684cc  ffd0                 call eax
// 006684ce  83c404               add esp, 4
// 006684d1  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006684d4  c1e304               shl ebx, 4
// 006684d7  03dd                 add ebx, ebp
// 006684d9  807e0c00             cmp byte ptr [esi + 0xc], 0
// 006684dd  8bc3                 mov eax, ebx
// 006684df  740c                 je 0x6684ed
// 006684e1  8b4c8e5c             mov ecx, dword ptr [esi + ecx*4 + 0x5c]
// 006684e5  ff0481               inc dword ptr [ecx + eax*4]
// 006684e8  8d0481               lea eax, [ecx + eax*4]
// 006684eb  eb19                 jmp 0x668506
// 006684ed  8b4c8e4c             mov ecx, dword ptr [esi + ecx*4 + 0x4c]
// 006684f1  0fbe940100040000     movsx edx, byte ptr [ecx + eax + 0x400]
// 006684f9  8b0481               mov eax, dword ptr [ecx + eax*4]
// 006684fc  52                   push edx
// 006684fd  50                   push eax
// 006684fe  e87dfaffff           call 0x667f80
// 00668503  83c408               add esp, 8
// 00668506  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0066850a  55                   push ebp
// 0066850b  51                   push ecx
// 0066850c  e86ffaffff           call 0x667f80
// 00668511  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00668515  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00668519  83c408               add esp, 8
// 0066851c  33db                 xor ebx, ebx
// 0066851e  40                   inc eax
// 0066851f  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 00668523  89442414             mov dword ptr [esp + 0x14], eax
// 00668527  0f8ee4feffff         jle 0x668411
// 0066852d  85db                 test ebx, ebx
// 0066852f  7e13                 jle 0x668544
// 00668531  ff4638               inc dword ptr [esi + 0x38]
// 00668534  817e38ff7f0000       cmp dword ptr [esi + 0x38], 0x7fff
// 0066853b  7507                 jne 0x668544
// 0066853d  8bc6                 mov eax, esi
// 0066853f  e8acfbffff           call 0x6680f0
// 00668544  8b5518               mov edx, dword ptr [ebp + 0x18]
// 00668547  8b4610               mov eax, dword ptr [esi + 0x10]
// 0066854a  8902                 mov dword ptr [edx], eax
// 0066854c  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 0066854f  8b5614               mov edx, dword ptr [esi + 0x14]
// 00668552  895104               mov dword ptr [ecx + 4], edx
// 00668555  8badbc000000         mov ebp, dword ptr [ebp + 0xbc]
// 0066855b  5b                   pop ebx
// 0066855c  85ed                 test ebp, ebp
// 0066855e  7416                 je 0x668576
// 00668560  837e4400             cmp dword ptr [esi + 0x44], 0
// 00668564  750d                 jne 0x668573
// 00668566  8b4648               mov eax, dword ptr [esi + 0x48]
// 00668569  40                   inc eax
// 0066856a  83e007               and eax, 7
// 0066856d  896e44               mov dword ptr [esi + 0x44], ebp
// 00668570  894648               mov dword ptr [esi + 0x48], eax
// 00668573  ff4e44               dec dword ptr [esi + 0x44]
// 00668576  5f                   pop edi
// 00668577  5e                   pop esi
// 00668578  b001                 mov al, 1
// 0066857a  5d                   pop ebp
// 0066857b  83c410               add esp, 0x10
// 0066857e  c3                   ret 
// library jpeg-6b/jcphuff.c (function _encode_mcu_AC_first)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
