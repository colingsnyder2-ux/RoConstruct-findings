// roc 2008-06 00795520  unit: CXTPRibbonGroup  size: 468 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00795520
//
// 00795520  83ec34               sub esp, 0x34
// 00795523  53                   push ebx
// 00795524  55                   push ebp
// 00795525  56                   push esi
// 00795526  57                   push edi
// 00795527  8bf9                 mov edi, ecx
// 00795529  8b4f5c               mov ecx, dword ptr [edi + 0x5c]
// 0079552c  e88fcbf8ff           call 0x7220c0
// 00795531  8ba860060000         mov ebp, dword ptr [eax + 0x660]
// 00795537  8b4f5c               mov ecx, dword ptr [edi + 0x5c]
// 0079553a  8b01                 mov eax, dword ptr [ecx]
// 0079553c  8b9030020000         mov edx, dword ptr [eax + 0x230]
// 00795542  896c2430             mov dword ptr [esp + 0x30], ebp
// 00795546  ffd2                 call edx
// 00795548  8bd8                 mov ebx, eax
// 0079554a  8b4720               mov eax, dword ptr [edi + 0x20]
// 0079554d  33f6                 xor esi, esi
// 0079554f  83eb07               sub ebx, 7
// 00795552  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 0079555a  89742424             mov dword ptr [esp + 0x24], esi
// 0079555e  89742418             mov dword ptr [esp + 0x18], esi
// 00795562  89442420             mov dword ptr [esp + 0x20], eax
// 00795566  397724               cmp dword ptr [edi + 0x24], esi
// 00795569  7404                 je 0x79556f
// 0079556b  89742420             mov dword ptr [esp + 0x20], esi
// 0079556f  8b8f80000000         mov ecx, dword ptr [edi + 0x80]
// 00795575  3bce                 cmp ecx, esi
// 00795577  7409                 je 0x795582
// 00795579  8b5104               mov edx, dword ptr [ecx + 4]
// 0079557c  89542414             mov dword ptr [esp + 0x14], edx
// 00795580  eb04                 jmp 0x795586
// 00795582  89742414             mov dword ptr [esp + 0x14], esi
// 00795586  c744242802000000     mov dword ptr [esp + 0x28], 2
// 0079558e  3bce                 cmp ecx, esi
// 00795590  7424                 je 0x7955b6
// 00795592  3bc6                 cmp eax, esi
// 00795594  7420                 je 0x7955b6
// 00795596  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00795599  8b4908               mov ecx, dword ptr [ecx + 8]
// 0079559c  3bd1                 cmp edx, ecx
// 0079559e  7d16                 jge 0x7955b6
// 007955a0  394c2448             cmp dword ptr [esp + 0x48], ecx
// 007955a4  7510                 jne 0x7955b6
// 007955a6  8bc1                 mov eax, ecx
// 007955a8  2bc2                 sub eax, edx
// 007955aa  99                   cdq 
// 007955ab  2bc2                 sub eax, edx
// 007955ad  d1f8                 sar eax, 1
// 007955af  83c002               add eax, 2
// 007955b2  89442428             mov dword ptr [esp + 0x28], eax
// 007955b6  39742414             cmp dword ptr [esp + 0x14], esi
// 007955ba  89742410             mov dword ptr [esp + 0x10], esi
// 007955be  0f8ed0000000         jle 0x795694
// 007955c4  8974241c             mov dword ptr [esp + 0x1c], esi
// 007955c8  eb06                 jmp 0x7955d0
// 007955ca  8d9b00000000         lea ebx, [ebx]
// 007955d0  8b8780000000         mov eax, dword ptr [edi + 0x80]
// 007955d6  8b30                 mov esi, dword ptr [eax]
// 007955d8  0374241c             add esi, dword ptr [esp + 0x1c]
// 007955dc  837e2800             cmp dword ptr [esi + 0x28], 0
// 007955e0  0f8594000000         jne 0x79567a
// 007955e6  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007955ea  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 007955ee  8b442428             mov eax, dword ptr [esp + 0x28]
// 007955f2  83c102               add ecx, 2
// 007955f5  51                   push ecx
// 007955f6  03d0                 add edx, eax
// 007955f8  52                   push edx
// 007955f9  56                   push esi
// 007955fa  ff15682d8000         call dword ptr [0x802d68]
// 00795600  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00795604  8b442450             mov eax, dword ptr [esp + 0x50]
// 00795608  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 0079560c  03e9                 add ebp, ecx
// 0079560e  896c243c             mov dword ptr [esp + 0x3c], ebp
// 00795612  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 00795616  8bd0                 mov edx, eax
// 00795618  894e10               mov dword ptr [esi + 0x10], ecx
// 0079561b  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0079561f  2bc5                 sub eax, ebp
// 00795621  03c3                 add eax, ebx
// 00795623  837c242000           cmp dword ptr [esp + 0x20], 0
// 00795628  895614               mov dword ptr [esi + 0x14], edx
// 0079562b  894e18               mov dword ptr [esi + 0x18], ecx
// 0079562e  89461c               mov dword ptr [esi + 0x1c], eax
// 00795631  7439                 je 0x79566c
// 00795633  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 00795638  7532                 jne 0x79566c
// 0079563a  8b542418             mov edx, dword ptr [esp + 0x18]
// 0079563e  3b16                 cmp edx, dword ptr [esi]
// 00795640  7438                 je 0x79567a
// 00795642  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00795646  8b542424             mov edx, dword ptr [esp + 0x24]
// 0079564a  8bc3                 mov eax, ebx
// 0079564c  2bc5                 sub eax, ebp
// 0079564e  83e803               sub eax, 3
// 00795651  50                   push eax
// 00795652  49                   dec ecx
// 00795653  51                   push ecx
// 00795654  52                   push edx
// 00795655  8bcf                 mov ecx, edi
// 00795657  e824feffff           call 0x795480
// 0079565c  8b06                 mov eax, dword ptr [esi]
// 0079565e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00795662  89442418             mov dword ptr [esp + 0x18], eax
// 00795666  894c2424             mov dword ptr [esp + 0x24], ecx
// 0079566a  eb0e                 jmp 0x79567a
// 0079566c  8b16                 mov edx, dword ptr [esi]
// 0079566e  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00795676  89542418             mov dword ptr [esp + 0x18], edx
// 0079567a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0079567e  8344241c44           add dword ptr [esp + 0x1c], 0x44
// 00795683  40                   inc eax
// 00795684  3b442414             cmp eax, dword ptr [esp + 0x14]
// 00795688  89442410             mov dword ptr [esp + 0x10], eax
// 0079568c  0f8c3effffff         jl 0x7955d0
// 00795692  33f6                 xor esi, esi
// 00795694  39742420             cmp dword ptr [esp + 0x20], esi
// 00795698  7425                 je 0x7956bf
// 0079569a  39742414             cmp dword ptr [esp + 0x14], esi
// 0079569e  7e1f                 jle 0x7956bf
// 007956a0  8b8f80000000         mov ecx, dword ptr [edi + 0x80]
// 007956a6  8b5104               mov edx, dword ptr [ecx + 4]
// 007956a9  8bc3                 mov eax, ebx
// 007956ab  2bc5                 sub eax, ebp
// 007956ad  83e803               sub eax, 3
// 007956b0  50                   push eax
// 007956b1  8b442428             mov eax, dword ptr [esp + 0x28]
// 007956b5  4a                   dec edx
// 007956b6  52                   push edx
// 007956b7  50                   push eax
// 007956b8  8bcf                 mov ecx, edi
// 007956ba  e8c1fdffff           call 0x795480
// 007956bf  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007956c3  8b442448             mov eax, dword ptr [esp + 0x48]
// 007956c7  8b542450             mov edx, dword ptr [esp + 0x50]
// 007956cb  8b2f                 mov ebp, dword ptr [edi]
// 007956cd  8d740105             lea esi, [ecx + eax + 5]
// 007956d1  83ec10               sub esp, 0x10
// 007956d4  8bc4                 mov eax, esp
// 007956d6  8908                 mov dword ptr [eax], ecx
// 007956d8  895004               mov dword ptr [eax + 4], edx
// 007956db  03da                 add ebx, edx
// 007956dd  8b5558               mov edx, dword ptr [ebp + 0x58]
// 007956e0  897008               mov dword ptr [eax + 8], esi
// 007956e3  8bcf                 mov ecx, edi
// 007956e5  89580c               mov dword ptr [eax + 0xc], ebx
// 007956e8  ffd2                 call edx
// 007956ea  5f                   pop edi
// 007956eb  5e                   pop esi
// 007956ec  5d                   pop ebp
// 007956ed  5b                   pop ebx
// 007956ee  83c434               add esp, 0x34
// 007956f1  c21400               ret 0x14
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonGroups.cpp (function ?OnAdjustBorders@CXTPRibbonGroup@@IAEXHVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonGroups.cpp
