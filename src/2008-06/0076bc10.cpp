// roc 2008-06 0076bc10  unit: CXTPDockingPaneContext  size: 586 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0076bc10
//
// 0076bc10  83ec20               sub esp, 0x20
// 0076bc13  dd0500738600         fld qword ptr [0x867300]
// 0076bc19  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0076bc1d  53                   push ebx
// 0076bc1e  dd5c2404             fstp qword ptr [esp + 4]
// 0076bc22  d9e8                 fld1 
// 0076bc24  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 0076bc28  55                   push ebp
// 0076bc29  dd5c2410             fstp qword ptr [esp + 0x10]
// 0076bc2d  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0076bc31  56                   push esi
// 0076bc32  57                   push edi
// 0076bc33  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 0076bc37  8bf1                 mov esi, ecx
// 0076bc39  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0076bc3d  85ff                 test edi, edi
// 0076bc3f  7439                 je 0x76bc7a
// 0076bc41  83be4801000000       cmp dword ptr [esi + 0x148], 0
// 0076bc48  7530                 jne 0x76bc7a
// 0076bc4a  8bc2                 mov eax, edx
// 0076bc4c  2bc5                 sub eax, ebp
// 0076bc4e  83f801               cmp eax, 1
// 0076bc51  89442410             mov dword ptr [esp + 0x10], eax
// 0076bc55  7e19                 jle 0x76bc70
// 0076bc57  8bc1                 mov eax, ecx
// 0076bc59  2bc3                 sub eax, ebx
// 0076bc5b  83f801               cmp eax, 1
// 0076bc5e  89442450             mov dword ptr [esp + 0x50], eax
// 0076bc62  7e0c                 jle 0x76bc70
// 0076bc64  db442450             fild dword ptr [esp + 0x50]
// 0076bc68  da742410             fidiv dword ptr [esp + 0x10]
// 0076bc6c  dd5c2418             fstp qword ptr [esp + 0x18]
// 0076bc70  dd05f8728600         fld qword ptr [0x8672f8]
// 0076bc76  dd5c2410             fstp qword ptr [esp + 0x10]
// 0076bc7a  8bc1                 mov eax, ecx
// 0076bc7c  2bc3                 sub eax, ebx
// 0076bc7e  7423                 je 0x76bca3
// 0076bc80  8bc2                 mov eax, edx
// 0076bc82  2bc5                 sub eax, ebp
// 0076bc84  741d                 je 0x76bca3
// 0076bc86  85ff                 test edi, edi
// 0076bc88  7425                 je 0x76bcaf
// 0076bc8a  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0076bc8e  8b542444             mov edx, dword ptr [esp + 0x44]
// 0076bc92  51                   push ecx
// 0076bc93  52                   push edx
// 0076bc94  8d44243c             lea eax, [esp + 0x3c]
// 0076bc98  50                   push eax
// 0076bc99  ff152c2d8000         call dword ptr [0x802d2c]
// 0076bc9f  85c0                 test eax, eax
// 0076bca1  7541                 jne 0x76bce4
// 0076bca3  5f                   pop edi
// 0076bca4  5e                   pop esi
// 0076bca5  5d                   pop ebp
// 0076bca6  33c0                 xor eax, eax
// 0076bca8  5b                   pop ebx
// 0076bca9  83c420               add esp, 0x20
// 0076bcac  c22000               ret 0x20
// 0076bcaf  83c114               add ecx, 0x14
// 0076bcb2  83c214               add edx, 0x14
// 0076bcb5  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0076bcb9  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0076bcbd  89542428             mov dword ptr [esp + 0x28], edx
// 0076bcc1  8b542444             mov edx, dword ptr [esp + 0x44]
// 0076bcc5  51                   push ecx
// 0076bcc6  52                   push edx
// 0076bcc7  8d442428             lea eax, [esp + 0x28]
// 0076bccb  83c5ec               add ebp, -0x14
// 0076bcce  83c3ec               add ebx, -0x14
// 0076bcd1  50                   push eax
// 0076bcd2  896c242c             mov dword ptr [esp + 0x2c], ebp
// 0076bcd6  895c2430             mov dword ptr [esp + 0x30], ebx
// 0076bcda  ff152c2d8000         call dword ptr [0x802d2c]
// 0076bce0  85c0                 test eax, eax
// 0076bce2  74bf                 je 0x76bca3
// 0076bce4  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 0076bce8  33db                 xor ebx, ebx
// 0076bcea  85ff                 test edi, edi
// 0076bcec  0f95c3               setne bl
// 0076bcef  8bcd                 mov ecx, ebp
// 0076bcf1  2b4c2438             sub ecx, dword ptr [esp + 0x38]
// 0076bcf5  33ff                 xor edi, edi
// 0076bcf7  8bc1                 mov eax, ecx
// 0076bcf9  99                   cdq 
// 0076bcfa  33c2                 xor eax, edx
// 0076bcfc  2bc2                 sub eax, edx
// 0076bcfe  89442450             mov dword ptr [esp + 0x50], eax
// 0076bd02  8d5c1bff             lea ebx, [ebx + ebx - 1]
// 0076bd06  db442450             fild dword ptr [esp + 0x50]
// 0076bd0a  dd442410             fld qword ptr [esp + 0x10]
// 0076bd0e  d8d1                 fcom st(1)
// 0076bd10  dfe0                 fnstsw ax
// 0076bd12  f6c441               test ah, 0x41
// 0076bd15  751a                 jne 0x76bd31
// 0076bd17  0fafcb               imul ecx, ebx
// 0076bd1a  85c9                 test ecx, ecx
// 0076bd1c  7c13                 jl 0x76bd31
// 0076bd1e  ddd8                 fstp st(0)
// 0076bd20  c7868801000002000000 mov dword ptr [esi + 0x188], 2
// 0076bd2a  bf01000000           mov edi, 1
// 0076bd2f  eb02                 jmp 0x76bd33
// 0076bd31  ddd9                 fstp st(1)
// 0076bd33  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0076bd37  2bcd                 sub ecx, ebp
// 0076bd39  8bc1                 mov eax, ecx
// 0076bd3b  99                   cdq 
// 0076bd3c  33c2                 xor eax, edx
// 0076bd3e  2bc2                 sub eax, edx
// 0076bd40  89442450             mov dword ptr [esp + 0x50], eax
// 0076bd44  db442450             fild dword ptr [esp + 0x50]
// 0076bd48  d8d1                 fcom st(1)
// 0076bd4a  dfe0                 fnstsw ax
// 0076bd4c  f6c405               test ah, 5
// 0076bd4f  7a1a                 jp 0x76bd6b
// 0076bd51  0fafcb               imul ecx, ebx
// 0076bd54  85c9                 test ecx, ecx
// 0076bd56  7c13                 jl 0x76bd6b
// 0076bd58  ddd9                 fstp st(1)
// 0076bd5a  c7868801000003000000 mov dword ptr [esi + 0x188], 3
// 0076bd64  bf01000000           mov edi, 1
// 0076bd69  eb02                 jmp 0x76bd6d
// 0076bd6b  ddd8                 fstp st(0)
// 0076bd6d  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 0076bd71  8bcd                 mov ecx, ebp
// 0076bd73  2b4c2434             sub ecx, dword ptr [esp + 0x34]
// 0076bd77  8bc1                 mov eax, ecx
// 0076bd79  99                   cdq 
// 0076bd7a  33c2                 xor eax, edx
// 0076bd7c  2bc2                 sub eax, edx
// 0076bd7e  89442450             mov dword ptr [esp + 0x50], eax
// 0076bd82  db442450             fild dword ptr [esp + 0x50]
// 0076bd86  dd442418             fld qword ptr [esp + 0x18]
// 0076bd8a  dcc9                 fmul st(1), st(0)
// 0076bd8c  d9c9                 fxch st(1)
// 0076bd8e  d8d2                 fcom st(2)
// 0076bd90  dfe0                 fnstsw ax
// 0076bd92  f6c405               test ah, 5
// 0076bd95  7a1a                 jp 0x76bdb1
// 0076bd97  0fafcb               imul ecx, ebx
// 0076bd9a  85c9                 test ecx, ecx
// 0076bd9c  7c13                 jl 0x76bdb1
// 0076bd9e  ddda                 fstp st(2)
// 0076bda0  c7868801000000000000 mov dword ptr [esi + 0x188], 0
// 0076bdaa  bf01000000           mov edi, 1
// 0076bdaf  eb02                 jmp 0x76bdb3
// 0076bdb1  ddd8                 fstp st(0)
// 0076bdb3  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0076bdb7  2bcd                 sub ecx, ebp
// 0076bdb9  8bc1                 mov eax, ecx
// 0076bdbb  99                   cdq 
// 0076bdbc  33c2                 xor eax, edx
// 0076bdbe  2bc2                 sub eax, edx
// 0076bdc0  89442450             mov dword ptr [esp + 0x50], eax
// 0076bdc4  db442450             fild dword ptr [esp + 0x50]
// 0076bdc8  dec9                 fmulp st(1)
// 0076bdca  ded9                 fcompp 
// 0076bdcc  dfe0                 fnstsw ax
// 0076bdce  f6c405               test ah, 5
// 0076bdd1  7a14                 jp 0x76bde7
// 0076bdd3  0fafcb               imul ecx, ebx
// 0076bdd6  85c9                 test ecx, ecx
// 0076bdd8  7c0d                 jl 0x76bde7
// 0076bdda  bf01000000           mov edi, 1
// 0076bddf  89be88010000         mov dword ptr [esi + 0x188], edi
// 0076bde5  eb04                 jmp 0x76bdeb
// 0076bde7  85ff                 test edi, edi
// 0076bde9  7463                 je 0x76be4e
// 0076bdeb  8b8e88010000         mov ecx, dword ptr [esi + 0x188]
// 0076bdf1  8b5c244c             mov ebx, dword ptr [esp + 0x4c]
// 0076bdf5  51                   push ecx
// 0076bdf6  53                   push ebx
// 0076bdf7  8bce                 mov ecx, esi
// 0076bdf9  e882f6ffff           call 0x76b480
// 0076bdfe  85c0                 test eax, eax
// 0076be00  0f849dfeffff         je 0x76bca3
// 0076be06  8b9688010000         mov edx, dword ptr [esi + 0x188]
// 0076be0c  8b8620010000         mov eax, dword ptr [esi + 0x120]
// 0076be12  53                   push ebx
// 0076be13  52                   push edx
// 0076be14  50                   push eax
// 0076be15  8d4c242c             lea ecx, [esp + 0x2c]
// 0076be19  51                   push ecx
// 0076be1a  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 0076be20  e86b98f7ff           call 0x6e5690
// 0076be25  8b10                 mov edx, dword ptr [eax]
// 0076be27  899630010000         mov dword ptr [esi + 0x130], edx
// 0076be2d  8b4804               mov ecx, dword ptr [eax + 4]
// 0076be30  898e34010000         mov dword ptr [esi + 0x134], ecx
// 0076be36  8b5008               mov edx, dword ptr [eax + 8]
// 0076be39  899638010000         mov dword ptr [esi + 0x138], edx
// 0076be3f  8b400c               mov eax, dword ptr [eax + 0xc]
// 0076be42  89863c010000         mov dword ptr [esi + 0x13c], eax
// 0076be48  899e2c010000         mov dword ptr [esi + 0x12c], ebx
// 0076be4e  8bc7                 mov eax, edi
// 0076be50  5f                   pop edi
// 0076be51  5e                   pop esi
// 0076be52  5d                   pop ebp
// 0076be53  5b                   pop ebx
// 0076be54  83c420               add esp, 0x20
// 0076be57  c22000               ret 0x20
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneContext.cpp (function ?CanDock@CXTPDockingPaneContext@@IAEHVCRect@@VCPoint@@PAVCXTPDockingPaneBase@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneContext.cpp
