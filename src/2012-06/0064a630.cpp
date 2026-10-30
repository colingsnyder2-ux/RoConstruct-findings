// roc 2012-06 0064a630  unit: seg_00640000  size: 4256 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0064a630
//
// 0064a630  83ec10               sub esp, 0x10
// 0064a633  837c242000           cmp dword ptr [esp + 0x20], 0
// 0064a638  8b442414             mov eax, dword ptr [esp + 0x14]
// 0064a63c  8b08                 mov ecx, dword ptr [eax]
// 0064a63e  890c24               mov dword ptr [esp], ecx
// 0064a641  0f8440100000         je 0x64b687
// 0064a647  8a4008               mov al, byte ptr [eax + 8]
// 0064a64a  55                   push ebp
// 0064a64b  a804                 test al, 4
// 0064a64d  7416                 je 0x64a665
// 0064a64f  3c03                 cmp al, 3
// 0064a651  0f842f100000         je 0x64b686
// 0064a657  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0064a65b  85ed                 test ebp, ebp
// 0064a65d  0f8423100000         je 0x64b686
// 0064a663  eb04                 jmp 0x64a669
// 0064a665  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0064a669  0fb6c0               movzx eax, al
// 0064a66c  83f806               cmp eax, 6
// 0064a66f  0f87ce0f0000         ja 0x64b643
// 0064a675  53                   push ebx
// 0064a676  56                   push esi
// 0064a677  57                   push edi
// 0064a678  ff24858cb66400       jmp dword ptr [eax*4 + 0x64b68c]
// 0064a67f  8b542424             mov edx, dword ptr [esp + 0x24]
// 0064a683  0fb64209             movzx eax, byte ptr [edx + 9]
// 0064a687  48                   dec eax
// 0064a688  83f80f               cmp eax, 0xf
// 0064a68b  0f87af0f0000         ja 0x64b640
// 0064a691  0fb680c0b66400       movzx eax, byte ptr [eax + 0x64b6c0]
// 0064a698  ff2485a8b66400       jmp dword ptr [eax*4 + 0x64b6a8]
// 0064a69f  8b742428             mov esi, dword ptr [esp + 0x28]
// 0064a6a3  ba07000000           mov edx, 7
// 0064a6a8  85c9                 test ecx, ecx
// 0064a6aa  0f86900f0000         jbe 0x64b640
// 0064a6b0  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0064a6b4  8be9                 mov ebp, ecx
// 0064a6b6  8a1e                 mov bl, byte ptr [esi]
// 0064a6b8  8ac3                 mov al, bl
// 0064a6ba  8aca                 mov cl, dl
// 0064a6bc  d2e8                 shr al, cl
// 0064a6be  2401                 and al, 1
// 0064a6c0  660fb6c8             movzx cx, al
// 0064a6c4  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0064a6c8  663b4808             cmp cx, word ptr [eax + 8]
// 0064a6cc  751d                 jne 0x64a6eb
// 0064a6ce  b907000000           mov ecx, 7
// 0064a6d3  2bca                 sub ecx, edx
// 0064a6d5  b87f7f0000           mov eax, 0x7f7f
// 0064a6da  d3f8                 sar eax, cl
// 0064a6dc  8bca                 mov ecx, edx
// 0064a6de  22c3                 and al, bl
// 0064a6e0  8806                 mov byte ptr [esi], al
// 0064a6e2  8a5f08               mov bl, byte ptr [edi + 8]
// 0064a6e5  d2e3                 shl bl, cl
// 0064a6e7  0ad8                 or bl, al
// 0064a6e9  881e                 mov byte ptr [esi], bl
// 0064a6eb  85d2                 test edx, edx
// 0064a6ed  7508                 jne 0x64a6f7
// 0064a6ef  ba07000000           mov edx, 7
// 0064a6f4  46                   inc esi
// 0064a6f5  eb01                 jmp 0x64a6f8
// 0064a6f7  4a                   dec edx
// 0064a6f8  83ed01               sub ebp, 1
// 0064a6fb  75b9                 jne 0x64a6b6
// 0064a6fd  e93e0f0000           jmp 0x64b640
// 0064a702  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0064a706  8b742428             mov esi, dword ptr [esp + 0x28]
// 0064a70a  ba06000000           mov edx, 6
// 0064a70f  85ff                 test edi, edi
// 0064a711  0f8498000000         je 0x64a7af
// 0064a717  85c9                 test ecx, ecx
// 0064a719  0f86210f0000         jbe 0x64b640
// 0064a71f  894c2418             mov dword ptr [esp + 0x18], ecx
// 0064a723  8a1e                 mov bl, byte ptr [esi]
// 0064a725  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0064a729  8aca                 mov cl, dl
// 0064a72b  8ac3                 mov al, bl
// 0064a72d  d2e8                 shr al, cl
// 0064a72f  2403                 and al, 3
// 0064a731  660fb6c8             movzx cx, al
// 0064a735  663b4d08             cmp cx, word ptr [ebp + 8]
// 0064a739  751f                 jne 0x64a75a
// 0064a73b  b906000000           mov ecx, 6
// 0064a740  2bca                 sub ecx, edx
// 0064a742  b83f3f0000           mov eax, 0x3f3f
// 0064a747  d3f8                 sar eax, cl
// 0064a749  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0064a74d  22c3                 and al, bl
// 0064a74f  8806                 mov byte ptr [esi], al
// 0064a751  8a5908               mov bl, byte ptr [ecx + 8]
// 0064a754  8bca                 mov ecx, edx
// 0064a756  d2e3                 shl bl, cl
// 0064a758  eb32                 jmp 0x64a78c
// 0064a75a  0fb6c0               movzx eax, al
// 0064a75d  8d0c8500000000       lea ecx, [eax*4]
// 0064a764  0bc8                 or ecx, eax
// 0064a766  03c9                 add ecx, ecx
// 0064a768  03c9                 add ecx, ecx
// 0064a76a  0bc8                 or ecx, eax
// 0064a76c  03c9                 add ecx, ecx
// 0064a76e  03c9                 add ecx, ecx
// 0064a770  0bc8                 or ecx, eax
// 0064a772  8a0439               mov al, byte ptr [ecx + edi]
// 0064a775  b906000000           mov ecx, 6
// 0064a77a  2bca                 sub ecx, edx
// 0064a77c  bb3f3f0000           mov ebx, 0x3f3f
// 0064a781  d3fb                 sar ebx, cl
// 0064a783  c0e806               shr al, 6
// 0064a786  8bca                 mov ecx, edx
// 0064a788  221e                 and bl, byte ptr [esi]
// 0064a78a  d2e0                 shl al, cl
// 0064a78c  0ad8                 or bl, al
// 0064a78e  881e                 mov byte ptr [esi], bl
// 0064a790  85d2                 test edx, edx
// 0064a792  7508                 jne 0x64a79c
// 0064a794  ba06000000           mov edx, 6
// 0064a799  46                   inc esi
// 0064a79a  eb03                 jmp 0x64a79f
// 0064a79c  83ea02               sub edx, 2
// 0064a79f  836c241801           sub dword ptr [esp + 0x18], 1
// 0064a7a4  0f8579ffffff         jne 0x64a723
// 0064a7aa  e9910e0000           jmp 0x64b640
// 0064a7af  85c9                 test ecx, ecx
// 0064a7b1  0f86890e0000         jbe 0x64b640
// 0064a7b7  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0064a7bb  8be9                 mov ebp, ecx
// 0064a7bd  8d4900               lea ecx, [ecx]
// 0064a7c0  8a1e                 mov bl, byte ptr [esi]
// 0064a7c2  8ac3                 mov al, bl
// 0064a7c4  8aca                 mov cl, dl
// 0064a7c6  d2e8                 shr al, cl
// 0064a7c8  2403                 and al, 3
// 0064a7ca  660fb6c8             movzx cx, al
// 0064a7ce  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0064a7d2  663b4808             cmp cx, word ptr [eax + 8]
// 0064a7d6  751d                 jne 0x64a7f5
// 0064a7d8  b906000000           mov ecx, 6
// 0064a7dd  2bca                 sub ecx, edx
// 0064a7df  b83f3f0000           mov eax, 0x3f3f
// 0064a7e4  d3f8                 sar eax, cl
// 0064a7e6  8bca                 mov ecx, edx
// 0064a7e8  22c3                 and al, bl
// 0064a7ea  8806                 mov byte ptr [esi], al
// 0064a7ec  8a5f08               mov bl, byte ptr [edi + 8]
// 0064a7ef  d2e3                 shl bl, cl
// 0064a7f1  0ad8                 or bl, al
// 0064a7f3  881e                 mov byte ptr [esi], bl
// 0064a7f5  85d2                 test edx, edx
// 0064a7f7  7508                 jne 0x64a801
// 0064a7f9  ba06000000           mov edx, 6
// 0064a7fe  46                   inc esi
// 0064a7ff  eb03                 jmp 0x64a804
// 0064a801  83ea02               sub edx, 2
// 0064a804  83ed01               sub ebp, 1
// 0064a807  75b7                 jne 0x64a7c0
// 0064a809  e9320e0000           jmp 0x64b640
// 0064a80e  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0064a812  8b742428             mov esi, dword ptr [esp + 0x28]
// 0064a816  ba04000000           mov edx, 4
// 0064a81b  85ff                 test edi, edi
// 0064a81d  0f8487000000         je 0x64a8aa
// 0064a823  85c9                 test ecx, ecx
// 0064a825  0f86150e0000         jbe 0x64b640
// 0064a82b  894c2418             mov dword ptr [esp + 0x18], ecx
// 0064a82f  90                   nop 
// 0064a830  8a1e                 mov bl, byte ptr [esi]
// 0064a832  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0064a836  8aca                 mov cl, dl
// 0064a838  8ac3                 mov al, bl
// 0064a83a  d2e8                 shr al, cl
// 0064a83c  240f                 and al, 0xf
// 0064a83e  660fb6c8             movzx cx, al
// 0064a842  663b4d08             cmp cx, word ptr [ebp + 8]
// 0064a846  751f                 jne 0x64a867
// 0064a848  b904000000           mov ecx, 4
// 0064a84d  2bca                 sub ecx, edx
// 0064a84f  b80f0f0000           mov eax, 0xf0f
// 0064a854  d3f8                 sar eax, cl
// 0064a856  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0064a85a  22c3                 and al, bl
// 0064a85c  8806                 mov byte ptr [esi], al
// 0064a85e  8a5908               mov bl, byte ptr [ecx + 8]
// 0064a861  8bca                 mov ecx, edx
// 0064a863  d2e3                 shl bl, cl
// 0064a865  eb24                 jmp 0x64a88b
// 0064a867  0fb6c0               movzx eax, al
// 0064a86a  8bc8                 mov ecx, eax
// 0064a86c  c1e104               shl ecx, 4
// 0064a86f  0bc8                 or ecx, eax
// 0064a871  8a0439               mov al, byte ptr [ecx + edi]
// 0064a874  b904000000           mov ecx, 4
// 0064a879  2bca                 sub ecx, edx
// 0064a87b  bb0f0f0000           mov ebx, 0xf0f
// 0064a880  d3fb                 sar ebx, cl
// 0064a882  c0e804               shr al, 4
// 0064a885  8bca                 mov ecx, edx
// 0064a887  221e                 and bl, byte ptr [esi]
// 0064a889  d2e0                 shl al, cl
// 0064a88b  0ad8                 or bl, al
// 0064a88d  881e                 mov byte ptr [esi], bl
// 0064a88f  85d2                 test edx, edx
// 0064a891  7508                 jne 0x64a89b
// 0064a893  ba04000000           mov edx, 4
// 0064a898  46                   inc esi
// 0064a899  eb03                 jmp 0x64a89e
// 0064a89b  83ea04               sub edx, 4
// 0064a89e  836c241801           sub dword ptr [esp + 0x18], 1
// 0064a8a3  758b                 jne 0x64a830
// 0064a8a5  e9960d0000           jmp 0x64b640
// 0064a8aa  85c9                 test ecx, ecx
// 0064a8ac  0f868e0d0000         jbe 0x64b640
// 0064a8b2  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0064a8b6  8be9                 mov ebp, ecx
// 0064a8b8  8a1e                 mov bl, byte ptr [esi]
// 0064a8ba  8ac3                 mov al, bl
// 0064a8bc  8aca                 mov cl, dl
// 0064a8be  d2e8                 shr al, cl
// 0064a8c0  240f                 and al, 0xf
// 0064a8c2  660fb6c8             movzx cx, al
// 0064a8c6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0064a8ca  663b4808             cmp cx, word ptr [eax + 8]
// 0064a8ce  751d                 jne 0x64a8ed
// 0064a8d0  b904000000           mov ecx, 4
// 0064a8d5  2bca                 sub ecx, edx
// 0064a8d7  b80f0f0000           mov eax, 0xf0f
// 0064a8dc  d3f8                 sar eax, cl
// 0064a8de  8bca                 mov ecx, edx
// 0064a8e0  22c3                 and al, bl
// 0064a8e2  8806                 mov byte ptr [esi], al
// 0064a8e4  8a5f08               mov bl, byte ptr [edi + 8]
// 0064a8e7  d2e3                 shl bl, cl
// 0064a8e9  0ad8                 or bl, al
// 0064a8eb  881e                 mov byte ptr [esi], bl
// 0064a8ed  85d2                 test edx, edx
// 0064a8ef  7508                 jne 0x64a8f9
// 0064a8f1  ba04000000           mov edx, 4
// 0064a8f6  46                   inc esi
// 0064a8f7  eb03                 jmp 0x64a8fc
// 0064a8f9  83ea04               sub edx, 4
// 0064a8fc  83ed01               sub ebp, 1
// 0064a8ff  75b7                 jne 0x64a8b8
// 0064a901  e93a0d0000           jmp 0x64b640
// 0064a906  8b742438             mov esi, dword ptr [esp + 0x38]
// 0064a90a  8b442428             mov eax, dword ptr [esp + 0x28]
// 0064a90e  85f6                 test esi, esi
// 0064a910  7432                 je 0x64a944
// 0064a912  85c9                 test ecx, ecx
// 0064a914  0f86260d0000         jbe 0x64b640
// 0064a91a  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0064a91e  8bd1                 mov edx, ecx
// 0064a920  8a08                 mov cl, byte ptr [eax]
// 0064a922  660fb6d9             movzx bx, cl
// 0064a926  663b5d08             cmp bx, word ptr [ebp + 8]
// 0064a92a  7505                 jne 0x64a931
// 0064a92c  8a4f08               mov cl, byte ptr [edi + 8]
// 0064a92f  eb06                 jmp 0x64a937
// 0064a931  0fb6c9               movzx ecx, cl
// 0064a934  8a0c31               mov cl, byte ptr [ecx + esi]
// 0064a937  8808                 mov byte ptr [eax], cl
// 0064a939  40                   inc eax
// 0064a93a  83ea01               sub edx, 1
// 0064a93d  75e1                 jne 0x64a920
// 0064a93f  e9fc0c0000           jmp 0x64b640
// 0064a944  85c9                 test ecx, ecx
// 0064a946  0f86f40c0000         jbe 0x64b640
// 0064a94c  8b742430             mov esi, dword ptr [esp + 0x30]
// 0064a950  660fb610             movzx dx, byte ptr [eax]
// 0064a954  663b5508             cmp dx, word ptr [ebp + 8]
// 0064a958  7505                 jne 0x64a95f
// 0064a95a  8a5608               mov dl, byte ptr [esi + 8]
// 0064a95d  8810                 mov byte ptr [eax], dl
// 0064a95f  40                   inc eax
// 0064a960  83e901               sub ecx, 1
// 0064a963  75eb                 jne 0x64a950
// 0064a965  e9d60c0000           jmp 0x64b640
// 0064a96a  8b742444             mov esi, dword ptr [esp + 0x44]
// 0064a96e  8b442428             mov eax, dword ptr [esp + 0x28]
// 0064a972  85f6                 test esi, esi
// 0064a974  746b                 je 0x64a9e1
// 0064a976  85c9                 test ecx, ecx
// 0064a978  0f86c20c0000         jbe 0x64b640
// 0064a97e  8a5c2450             mov bl, byte ptr [esp + 0x50]
// 0064a982  894c2418             mov dword ptr [esp + 0x18], ecx
// 0064a986  8a10                 mov dl, byte ptr [eax]
// 0064a988  8a4801               mov cl, byte ptr [eax + 1]
// 0064a98b  660fb6fa             movzx di, dl
// 0064a98f  bd00010000           mov ebp, 0x100
// 0064a994  660faffd             imul di, bp
// 0064a998  660fb6e9             movzx bp, cl
// 0064a99c  6603fd               add di, bp
// 0064a99f  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0064a9a3  663b7d08             cmp di, word ptr [ebp + 8]
// 0064a9a7  750e                 jne 0x64a9b7
// 0064a9a9  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0064a9ad  8a5709               mov dl, byte ptr [edi + 9]
// 0064a9b0  8810                 mov byte ptr [eax], dl
// 0064a9b2  8a4f08               mov cl, byte ptr [edi + 8]
// 0064a9b5  eb18                 jmp 0x64a9cf
// 0064a9b7  0fb6f9               movzx edi, cl
// 0064a9ba  8acb                 mov cl, bl
// 0064a9bc  d3ef                 shr edi, cl
// 0064a9be  0fb6d2               movzx edx, dl
// 0064a9c1  8b0cbe               mov ecx, dword ptr [esi + edi*4]
// 0064a9c4  0fb70c51             movzx ecx, word ptr [ecx + edx*2]
// 0064a9c8  8bd1                 mov edx, ecx
// 0064a9ca  c1ea08               shr edx, 8
// 0064a9cd  8810                 mov byte ptr [eax], dl
// 0064a9cf  884801               mov byte ptr [eax + 1], cl
// 0064a9d2  83c002               add eax, 2
// 0064a9d5  836c241801           sub dword ptr [esp + 0x18], 1
// 0064a9da  75aa                 jne 0x64a986
// 0064a9dc  e95f0c0000           jmp 0x64b640
// 0064a9e1  85c9                 test ecx, ecx
// 0064a9e3  0f86570c0000         jbe 0x64b640
// 0064a9e9  8b742430             mov esi, dword ptr [esp + 0x30]
// 0064a9ed  8d4900               lea ecx, [ecx]
// 0064a9f0  660fb610             movzx dx, byte ptr [eax]
// 0064a9f4  bf00010000           mov edi, 0x100
// 0064a9f9  660fafd7             imul dx, di
// 0064a9fd  660fb67801           movzx di, byte ptr [eax + 1]
// 0064aa02  6603d7               add dx, di
// 0064aa05  663b5508             cmp dx, word ptr [ebp + 8]
// 0064aa09  750d                 jne 0x64aa18
// 0064aa0b  0fb65609             movzx edx, byte ptr [esi + 9]
// 0064aa0f  8810                 mov byte ptr [eax], dl
// 0064aa11  0fb65608             movzx edx, byte ptr [esi + 8]
// 0064aa15  885001               mov byte ptr [eax + 1], dl
// 0064aa18  83c002               add eax, 2
// 0064aa1b  83e901               sub ecx, 1
// 0064aa1e  75d0                 jne 0x64a9f0
// 0064aa20  e91b0c0000           jmp 0x64b640
// 0064aa25  8b442424             mov eax, dword ptr [esp + 0x24]
// 0064aa29  80780908             cmp byte ptr [eax + 9], 8
// 0064aa2d  0f85d2000000         jne 0x64ab05
// 0064aa33  8b542438             mov edx, dword ptr [esp + 0x38]
// 0064aa37  85d2                 test edx, edx
// 0064aa39  7476                 je 0x64aab1
// 0064aa3b  85c9                 test ecx, ecx
// 0064aa3d  0f86fd0b0000         jbe 0x64b640
// 0064aa43  8b442428             mov eax, dword ptr [esp + 0x28]
// 0064aa47  8b742430             mov esi, dword ptr [esp + 0x30]
// 0064aa4b  83c002               add eax, 2
// 0064aa4e  8bf9                 mov edi, ecx
// 0064aa50  8a48fe               mov cl, byte ptr [eax - 2]
// 0064aa53  660fb6d9             movzx bx, cl
// 0064aa57  663b5d02             cmp bx, word ptr [ebp + 2]
// 0064aa5b  7529                 jne 0x64aa86
// 0064aa5d  660fb658ff           movzx bx, byte ptr [eax - 1]
// 0064aa62  663b5d04             cmp bx, word ptr [ebp + 4]
// 0064aa66  751e                 jne 0x64aa86
// 0064aa68  660fb618             movzx bx, byte ptr [eax]
// 0064aa6c  663b5d06             cmp bx, word ptr [ebp + 6]
// 0064aa70  7514                 jne 0x64aa86
// 0064aa72  0fb64e02             movzx ecx, byte ptr [esi + 2]
// 0064aa76  8848fe               mov byte ptr [eax - 2], cl
// 0064aa79  0fb64e04             movzx ecx, byte ptr [esi + 4]
// 0064aa7d  8848ff               mov byte ptr [eax - 1], cl
// 0064aa80  0fb64e06             movzx ecx, byte ptr [esi + 6]
// 0064aa84  eb1c                 jmp 0x64aaa2
// 0064aa86  0fb6c9               movzx ecx, cl
// 0064aa89  0fb60c11             movzx ecx, byte ptr [ecx + edx]
// 0064aa8d  8848fe               mov byte ptr [eax - 2], cl
// 0064aa90  0fb648ff             movzx ecx, byte ptr [eax - 1]
// 0064aa94  0fb60c11             movzx ecx, byte ptr [ecx + edx]
// 0064aa98  8848ff               mov byte ptr [eax - 1], cl
// 0064aa9b  0fb608               movzx ecx, byte ptr [eax]
// 0064aa9e  0fb60c11             movzx ecx, byte ptr [ecx + edx]
// 0064aaa2  8808                 mov byte ptr [eax], cl
// 0064aaa4  83c003               add eax, 3
// 0064aaa7  83ef01               sub edi, 1
// 0064aaaa  75a4                 jne 0x64aa50
// 0064aaac  e98f0b0000           jmp 0x64b640
// 0064aab1  85c9                 test ecx, ecx
// 0064aab3  0f86870b0000         jbe 0x64b640
// 0064aab9  8b442428             mov eax, dword ptr [esp + 0x28]
// 0064aabd  8b742430             mov esi, dword ptr [esp + 0x30]
// 0064aac1  83c002               add eax, 2
// 0064aac4  660fb650fe           movzx dx, byte ptr [eax - 2]
// 0064aac9  663b5502             cmp dx, word ptr [ebp + 2]
// 0064aacd  7529                 jne 0x64aaf8
// 0064aacf  660fb650ff           movzx dx, byte ptr [eax - 1]
// 0064aad4  663b5504             cmp dx, word ptr [ebp + 4]
// 0064aad8  751e                 jne 0x64aaf8
// 0064aada  660fb610             movzx dx, byte ptr [eax]
// 0064aade  663b5506             cmp dx, word ptr [ebp + 6]
// 0064aae2  7514                 jne 0x64aaf8
// 0064aae4  0fb65602             movzx edx, byte ptr [esi + 2]
// 0064aae8  8850fe               mov byte ptr [eax - 2], dl
// 0064aaeb  0fb65604             movzx edx, byte ptr [esi + 4]
// 0064aaef  8850ff               mov byte ptr [eax - 1], dl
// 0064aaf2  0fb65606             movzx edx, byte ptr [esi + 6]
// 0064aaf6  8810                 mov byte ptr [eax], dl
// 0064aaf8  83c003               add eax, 3
// 0064aafb  83e901               sub ecx, 1
// 0064aafe  75c4                 jne 0x64aac4
// 0064ab00  e93b0b0000           jmp 0x64b640
// 0064ab05  8b742444             mov esi, dword ptr [esp + 0x44]
// 0064ab09  85f6                 test esi, esi
// 0064ab0b  0f841b010000         je 0x64ac2c
// 0064ab11  85c9                 test ecx, ecx
// 0064ab13  0f86270b0000         jbe 0x64b640
// 0064ab19  8b442428             mov eax, dword ptr [esp + 0x28]
// 0064ab1d  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0064ab21  83c002               add eax, 2
// 0064ab24  894c2418             mov dword ptr [esp + 0x18], ecx
// 0064ab28  eb06                 jmp 0x64ab30
// 0064ab2a  8d9b00000000         lea ebx, [ebx]
// 0064ab30  8a58fe               mov bl, byte ptr [eax - 2]
// 0064ab33  8a48ff               mov cl, byte ptr [eax - 1]
// 0064ab36  660fb6d3             movzx dx, bl
// 0064ab3a  bd00010000           mov ebp, 0x100
// 0064ab3f  660fafd5             imul dx, bp
// 0064ab43  660fb6e9             movzx bp, cl
// 0064ab47  6603d5               add dx, bp
// 0064ab4a  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0064ab4e  663b5502             cmp dx, word ptr [ebp + 2]
// 0064ab52  756a                 jne 0x64abbe
// 0064ab54  660fb610             movzx dx, byte ptr [eax]
// 0064ab58  bd00010000           mov ebp, 0x100
// 0064ab5d  660fafd5             imul dx, bp
// 0064ab61  660fb66801           movzx bp, byte ptr [eax + 1]
// 0064ab66  6603d5               add dx, bp
// 0064ab69  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0064ab6d  663b5504             cmp dx, word ptr [ebp + 4]
// 0064ab71  754b                 jne 0x64abbe
// 0064ab73  660fb65002           movzx dx, byte ptr [eax + 2]
// 0064ab78  bd00010000           mov ebp, 0x100
// 0064ab7d  660fafd5             imul dx, bp
// 0064ab81  660fb66803           movzx bp, byte ptr [eax + 3]
// 0064ab86  6603d5               add dx, bp
// 0064ab89  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0064ab8d  663b5506             cmp dx, word ptr [ebp + 6]
// 0064ab91  752b                 jne 0x64abbe
// 0064ab93  0fb64f03             movzx ecx, byte ptr [edi + 3]
// 0064ab97  8848fe               mov byte ptr [eax - 2], cl
// 0064ab9a  0fb65702             movzx edx, byte ptr [edi + 2]
// 0064ab9e  8850ff               mov byte ptr [eax - 1], dl
// 0064aba1  0fb64f05             movzx ecx, byte ptr [edi + 5]
// 0064aba5  8808                 mov byte ptr [eax], cl
// 0064aba7  0fb65704             movzx edx, byte ptr [edi + 4]
// 0064abab  885001               mov byte ptr [eax + 1], dl
// 0064abae  0fb64f07             movzx ecx, byte ptr [edi + 7]
// 0064abb2  884802               mov byte ptr [eax + 2], cl
// 0064abb5  0fb65706             movzx edx, byte ptr [edi + 6]
// 0064abb9  885003               mov byte ptr [eax + 3], dl
// 0064abbc  eb5b                 jmp 0x64ac19
// 0064abbe  0fb6542450           movzx edx, byte ptr [esp + 0x50]
// 0064abc3  0fb6e9               movzx ebp, cl
// 0064abc6  8aca                 mov cl, dl
// 0064abc8  d3ed                 shr ebp, cl
// 0064abca  0fb6cb               movzx ecx, bl
// 0064abcd  8b1cae               mov ebx, dword ptr [esi + ebp*4]
// 0064abd0  0fb70c4b             movzx ecx, word ptr [ebx + ecx*2]
// 0064abd4  8bd9                 mov ebx, ecx
// 0064abd6  c1eb08               shr ebx, 8
// 0064abd9  8858fe               mov byte ptr [eax - 2], bl
// 0064abdc  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0064abe0  8848ff               mov byte ptr [eax - 1], cl
// 0064abe3  8aca                 mov cl, dl
// 0064abe5  d3eb                 shr ebx, cl
// 0064abe7  0fb608               movzx ecx, byte ptr [eax]
// 0064abea  8b1c9e               mov ebx, dword ptr [esi + ebx*4]
// 0064abed  0fb70c4b             movzx ecx, word ptr [ebx + ecx*2]
// 0064abf1  8bd9                 mov ebx, ecx
// 0064abf3  c1eb08               shr ebx, 8
// 0064abf6  8818                 mov byte ptr [eax], bl
// 0064abf8  0fb65803             movzx ebx, byte ptr [eax + 3]
// 0064abfc  884801               mov byte ptr [eax + 1], cl
// 0064abff  8aca                 mov cl, dl
// 0064ac01  0fb65002             movzx edx, byte ptr [eax + 2]
// 0064ac05  d3eb                 shr ebx, cl
// 0064ac07  8b0c9e               mov ecx, dword ptr [esi + ebx*4]
// 0064ac0a  0fb70c51             movzx ecx, word ptr [ecx + edx*2]
// 0064ac0e  8bd1                 mov edx, ecx
// 0064ac10  c1ea08               shr edx, 8
// 0064ac13  885002               mov byte ptr [eax + 2], dl
// 0064ac16  884803               mov byte ptr [eax + 3], cl
// 0064ac19  83c006               add eax, 6
// 0064ac1c  836c241801           sub dword ptr [esp + 0x18], 1
// 0064ac21  0f8509ffffff         jne 0x64ab30
// 0064ac27  e9140a0000           jmp 0x64b640
// 0064ac2c  85c9                 test ecx, ecx
// 0064ac2e  0f860c0a0000         jbe 0x64b640
// 0064ac34  8b442428             mov eax, dword ptr [esp + 0x28]
// 0064ac38  8b742430             mov esi, dword ptr [esp + 0x30]
// 0064ac3c  83c002               add eax, 2
// 0064ac3f  90                   nop 
// 0064ac40  660fb650fe           movzx dx, byte ptr [eax - 2]
// 0064ac45  bf00010000           mov edi, 0x100
// 0064ac4a  660fafd7             imul dx, di
// 0064ac4e  660fb678ff           movzx di, byte ptr [eax - 1]
// 0064ac53  6603d7               add dx, di
// 0064ac56  663b5502             cmp dx, word ptr [ebp + 2]
// 0064ac5a  7560                 jne 0x64acbc
// 0064ac5c  660fb610             movzx dx, byte ptr [eax]
// 0064ac60  bf00010000           mov edi, 0x100
// 0064ac65  660fafd7             imul dx, di
// 0064ac69  660fb67801           movzx di, byte ptr [eax + 1]
// 0064ac6e  6603d7               add dx, di
// 0064ac71  663b5504             cmp dx, word ptr [ebp + 4]
// 0064ac75  7545                 jne 0x64acbc
// 0064ac77  660fb65002           movzx dx, byte ptr [eax + 2]
// 0064ac7c  bf00010000           mov edi, 0x100
// 0064ac81  660fafd7             imul dx, di
// 0064ac85  660fb67803           movzx di, byte ptr [eax + 3]
// 0064ac8a  6603d7               add dx, di
// 0064ac8d  663b5506             cmp dx, word ptr [ebp + 6]
// 0064ac91  7529                 jne 0x64acbc
// 0064ac93  0fb65603             movzx edx, byte ptr [esi + 3]
// 0064ac97  8850fe               mov byte ptr [eax - 2], dl
// 0064ac9a  0fb65602             movzx edx, byte ptr [esi + 2]
// 0064ac9e  8850ff               mov byte ptr [eax - 1], dl
// 0064aca1  0fb65605             movzx edx, byte ptr [esi + 5]
// 0064aca5  8810                 mov byte ptr [eax], dl
// 0064aca7  0fb65604             movzx edx, byte ptr [esi + 4]
// 0064acab  885001               mov byte ptr [eax + 1], dl
// 0064acae  0fb65607             movzx edx, byte ptr [esi + 7]
// 0064acb2  885002               mov byte ptr [eax + 2], dl
// 0064acb5  0fb65606             movzx edx, byte ptr [esi + 6]
// 0064acb9  885003               mov byte ptr [eax + 3], dl
// 0064acbc  83c006               add eax, 6
// 0064acbf  83e901               sub ecx, 1
// 0064acc2  0f8578ffffff         jne 0x64ac40
// 0064acc8  e973090000           jmp 0x64b640
// 0064accd  8b442424             mov eax, dword ptr [esp + 0x24]
// 0064acd1  80780908             cmp byte ptr [eax + 9], 8
// 0064acd5  0f852d010000         jne 0x64ae08
// 0064acdb  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 0064acdf  85ff                 test edi, edi
// 0064ace1  0f84a9000000         je 0x64ad90
// 0064ace7  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 0064acec  0f849e000000         je 0x64ad90
// 0064acf2  837c243800           cmp dword ptr [esp + 0x38], 0
// 0064acf7  0f8493000000         je 0x64ad90
// 0064acfd  837c241000           cmp dword ptr [esp + 0x10], 0
// 0064ad02  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0064ad06  8bf1                 mov esi, ecx
// 0064ad08  0f8632090000         jbe 0x64b640
// 0064ad0e  8b542410             mov edx, dword ptr [esp + 0x10]
// 0064ad12  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 0064ad16  89542418             mov dword ptr [esp + 0x18], edx
// 0064ad1a  8d9b00000000         lea ebx, [ebx]
// 0064ad20  660fb64101           movzx ax, byte ptr [ecx + 1]
// 0064ad25  0fb7c0               movzx eax, ax
// 0064ad28  baff000000           mov edx, 0xff
// 0064ad2d  663bc2               cmp ax, dx
// 0064ad30  7509                 jne 0x64ad3b
// 0064ad32  0fb601               movzx eax, byte ptr [ecx]
// 0064ad35  8b542438             mov edx, dword ptr [esp + 0x38]
// 0064ad39  eb40                 jmp 0x64ad7b
// 0064ad3b  6685c0               test ax, ax
// 0064ad3e  7509                 jne 0x64ad49
// 0064ad40  8b542430             mov edx, dword ptr [esp + 0x30]
// 0064ad44  8a4208               mov al, byte ptr [edx + 8]
// 0064ad47  eb35                 jmp 0x64ad7e
// 0064ad49  0fb619               movzx ebx, byte ptr [ecx]
// 0064ad4c  660fb61c3b           movzx bx, byte ptr [ebx + edi]
// 0064ad51  2bd0                 sub edx, eax
// 0064ad53  660fafd8             imul bx, ax
// 0064ad57  660faf5508           imul dx, word ptr [ebp + 8]
// 0064ad5c  6603d3               add dx, bx
// 0064ad5f  b880000000           mov eax, 0x80
// 0064ad64  6603d0               add dx, ax
// 0064ad67  0fb7c2               movzx eax, dx
// 0064ad6a  8bd0                 mov edx, eax
// 0064ad6c  c1ea08               shr edx, 8
// 0064ad6f  03d0                 add edx, eax
// 0064ad71  c1fa08               sar edx, 8
// 0064ad74  0fb6c2               movzx eax, dl
// 0064ad77  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0064ad7b  8a0410               mov al, byte ptr [eax + edx]
// 0064ad7e  8806                 mov byte ptr [esi], al
// 0064ad80  83c102               add ecx, 2
// 0064ad83  46                   inc esi
// 0064ad84  836c241801           sub dword ptr [esp + 0x18], 1
// 0064ad89  7595                 jne 0x64ad20
// 0064ad8b  e9b0080000           jmp 0x64b640
// 0064ad90  837c241000           cmp dword ptr [esp + 0x10], 0
// 0064ad95  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0064ad99  8bf1                 mov esi, ecx
// 0064ad9b  0f869f080000         jbe 0x64b640
// 0064ada1  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0064ada5  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 0064ada9  8da42400000000       lea esp, [esp]
// 0064adb0  8a4101               mov al, byte ptr [ecx + 1]
// 0064adb3  3cff                 cmp al, 0xff
// 0064adb5  7504                 jne 0x64adbb
// 0064adb7  8a11                 mov dl, byte ptr [ecx]
// 0064adb9  eb3d                 jmp 0x64adf8
// 0064adbb  84c0                 test al, al
// 0064adbd  7509                 jne 0x64adc8
// 0064adbf  8b442430             mov eax, dword ptr [esp + 0x30]
// 0064adc3  8a5008               mov dl, byte ptr [eax + 8]
// 0064adc6  eb30                 jmp 0x64adf8
// 0064adc8  660fb619             movzx bx, byte ptr [ecx]
// 0064adcc  660fb6c0             movzx ax, al
// 0064add0  baff000000           mov edx, 0xff
// 0064add5  660fafd8             imul bx, ax
// 0064add9  2bd0                 sub edx, eax
// 0064addb  660faf5508           imul dx, word ptr [ebp + 8]
// 0064ade0  6603d3               add dx, bx
// 0064ade3  b880000000           mov eax, 0x80
// 0064ade8  6603d0               add dx, ax
// 0064adeb  0fb7c2               movzx eax, dx
// 0064adee  8bd0                 mov edx, eax
// 0064adf0  c1ea08               shr edx, 8
// 0064adf3  03d0                 add edx, eax
// 0064adf5  c1fa08               sar edx, 8
// 0064adf8  8816                 mov byte ptr [esi], dl
// 0064adfa  83c102               add ecx, 2
// 0064adfd  46                   inc esi
// 0064adfe  83ef01               sub edi, 1
// 0064ae01  75ad                 jne 0x64adb0
// 0064ae03  e938080000           jmp 0x64b640
// 0064ae08  837c244400           cmp dword ptr [esp + 0x44], 0
// 0064ae0d  0f8407010000         je 0x64af1a
// 0064ae13  837c244800           cmp dword ptr [esp + 0x48], 0
// 0064ae18  0f84fc000000         je 0x64af1a
// 0064ae1e  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 0064ae23  0f84f1000000         je 0x64af1a
// 0064ae29  8b542428             mov edx, dword ptr [esp + 0x28]
// 0064ae2d  8bf2                 mov esi, edx
// 0064ae2f  85c9                 test ecx, ecx
// 0064ae31  0f8609080000         jbe 0x64b640
// 0064ae37  8a5c2450             mov bl, byte ptr [esp + 0x50]
// 0064ae3b  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0064ae3f  8bc1                 mov eax, ecx
// 0064ae41  42                   inc edx
// 0064ae42  89442418             mov dword ptr [esp + 0x18], eax
// 0064ae46  eb08                 jmp 0x64ae50
// 0064ae48  8da42400000000       lea esp, [esp]
// 0064ae4f  90                   nop 
// 0064ae50  660fb64a01           movzx cx, byte ptr [edx + 1]
// 0064ae55  b800010000           mov eax, 0x100
// 0064ae5a  660fafc8             imul cx, ax
// 0064ae5e  660fb64202           movzx ax, byte ptr [edx + 2]
// 0064ae63  6603c8               add cx, ax
// 0064ae66  0fb7c1               movzx eax, cx
// 0064ae69  b9ffff0000           mov ecx, 0xffff
// 0064ae6e  663bc1               cmp ax, cx
// 0064ae71  7519                 jne 0x64ae8c
// 0064ae73  0fb602               movzx eax, byte ptr [edx]
// 0064ae76  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 0064ae7a  8acb                 mov cl, bl
// 0064ae7c  d3e8                 shr eax, cl
// 0064ae7e  0fb64aff             movzx ecx, byte ptr [edx - 1]
// 0064ae82  8b448500             mov eax, dword ptr [ebp + eax*4]
// 0064ae86  0fb70448             movzx eax, word ptr [eax + ecx*2]
// 0064ae8a  eb6e                 jmp 0x64aefa
// 0064ae8c  6685c0               test ax, ax
// 0064ae8f  750d                 jne 0x64ae9e
// 0064ae91  8a4709               mov al, byte ptr [edi + 9]
// 0064ae94  8806                 mov byte ptr [esi], al
// 0064ae96  8a4f08               mov cl, byte ptr [edi + 8]
// 0064ae99  884e01               mov byte ptr [esi + 1], cl
// 0064ae9c  eb66                 jmp 0x64af04
// 0064ae9e  0fb63a               movzx edi, byte ptr [edx]
// 0064aea1  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 0064aea5  8acb                 mov cl, bl
// 0064aea7  d3ef                 shr edi, cl
// 0064aea9  0fb64aff             movzx ecx, byte ptr [edx - 1]
// 0064aead  8b7cbd00             mov edi, dword ptr [ebp + edi*4]
// 0064aeb1  0fb70c4f             movzx ecx, word ptr [edi + ecx*2]
// 0064aeb5  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0064aeb9  0fb77f08             movzx edi, word ptr [edi + 8]
// 0064aebd  0fb7c0               movzx eax, ax
// 0064aec0  0fafc8               imul ecx, eax
// 0064aec3  bdffff0000           mov ebp, 0xffff
// 0064aec8  2be8                 sub ebp, eax
// 0064aeca  0faffd               imul edi, ebp
// 0064aecd  8d8c3900800000       lea ecx, [ecx + edi + 0x8000]
// 0064aed4  8bc1                 mov eax, ecx
// 0064aed6  c1e810               shr eax, 0x10
// 0064aed9  03c1                 add eax, ecx
// 0064aedb  c1e810               shr eax, 0x10
// 0064aede  0fb7c0               movzx eax, ax
// 0064aee1  0fb6f8               movzx edi, al
// 0064aee4  8acb                 mov cl, bl
// 0064aee6  d3ef                 shr edi, cl
// 0064aee8  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0064aeec  c1e808               shr eax, 8
// 0064aeef  8b0cb9               mov ecx, dword ptr [ecx + edi*4]
// 0064aef2  0fb70441             movzx eax, word ptr [ecx + eax*2]
// 0064aef6  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0064aefa  8bc8                 mov ecx, eax
// 0064aefc  c1e908               shr ecx, 8
// 0064aeff  884601               mov byte ptr [esi + 1], al
// 0064af02  880e                 mov byte ptr [esi], cl
// 0064af04  83c204               add edx, 4
// 0064af07  83c602               add esi, 2
// 0064af0a  836c241801           sub dword ptr [esp + 0x18], 1
// 0064af0f  0f853bffffff         jne 0x64ae50
// 0064af15  e926070000           jmp 0x64b640
// 0064af1a  837c241000           cmp dword ptr [esp + 0x10], 0
// 0064af1f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0064af23  8bf1                 mov esi, ecx
// 0064af25  0f8615070000         jbe 0x64b640
// 0064af2b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0064af2f  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 0064af33  89542418             mov dword ptr [esp + 0x18], edx
// 0064af37  8b542430             mov edx, dword ptr [esp + 0x30]
// 0064af3b  83c103               add ecx, 3
// 0064af3e  8bff                 mov edi, edi
// 0064af40  660fb641ff           movzx ax, byte ptr [ecx - 1]
// 0064af45  bf00010000           mov edi, 0x100
// 0064af4a  660fafc7             imul ax, di
// 0064af4e  660fb639             movzx di, byte ptr [ecx]
// 0064af52  6603c7               add ax, di
// 0064af55  0fb7c0               movzx eax, ax
// 0064af58  bfffff0000           mov edi, 0xffff
// 0064af5d  663bc7               cmp ax, di
// 0064af60  7509                 jne 0x64af6b
// 0064af62  668b41fd             mov ax, word ptr [ecx - 3]
// 0064af66  668906               mov word ptr [esi], ax
// 0064af69  eb5d                 jmp 0x64afc8
// 0064af6b  6685c0               test ax, ax
// 0064af6e  750c                 jne 0x64af7c
// 0064af70  0fb64209             movzx eax, byte ptr [edx + 9]
// 0064af74  8806                 mov byte ptr [esi], al
// 0064af76  0fb64208             movzx eax, byte ptr [edx + 8]
// 0064af7a  eb49                 jmp 0x64afc5
// 0064af7c  660fb651fd           movzx dx, byte ptr [ecx - 3]
// 0064af81  bf00010000           mov edi, 0x100
// 0064af86  660fafd7             imul dx, di
// 0064af8a  660fb679fe           movzx di, byte ptr [ecx - 2]
// 0064af8f  6603d7               add dx, di
// 0064af92  0fb77d08             movzx edi, word ptr [ebp + 8]
// 0064af96  0fb7c0               movzx eax, ax
// 0064af99  0fb7d2               movzx edx, dx
// 0064af9c  0fafd0               imul edx, eax
// 0064af9f  bbffff0000           mov ebx, 0xffff
// 0064afa4  2bd8                 sub ebx, eax
// 0064afa6  0faffb               imul edi, ebx
// 0064afa9  8d943a00800000       lea edx, [edx + edi + 0x8000]
// 0064afb0  8bc2                 mov eax, edx
// 0064afb2  c1e810               shr eax, 0x10
// 0064afb5  03c2                 add eax, edx
// 0064afb7  c1e810               shr eax, 0x10
// 0064afba  8bd0                 mov edx, eax
// 0064afbc  c1ea08               shr edx, 8
// 0064afbf  8816                 mov byte ptr [esi], dl
// 0064afc1  8b542430             mov edx, dword ptr [esp + 0x30]
// 0064afc5  884601               mov byte ptr [esi + 1], al
// 0064afc8  83c104               add ecx, 4
// 0064afcb  83c602               add esi, 2
// 0064afce  836c241801           sub dword ptr [esp + 0x18], 1
// 0064afd3  0f8567ffffff         jne 0x64af40
// 0064afd9  e962060000           jmp 0x64b640
// 0064afde  8b442424             mov eax, dword ptr [esp + 0x24]
// 0064afe2  80780908             cmp byte ptr [eax + 9], 8
// 0064afe6  0f856a020000         jne 0x64b256
// 0064afec  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 0064aff0  85ed                 test ebp, ebp
// 0064aff2  0f8460010000         je 0x64b158
// 0064aff8  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 0064affd  0f8455010000         je 0x64b158
// 0064b003  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0064b007  85c9                 test ecx, ecx
// 0064b009  0f8449010000         je 0x64b158
// 0064b00f  837c241000           cmp dword ptr [esp + 0x10], 0
// 0064b014  0f8626060000         jbe 0x64b640
// 0064b01a  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0064b01e  8b542410             mov edx, dword ptr [esp + 0x10]
// 0064b022  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0064b026  8d7702               lea esi, [edi + 2]
// 0064b029  89542418             mov dword ptr [esp + 0x18], edx
// 0064b02d  8b542434             mov edx, dword ptr [esp + 0x34]
// 0064b031  47                   inc edi
// 0064b032  8a4702               mov al, byte ptr [edi + 2]
// 0064b035  3cff                 cmp al, 0xff
// 0064b037  7522                 jne 0x64b05b
// 0064b039  0fb647ff             movzx eax, byte ptr [edi - 1]
// 0064b03d  0fb60408             movzx eax, byte ptr [eax + ecx]
// 0064b041  8846fe               mov byte ptr [esi - 2], al
// 0064b044  0fb607               movzx eax, byte ptr [edi]
// 0064b047  0fb60408             movzx eax, byte ptr [eax + ecx]
// 0064b04b  8846ff               mov byte ptr [esi - 1], al
// 0064b04e  0fb64701             movzx eax, byte ptr [edi + 1]
// 0064b052  0fb60408             movzx eax, byte ptr [eax + ecx]
// 0064b056  e9e5000000           jmp 0x64b140
// 0064b05b  84c0                 test al, al
// 0064b05d  7517                 jne 0x64b076
// 0064b05f  0fb64302             movzx eax, byte ptr [ebx + 2]
// 0064b063  8846fe               mov byte ptr [esi - 2], al
// 0064b066  0fb64304             movzx eax, byte ptr [ebx + 4]
// 0064b06a  8846ff               mov byte ptr [esi - 1], al
// 0064b06d  0fb64306             movzx eax, byte ptr [ebx + 6]
// 0064b071  e9ca000000           jmp 0x64b140
// 0064b076  0fb65fff             movzx ebx, byte ptr [edi - 1]
// 0064b07a  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 0064b07e  668b6a02             mov bp, word ptr [edx + 2]
// 0064b082  660fb6c0             movzx ax, al
// 0064b086  660fafd8             imul bx, ax
// 0064b08a  b9ff000000           mov ecx, 0xff
// 0064b08f  2bc8                 sub ecx, eax
// 0064b091  660fafe9             imul bp, cx
// 0064b095  6603dd               add bx, bp
// 0064b098  bd80000000           mov ebp, 0x80
// 0064b09d  6603dd               add bx, bp
// 0064b0a0  0fb7db               movzx ebx, bx
// 0064b0a3  0fb7eb               movzx ebp, bx
// 0064b0a6  8bdd                 mov ebx, ebp
// 0064b0a8  c1eb08               shr ebx, 8
// 0064b0ab  03dd                 add ebx, ebp
// 0064b0ad  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 0064b0b1  c1fb08               sar ebx, 8
// 0064b0b4  0fb6db               movzx ebx, bl
// 0064b0b7  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 0064b0bb  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 0064b0bf  885efe               mov byte ptr [esi - 2], bl
// 0064b0c2  0fb61f               movzx ebx, byte ptr [edi]
// 0064b0c5  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 0064b0c9  668b6a04             mov bp, word ptr [edx + 4]
// 0064b0cd  660fafd8             imul bx, ax
// 0064b0d1  660fafe9             imul bp, cx
// 0064b0d5  6603dd               add bx, bp
// 0064b0d8  bd80000000           mov ebp, 0x80
// 0064b0dd  6603dd               add bx, bp
// 0064b0e0  0fb7db               movzx ebx, bx
// 0064b0e3  0fb7eb               movzx ebp, bx
// 0064b0e6  8bdd                 mov ebx, ebp
// 0064b0e8  c1eb08               shr ebx, 8
// 0064b0eb  03dd                 add ebx, ebp
// 0064b0ed  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 0064b0f1  c1fb08               sar ebx, 8
// 0064b0f4  0fb6db               movzx ebx, bl
// 0064b0f7  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 0064b0fb  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 0064b0ff  885eff               mov byte ptr [esi - 1], bl
// 0064b102  0fb65f01             movzx ebx, byte ptr [edi + 1]
// 0064b106  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 0064b10a  660fafd8             imul bx, ax
// 0064b10e  668b4206             mov ax, word ptr [edx + 6]
// 0064b112  660fafc1             imul ax, cx
// 0064b116  6603d8               add bx, ax
// 0064b119  b980000000           mov ecx, 0x80
// 0064b11e  6603d9               add bx, cx
// 0064b121  0fb7c3               movzx eax, bx
// 0064b124  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0064b128  8bc8                 mov ecx, eax
// 0064b12a  c1e908               shr ecx, 8
// 0064b12d  03c8                 add ecx, eax
// 0064b12f  c1f908               sar ecx, 8
// 0064b132  0fb6c1               movzx eax, cl
// 0064b135  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0064b139  8a0408               mov al, byte ptr [eax + ecx]
// 0064b13c  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0064b140  8806                 mov byte ptr [esi], al
// 0064b142  83c704               add edi, 4
// 0064b145  83c603               add esi, 3
// 0064b148  836c241801           sub dword ptr [esp + 0x18], 1
// 0064b14d  0f85dffeffff         jne 0x64b032
// 0064b153  e9e8040000           jmp 0x64b640
// 0064b158  837c241000           cmp dword ptr [esp + 0x10], 0
// 0064b15d  0f86dd040000         jbe 0x64b640
// 0064b163  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0064b167  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0064b16b  8b542430             mov edx, dword ptr [esp + 0x30]
// 0064b16f  8d7702               lea esi, [edi + 2]
// 0064b172  47                   inc edi
// 0064b173  894c2418             mov dword ptr [esp + 0x18], ecx
// 0064b177  8a4702               mov al, byte ptr [edi + 2]
// 0064b17a  3cff                 cmp al, 0xff
// 0064b17c  7517                 jne 0x64b195
// 0064b17e  0fb647ff             movzx eax, byte ptr [edi - 1]
// 0064b182  8846fe               mov byte ptr [esi - 2], al
// 0064b185  8a0f                 mov cl, byte ptr [edi]
// 0064b187  884eff               mov byte ptr [esi - 1], cl
// 0064b18a  0fb64701             movzx eax, byte ptr [edi + 1]
// 0064b18e  8806                 mov byte ptr [esi], al
// 0064b190  e9ab000000           jmp 0x64b240
// 0064b195  84c0                 test al, al
// 0064b197  7516                 jne 0x64b1af
// 0064b199  0fb64a02             movzx ecx, byte ptr [edx + 2]
// 0064b19d  884efe               mov byte ptr [esi - 2], cl
// 0064b1a0  8a4204               mov al, byte ptr [edx + 4]
// 0064b1a3  8846ff               mov byte ptr [esi - 1], al
// 0064b1a6  0fb64a06             movzx ecx, byte ptr [edx + 6]
// 0064b1aa  e98f000000           jmp 0x64b23e
// 0064b1af  0fb65fff             movzx ebx, byte ptr [edi - 1]
// 0064b1b3  668b6a02             mov bp, word ptr [edx + 2]
// 0064b1b7  660fb6c0             movzx ax, al
// 0064b1bb  660fafd8             imul bx, ax
// 0064b1bf  b9ff000000           mov ecx, 0xff
// 0064b1c4  2bc8                 sub ecx, eax
// 0064b1c6  660fafe9             imul bp, cx
// 0064b1ca  6603dd               add bx, bp
// 0064b1cd  bd80000000           mov ebp, 0x80
// 0064b1d2  6603dd               add bx, bp
// 0064b1d5  0fb7db               movzx ebx, bx
// 0064b1d8  0fb7eb               movzx ebp, bx
// 0064b1db  8bdd                 mov ebx, ebp
// 0064b1dd  c1eb08               shr ebx, 8
// 0064b1e0  03dd                 add ebx, ebp
// 0064b1e2  c1fb08               sar ebx, 8
// 0064b1e5  885efe               mov byte ptr [esi - 2], bl
// 0064b1e8  0fb75a04             movzx ebx, word ptr [edx + 4]
// 0064b1ec  660fb62f             movzx bp, byte ptr [edi]
// 0064b1f0  660fafd9             imul bx, cx
// 0064b1f4  660fafe8             imul bp, ax
// 0064b1f8  6603dd               add bx, bp
// 0064b1fb  bd80000000           mov ebp, 0x80
// 0064b200  6603dd               add bx, bp
// 0064b203  0fb7db               movzx ebx, bx
// 0064b206  0fb7eb               movzx ebp, bx
// 0064b209  8bdd                 mov ebx, ebp
// 0064b20b  c1eb08               shr ebx, 8
// 0064b20e  03dd                 add ebx, ebp
// 0064b210  c1fb08               sar ebx, 8
// 0064b213  885eff               mov byte ptr [esi - 1], bl
// 0064b216  0fb65f01             movzx ebx, byte ptr [edi + 1]
// 0064b21a  660fafd8             imul bx, ax
// 0064b21e  668b4206             mov ax, word ptr [edx + 6]
// 0064b222  660fafc1             imul ax, cx
// 0064b226  6603d8               add bx, ax
// 0064b229  b980000000           mov ecx, 0x80
// 0064b22e  6603d9               add bx, cx
// 0064b231  0fb7c3               movzx eax, bx
// 0064b234  8bc8                 mov ecx, eax
// 0064b236  c1e908               shr ecx, 8
// 0064b239  03c8                 add ecx, eax
// 0064b23b  c1f908               sar ecx, 8
// 0064b23e  880e                 mov byte ptr [esi], cl
// 0064b240  83c704               add edi, 4
// 0064b243  83c603               add esi, 3
// 0064b246  836c241801           sub dword ptr [esp + 0x18], 1
// 0064b24b  0f8526ffffff         jne 0x64b177
// 0064b251  e9ea030000           jmp 0x64b640
// 0064b256  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 0064b25a  85ed                 test ebp, ebp
// 0064b25c  0f8467020000         je 0x64b4c9
// 0064b262  837c244800           cmp dword ptr [esp + 0x48], 0
// 0064b267  0f845c020000         je 0x64b4c9
// 0064b26d  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 0064b272  0f8451020000         je 0x64b4c9
// 0064b278  85c9                 test ecx, ecx
// 0064b27a  0f86c0030000         jbe 0x64b640
// 0064b280  8b542428             mov edx, dword ptr [esp + 0x28]
// 0064b284  8a5c2450             mov bl, byte ptr [esp + 0x50]
// 0064b288  8d4202               lea eax, [edx + 2]
// 0064b28b  42                   inc edx
// 0064b28c  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0064b290  660fb64a05           movzx cx, byte ptr [edx + 5]
// 0064b295  be00010000           mov esi, 0x100
// 0064b29a  660fafce             imul cx, si
// 0064b29e  660fb67206           movzx si, byte ptr [edx + 6]
// 0064b2a3  6603ce               add cx, si
// 0064b2a6  0fb7f1               movzx esi, cx
// 0064b2a9  b9ffff0000           mov ecx, 0xffff
// 0064b2ae  663bf1               cmp si, cx
// 0064b2b1  0f8583000000         jne 0x64b33a
// 0064b2b7  0fb632               movzx esi, byte ptr [edx]
// 0064b2ba  0fb6cb               movzx ecx, bl
// 0064b2bd  d3ee                 shr esi, cl
// 0064b2bf  894c2418             mov dword ptr [esp + 0x18], ecx
// 0064b2c3  0fb64aff             movzx ecx, byte ptr [edx - 1]
// 0064b2c7  8b74b500             mov esi, dword ptr [ebp + esi*4]
// 0064b2cb  0fb7344e             movzx esi, word ptr [esi + ecx*2]
// 0064b2cf  8bce                 mov ecx, esi
// 0064b2d1  c1e908               shr ecx, 8
// 0064b2d4  8848fe               mov byte ptr [eax - 2], cl
// 0064b2d7  89742414             mov dword ptr [esp + 0x14], esi
// 0064b2db  0fb64c2414           movzx ecx, byte ptr [esp + 0x14]
// 0064b2e0  8848ff               mov byte ptr [eax - 1], cl
// 0064b2e3  0fb67202             movzx esi, byte ptr [edx + 2]
// 0064b2e7  0fb64c2418           movzx ecx, byte ptr [esp + 0x18]
// 0064b2ec  d3ee                 shr esi, cl
// 0064b2ee  0fb64a01             movzx ecx, byte ptr [edx + 1]
// 0064b2f2  8b74b500             mov esi, dword ptr [ebp + esi*4]
// 0064b2f6  0fb7344e             movzx esi, word ptr [esi + ecx*2]
// 0064b2fa  8bce                 mov ecx, esi
// 0064b2fc  c1e908               shr ecx, 8
// 0064b2ff  8808                 mov byte ptr [eax], cl
// 0064b301  89742414             mov dword ptr [esp + 0x14], esi
// 0064b305  0fb64c2414           movzx ecx, byte ptr [esp + 0x14]
// 0064b30a  884801               mov byte ptr [eax + 1], cl
// 0064b30d  0fb67204             movzx esi, byte ptr [edx + 4]
// 0064b311  0fb64c2418           movzx ecx, byte ptr [esp + 0x18]
// 0064b316  d3ee                 shr esi, cl
// 0064b318  0fb64a03             movzx ecx, byte ptr [edx + 3]
// 0064b31c  8b74b500             mov esi, dword ptr [ebp + esi*4]
// 0064b320  0fb7344e             movzx esi, word ptr [esi + ecx*2]
// 0064b324  8bce                 mov ecx, esi
// 0064b326  c1e908               shr ecx, 8
// 0064b329  89742414             mov dword ptr [esp + 0x14], esi
// 0064b32d  884802               mov byte ptr [eax + 2], cl
// 0064b330  0fb64c2414           movzx ecx, byte ptr [esp + 0x14]
// 0064b335  e976010000           jmp 0x64b4b0
// 0064b33a  6685f6               test si, si
// 0064b33d  7543                 jne 0x64b382
// 0064b33f  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0064b343  0fb64903             movzx ecx, byte ptr [ecx + 3]
// 0064b347  8848fe               mov byte ptr [eax - 2], cl
// 0064b34a  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0064b34e  0fb64902             movzx ecx, byte ptr [ecx + 2]
// 0064b352  8848ff               mov byte ptr [eax - 1], cl
// 0064b355  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0064b359  0fb64905             movzx ecx, byte ptr [ecx + 5]
// 0064b35d  8808                 mov byte ptr [eax], cl
// 0064b35f  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0064b363  0fb64904             movzx ecx, byte ptr [ecx + 4]
// 0064b367  884801               mov byte ptr [eax + 1], cl
// 0064b36a  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0064b36e  0fb64907             movzx ecx, byte ptr [ecx + 7]
// 0064b372  884802               mov byte ptr [eax + 2], cl
// 0064b375  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0064b379  0fb64906             movzx ecx, byte ptr [ecx + 6]
// 0064b37d  e92e010000           jmp 0x64b4b0
// 0064b382  0fb7fe               movzx edi, si
// 0064b385  0fb632               movzx esi, byte ptr [edx]
// 0064b388  0fb6cb               movzx ecx, bl
// 0064b38b  d3ee                 shr esi, cl
// 0064b38d  8b5c244c             mov ebx, dword ptr [esp + 0x4c]
// 0064b391  894c2418             mov dword ptr [esp + 0x18], ecx
// 0064b395  0fb64aff             movzx ecx, byte ptr [edx - 1]
// 0064b399  8b34b3               mov esi, dword ptr [ebx + esi*4]
// 0064b39c  0fb70c4e             movzx ecx, word ptr [esi + ecx*2]
// 0064b3a0  8b742434             mov esi, dword ptr [esp + 0x34]
// 0064b3a4  0fafcf               imul ecx, edi
// 0064b3a7  0fb77602             movzx esi, word ptr [esi + 2]
// 0064b3ab  bdffff0000           mov ebp, 0xffff
// 0064b3b0  2bef                 sub ebp, edi
// 0064b3b2  0faff5               imul esi, ebp
// 0064b3b5  8d8c3100800000       lea ecx, [ecx + esi + 0x8000]
// 0064b3bc  8bf1                 mov esi, ecx
// 0064b3be  c1ee10               shr esi, 0x10
// 0064b3c1  03f1                 add esi, ecx
// 0064b3c3  0fb74c2450           movzx ecx, word ptr [esp + 0x50]
// 0064b3c8  c1ee10               shr esi, 0x10
// 0064b3cb  0fb7de               movzx ebx, si
// 0064b3ce  894c2414             mov dword ptr [esp + 0x14], ecx
// 0064b3d2  0fb6f3               movzx esi, bl
// 0064b3d5  d3ee                 shr esi, cl
// 0064b3d7  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0064b3db  c1eb08               shr ebx, 8
// 0064b3de  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 0064b3e1  0fb70c59             movzx ecx, word ptr [ecx + ebx*2]
// 0064b3e5  8848ff               mov byte ptr [eax - 1], cl
// 0064b3e8  8bd9                 mov ebx, ecx
// 0064b3ea  0fb64c2418           movzx ecx, byte ptr [esp + 0x18]
// 0064b3ef  c1eb08               shr ebx, 8
// 0064b3f2  8858fe               mov byte ptr [eax - 2], bl
// 0064b3f5  0fb67202             movzx esi, byte ptr [edx + 2]
// 0064b3f9  d3ee                 shr esi, cl
// 0064b3fb  0fb64a01             movzx ecx, byte ptr [edx + 1]
// 0064b3ff  8b5c244c             mov ebx, dword ptr [esp + 0x4c]
// 0064b403  8b34b3               mov esi, dword ptr [ebx + esi*4]
// 0064b406  0fb70c4e             movzx ecx, word ptr [esi + ecx*2]
// 0064b40a  8b742434             mov esi, dword ptr [esp + 0x34]
// 0064b40e  0fafcf               imul ecx, edi
// 0064b411  0fb77604             movzx esi, word ptr [esi + 4]
// 0064b415  0faff5               imul esi, ebp
// 0064b418  8d8c3100800000       lea ecx, [ecx + esi + 0x8000]
// 0064b41f  8bf1                 mov esi, ecx
// 0064b421  c1ee10               shr esi, 0x10
// 0064b424  03f1                 add esi, ecx
// 0064b426  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0064b42a  c1ee10               shr esi, 0x10
// 0064b42d  0fb7de               movzx ebx, si
// 0064b430  0fb6f3               movzx esi, bl
// 0064b433  d3ee                 shr esi, cl
// 0064b435  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0064b439  c1eb08               shr ebx, 8
// 0064b43c  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 0064b43f  0fb70c59             movzx ecx, word ptr [ecx + ebx*2]
// 0064b443  8bd9                 mov ebx, ecx
// 0064b445  884801               mov byte ptr [eax + 1], cl
// 0064b448  0fb64c2418           movzx ecx, byte ptr [esp + 0x18]
// 0064b44d  c1eb08               shr ebx, 8
// 0064b450  8818                 mov byte ptr [eax], bl
// 0064b452  0fb67204             movzx esi, byte ptr [edx + 4]
// 0064b456  8b5c244c             mov ebx, dword ptr [esp + 0x4c]
// 0064b45a  d3ee                 shr esi, cl
// 0064b45c  0fb64a03             movzx ecx, byte ptr [edx + 3]
// 0064b460  8b34b3               mov esi, dword ptr [ebx + esi*4]
// 0064b463  0fb70c4e             movzx ecx, word ptr [esi + ecx*2]
// 0064b467  8b742434             mov esi, dword ptr [esp + 0x34]
// 0064b46b  0fafcf               imul ecx, edi
// 0064b46e  0fb77606             movzx esi, word ptr [esi + 6]
// 0064b472  0faff5               imul esi, ebp
// 0064b475  8d8c3100800000       lea ecx, [ecx + esi + 0x8000]
// 0064b47c  8bf1                 mov esi, ecx
// 0064b47e  c1ee10               shr esi, 0x10
// 0064b481  03f1                 add esi, ecx
// 0064b483  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0064b487  c1ee10               shr esi, 0x10
// 0064b48a  0fb7de               movzx ebx, si
// 0064b48d  0fb6f3               movzx esi, bl
// 0064b490  d3ee                 shr esi, cl
// 0064b492  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0064b496  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 0064b499  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 0064b49d  c1eb08               shr ebx, 8
// 0064b4a0  0fb70c59             movzx ecx, word ptr [ecx + ebx*2]
// 0064b4a4  8bd9                 mov ebx, ecx
// 0064b4a6  c1eb08               shr ebx, 8
// 0064b4a9  885802               mov byte ptr [eax + 2], bl
// 0064b4ac  8a5c2450             mov bl, byte ptr [esp + 0x50]
// 0064b4b0  884803               mov byte ptr [eax + 3], cl
// 0064b4b3  83c208               add edx, 8
// 0064b4b6  83c006               add eax, 6
// 0064b4b9  836c241c01           sub dword ptr [esp + 0x1c], 1
// 0064b4be  0f85ccfdffff         jne 0x64b290
// 0064b4c4  e977010000           jmp 0x64b640
// 0064b4c9  8bd1                 mov edx, ecx
// 0064b4cb  85d2                 test edx, edx
// 0064b4cd  0f866d010000         jbe 0x64b640
// 0064b4d3  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0064b4d7  8b742430             mov esi, dword ptr [esp + 0x30]
// 0064b4db  8d4102               lea eax, [ecx + 2]
// 0064b4de  83c107               add ecx, 7
// 0064b4e1  8954241c             mov dword ptr [esp + 0x1c], edx
// 0064b4e5  eb09                 jmp 0x64b4f0
// 0064b4e7  8da42400000000       lea esp, [esp]
// 0064b4ee  8bff                 mov edi, edi
// 0064b4f0  660fb651ff           movzx dx, byte ptr [ecx - 1]
// 0064b4f5  bf00010000           mov edi, 0x100
// 0064b4fa  660fafd7             imul dx, di
// 0064b4fe  660fb639             movzx di, byte ptr [ecx]
// 0064b502  6603d7               add dx, di
// 0064b505  0fb7d2               movzx edx, dx
// 0064b508  bfffff0000           mov edi, 0xffff
// 0064b50d  663bd7               cmp dx, di
// 0064b510  7513                 jne 0x64b525
// 0064b512  8b51f9               mov edx, dword ptr [ecx - 7]
// 0064b515  8950fe               mov dword ptr [eax - 2], edx
// 0064b518  668b51fd             mov dx, word ptr [ecx - 3]
// 0064b51c  66895002             mov word ptr [eax + 2], dx
// 0064b520  e90a010000           jmp 0x64b62f
// 0064b525  6685d2               test dx, dx
// 0064b528  752b                 jne 0x64b555
// 0064b52a  0fb65603             movzx edx, byte ptr [esi + 3]
// 0064b52e  8850fe               mov byte ptr [eax - 2], dl
// 0064b531  0fb65602             movzx edx, byte ptr [esi + 2]
// 0064b535  8850ff               mov byte ptr [eax - 1], dl
// 0064b538  0fb65605             movzx edx, byte ptr [esi + 5]
// 0064b53c  8810                 mov byte ptr [eax], dl
// 0064b53e  0fb65604             movzx edx, byte ptr [esi + 4]
// 0064b542  885001               mov byte ptr [eax + 1], dl
// 0064b545  0fb65607             movzx edx, byte ptr [esi + 7]
// 0064b549  885002               mov byte ptr [eax + 2], dl
// 0064b54c  0fb65606             movzx edx, byte ptr [esi + 6]
// 0064b550  e9d7000000           jmp 0x64b62c
// 0064b555  0fb671fb             movzx esi, byte ptr [ecx - 5]
// 0064b559  bf00010000           mov edi, 0x100
// 0064b55e  660faff7             imul si, di
// 0064b562  0fb679fc             movzx edi, byte ptr [ecx - 4]
// 0064b566  6603f7               add si, di
// 0064b569  0fb7f6               movzx esi, si
// 0064b56c  89742418             mov dword ptr [esp + 0x18], esi
// 0064b570  0fb671fd             movzx esi, byte ptr [ecx - 3]
// 0064b574  bf00010000           mov edi, 0x100
// 0064b579  660faff7             imul si, di
// 0064b57d  0fb679fe             movzx edi, byte ptr [ecx - 2]
// 0064b581  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0064b585  6603f7               add si, di
// 0064b588  0fb7f6               movzx esi, si
// 0064b58b  89742414             mov dword ptr [esp + 0x14], esi
// 0064b58f  0fb7f2               movzx esi, dx
// 0064b592  660fb651f9           movzx dx, byte ptr [ecx - 7]
// 0064b597  bb00010000           mov ebx, 0x100
// 0064b59c  660fafd3             imul dx, bx
// 0064b5a0  660fb659fa           movzx bx, byte ptr [ecx - 6]
// 0064b5a5  6603d3               add dx, bx
// 0064b5a8  0fb75d02             movzx ebx, word ptr [ebp + 2]
// 0064b5ac  0fb7d2               movzx edx, dx
// 0064b5af  0fafd6               imul edx, esi
// 0064b5b2  bfffff0000           mov edi, 0xffff
// 0064b5b7  2bfe                 sub edi, esi
// 0064b5b9  0fafdf               imul ebx, edi
// 0064b5bc  8d9c1a00800000       lea ebx, [edx + ebx + 0x8000]
// 0064b5c3  8bd3                 mov edx, ebx
// 0064b5c5  c1ea10               shr edx, 0x10
// 0064b5c8  03d3                 add edx, ebx
// 0064b5ca  c1ea10               shr edx, 0x10
// 0064b5cd  8bda                 mov ebx, edx
// 0064b5cf  8850ff               mov byte ptr [eax - 1], dl
// 0064b5d2  c1eb08               shr ebx, 8
// 0064b5d5  8858fe               mov byte ptr [eax - 2], bl
// 0064b5d8  0fb75504             movzx edx, word ptr [ebp + 4]
// 0064b5dc  0fb75c2418           movzx ebx, word ptr [esp + 0x18]
// 0064b5e1  0fafd7               imul edx, edi
// 0064b5e4  0fafde               imul ebx, esi
// 0064b5e7  8d9c1a00800000       lea ebx, [edx + ebx + 0x8000]
// 0064b5ee  8bd3                 mov edx, ebx
// 0064b5f0  c1ea10               shr edx, 0x10
// 0064b5f3  03d3                 add edx, ebx
// 0064b5f5  c1ea10               shr edx, 0x10
// 0064b5f8  8bda                 mov ebx, edx
// 0064b5fa  885001               mov byte ptr [eax + 1], dl
// 0064b5fd  c1eb08               shr ebx, 8
// 0064b600  8818                 mov byte ptr [eax], bl
// 0064b602  0fb75506             movzx edx, word ptr [ebp + 6]
// 0064b606  0fafd7               imul edx, edi
// 0064b609  0fb77c2414           movzx edi, word ptr [esp + 0x14]
// 0064b60e  0faffe               imul edi, esi
// 0064b611  8db43a00800000       lea esi, [edx + edi + 0x8000]
// 0064b618  8bd6                 mov edx, esi
// 0064b61a  c1ea10               shr edx, 0x10
// 0064b61d  03d6                 add edx, esi
// 0064b61f  c1ea10               shr edx, 0x10
// 0064b622  8bda                 mov ebx, edx
// 0064b624  c1eb08               shr ebx, 8
// 0064b627  885802               mov byte ptr [eax + 2], bl
// 0064b62a  8bf5                 mov esi, ebp
// 0064b62c  885003               mov byte ptr [eax + 3], dl
// 0064b62f  83c108               add ecx, 8
// 0064b632  83c006               add eax, 6
// 0064b635  836c241c01           sub dword ptr [esp + 0x1c], 1
// 0064b63a  0f85b0feffff         jne 0x64b4f0
// 0064b640  5f                   pop edi
// 0064b641  5e                   pop esi
// 0064b642  5b                   pop ebx
// 0064b643  8b542418             mov edx, dword ptr [esp + 0x18]
// 0064b647  8a4208               mov al, byte ptr [edx + 8]
// 0064b64a  a804                 test al, 4
// 0064b64c  7438                 je 0x64b686
// 0064b64e  fe4a0a               dec byte ptr [edx + 0xa]
// 0064b651  8a4a0a               mov cl, byte ptr [edx + 0xa]
// 0064b654  24fb                 and al, 0xfb
// 0064b656  884208               mov byte ptr [edx + 8], al
// 0064b659  8a4209               mov al, byte ptr [edx + 9]
// 0064b65c  f6e9                 imul cl
// 0064b65e  88420b               mov byte ptr [edx + 0xb], al
// 0064b661  3c08                 cmp al, 8
// 0064b663  0fb6c0               movzx eax, al
// 0064b666  7210                 jb 0x64b678
// 0064b668  c1e803               shr eax, 3
// 0064b66b  0faf442404           imul eax, dword ptr [esp + 4]
// 0064b670  894204               mov dword ptr [edx + 4], eax
// 0064b673  5d                   pop ebp
// 0064b674  83c410               add esp, 0x10
// 0064b677  c3                   ret 
// 0064b678  0faf442404           imul eax, dword ptr [esp + 4]
// 0064b67d  83c007               add eax, 7
// 0064b680  c1e803               shr eax, 3
// 0064b683  894204               mov dword ptr [edx + 4], eax
// 0064b686  5d                   pop ebp
// 0064b687  83c410               add esp, 0x10
// 0064b68a  c3                   ret 
// 0064b68b  90                   nop 
// 0064b68c  7fa6                 jg 0x64b634
// 0064b68e  640040b6             add byte ptr fs:[eax - 0x4a], al
// 0064b692  640025aa640040       add byte ptr fs:[0x400064aa], ah
// 0064b699  b664                 mov dh, 0x64
// 0064b69b  00cd                 add ch, cl
// 0064b69d  ac                   lodsb al, byte ptr [esi]
// 0064b69e  640040b6             add byte ptr fs:[eax - 0x4a], al
// 0064b6a2  6400de               add dh, bl
// 0064b6a5  af                   scasd eax, dword ptr es:[edi]
// 0064b6a6  64009fa6640002       add byte ptr fs:[edi + 0x20064a6], bl
// 0064b6ad  a7                   cmpsd dword ptr [esi], dword ptr es:[edi]
// 0064b6ae  64000e               add byte ptr fs:[esi], cl
// 0064b6b1  a864                 test al, 0x64
// 0064b6b3  0006                 add byte ptr [esi], al
// 0064b6b5  a964006aa9           test eax, 0xa96a0064
// 0064b6ba  640040b6             add byte ptr fs:[eax - 0x4a], al
// 0064b6be  640000               add byte ptr fs:[eax], al
// 0064b6c1  010502050505         add dword ptr [0x5050502], eax
// 0064b6c7  030505050505         add eax, dword ptr [0x5050505]
// library libpng-1.2.6/pngrtran.c (function _png_do_background)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrtran.c
