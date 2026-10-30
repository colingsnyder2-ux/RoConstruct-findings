// from server: 100% by auto
// roc 2012-06 00642480  unit: G3D::Sphere  size: 768 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00642480
//
// 00642480  83ec08               sub esp, 8
// 00642483  53                   push ebx
// 00642484  55                   push ebp
// 00642485  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 00642488  8b5d04               mov ebx, dword ptr [ebp + 4]
// 0064248b  57                   push edi
// 0064248c  8b7d00               mov edi, dword ptr [ebp]
// 0064248f  896c2410             mov dword ptr [esp + 0x10], ebp
// 00642493  8886c8000000         mov byte ptr [esi + 0xc8], al
// 00642499  888ec9000000         mov byte ptr [esi + 0xc9], cl
// 0064249f  85db                 test ebx, ebx
// 006424a1  751c                 jne 0x6424bf
// 006424a3  8b550c               mov edx, dword ptr [ebp + 0xc]
// 006424a6  56                   push esi
// 006424a7  ffd2                 call edx
// 006424a9  83c404               add esp, 4
// 006424ac  84c0                 test al, al
// 006424ae  7509                 jne 0x6424b9
// 006424b0  5f                   pop edi
// 006424b1  5d                   pop ebp
// 006424b2  32c0                 xor al, al
// 006424b4  5b                   pop ebx
// 006424b5  83c408               add esp, 8
// 006424b8  c3                   ret 
// 006424b9  8b7d00               mov edi, dword ptr [ebp]
// 006424bc  8b5d04               mov ebx, dword ptr [ebp + 4]
// 006424bf  0fb607               movzx eax, byte ptr [edi]
// 006424c2  4b                   dec ebx
// 006424c3  c1e008               shl eax, 8
// 006424c6  47                   inc edi
// 006424c7  8944240c             mov dword ptr [esp + 0xc], eax
// 006424cb  85db                 test ebx, ebx
// 006424cd  7513                 jne 0x6424e2
// 006424cf  8b450c               mov eax, dword ptr [ebp + 0xc]
// 006424d2  56                   push esi
// 006424d3  ffd0                 call eax
// 006424d5  83c404               add esp, 4
// 006424d8  84c0                 test al, al
// 006424da  74d4                 je 0x6424b0
// 006424dc  8b7d00               mov edi, dword ptr [ebp]
// 006424df  8b5d04               mov ebx, dword ptr [ebp + 4]
// 006424e2  0fb60f               movzx ecx, byte ptr [edi]
// 006424e5  014c240c             add dword ptr [esp + 0xc], ecx
// 006424e9  4b                   dec ebx
// 006424ea  47                   inc edi
// 006424eb  85db                 test ebx, ebx
// 006424ed  7513                 jne 0x642502
// 006424ef  8b550c               mov edx, dword ptr [ebp + 0xc]
// 006424f2  56                   push esi
// 006424f3  ffd2                 call edx
// 006424f5  83c404               add esp, 4
// 006424f8  84c0                 test al, al
// 006424fa  74b4                 je 0x6424b0
// 006424fc  8b7d00               mov edi, dword ptr [ebp]
// 006424ff  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00642502  0fb607               movzx eax, byte ptr [edi]
// 00642505  4b                   dec ebx
// 00642506  47                   inc edi
// 00642507  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 0064250d  85db                 test ebx, ebx
// 0064250f  7513                 jne 0x642524
// 00642511  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00642514  56                   push esi
// 00642515  ffd1                 call ecx
// 00642517  83c404               add esp, 4
// 0064251a  84c0                 test al, al
// 0064251c  7492                 je 0x6424b0
// 0064251e  8b7d00               mov edi, dword ptr [ebp]
// 00642521  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00642524  0fb617               movzx edx, byte ptr [edi]
// 00642527  4b                   dec ebx
// 00642528  c1e208               shl edx, 8
// 0064252b  47                   inc edi
// 0064252c  895620               mov dword ptr [esi + 0x20], edx
// 0064252f  85db                 test ebx, ebx
// 00642531  7517                 jne 0x64254a
// 00642533  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00642536  56                   push esi
// 00642537  ffd0                 call eax
// 00642539  83c404               add esp, 4
// 0064253c  84c0                 test al, al
// 0064253e  0f846cffffff         je 0x6424b0
// 00642544  8b7d00               mov edi, dword ptr [ebp]
// 00642547  8b5d04               mov ebx, dword ptr [ebp + 4]
// 0064254a  0fb60f               movzx ecx, byte ptr [edi]
// 0064254d  014e20               add dword ptr [esi + 0x20], ecx
// 00642550  4b                   dec ebx
// 00642551  47                   inc edi
// 00642552  85db                 test ebx, ebx
// 00642554  7517                 jne 0x64256d
// 00642556  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00642559  56                   push esi
// 0064255a  ffd2                 call edx
// 0064255c  83c404               add esp, 4
// 0064255f  84c0                 test al, al
// 00642561  0f8449ffffff         je 0x6424b0
// 00642567  8b7d00               mov edi, dword ptr [ebp]
// 0064256a  8b5d04               mov ebx, dword ptr [ebp + 4]
// 0064256d  0fb607               movzx eax, byte ptr [edi]
// 00642570  4b                   dec ebx
// 00642571  c1e008               shl eax, 8
// 00642574  47                   inc edi
// 00642575  89461c               mov dword ptr [esi + 0x1c], eax
// 00642578  85db                 test ebx, ebx
// 0064257a  7517                 jne 0x642593
// 0064257c  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0064257f  56                   push esi
// 00642580  ffd1                 call ecx
// 00642582  83c404               add esp, 4
// 00642585  84c0                 test al, al
// 00642587  0f8423ffffff         je 0x6424b0
// 0064258d  8b7d00               mov edi, dword ptr [ebp]
// 00642590  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00642593  0fb617               movzx edx, byte ptr [edi]
// 00642596  01561c               add dword ptr [esi + 0x1c], edx
// 00642599  4b                   dec ebx
// 0064259a  47                   inc edi
// 0064259b  85db                 test ebx, ebx
// 0064259d  7517                 jne 0x6425b6
// 0064259f  8b450c               mov eax, dword ptr [ebp + 0xc]
// 006425a2  56                   push esi
// 006425a3  ffd0                 call eax
// 006425a5  83c404               add esp, 4
// 006425a8  84c0                 test al, al
// 006425aa  0f8400ffffff         je 0x6424b0
// 006425b0  8b7d00               mov edi, dword ptr [ebp]
// 006425b3  8b5d04               mov ebx, dword ptr [ebp + 4]
// 006425b6  0fb60f               movzx ecx, byte ptr [edi]
// 006425b9  8b06                 mov eax, dword ptr [esi]
// 006425bb  8b967c010000         mov edx, dword ptr [esi + 0x17c]
// 006425c1  836c240c08           sub dword ptr [esp + 0xc], 8
// 006425c6  894e24               mov dword ptr [esi + 0x24], ecx
// 006425c9  83c018               add eax, 0x18
// 006425cc  8910                 mov dword ptr [eax], edx
// 006425ce  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 006425d1  894804               mov dword ptr [eax + 4], ecx
// 006425d4  8b5620               mov edx, dword ptr [esi + 0x20]
// 006425d7  895008               mov dword ptr [eax + 8], edx
// 006425da  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 006425dd  89480c               mov dword ptr [eax + 0xc], ecx
// 006425e0  8b16                 mov edx, dword ptr [esi]
// 006425e2  c7421464000000       mov dword ptr [edx + 0x14], 0x64
// 006425e9  8b06                 mov eax, dword ptr [esi]
// 006425eb  8b4804               mov ecx, dword ptr [eax + 4]
// 006425ee  6a01                 push 1
// 006425f0  56                   push esi
// 006425f1  4b                   dec ebx
// 006425f2  47                   inc edi
// 006425f3  ffd1                 call ecx
// 006425f5  8b9694010000         mov edx, dword ptr [esi + 0x194]
// 006425fb  83c408               add esp, 8
// 006425fe  807a0d00             cmp byte ptr [edx + 0xd], 0
// 00642602  7413                 je 0x642617
// 00642604  8b06                 mov eax, dword ptr [esi]
// 00642606  c740143a000000       mov dword ptr [eax + 0x14], 0x3a
// 0064260d  8b0e                 mov ecx, dword ptr [esi]
// 0064260f  8b11                 mov edx, dword ptr [ecx]
// 00642611  56                   push esi
// 00642612  ffd2                 call edx
// 00642614  83c404               add esp, 4
// 00642617  837e2000             cmp dword ptr [esi + 0x20], 0
// 0064261b  760c                 jbe 0x642629
// 0064261d  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 00642621  7606                 jbe 0x642629
// 00642623  837e2400             cmp dword ptr [esi + 0x24], 0
// 00642627  7f13                 jg 0x64263c
// 00642629  8b06                 mov eax, dword ptr [esi]
// 0064262b  c7401420000000       mov dword ptr [eax + 0x14], 0x20
// 00642632  8b0e                 mov ecx, dword ptr [esi]
// 00642634  8b11                 mov edx, dword ptr [ecx]
// 00642636  56                   push esi
// 00642637  ffd2                 call edx
// 00642639  83c404               add esp, 4
// 0064263c  8b4624               mov eax, dword ptr [esi + 0x24]
// 0064263f  8d0440               lea eax, [eax + eax*2]
// 00642642  3944240c             cmp dword ptr [esp + 0xc], eax
// 00642646  7413                 je 0x64265b
// 00642648  8b0e                 mov ecx, dword ptr [esi]
// 0064264a  c741140b000000       mov dword ptr [ecx + 0x14], 0xb
// 00642651  8b16                 mov edx, dword ptr [esi]
// 00642653  8b02                 mov eax, dword ptr [edx]
// 00642655  56                   push esi
// 00642656  ffd0                 call eax
// 00642658  83c404               add esp, 4
// 0064265b  83bec400000000       cmp dword ptr [esi + 0xc4], 0
// 00642662  751a                 jne 0x64267e
// 00642664  8b5624               mov edx, dword ptr [esi + 0x24]
// 00642667  8b4e04               mov ecx, dword ptr [esi + 4]
// 0064266a  6bd254               imul edx, edx, 0x54
// 0064266d  8b01                 mov eax, dword ptr [ecx]
// 0064266f  52                   push edx
// 00642670  6a01                 push 1
// 00642672  56                   push esi
// 00642673  ffd0                 call eax
// 00642675  83c40c               add esp, 0xc
// 00642678  8986c4000000         mov dword ptr [esi + 0xc4], eax
// 0064267e  837e2400             cmp dword ptr [esi + 0x24], 0
// 00642682  8baec4000000         mov ebp, dword ptr [esi + 0xc4]
// 00642688  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00642690  0f8ece000000         jle 0x642764
// 00642696  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0064269a  894d04               mov dword ptr [ebp + 4], ecx
// 0064269d  85db                 test ebx, ebx
// 0064269f  751a                 jne 0x6426bb
// 006426a1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006426a5  8b530c               mov edx, dword ptr [ebx + 0xc]
// 006426a8  56                   push esi
// 006426a9  ffd2                 call edx
// 006426ab  83c404               add esp, 4
// 006426ae  84c0                 test al, al
// 006426b0  0f84fafdffff         je 0x6424b0
// 006426b6  8b3b                 mov edi, dword ptr [ebx]
// 006426b8  8b5b04               mov ebx, dword ptr [ebx + 4]
// 006426bb  0fb607               movzx eax, byte ptr [edi]
// 006426be  4b                   dec ebx
// 006426bf  47                   inc edi
// 006426c0  894500               mov dword ptr [ebp], eax
// 006426c3  85db                 test ebx, ebx
// 006426c5  751a                 jne 0x6426e1
// 006426c7  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006426cb  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 006426ce  56                   push esi
// 006426cf  ffd1                 call ecx
// 006426d1  83c404               add esp, 4
// 006426d4  84c0                 test al, al
// 006426d6  0f84d4fdffff         je 0x6424b0
// 006426dc  8b3b                 mov edi, dword ptr [ebx]
// 006426de  8b5b04               mov ebx, dword ptr [ebx + 4]
// 006426e1  0fb607               movzx eax, byte ptr [edi]
// 006426e4  8bd0                 mov edx, eax
// 006426e6  c1fa04               sar edx, 4
// 006426e9  4b                   dec ebx
// 006426ea  83e20f               and edx, 0xf
// 006426ed  83e00f               and eax, 0xf
// 006426f0  47                   inc edi
// 006426f1  895508               mov dword ptr [ebp + 8], edx
// 006426f4  89450c               mov dword ptr [ebp + 0xc], eax
// 006426f7  85db                 test ebx, ebx
// 006426f9  751a                 jne 0x642715
// 006426fb  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006426ff  8b430c               mov eax, dword ptr [ebx + 0xc]
// 00642702  56                   push esi
// 00642703  ffd0                 call eax
// 00642705  83c404               add esp, 4
// 00642708  84c0                 test al, al
// 0064270a  0f84a0fdffff         je 0x6424b0
// 00642710  8b3b                 mov edi, dword ptr [ebx]
// 00642712  8b5b04               mov ebx, dword ptr [ebx + 4]
// 00642715  0fb60f               movzx ecx, byte ptr [edi]
// 00642718  8b5500               mov edx, dword ptr [ebp]
// 0064271b  894d10               mov dword ptr [ebp + 0x10], ecx
// 0064271e  8b06                 mov eax, dword ptr [esi]
// 00642720  83c018               add eax, 0x18
// 00642723  8910                 mov dword ptr [eax], edx
// 00642725  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00642728  894804               mov dword ptr [eax + 4], ecx
// 0064272b  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0064272e  895008               mov dword ptr [eax + 8], edx
// 00642731  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 00642734  89480c               mov dword ptr [eax + 0xc], ecx
// 00642737  8b16                 mov edx, dword ptr [esi]
// 00642739  c7421465000000       mov dword ptr [edx + 0x14], 0x65
// 00642740  8b06                 mov eax, dword ptr [esi]
// 00642742  8b4804               mov ecx, dword ptr [eax + 4]
// 00642745  6a01                 push 1
// 00642747  56                   push esi
// 00642748  4b                   dec ebx
// 00642749  47                   inc edi
// 0064274a  ffd1                 call ecx
// 0064274c  8b442414             mov eax, dword ptr [esp + 0x14]
// 00642750  40                   inc eax
// 00642751  83c408               add esp, 8
// 00642754  83c554               add ebp, 0x54
// 00642757  3b4624               cmp eax, dword ptr [esi + 0x24]
// 0064275a  8944240c             mov dword ptr [esp + 0xc], eax
// 0064275e  0f8c32ffffff         jl 0x642696
// 00642764  8b9694010000         mov edx, dword ptr [esi + 0x194]
// 0064276a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0064276e  c6420d01             mov byte ptr [edx + 0xd], 1
// 00642772  8938                 mov dword ptr [eax], edi
// 00642774  5f                   pop edi
// 00642775  895804               mov dword ptr [eax + 4], ebx
// 00642778  5d                   pop ebp
// 00642779  b001                 mov al, 1
// 0064277b  5b                   pop ebx
// 0064277c  83c408               add esp, 8
// 0064277f  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_sof)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
