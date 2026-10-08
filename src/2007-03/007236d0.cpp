// roc 2007-03 007236d0  unit: seg_00720000  size: 1208 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007236d0
//
// 007236d0  83ec3c               sub esp, 0x3c
// 007236d3  53                   push ebx
// 007236d4  55                   push ebp
// 007236d5  56                   push esi
// 007236d6  57                   push edi
// 007236d7  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007236db  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 007236de  8b5104               mov edx, dword ptr [ecx + 4]
// 007236e1  8b5838               mov ebx, dword ptr [eax + 0x38]
// 007236e4  8b29                 mov ebp, dword ptr [ecx]
// 007236e6  83ed01               sub ebp, 1
// 007236e9  8d542afb             lea edx, [edx + ebp - 5]
// 007236ed  89542414             mov dword ptr [esp + 0x14], edx
// 007236f1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 007236f4  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 007236f7  8bd1                 mov edx, ecx
// 007236f9  2b542454             sub edx, dword ptr [esp + 0x54]
// 007236fd  83ee01               sub esi, 1
// 00723700  03d6                 add edx, esi
// 00723702  8d8c31fffeffff       lea ecx, [ecx + esi - 0x101]
// 00723709  89542438             mov dword ptr [esp + 0x38], edx
// 0072370d  8b5028               mov edx, dword ptr [eax + 0x28]
// 00723710  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00723714  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 00723717  89542428             mov dword ptr [esp + 0x28], edx
// 0072371b  8b5030               mov edx, dword ptr [eax + 0x30]
// 0072371e  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00723722  8b4834               mov ecx, dword ptr [eax + 0x34]
// 00723725  89542444             mov dword ptr [esp + 0x44], edx
// 00723729  8b504c               mov edx, dword ptr [eax + 0x4c]
// 0072372c  894c2440             mov dword ptr [esp + 0x40], ecx
// 00723730  8b4850               mov ecx, dword ptr [eax + 0x50]
// 00723733  89542420             mov dword ptr [esp + 0x20], edx
// 00723737  894c2424             mov dword ptr [esp + 0x24], ecx
// 0072373b  8b4854               mov ecx, dword ptr [eax + 0x54]
// 0072373e  ba01000000           mov edx, 1
// 00723743  d3e2                 shl edx, cl
// 00723745  8b4858               mov ecx, dword ptr [eax + 0x58]
// 00723748  89442418             mov dword ptr [esp + 0x18], eax
// 0072374c  8b783c               mov edi, dword ptr [eax + 0x3c]
// 0072374f  c744245401000000     mov dword ptr [esp + 0x54], 1
// 00723757  8b442454             mov eax, dword ptr [esp + 0x54]
// 0072375b  d3e0                 shl eax, cl
// 0072375d  83ea01               sub edx, 1
// 00723760  896c2410             mov dword ptr [esp + 0x10], ebp
// 00723764  89542448             mov dword ptr [esp + 0x48], edx
// 00723768  83e801               sub eax, 1
// 0072376b  89442430             mov dword ptr [esp + 0x30], eax
// 0072376f  90                   nop 
// 00723770  83ff0f               cmp edi, 0xf
// 00723773  7324                 jae 0x723799
// 00723775  0fb64501             movzx eax, byte ptr [ebp + 1]
// 00723779  83c501               add ebp, 1
// 0072377c  8bcf                 mov ecx, edi
// 0072377e  d3e0                 shl eax, cl
// 00723780  83c501               add ebp, 1
// 00723783  83c708               add edi, 8
// 00723786  8bcf                 mov ecx, edi
// 00723788  03d8                 add ebx, eax
// 0072378a  0fb64500             movzx eax, byte ptr [ebp]
// 0072378e  d3e0                 shl eax, cl
// 00723790  896c2410             mov dword ptr [esp + 0x10], ebp
// 00723794  03d8                 add ebx, eax
// 00723796  83c708               add edi, 8
// 00723799  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0072379d  23d3                 and edx, ebx
// 0072379f  8b0491               mov eax, dword ptr [ecx + edx*4]
// 007237a2  8bd0                 mov edx, eax
// 007237a4  c1ea08               shr edx, 8
// 007237a7  0fb6ca               movzx ecx, dl
// 007237aa  0fb6d0               movzx edx, al
// 007237ad  d3eb                 shr ebx, cl
// 007237af  2bf9                 sub edi, ecx
// 007237b1  85d2                 test edx, edx
// 007237b3  7443                 je 0x7237f8
// 007237b5  f6c210               test dl, 0x10
// 007237b8  754b                 jne 0x723805
// 007237ba  f6c240               test dl, 0x40
// 007237bd  0f8547030000         jne 0x723b0a
// 007237c3  b901000000           mov ecx, 1
// 007237c8  894c2454             mov dword ptr [esp + 0x54], ecx
// 007237cc  8bca                 mov ecx, edx
// 007237ce  8b542454             mov edx, dword ptr [esp + 0x54]
// 007237d2  d3e2                 shl edx, cl
// 007237d4  c1e810               shr eax, 0x10
// 007237d7  83ea01               sub edx, 1
// 007237da  23d3                 and edx, ebx
// 007237dc  03d0                 add edx, eax
// 007237de  8b442420             mov eax, dword ptr [esp + 0x20]
// 007237e2  8b0490               mov eax, dword ptr [eax + edx*4]
// 007237e5  8bc8                 mov ecx, eax
// 007237e7  c1e908               shr ecx, 8
// 007237ea  0fb6c9               movzx ecx, cl
// 007237ed  0fb6d0               movzx edx, al
// 007237f0  d3eb                 shr ebx, cl
// 007237f2  2bf9                 sub edi, ecx
// 007237f4  85d2                 test edx, edx
// 007237f6  75bd                 jne 0x7237b5
// 007237f8  83c601               add esi, 1
// 007237fb  c1e810               shr eax, 0x10
// 007237fe  8806                 mov byte ptr [esi], al
// 00723800  e960020000           jmp 0x723a65
// 00723805  c1e810               shr eax, 0x10
// 00723808  83e20f               and edx, 0xf
// 0072380b  89442454             mov dword ptr [esp + 0x54], eax
// 0072380f  742e                 je 0x72383f
// 00723811  3bfa                 cmp edi, edx
// 00723813  7314                 jae 0x723829
// 00723815  0fb64501             movzx eax, byte ptr [ebp + 1]
// 00723819  83c501               add ebp, 1
// 0072381c  8bcf                 mov ecx, edi
// 0072381e  d3e0                 shl eax, cl
// 00723820  896c2410             mov dword ptr [esp + 0x10], ebp
// 00723824  03d8                 add ebx, eax
// 00723826  83c708               add edi, 8
// 00723829  8bca                 mov ecx, edx
// 0072382b  b801000000           mov eax, 1
// 00723830  d3e0                 shl eax, cl
// 00723832  83e801               sub eax, 1
// 00723835  23c3                 and eax, ebx
// 00723837  01442454             add dword ptr [esp + 0x54], eax
// 0072383b  d3eb                 shr ebx, cl
// 0072383d  2bfa                 sub edi, edx
// 0072383f  83ff0f               cmp edi, 0xf
// 00723842  7324                 jae 0x723868
// 00723844  0fb65501             movzx edx, byte ptr [ebp + 1]
// 00723848  83c501               add ebp, 1
// 0072384b  0fb64501             movzx eax, byte ptr [ebp + 1]
// 0072384f  8bcf                 mov ecx, edi
// 00723851  83c501               add ebp, 1
// 00723854  d3e2                 shl edx, cl
// 00723856  83c708               add edi, 8
// 00723859  8bcf                 mov ecx, edi
// 0072385b  d3e0                 shl eax, cl
// 0072385d  03da                 add ebx, edx
// 0072385f  896c2410             mov dword ptr [esp + 0x10], ebp
// 00723863  03d8                 add ebx, eax
// 00723865  83c708               add edi, 8
// 00723868  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0072386c  8b542424             mov edx, dword ptr [esp + 0x24]
// 00723870  23cb                 and ecx, ebx
// 00723872  8b148a               mov edx, dword ptr [edx + ecx*4]
// 00723875  8bc2                 mov eax, edx
// 00723877  c1e808               shr eax, 8
// 0072387a  0fb6c8               movzx ecx, al
// 0072387d  0fb6c2               movzx eax, dl
// 00723880  d3eb                 shr ebx, cl
// 00723882  2bf9                 sub edi, ecx
// 00723884  a810                 test al, 0x10
// 00723886  8954241c             mov dword ptr [esp + 0x1c], edx
// 0072388a  753f                 jne 0x7238cb
// 0072388c  8d642400             lea esp, [esp]
// 00723890  a840                 test al, 0x40
// 00723892  0f8565020000         jne 0x723afd
// 00723898  8bc8                 mov ecx, eax
// 0072389a  0fb744241e           movzx eax, word ptr [esp + 0x1e]
// 0072389f  ba01000000           mov edx, 1
// 007238a4  d3e2                 shl edx, cl
// 007238a6  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007238aa  83ea01               sub edx, 1
// 007238ad  23d3                 and edx, ebx
// 007238af  03d0                 add edx, eax
// 007238b1  8b1491               mov edx, dword ptr [ecx + edx*4]
// 007238b4  8bc2                 mov eax, edx
// 007238b6  c1e808               shr eax, 8
// 007238b9  0fb6c8               movzx ecx, al
// 007238bc  0fb6c2               movzx eax, dl
// 007238bf  d3eb                 shr ebx, cl
// 007238c1  2bf9                 sub edi, ecx
// 007238c3  a810                 test al, 0x10
// 007238c5  8954241c             mov dword ptr [esp + 0x1c], edx
// 007238c9  74c5                 je 0x723890
// 007238cb  c1ea10               shr edx, 0x10
// 007238ce  83e00f               and eax, 0xf
// 007238d1  3bf8                 cmp edi, eax
// 007238d3  8954241c             mov dword ptr [esp + 0x1c], edx
// 007238d7  732c                 jae 0x723905
// 007238d9  0fb65501             movzx edx, byte ptr [ebp + 1]
// 007238dd  83c501               add ebp, 1
// 007238e0  8bcf                 mov ecx, edi
// 007238e2  d3e2                 shl edx, cl
// 007238e4  83c708               add edi, 8
// 007238e7  896c2410             mov dword ptr [esp + 0x10], ebp
// 007238eb  03da                 add ebx, edx
// 007238ed  3bf8                 cmp edi, eax
// 007238ef  7314                 jae 0x723905
// 007238f1  0fb65501             movzx edx, byte ptr [ebp + 1]
// 007238f5  83c501               add ebp, 1
// 007238f8  8bcf                 mov ecx, edi
// 007238fa  d3e2                 shl edx, cl
// 007238fc  896c2410             mov dword ptr [esp + 0x10], ebp
// 00723900  03da                 add ebx, edx
// 00723902  83c708               add edi, 8
// 00723905  b901000000           mov ecx, 1
// 0072390a  8bd1                 mov edx, ecx
// 0072390c  8bc8                 mov ecx, eax
// 0072390e  d3e2                 shl edx, cl
// 00723910  2bf8                 sub edi, eax
// 00723912  83ea01               sub edx, 1
// 00723915  23d3                 and edx, ebx
// 00723917  8bca                 mov ecx, edx
// 00723919  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0072391d  03d1                 add edx, ecx
// 0072391f  8bc8                 mov ecx, eax
// 00723921  8bc6                 mov eax, esi
// 00723923  2b442438             sub eax, dword ptr [esp + 0x38]
// 00723927  d3eb                 shr ebx, cl
// 00723929  3bd0                 cmp edx, eax
// 0072392b  8954241c             mov dword ptr [esp + 0x1c], edx
// 0072392f  0f864f010000         jbe 0x723a84
// 00723935  8bea                 mov ebp, edx
// 00723937  2be8                 sub ebp, eax
// 00723939  3b6c243c             cmp ebp, dword ptr [esp + 0x3c]
// 0072393d  0f879f010000         ja 0x723ae2
// 00723943  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00723947  8b442444             mov eax, dword ptr [esp + 0x44]
// 0072394b  83c1ff               add ecx, -1
// 0072394e  85c0                 test eax, eax
// 00723950  894c2434             mov dword ptr [esp + 0x34], ecx
// 00723954  752c                 jne 0x723982
// 00723956  8b442428             mov eax, dword ptr [esp + 0x28]
// 0072395a  2bc5                 sub eax, ebp
// 0072395c  03c8                 add ecx, eax
// 0072395e  3b6c2454             cmp ebp, dword ptr [esp + 0x54]
// 00723962  0f8392000000         jae 0x7239fa
// 00723968  296c2454             sub dword ptr [esp + 0x54], ebp
// 0072396c  8d642400             lea esp, [esp]
// 00723970  8a4101               mov al, byte ptr [ecx + 1]
// 00723973  83c101               add ecx, 1
// 00723976  83c601               add esi, 1
// 00723979  83ed01               sub ebp, 1
// 0072397c  8806                 mov byte ptr [esi], al
// 0072397e  75f0                 jne 0x723970
// 00723980  eb74                 jmp 0x7239f6
// 00723982  3bc5                 cmp eax, ebp
// 00723984  7352                 jae 0x7239d8
// 00723986  8bd0                 mov edx, eax
// 00723988  2bd5                 sub edx, ebp
// 0072398a  03542428             add edx, dword ptr [esp + 0x28]
// 0072398e  2be8                 sub ebp, eax
// 00723990  03ca                 add ecx, edx
// 00723992  3b6c2454             cmp ebp, dword ptr [esp + 0x54]
// 00723996  7362                 jae 0x7239fa
// 00723998  296c2454             sub dword ptr [esp + 0x54], ebp
// 0072399c  8d642400             lea esp, [esp]
// 007239a0  8a5101               mov dl, byte ptr [ecx + 1]
// 007239a3  83c101               add ecx, 1
// 007239a6  83c601               add esi, 1
// 007239a9  83ed01               sub ebp, 1
// 007239ac  8816                 mov byte ptr [esi], dl
// 007239ae  75f0                 jne 0x7239a0
// 007239b0  3b442454             cmp eax, dword ptr [esp + 0x54]
// 007239b4  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007239b8  7340                 jae 0x7239fa
// 007239ba  29442454             sub dword ptr [esp + 0x54], eax
// 007239be  8be8                 mov ebp, eax
// 007239c0  8a4101               mov al, byte ptr [ecx + 1]
// 007239c3  83c101               add ecx, 1
// 007239c6  83c601               add esi, 1
// 007239c9  83ed01               sub ebp, 1
// 007239cc  8806                 mov byte ptr [esi], al
// 007239ce  75f0                 jne 0x7239c0
// 007239d0  8bce                 mov ecx, esi
// 007239d2  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 007239d6  eb22                 jmp 0x7239fa
// 007239d8  2bc5                 sub eax, ebp
// 007239da  03c8                 add ecx, eax
// 007239dc  3b6c2454             cmp ebp, dword ptr [esp + 0x54]
// 007239e0  7318                 jae 0x7239fa
// 007239e2  296c2454             sub dword ptr [esp + 0x54], ebp
// 007239e6  8a4101               mov al, byte ptr [ecx + 1]
// 007239e9  83c101               add ecx, 1
// 007239ec  83c601               add esi, 1
// 007239ef  83ed01               sub ebp, 1
// 007239f2  8806                 mov byte ptr [esi], al
// 007239f4  75f0                 jne 0x7239e6
// 007239f6  8bce                 mov ecx, esi
// 007239f8  2bca                 sub ecx, edx
// 007239fa  8b442454             mov eax, dword ptr [esp + 0x54]
// 007239fe  83f802               cmp eax, 2
// 00723a01  763e                 jbe 0x723a41
// 00723a03  8d50fd               lea edx, [eax - 3]
// 00723a06  b8abaaaaaa           mov eax, 0xaaaaaaab
// 00723a0b  f7e2                 mul edx
// 00723a0d  8bea                 mov ebp, edx
// 00723a0f  d1ed                 shr ebp, 1
// 00723a11  83c501               add ebp, 1
// 00723a14  0fb64101             movzx eax, byte ptr [ecx + 1]
// 00723a18  836c245403           sub dword ptr [esp + 0x54], 3
// 00723a1d  83c101               add ecx, 1
// 00723a20  83c601               add esi, 1
// 00723a23  8806                 mov byte ptr [esi], al
// 00723a25  8a5101               mov dl, byte ptr [ecx + 1]
// 00723a28  83c101               add ecx, 1
// 00723a2b  83c601               add esi, 1
// 00723a2e  8816                 mov byte ptr [esi], dl
// 00723a30  0fb64101             movzx eax, byte ptr [ecx + 1]
// 00723a34  83c101               add ecx, 1
// 00723a37  83c601               add esi, 1
// 00723a3a  83ed01               sub ebp, 1
// 00723a3d  8806                 mov byte ptr [esi], al
// 00723a3f  75d3                 jne 0x723a14
// 00723a41  8b6c2454             mov ebp, dword ptr [esp + 0x54]
// 00723a45  85ed                 test ebp, ebp
// 00723a47  7418                 je 0x723a61
// 00723a49  8a5101               mov dl, byte ptr [ecx + 1]
// 00723a4c  83c101               add ecx, 1
// 00723a4f  83c601               add esi, 1
// 00723a52  83fd01               cmp ebp, 1
// 00723a55  8816                 mov byte ptr [esi], dl
// 00723a57  7608                 jbe 0x723a61
// 00723a59  8a4101               mov al, byte ptr [ecx + 1]
// 00723a5c  83c601               add esi, 1
// 00723a5f  8806                 mov byte ptr [esi], al
// 00723a61  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00723a65  8b542414             mov edx, dword ptr [esp + 0x14]
// 00723a69  3bea                 cmp ebp, edx
// 00723a6b  0f83c3000000         jae 0x723b34
// 00723a71  3b74242c             cmp esi, dword ptr [esp + 0x2c]
// 00723a75  0f83b9000000         jae 0x723b34
// 00723a7b  8b542448             mov edx, dword ptr [esp + 0x48]
// 00723a7f  e9ecfcffff           jmp 0x723770
// 00723a84  8bc6                 mov eax, esi
// 00723a86  2bc2                 sub eax, edx
// 00723a88  eb06                 jmp 0x723a90
// 00723a8a  8d9b00000000         lea ebx, [ebx]
// 00723a90  0fb64801             movzx ecx, byte ptr [eax + 1]
// 00723a94  83c001               add eax, 1
// 00723a97  884e01               mov byte ptr [esi + 1], cl
// 00723a9a  8a5001               mov dl, byte ptr [eax + 1]
// 00723a9d  83c601               add esi, 1
// 00723aa0  83c001               add eax, 1
// 00723aa3  83c601               add esi, 1
// 00723aa6  8816                 mov byte ptr [esi], dl
// 00723aa8  0fb64801             movzx ecx, byte ptr [eax + 1]
// 00723aac  83c001               add eax, 1
// 00723aaf  83c601               add esi, 1
// 00723ab2  880e                 mov byte ptr [esi], cl
// 00723ab4  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00723ab8  83e903               sub ecx, 3
// 00723abb  83f902               cmp ecx, 2
// 00723abe  894c2454             mov dword ptr [esp + 0x54], ecx
// 00723ac2  77cc                 ja 0x723a90
// 00723ac4  85c9                 test ecx, ecx
// 00723ac6  749d                 je 0x723a65
// 00723ac8  8a5001               mov dl, byte ptr [eax + 1]
// 00723acb  83c001               add eax, 1
// 00723ace  83c601               add esi, 1
// 00723ad1  83f901               cmp ecx, 1
// 00723ad4  8816                 mov byte ptr [esi], dl
// 00723ad6  768d                 jbe 0x723a65
// 00723ad8  8a4001               mov al, byte ptr [eax + 1]
// 00723adb  83c601               add esi, 1
// 00723ade  8806                 mov byte ptr [esi], al
// 00723ae0  eb83                 jmp 0x723a65
// 00723ae2  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00723ae6  8b542418             mov edx, dword ptr [esp + 0x18]
// 00723aea  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00723aee  c74118880b7e00       mov dword ptr [ecx + 0x18], 0x7e0b88
// 00723af5  c7021b000000         mov dword ptr [edx], 0x1b
// 00723afb  eb33                 jmp 0x723b30
// 00723afd  8b442450             mov eax, dword ptr [esp + 0x50]
// 00723b01  c74018a80b7e00       mov dword ptr [eax + 0x18], 0x7e0ba8
// 00723b08  eb1c                 jmp 0x723b26
// 00723b0a  f6c220               test dl, 0x20
// 00723b0d  740c                 je 0x723b1b
// 00723b0f  8b542418             mov edx, dword ptr [esp + 0x18]
// 00723b13  c7020b000000         mov dword ptr [edx], 0xb
// 00723b19  eb15                 jmp 0x723b30
// 00723b1b  8b442450             mov eax, dword ptr [esp + 0x50]
// 00723b1f  c74018c00b7e00       mov dword ptr [eax + 0x18], 0x7e0bc0
// 00723b26  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00723b2a  c7011b000000         mov dword ptr [ecx], 0x1b
// 00723b30  8b542414             mov edx, dword ptr [esp + 0x14]
// 00723b34  8bc7                 mov eax, edi
// 00723b36  c1e803               shr eax, 3
// 00723b39  2be8                 sub ebp, eax
// 00723b3b  03c0                 add eax, eax
// 00723b3d  03c0                 add eax, eax
// 00723b3f  03c0                 add eax, eax
// 00723b41  2bf8                 sub edi, eax
// 00723b43  8bcf                 mov ecx, edi
// 00723b45  b801000000           mov eax, 1
// 00723b4a  d3e0                 shl eax, cl
// 00723b4c  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00723b50  2bd5                 sub edx, ebp
// 00723b52  83c205               add edx, 5
// 00723b55  83e801               sub eax, 1
// 00723b58  23d8                 and ebx, eax
// 00723b5a  8d4501               lea eax, [ebp + 1]
// 00723b5d  8901                 mov dword ptr [ecx], eax
// 00723b5f  8d4601               lea eax, [esi + 1]
// 00723b62  89410c               mov dword ptr [ecx + 0xc], eax
// 00723b65  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00723b69  2bc6                 sub eax, esi
// 00723b6b  0501010000           add eax, 0x101
// 00723b70  894110               mov dword ptr [ecx + 0x10], eax
// 00723b73  8b442418             mov eax, dword ptr [esp + 0x18]
// 00723b77  895104               mov dword ptr [ecx + 4], edx
// 00723b7a  89783c               mov dword ptr [eax + 0x3c], edi
// 00723b7d  5f                   pop edi
// 00723b7e  5e                   pop esi
// 00723b7f  5d                   pop ebp
// 00723b80  895838               mov dword ptr [eax + 0x38], ebx
// 00723b83  5b                   pop ebx
// 00723b84  83c43c               add esp, 0x3c
// 00723b87  c3                   ret 
// library zlib-1.2.3/inffast.c (function _inflate_fast)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 inffast.c
