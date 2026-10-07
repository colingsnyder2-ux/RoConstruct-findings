// roc 2011-06 00555600  unit: G3D::LineSegment  size: 768 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00555600
//
// 00555600  83ec08               sub esp, 8
// 00555603  53                   push ebx
// 00555604  55                   push ebp
// 00555605  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 00555608  8b5d04               mov ebx, dword ptr [ebp + 4]
// 0055560b  57                   push edi
// 0055560c  8b7d00               mov edi, dword ptr [ebp]
// 0055560f  896c2410             mov dword ptr [esp + 0x10], ebp
// 00555613  8886c8000000         mov byte ptr [esi + 0xc8], al
// 00555619  888ec9000000         mov byte ptr [esi + 0xc9], cl
// 0055561f  85db                 test ebx, ebx
// 00555621  751c                 jne 0x55563f
// 00555623  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00555626  56                   push esi
// 00555627  ffd2                 call edx
// 00555629  83c404               add esp, 4
// 0055562c  84c0                 test al, al
// 0055562e  7509                 jne 0x555639
// 00555630  5f                   pop edi
// 00555631  5d                   pop ebp
// 00555632  32c0                 xor al, al
// 00555634  5b                   pop ebx
// 00555635  83c408               add esp, 8
// 00555638  c3                   ret 
// 00555639  8b7d00               mov edi, dword ptr [ebp]
// 0055563c  8b5d04               mov ebx, dword ptr [ebp + 4]
// 0055563f  0fb607               movzx eax, byte ptr [edi]
// 00555642  4b                   dec ebx
// 00555643  c1e008               shl eax, 8
// 00555646  47                   inc edi
// 00555647  8944240c             mov dword ptr [esp + 0xc], eax
// 0055564b  85db                 test ebx, ebx
// 0055564d  7513                 jne 0x555662
// 0055564f  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00555652  56                   push esi
// 00555653  ffd0                 call eax
// 00555655  83c404               add esp, 4
// 00555658  84c0                 test al, al
// 0055565a  74d4                 je 0x555630
// 0055565c  8b7d00               mov edi, dword ptr [ebp]
// 0055565f  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00555662  0fb60f               movzx ecx, byte ptr [edi]
// 00555665  014c240c             add dword ptr [esp + 0xc], ecx
// 00555669  4b                   dec ebx
// 0055566a  47                   inc edi
// 0055566b  85db                 test ebx, ebx
// 0055566d  7513                 jne 0x555682
// 0055566f  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00555672  56                   push esi
// 00555673  ffd2                 call edx
// 00555675  83c404               add esp, 4
// 00555678  84c0                 test al, al
// 0055567a  74b4                 je 0x555630
// 0055567c  8b7d00               mov edi, dword ptr [ebp]
// 0055567f  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00555682  0fb607               movzx eax, byte ptr [edi]
// 00555685  4b                   dec ebx
// 00555686  47                   inc edi
// 00555687  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 0055568d  85db                 test ebx, ebx
// 0055568f  7513                 jne 0x5556a4
// 00555691  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00555694  56                   push esi
// 00555695  ffd1                 call ecx
// 00555697  83c404               add esp, 4
// 0055569a  84c0                 test al, al
// 0055569c  7492                 je 0x555630
// 0055569e  8b7d00               mov edi, dword ptr [ebp]
// 005556a1  8b5d04               mov ebx, dword ptr [ebp + 4]
// 005556a4  0fb617               movzx edx, byte ptr [edi]
// 005556a7  4b                   dec ebx
// 005556a8  c1e208               shl edx, 8
// 005556ab  47                   inc edi
// 005556ac  895620               mov dword ptr [esi + 0x20], edx
// 005556af  85db                 test ebx, ebx
// 005556b1  7517                 jne 0x5556ca
// 005556b3  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005556b6  56                   push esi
// 005556b7  ffd0                 call eax
// 005556b9  83c404               add esp, 4
// 005556bc  84c0                 test al, al
// 005556be  0f846cffffff         je 0x555630
// 005556c4  8b7d00               mov edi, dword ptr [ebp]
// 005556c7  8b5d04               mov ebx, dword ptr [ebp + 4]
// 005556ca  0fb60f               movzx ecx, byte ptr [edi]
// 005556cd  014e20               add dword ptr [esi + 0x20], ecx
// 005556d0  4b                   dec ebx
// 005556d1  47                   inc edi
// 005556d2  85db                 test ebx, ebx
// 005556d4  7517                 jne 0x5556ed
// 005556d6  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005556d9  56                   push esi
// 005556da  ffd2                 call edx
// 005556dc  83c404               add esp, 4
// 005556df  84c0                 test al, al
// 005556e1  0f8449ffffff         je 0x555630
// 005556e7  8b7d00               mov edi, dword ptr [ebp]
// 005556ea  8b5d04               mov ebx, dword ptr [ebp + 4]
// 005556ed  0fb607               movzx eax, byte ptr [edi]
// 005556f0  4b                   dec ebx
// 005556f1  c1e008               shl eax, 8
// 005556f4  47                   inc edi
// 005556f5  89461c               mov dword ptr [esi + 0x1c], eax
// 005556f8  85db                 test ebx, ebx
// 005556fa  7517                 jne 0x555713
// 005556fc  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005556ff  56                   push esi
// 00555700  ffd1                 call ecx
// 00555702  83c404               add esp, 4
// 00555705  84c0                 test al, al
// 00555707  0f8423ffffff         je 0x555630
// 0055570d  8b7d00               mov edi, dword ptr [ebp]
// 00555710  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00555713  0fb617               movzx edx, byte ptr [edi]
// 00555716  01561c               add dword ptr [esi + 0x1c], edx
// 00555719  4b                   dec ebx
// 0055571a  47                   inc edi
// 0055571b  85db                 test ebx, ebx
// 0055571d  7517                 jne 0x555736
// 0055571f  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00555722  56                   push esi
// 00555723  ffd0                 call eax
// 00555725  83c404               add esp, 4
// 00555728  84c0                 test al, al
// 0055572a  0f8400ffffff         je 0x555630
// 00555730  8b7d00               mov edi, dword ptr [ebp]
// 00555733  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00555736  0fb60f               movzx ecx, byte ptr [edi]
// 00555739  8b06                 mov eax, dword ptr [esi]
// 0055573b  8b967c010000         mov edx, dword ptr [esi + 0x17c]
// 00555741  836c240c08           sub dword ptr [esp + 0xc], 8
// 00555746  894e24               mov dword ptr [esi + 0x24], ecx
// 00555749  83c018               add eax, 0x18
// 0055574c  8910                 mov dword ptr [eax], edx
// 0055574e  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00555751  894804               mov dword ptr [eax + 4], ecx
// 00555754  8b5620               mov edx, dword ptr [esi + 0x20]
// 00555757  895008               mov dword ptr [eax + 8], edx
// 0055575a  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0055575d  89480c               mov dword ptr [eax + 0xc], ecx
// 00555760  8b16                 mov edx, dword ptr [esi]
// 00555762  c7421464000000       mov dword ptr [edx + 0x14], 0x64
// 00555769  8b06                 mov eax, dword ptr [esi]
// 0055576b  8b4804               mov ecx, dword ptr [eax + 4]
// 0055576e  6a01                 push 1
// 00555770  56                   push esi
// 00555771  4b                   dec ebx
// 00555772  47                   inc edi
// 00555773  ffd1                 call ecx
// 00555775  8b9694010000         mov edx, dword ptr [esi + 0x194]
// 0055577b  83c408               add esp, 8
// 0055577e  807a0d00             cmp byte ptr [edx + 0xd], 0
// 00555782  7413                 je 0x555797
// 00555784  8b06                 mov eax, dword ptr [esi]
// 00555786  c740143a000000       mov dword ptr [eax + 0x14], 0x3a
// 0055578d  8b0e                 mov ecx, dword ptr [esi]
// 0055578f  8b11                 mov edx, dword ptr [ecx]
// 00555791  56                   push esi
// 00555792  ffd2                 call edx
// 00555794  83c404               add esp, 4
// 00555797  837e2000             cmp dword ptr [esi + 0x20], 0
// 0055579b  760c                 jbe 0x5557a9
// 0055579d  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 005557a1  7606                 jbe 0x5557a9
// 005557a3  837e2400             cmp dword ptr [esi + 0x24], 0
// 005557a7  7f13                 jg 0x5557bc
// 005557a9  8b06                 mov eax, dword ptr [esi]
// 005557ab  c7401420000000       mov dword ptr [eax + 0x14], 0x20
// 005557b2  8b0e                 mov ecx, dword ptr [esi]
// 005557b4  8b11                 mov edx, dword ptr [ecx]
// 005557b6  56                   push esi
// 005557b7  ffd2                 call edx
// 005557b9  83c404               add esp, 4
// 005557bc  8b4624               mov eax, dword ptr [esi + 0x24]
// 005557bf  8d0440               lea eax, [eax + eax*2]
// 005557c2  3944240c             cmp dword ptr [esp + 0xc], eax
// 005557c6  7413                 je 0x5557db
// 005557c8  8b0e                 mov ecx, dword ptr [esi]
// 005557ca  c741140b000000       mov dword ptr [ecx + 0x14], 0xb
// 005557d1  8b16                 mov edx, dword ptr [esi]
// 005557d3  8b02                 mov eax, dword ptr [edx]
// 005557d5  56                   push esi
// 005557d6  ffd0                 call eax
// 005557d8  83c404               add esp, 4
// 005557db  83bec400000000       cmp dword ptr [esi + 0xc4], 0
// 005557e2  751a                 jne 0x5557fe
// 005557e4  8b5624               mov edx, dword ptr [esi + 0x24]
// 005557e7  8b4e04               mov ecx, dword ptr [esi + 4]
// 005557ea  6bd254               imul edx, edx, 0x54
// 005557ed  8b01                 mov eax, dword ptr [ecx]
// 005557ef  52                   push edx
// 005557f0  6a01                 push 1
// 005557f2  56                   push esi
// 005557f3  ffd0                 call eax
// 005557f5  83c40c               add esp, 0xc
// 005557f8  8986c4000000         mov dword ptr [esi + 0xc4], eax
// 005557fe  837e2400             cmp dword ptr [esi + 0x24], 0
// 00555802  8baec4000000         mov ebp, dword ptr [esi + 0xc4]
// 00555808  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00555810  0f8ece000000         jle 0x5558e4
// 00555816  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0055581a  894d04               mov dword ptr [ebp + 4], ecx
// 0055581d  85db                 test ebx, ebx
// 0055581f  751a                 jne 0x55583b
// 00555821  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00555825  8b530c               mov edx, dword ptr [ebx + 0xc]
// 00555828  56                   push esi
// 00555829  ffd2                 call edx
// 0055582b  83c404               add esp, 4
// 0055582e  84c0                 test al, al
// 00555830  0f84fafdffff         je 0x555630
// 00555836  8b3b                 mov edi, dword ptr [ebx]
// 00555838  8b5b04               mov ebx, dword ptr [ebx + 4]
// 0055583b  0fb607               movzx eax, byte ptr [edi]
// 0055583e  4b                   dec ebx
// 0055583f  47                   inc edi
// 00555840  894500               mov dword ptr [ebp], eax
// 00555843  85db                 test ebx, ebx
// 00555845  751a                 jne 0x555861
// 00555847  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0055584b  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 0055584e  56                   push esi
// 0055584f  ffd1                 call ecx
// 00555851  83c404               add esp, 4
// 00555854  84c0                 test al, al
// 00555856  0f84d4fdffff         je 0x555630
// 0055585c  8b3b                 mov edi, dword ptr [ebx]
// 0055585e  8b5b04               mov ebx, dword ptr [ebx + 4]
// 00555861  0fb607               movzx eax, byte ptr [edi]
// 00555864  8bd0                 mov edx, eax
// 00555866  c1fa04               sar edx, 4
// 00555869  4b                   dec ebx
// 0055586a  83e20f               and edx, 0xf
// 0055586d  83e00f               and eax, 0xf
// 00555870  47                   inc edi
// 00555871  895508               mov dword ptr [ebp + 8], edx
// 00555874  89450c               mov dword ptr [ebp + 0xc], eax
// 00555877  85db                 test ebx, ebx
// 00555879  751a                 jne 0x555895
// 0055587b  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0055587f  8b430c               mov eax, dword ptr [ebx + 0xc]
// 00555882  56                   push esi
// 00555883  ffd0                 call eax
// 00555885  83c404               add esp, 4
// 00555888  84c0                 test al, al
// 0055588a  0f84a0fdffff         je 0x555630
// 00555890  8b3b                 mov edi, dword ptr [ebx]
// 00555892  8b5b04               mov ebx, dword ptr [ebx + 4]
// 00555895  0fb60f               movzx ecx, byte ptr [edi]
// 00555898  8b5500               mov edx, dword ptr [ebp]
// 0055589b  894d10               mov dword ptr [ebp + 0x10], ecx
// 0055589e  8b06                 mov eax, dword ptr [esi]
// 005558a0  83c018               add eax, 0x18
// 005558a3  8910                 mov dword ptr [eax], edx
// 005558a5  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005558a8  894804               mov dword ptr [eax + 4], ecx
// 005558ab  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005558ae  895008               mov dword ptr [eax + 8], edx
// 005558b1  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 005558b4  89480c               mov dword ptr [eax + 0xc], ecx
// 005558b7  8b16                 mov edx, dword ptr [esi]
// 005558b9  c7421465000000       mov dword ptr [edx + 0x14], 0x65
// 005558c0  8b06                 mov eax, dword ptr [esi]
// 005558c2  8b4804               mov ecx, dword ptr [eax + 4]
// 005558c5  6a01                 push 1
// 005558c7  56                   push esi
// 005558c8  4b                   dec ebx
// 005558c9  47                   inc edi
// 005558ca  ffd1                 call ecx
// 005558cc  8b442414             mov eax, dword ptr [esp + 0x14]
// 005558d0  40                   inc eax
// 005558d1  83c408               add esp, 8
// 005558d4  83c554               add ebp, 0x54
// 005558d7  3b4624               cmp eax, dword ptr [esi + 0x24]
// 005558da  8944240c             mov dword ptr [esp + 0xc], eax
// 005558de  0f8c32ffffff         jl 0x555816
// 005558e4  8b9694010000         mov edx, dword ptr [esi + 0x194]
// 005558ea  8b442410             mov eax, dword ptr [esp + 0x10]
// 005558ee  c6420d01             mov byte ptr [edx + 0xd], 1
// 005558f2  8938                 mov dword ptr [eax], edi
// 005558f4  5f                   pop edi
// 005558f5  895804               mov dword ptr [eax + 4], ebx
// 005558f8  5d                   pop ebp
// 005558f9  b001                 mov al, 1
// 005558fb  5b                   pop ebx
// 005558fc  83c408               add esp, 8
// 005558ff  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_sof)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
