// roc 2007-03 005065e0  unit: seg_00500000  size: 808 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005065e0
//
// 005065e0  83ec08               sub esp, 8
// 005065e3  53                   push ebx
// 005065e4  55                   push ebp
// 005065e5  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 005065e8  8b5d04               mov ebx, dword ptr [ebp + 4]
// 005065eb  85db                 test ebx, ebx
// 005065ed  57                   push edi
// 005065ee  8b7d00               mov edi, dword ptr [ebp]
// 005065f1  896c2410             mov dword ptr [esp + 0x10], ebp
// 005065f5  8886c8000000         mov byte ptr [esi + 0xc8], al
// 005065fb  888ec9000000         mov byte ptr [esi + 0xc9], cl
// 00506601  751c                 jne 0x50661f
// 00506603  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00506606  56                   push esi
// 00506607  ffd2                 call edx
// 00506609  83c404               add esp, 4
// 0050660c  84c0                 test al, al
// 0050660e  7509                 jne 0x506619
// 00506610  5f                   pop edi
// 00506611  5d                   pop ebp
// 00506612  32c0                 xor al, al
// 00506614  5b                   pop ebx
// 00506615  83c408               add esp, 8
// 00506618  c3                   ret 
// 00506619  8b7d00               mov edi, dword ptr [ebp]
// 0050661c  8b5d04               mov ebx, dword ptr [ebp + 4]
// 0050661f  33c0                 xor eax, eax
// 00506621  8a27                 mov ah, byte ptr [edi]
// 00506623  83eb01               sub ebx, 1
// 00506626  83c701               add edi, 1
// 00506629  85db                 test ebx, ebx
// 0050662b  8944240c             mov dword ptr [esp + 0xc], eax
// 0050662f  7513                 jne 0x506644
// 00506631  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00506634  56                   push esi
// 00506635  ffd1                 call ecx
// 00506637  83c404               add esp, 4
// 0050663a  84c0                 test al, al
// 0050663c  74d2                 je 0x506610
// 0050663e  8b7d00               mov edi, dword ptr [ebp]
// 00506641  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00506644  0fb617               movzx edx, byte ptr [edi]
// 00506647  0154240c             add dword ptr [esp + 0xc], edx
// 0050664b  83eb01               sub ebx, 1
// 0050664e  83c701               add edi, 1
// 00506651  85db                 test ebx, ebx
// 00506653  7513                 jne 0x506668
// 00506655  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00506658  56                   push esi
// 00506659  ffd0                 call eax
// 0050665b  83c404               add esp, 4
// 0050665e  84c0                 test al, al
// 00506660  74ae                 je 0x506610
// 00506662  8b7d00               mov edi, dword ptr [ebp]
// 00506665  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00506668  0fb60f               movzx ecx, byte ptr [edi]
// 0050666b  83eb01               sub ebx, 1
// 0050666e  83c701               add edi, 1
// 00506671  85db                 test ebx, ebx
// 00506673  898ec0000000         mov dword ptr [esi + 0xc0], ecx
// 00506679  7513                 jne 0x50668e
// 0050667b  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0050667e  56                   push esi
// 0050667f  ffd2                 call edx
// 00506681  83c404               add esp, 4
// 00506684  84c0                 test al, al
// 00506686  7488                 je 0x506610
// 00506688  8b7d00               mov edi, dword ptr [ebp]
// 0050668b  8b5d04               mov ebx, dword ptr [ebp + 4]
// 0050668e  33c0                 xor eax, eax
// 00506690  8a27                 mov ah, byte ptr [edi]
// 00506692  83eb01               sub ebx, 1
// 00506695  83c701               add edi, 1
// 00506698  85db                 test ebx, ebx
// 0050669a  894620               mov dword ptr [esi + 0x20], eax
// 0050669d  7517                 jne 0x5066b6
// 0050669f  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005066a2  56                   push esi
// 005066a3  ffd1                 call ecx
// 005066a5  83c404               add esp, 4
// 005066a8  84c0                 test al, al
// 005066aa  0f8460ffffff         je 0x506610
// 005066b0  8b7d00               mov edi, dword ptr [ebp]
// 005066b3  8b5d04               mov ebx, dword ptr [ebp + 4]
// 005066b6  0fb617               movzx edx, byte ptr [edi]
// 005066b9  015620               add dword ptr [esi + 0x20], edx
// 005066bc  83eb01               sub ebx, 1
// 005066bf  83c701               add edi, 1
// 005066c2  85db                 test ebx, ebx
// 005066c4  7517                 jne 0x5066dd
// 005066c6  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005066c9  56                   push esi
// 005066ca  ffd0                 call eax
// 005066cc  83c404               add esp, 4
// 005066cf  84c0                 test al, al
// 005066d1  0f8439ffffff         je 0x506610
// 005066d7  8b7d00               mov edi, dword ptr [ebp]
// 005066da  8b5d04               mov ebx, dword ptr [ebp + 4]
// 005066dd  33c9                 xor ecx, ecx
// 005066df  8a2f                 mov ch, byte ptr [edi]
// 005066e1  83eb01               sub ebx, 1
// 005066e4  83c701               add edi, 1
// 005066e7  85db                 test ebx, ebx
// 005066e9  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005066ec  7517                 jne 0x506705
// 005066ee  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005066f1  56                   push esi
// 005066f2  ffd2                 call edx
// 005066f4  83c404               add esp, 4
// 005066f7  84c0                 test al, al
// 005066f9  0f8411ffffff         je 0x506610
// 005066ff  8b7d00               mov edi, dword ptr [ebp]
// 00506702  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00506705  0fb607               movzx eax, byte ptr [edi]
// 00506708  01461c               add dword ptr [esi + 0x1c], eax
// 0050670b  83eb01               sub ebx, 1
// 0050670e  83c701               add edi, 1
// 00506711  85db                 test ebx, ebx
// 00506713  7517                 jne 0x50672c
// 00506715  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00506718  56                   push esi
// 00506719  ffd1                 call ecx
// 0050671b  83c404               add esp, 4
// 0050671e  84c0                 test al, al
// 00506720  0f84eafeffff         je 0x506610
// 00506726  8b7d00               mov edi, dword ptr [ebp]
// 00506729  8b5d04               mov ebx, dword ptr [ebp + 4]
// 0050672c  0fb617               movzx edx, byte ptr [edi]
// 0050672f  8b06                 mov eax, dword ptr [esi]
// 00506731  8b8e7c010000         mov ecx, dword ptr [esi + 0x17c]
// 00506737  836c240c08           sub dword ptr [esp + 0xc], 8
// 0050673c  895624               mov dword ptr [esi + 0x24], edx
// 0050673f  83c018               add eax, 0x18
// 00506742  8908                 mov dword ptr [eax], ecx
// 00506744  8b561c               mov edx, dword ptr [esi + 0x1c]
// 00506747  895004               mov dword ptr [eax + 4], edx
// 0050674a  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0050674d  894808               mov dword ptr [eax + 8], ecx
// 00506750  8b5624               mov edx, dword ptr [esi + 0x24]
// 00506753  89500c               mov dword ptr [eax + 0xc], edx
// 00506756  8b06                 mov eax, dword ptr [esi]
// 00506758  c7401464000000       mov dword ptr [eax + 0x14], 0x64
// 0050675f  8b0e                 mov ecx, dword ptr [esi]
// 00506761  8b5104               mov edx, dword ptr [ecx + 4]
// 00506764  6a01                 push 1
// 00506766  56                   push esi
// 00506767  83eb01               sub ebx, 1
// 0050676a  83c701               add edi, 1
// 0050676d  ffd2                 call edx
// 0050676f  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 00506775  83c408               add esp, 8
// 00506778  80780d00             cmp byte ptr [eax + 0xd], 0
// 0050677c  7413                 je 0x506791
// 0050677e  8b0e                 mov ecx, dword ptr [esi]
// 00506780  c741143a000000       mov dword ptr [ecx + 0x14], 0x3a
// 00506787  8b16                 mov edx, dword ptr [esi]
// 00506789  8b02                 mov eax, dword ptr [edx]
// 0050678b  56                   push esi
// 0050678c  ffd0                 call eax
// 0050678e  83c404               add esp, 4
// 00506791  837e2000             cmp dword ptr [esi + 0x20], 0
// 00506795  760c                 jbe 0x5067a3
// 00506797  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 0050679b  7606                 jbe 0x5067a3
// 0050679d  837e2400             cmp dword ptr [esi + 0x24], 0
// 005067a1  7f13                 jg 0x5067b6
// 005067a3  8b0e                 mov ecx, dword ptr [esi]
// 005067a5  c7411420000000       mov dword ptr [ecx + 0x14], 0x20
// 005067ac  8b16                 mov edx, dword ptr [esi]
// 005067ae  8b02                 mov eax, dword ptr [edx]
// 005067b0  56                   push esi
// 005067b1  ffd0                 call eax
// 005067b3  83c404               add esp, 4
// 005067b6  8b4624               mov eax, dword ptr [esi + 0x24]
// 005067b9  8d0c40               lea ecx, [eax + eax*2]
// 005067bc  394c240c             cmp dword ptr [esp + 0xc], ecx
// 005067c0  7413                 je 0x5067d5
// 005067c2  8b16                 mov edx, dword ptr [esi]
// 005067c4  c742140b000000       mov dword ptr [edx + 0x14], 0xb
// 005067cb  8b06                 mov eax, dword ptr [esi]
// 005067cd  8b08                 mov ecx, dword ptr [eax]
// 005067cf  56                   push esi
// 005067d0  ffd1                 call ecx
// 005067d2  83c404               add esp, 4
// 005067d5  83bec400000000       cmp dword ptr [esi + 0xc4], 0
// 005067dc  751a                 jne 0x5067f8
// 005067de  8b4624               mov eax, dword ptr [esi + 0x24]
// 005067e1  8b5604               mov edx, dword ptr [esi + 4]
// 005067e4  6bc054               imul eax, eax, 0x54
// 005067e7  8b0a                 mov ecx, dword ptr [edx]
// 005067e9  50                   push eax
// 005067ea  6a01                 push 1
// 005067ec  56                   push esi
// 005067ed  ffd1                 call ecx
// 005067ef  83c40c               add esp, 0xc
// 005067f2  8986c4000000         mov dword ptr [esi + 0xc4], eax
// 005067f8  837e2400             cmp dword ptr [esi + 0x24], 0
// 005067fc  8baec4000000         mov ebp, dword ptr [esi + 0xc4]
// 00506802  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0050680a  0f8edc000000         jle 0x5068ec
// 00506810  85db                 test ebx, ebx
// 00506812  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00506816  895504               mov dword ptr [ebp + 4], edx
// 00506819  751a                 jne 0x506835
// 0050681b  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0050681f  8b430c               mov eax, dword ptr [ebx + 0xc]
// 00506822  56                   push esi
// 00506823  ffd0                 call eax
// 00506825  83c404               add esp, 4
// 00506828  84c0                 test al, al
// 0050682a  0f84e0fdffff         je 0x506610
// 00506830  8b3b                 mov edi, dword ptr [ebx]
// 00506832  8b5b04               mov ebx, dword ptr [ebx + 4]
// 00506835  0fb60f               movzx ecx, byte ptr [edi]
// 00506838  83eb01               sub ebx, 1
// 0050683b  83c701               add edi, 1
// 0050683e  85db                 test ebx, ebx
// 00506840  894d00               mov dword ptr [ebp], ecx
// 00506843  751a                 jne 0x50685f
// 00506845  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00506849  8b530c               mov edx, dword ptr [ebx + 0xc]
// 0050684c  56                   push esi
// 0050684d  ffd2                 call edx
// 0050684f  83c404               add esp, 4
// 00506852  84c0                 test al, al
// 00506854  0f84b6fdffff         je 0x506610
// 0050685a  8b3b                 mov edi, dword ptr [ebx]
// 0050685c  8b5b04               mov ebx, dword ptr [ebx + 4]
// 0050685f  0fb607               movzx eax, byte ptr [edi]
// 00506862  8bc8                 mov ecx, eax
// 00506864  c1f904               sar ecx, 4
// 00506867  83eb01               sub ebx, 1
// 0050686a  83e10f               and ecx, 0xf
// 0050686d  83e00f               and eax, 0xf
// 00506870  83c701               add edi, 1
// 00506873  85db                 test ebx, ebx
// 00506875  894d08               mov dword ptr [ebp + 8], ecx
// 00506878  89450c               mov dword ptr [ebp + 0xc], eax
// 0050687b  751a                 jne 0x506897
// 0050687d  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00506881  8b530c               mov edx, dword ptr [ebx + 0xc]
// 00506884  56                   push esi
// 00506885  ffd2                 call edx
// 00506887  83c404               add esp, 4
// 0050688a  84c0                 test al, al
// 0050688c  0f847efdffff         je 0x506610
// 00506892  8b3b                 mov edi, dword ptr [ebx]
// 00506894  8b5b04               mov ebx, dword ptr [ebx + 4]
// 00506897  0fb607               movzx eax, byte ptr [edi]
// 0050689a  8b4d00               mov ecx, dword ptr [ebp]
// 0050689d  894510               mov dword ptr [ebp + 0x10], eax
// 005068a0  8b06                 mov eax, dword ptr [esi]
// 005068a2  83c018               add eax, 0x18
// 005068a5  8908                 mov dword ptr [eax], ecx
// 005068a7  8b5508               mov edx, dword ptr [ebp + 8]
// 005068aa  895004               mov dword ptr [eax + 4], edx
// 005068ad  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005068b0  894808               mov dword ptr [eax + 8], ecx
// 005068b3  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005068b6  89500c               mov dword ptr [eax + 0xc], edx
// 005068b9  8b06                 mov eax, dword ptr [esi]
// 005068bb  c7401465000000       mov dword ptr [eax + 0x14], 0x65
// 005068c2  8b0e                 mov ecx, dword ptr [esi]
// 005068c4  8b5104               mov edx, dword ptr [ecx + 4]
// 005068c7  6a01                 push 1
// 005068c9  56                   push esi
// 005068ca  83eb01               sub ebx, 1
// 005068cd  83c701               add edi, 1
// 005068d0  ffd2                 call edx
// 005068d2  8b442414             mov eax, dword ptr [esp + 0x14]
// 005068d6  83c001               add eax, 1
// 005068d9  83c408               add esp, 8
// 005068dc  83c554               add ebp, 0x54
// 005068df  3b4624               cmp eax, dword ptr [esi + 0x24]
// 005068e2  8944240c             mov dword ptr [esp + 0xc], eax
// 005068e6  0f8c24ffffff         jl 0x506810
// 005068ec  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 005068f2  c6400d01             mov byte ptr [eax + 0xd], 1
// 005068f6  8b442410             mov eax, dword ptr [esp + 0x10]
// 005068fa  8938                 mov dword ptr [eax], edi
// 005068fc  5f                   pop edi
// 005068fd  895804               mov dword ptr [eax + 4], ebx
// 00506900  5d                   pop ebp
// 00506901  b001                 mov al, 1
// 00506903  5b                   pop ebx
// 00506904  83c408               add esp, 8
// 00506907  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_sof)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
