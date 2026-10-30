// roc 2009-12 005ff4c0  unit: G3D::_internal::DialogTemplate  size: 768 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ff4c0
//
// 005ff4c0  83ec08               sub esp, 8
// 005ff4c3  53                   push ebx
// 005ff4c4  55                   push ebp
// 005ff4c5  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 005ff4c8  8b5d04               mov ebx, dword ptr [ebp + 4]
// 005ff4cb  57                   push edi
// 005ff4cc  8b7d00               mov edi, dword ptr [ebp]
// 005ff4cf  896c2410             mov dword ptr [esp + 0x10], ebp
// 005ff4d3  8886c8000000         mov byte ptr [esi + 0xc8], al
// 005ff4d9  888ec9000000         mov byte ptr [esi + 0xc9], cl
// 005ff4df  85db                 test ebx, ebx
// 005ff4e1  751c                 jne 0x5ff4ff
// 005ff4e3  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005ff4e6  56                   push esi
// 005ff4e7  ffd2                 call edx
// 005ff4e9  83c404               add esp, 4
// 005ff4ec  84c0                 test al, al
// 005ff4ee  7509                 jne 0x5ff4f9
// 005ff4f0  5f                   pop edi
// 005ff4f1  5d                   pop ebp
// 005ff4f2  32c0                 xor al, al
// 005ff4f4  5b                   pop ebx
// 005ff4f5  83c408               add esp, 8
// 005ff4f8  c3                   ret 
// 005ff4f9  8b7d00               mov edi, dword ptr [ebp]
// 005ff4fc  8b5d04               mov ebx, dword ptr [ebp + 4]
// 005ff4ff  0fb607               movzx eax, byte ptr [edi]
// 005ff502  4b                   dec ebx
// 005ff503  c1e008               shl eax, 8
// 005ff506  47                   inc edi
// 005ff507  8944240c             mov dword ptr [esp + 0xc], eax
// 005ff50b  85db                 test ebx, ebx
// 005ff50d  7513                 jne 0x5ff522
// 005ff50f  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005ff512  56                   push esi
// 005ff513  ffd0                 call eax
// 005ff515  83c404               add esp, 4
// 005ff518  84c0                 test al, al
// 005ff51a  74d4                 je 0x5ff4f0
// 005ff51c  8b7d00               mov edi, dword ptr [ebp]
// 005ff51f  8b5d04               mov ebx, dword ptr [ebp + 4]
// 005ff522  0fb60f               movzx ecx, byte ptr [edi]
// 005ff525  014c240c             add dword ptr [esp + 0xc], ecx
// 005ff529  4b                   dec ebx
// 005ff52a  47                   inc edi
// 005ff52b  85db                 test ebx, ebx
// 005ff52d  7513                 jne 0x5ff542
// 005ff52f  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005ff532  56                   push esi
// 005ff533  ffd2                 call edx
// 005ff535  83c404               add esp, 4
// 005ff538  84c0                 test al, al
// 005ff53a  74b4                 je 0x5ff4f0
// 005ff53c  8b7d00               mov edi, dword ptr [ebp]
// 005ff53f  8b5d04               mov ebx, dword ptr [ebp + 4]
// 005ff542  0fb607               movzx eax, byte ptr [edi]
// 005ff545  4b                   dec ebx
// 005ff546  47                   inc edi
// 005ff547  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 005ff54d  85db                 test ebx, ebx
// 005ff54f  7513                 jne 0x5ff564
// 005ff551  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005ff554  56                   push esi
// 005ff555  ffd1                 call ecx
// 005ff557  83c404               add esp, 4
// 005ff55a  84c0                 test al, al
// 005ff55c  7492                 je 0x5ff4f0
// 005ff55e  8b7d00               mov edi, dword ptr [ebp]
// 005ff561  8b5d04               mov ebx, dword ptr [ebp + 4]
// 005ff564  0fb617               movzx edx, byte ptr [edi]
// 005ff567  4b                   dec ebx
// 005ff568  c1e208               shl edx, 8
// 005ff56b  47                   inc edi
// 005ff56c  895620               mov dword ptr [esi + 0x20], edx
// 005ff56f  85db                 test ebx, ebx
// 005ff571  7517                 jne 0x5ff58a
// 005ff573  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005ff576  56                   push esi
// 005ff577  ffd0                 call eax
// 005ff579  83c404               add esp, 4
// 005ff57c  84c0                 test al, al
// 005ff57e  0f846cffffff         je 0x5ff4f0
// 005ff584  8b7d00               mov edi, dword ptr [ebp]
// 005ff587  8b5d04               mov ebx, dword ptr [ebp + 4]
// 005ff58a  0fb60f               movzx ecx, byte ptr [edi]
// 005ff58d  014e20               add dword ptr [esi + 0x20], ecx
// 005ff590  4b                   dec ebx
// 005ff591  47                   inc edi
// 005ff592  85db                 test ebx, ebx
// 005ff594  7517                 jne 0x5ff5ad
// 005ff596  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005ff599  56                   push esi
// 005ff59a  ffd2                 call edx
// 005ff59c  83c404               add esp, 4
// 005ff59f  84c0                 test al, al
// 005ff5a1  0f8449ffffff         je 0x5ff4f0
// 005ff5a7  8b7d00               mov edi, dword ptr [ebp]
// 005ff5aa  8b5d04               mov ebx, dword ptr [ebp + 4]
// 005ff5ad  0fb607               movzx eax, byte ptr [edi]
// 005ff5b0  4b                   dec ebx
// 005ff5b1  c1e008               shl eax, 8
// 005ff5b4  47                   inc edi
// 005ff5b5  89461c               mov dword ptr [esi + 0x1c], eax
// 005ff5b8  85db                 test ebx, ebx
// 005ff5ba  7517                 jne 0x5ff5d3
// 005ff5bc  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005ff5bf  56                   push esi
// 005ff5c0  ffd1                 call ecx
// 005ff5c2  83c404               add esp, 4
// 005ff5c5  84c0                 test al, al
// 005ff5c7  0f8423ffffff         je 0x5ff4f0
// 005ff5cd  8b7d00               mov edi, dword ptr [ebp]
// 005ff5d0  8b5d04               mov ebx, dword ptr [ebp + 4]
// 005ff5d3  0fb617               movzx edx, byte ptr [edi]
// 005ff5d6  01561c               add dword ptr [esi + 0x1c], edx
// 005ff5d9  4b                   dec ebx
// 005ff5da  47                   inc edi
// 005ff5db  85db                 test ebx, ebx
// 005ff5dd  7517                 jne 0x5ff5f6
// 005ff5df  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005ff5e2  56                   push esi
// 005ff5e3  ffd0                 call eax
// 005ff5e5  83c404               add esp, 4
// 005ff5e8  84c0                 test al, al
// 005ff5ea  0f8400ffffff         je 0x5ff4f0
// 005ff5f0  8b7d00               mov edi, dword ptr [ebp]
// 005ff5f3  8b5d04               mov ebx, dword ptr [ebp + 4]
// 005ff5f6  0fb60f               movzx ecx, byte ptr [edi]
// 005ff5f9  8b06                 mov eax, dword ptr [esi]
// 005ff5fb  8b967c010000         mov edx, dword ptr [esi + 0x17c]
// 005ff601  836c240c08           sub dword ptr [esp + 0xc], 8
// 005ff606  894e24               mov dword ptr [esi + 0x24], ecx
// 005ff609  83c018               add eax, 0x18
// 005ff60c  8910                 mov dword ptr [eax], edx
// 005ff60e  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005ff611  894804               mov dword ptr [eax + 4], ecx
// 005ff614  8b5620               mov edx, dword ptr [esi + 0x20]
// 005ff617  895008               mov dword ptr [eax + 8], edx
// 005ff61a  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 005ff61d  89480c               mov dword ptr [eax + 0xc], ecx
// 005ff620  8b16                 mov edx, dword ptr [esi]
// 005ff622  c7421464000000       mov dword ptr [edx + 0x14], 0x64
// 005ff629  8b06                 mov eax, dword ptr [esi]
// 005ff62b  8b4804               mov ecx, dword ptr [eax + 4]
// 005ff62e  6a01                 push 1
// 005ff630  56                   push esi
// 005ff631  4b                   dec ebx
// 005ff632  47                   inc edi
// 005ff633  ffd1                 call ecx
// 005ff635  8b9694010000         mov edx, dword ptr [esi + 0x194]
// 005ff63b  83c408               add esp, 8
// 005ff63e  807a0d00             cmp byte ptr [edx + 0xd], 0
// 005ff642  7413                 je 0x5ff657
// 005ff644  8b06                 mov eax, dword ptr [esi]
// 005ff646  c740143a000000       mov dword ptr [eax + 0x14], 0x3a
// 005ff64d  8b0e                 mov ecx, dword ptr [esi]
// 005ff64f  8b11                 mov edx, dword ptr [ecx]
// 005ff651  56                   push esi
// 005ff652  ffd2                 call edx
// 005ff654  83c404               add esp, 4
// 005ff657  837e2000             cmp dword ptr [esi + 0x20], 0
// 005ff65b  760c                 jbe 0x5ff669
// 005ff65d  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 005ff661  7606                 jbe 0x5ff669
// 005ff663  837e2400             cmp dword ptr [esi + 0x24], 0
// 005ff667  7f13                 jg 0x5ff67c
// 005ff669  8b06                 mov eax, dword ptr [esi]
// 005ff66b  c7401420000000       mov dword ptr [eax + 0x14], 0x20
// 005ff672  8b0e                 mov ecx, dword ptr [esi]
// 005ff674  8b11                 mov edx, dword ptr [ecx]
// 005ff676  56                   push esi
// 005ff677  ffd2                 call edx
// 005ff679  83c404               add esp, 4
// 005ff67c  8b4624               mov eax, dword ptr [esi + 0x24]
// 005ff67f  8d0440               lea eax, [eax + eax*2]
// 005ff682  3944240c             cmp dword ptr [esp + 0xc], eax
// 005ff686  7413                 je 0x5ff69b
// 005ff688  8b0e                 mov ecx, dword ptr [esi]
// 005ff68a  c741140b000000       mov dword ptr [ecx + 0x14], 0xb
// 005ff691  8b16                 mov edx, dword ptr [esi]
// 005ff693  8b02                 mov eax, dword ptr [edx]
// 005ff695  56                   push esi
// 005ff696  ffd0                 call eax
// 005ff698  83c404               add esp, 4
// 005ff69b  83bec400000000       cmp dword ptr [esi + 0xc4], 0
// 005ff6a2  751a                 jne 0x5ff6be
// 005ff6a4  8b5624               mov edx, dword ptr [esi + 0x24]
// 005ff6a7  8b4e04               mov ecx, dword ptr [esi + 4]
// 005ff6aa  6bd254               imul edx, edx, 0x54
// 005ff6ad  8b01                 mov eax, dword ptr [ecx]
// 005ff6af  52                   push edx
// 005ff6b0  6a01                 push 1
// 005ff6b2  56                   push esi
// 005ff6b3  ffd0                 call eax
// 005ff6b5  83c40c               add esp, 0xc
// 005ff6b8  8986c4000000         mov dword ptr [esi + 0xc4], eax
// 005ff6be  837e2400             cmp dword ptr [esi + 0x24], 0
// 005ff6c2  8baec4000000         mov ebp, dword ptr [esi + 0xc4]
// 005ff6c8  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ff6d0  0f8ece000000         jle 0x5ff7a4
// 005ff6d6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ff6da  894d04               mov dword ptr [ebp + 4], ecx
// 005ff6dd  85db                 test ebx, ebx
// 005ff6df  751a                 jne 0x5ff6fb
// 005ff6e1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005ff6e5  8b530c               mov edx, dword ptr [ebx + 0xc]
// 005ff6e8  56                   push esi
// 005ff6e9  ffd2                 call edx
// 005ff6eb  83c404               add esp, 4
// 005ff6ee  84c0                 test al, al
// 005ff6f0  0f84fafdffff         je 0x5ff4f0
// 005ff6f6  8b3b                 mov edi, dword ptr [ebx]
// 005ff6f8  8b5b04               mov ebx, dword ptr [ebx + 4]
// 005ff6fb  0fb607               movzx eax, byte ptr [edi]
// 005ff6fe  4b                   dec ebx
// 005ff6ff  47                   inc edi
// 005ff700  894500               mov dword ptr [ebp], eax
// 005ff703  85db                 test ebx, ebx
// 005ff705  751a                 jne 0x5ff721
// 005ff707  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005ff70b  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 005ff70e  56                   push esi
// 005ff70f  ffd1                 call ecx
// 005ff711  83c404               add esp, 4
// 005ff714  84c0                 test al, al
// 005ff716  0f84d4fdffff         je 0x5ff4f0
// 005ff71c  8b3b                 mov edi, dword ptr [ebx]
// 005ff71e  8b5b04               mov ebx, dword ptr [ebx + 4]
// 005ff721  0fb607               movzx eax, byte ptr [edi]
// 005ff724  8bd0                 mov edx, eax
// 005ff726  c1fa04               sar edx, 4
// 005ff729  4b                   dec ebx
// 005ff72a  83e20f               and edx, 0xf
// 005ff72d  83e00f               and eax, 0xf
// 005ff730  47                   inc edi
// 005ff731  895508               mov dword ptr [ebp + 8], edx
// 005ff734  89450c               mov dword ptr [ebp + 0xc], eax
// 005ff737  85db                 test ebx, ebx
// 005ff739  751a                 jne 0x5ff755
// 005ff73b  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005ff73f  8b430c               mov eax, dword ptr [ebx + 0xc]
// 005ff742  56                   push esi
// 005ff743  ffd0                 call eax
// 005ff745  83c404               add esp, 4
// 005ff748  84c0                 test al, al
// 005ff74a  0f84a0fdffff         je 0x5ff4f0
// 005ff750  8b3b                 mov edi, dword ptr [ebx]
// 005ff752  8b5b04               mov ebx, dword ptr [ebx + 4]
// 005ff755  0fb60f               movzx ecx, byte ptr [edi]
// 005ff758  8b5500               mov edx, dword ptr [ebp]
// 005ff75b  894d10               mov dword ptr [ebp + 0x10], ecx
// 005ff75e  8b06                 mov eax, dword ptr [esi]
// 005ff760  83c018               add eax, 0x18
// 005ff763  8910                 mov dword ptr [eax], edx
// 005ff765  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005ff768  894804               mov dword ptr [eax + 4], ecx
// 005ff76b  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005ff76e  895008               mov dword ptr [eax + 8], edx
// 005ff771  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 005ff774  89480c               mov dword ptr [eax + 0xc], ecx
// 005ff777  8b16                 mov edx, dword ptr [esi]
// 005ff779  c7421465000000       mov dword ptr [edx + 0x14], 0x65
// 005ff780  8b06                 mov eax, dword ptr [esi]
// 005ff782  8b4804               mov ecx, dword ptr [eax + 4]
// 005ff785  6a01                 push 1
// 005ff787  56                   push esi
// 005ff788  4b                   dec ebx
// 005ff789  47                   inc edi
// 005ff78a  ffd1                 call ecx
// 005ff78c  8b442414             mov eax, dword ptr [esp + 0x14]
// 005ff790  40                   inc eax
// 005ff791  83c408               add esp, 8
// 005ff794  83c554               add ebp, 0x54
// 005ff797  3b4624               cmp eax, dword ptr [esi + 0x24]
// 005ff79a  8944240c             mov dword ptr [esp + 0xc], eax
// 005ff79e  0f8c32ffffff         jl 0x5ff6d6
// 005ff7a4  8b9694010000         mov edx, dword ptr [esi + 0x194]
// 005ff7aa  8b442410             mov eax, dword ptr [esp + 0x10]
// 005ff7ae  c6420d01             mov byte ptr [edx + 0xd], 1
// 005ff7b2  8938                 mov dword ptr [eax], edi
// 005ff7b4  5f                   pop edi
// 005ff7b5  895804               mov dword ptr [eax + 4], ebx
// 005ff7b8  5d                   pop ebp
// 005ff7b9  b001                 mov al, 1
// 005ff7bb  5b                   pop ebx
// 005ff7bc  83c408               add esp, 8
// 005ff7bf  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_sof)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
