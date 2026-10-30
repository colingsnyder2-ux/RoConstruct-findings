// roc 2009-12 0089cc90  unit: CXTPReportPaintManager  size: 658 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0089cc90
//
// 0089cc90  6aff                 push -1
// 0089cc92  68d11c9600           push 0x961cd1
// 0089cc97  64a100000000         mov eax, dword ptr fs:[0]
// 0089cc9d  50                   push eax
// 0089cc9e  83ec30               sub esp, 0x30
// 0089cca1  53                   push ebx
// 0089cca2  55                   push ebp
// 0089cca3  56                   push esi
// 0089cca4  57                   push edi
// 0089cca5  a10052b600           mov eax, dword ptr [0xb65200]
// 0089ccaa  33c4                 xor eax, esp
// 0089ccac  50                   push eax
// 0089ccad  8d442444             lea eax, [esp + 0x44]
// 0089ccb1  64a300000000         mov dword ptr fs:[0], eax
// 0089ccb7  8bf9                 mov edi, ecx
// 0089ccb9  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 0089ccbd  8b453c               mov eax, dword ptr [ebp + 0x3c]
// 0089ccc0  8b742454             mov esi, dword ptr [esp + 0x54]
// 0089ccc4  85c0                 test eax, eax
// 0089ccc6  7479                 je 0x89cd41
// 0089ccc8  8b87e4000000         mov eax, dword ptr [edi + 0xe4]
// 0089ccce  83f8ff               cmp eax, -1
// 0089ccd1  7506                 jne 0x89ccd9
// 0089ccd3  8b87e0000000         mov eax, dword ptr [edi + 0xe0]
// 0089ccd9  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 0089ccdd  8b542468             mov edx, dword ptr [esp + 0x68]
// 0089cce1  50                   push eax
// 0089cce2  8b442468             mov eax, dword ptr [esp + 0x68]
// 0089cce6  2bc8                 sub ecx, eax
// 0089cce8  83e909               sub ecx, 9
// 0089cceb  51                   push ecx
// 0089ccec  83c006               add eax, 6
// 0089ccef  50                   push eax
// 0089ccf0  52                   push edx
// 0089ccf1  56                   push esi
// 0089ccf2  8bcf                 mov ecx, edi
// 0089ccf4  e877daffff           call 0x89a770
// 0089ccf9  8b87bc020000         mov eax, dword ptr [edi + 0x2bc]
// 0089ccff  83f803               cmp eax, 3
// 0089cd02  740b                 je 0x89cd0f
// 0089cd04  8d8fd0000000         lea ecx, [edi + 0xd0]
// 0089cd0a  83f804               cmp eax, 4
// 0089cd0d  7506                 jne 0x89cd15
// 0089cd0f  8d8fc0010000         lea ecx, [edi + 0x1c0]
// 0089cd15  8b4108               mov eax, dword ptr [ecx + 8]
// 0089cd18  83f8ff               cmp eax, -1
// 0089cd1b  7503                 jne 0x89cd20
// 0089cd1d  8b4104               mov eax, dword ptr [ecx + 4]
// 0089cd20  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 0089cd24  8b542468             mov edx, dword ptr [esp + 0x68]
// 0089cd28  50                   push eax
// 0089cd29  8b442468             mov eax, dword ptr [esp + 0x68]
// 0089cd2d  2bc8                 sub ecx, eax
// 0089cd2f  83e909               sub ecx, 9
// 0089cd32  51                   push ecx
// 0089cd33  83c005               add eax, 5
// 0089cd36  50                   push eax
// 0089cd37  4a                   dec edx
// 0089cd38  52                   push edx
// 0089cd39  56                   push esi
// 0089cd3a  8bcf                 mov ecx, edi
// 0089cd3c  e82fdaffff           call 0x89a770
// 0089cd41  6a01                 push 1
// 0089cd43  8bce                 mov ecx, esi
// 0089cd45  e846970800           call 0x926490
// 0089cd4a  8b8784000000         mov eax, dword ptr [edi + 0x84]
// 0089cd50  83f8ff               cmp eax, -1
// 0089cd53  7506                 jne 0x89cd5b
// 0089cd55  8b8780000000         mov eax, dword ptr [edi + 0x80]
// 0089cd5b  50                   push eax
// 0089cd5c  8bcd                 mov ecx, ebp
// 0089cd5e  e88dacf8ff           call 0x8279f0
// 0089cd63  50                   push eax
// 0089cd64  56                   push esi
// 0089cd65  8d4c2440             lea ecx, [esp + 0x40]
// 0089cd69  e832e9faff           call 0x84b6a0
// 0089cd6e  8d442458             lea eax, [esp + 0x58]
// 0089cd72  50                   push eax
// 0089cd73  8bcd                 mov ecx, ebp
// 0089cd75  c744245000000000     mov dword ptr [esp + 0x50], 0
// 0089cd7d  e8aed7ffff           call 0x89a530
// 0089cd82  8d4c2414             lea ecx, [esp + 0x14]
// 0089cd86  51                   push ecx
// 0089cd87  8d4c245c             lea ecx, [esp + 0x5c]
// 0089cd8b  c644245001           mov byte ptr [esp + 0x50], 1
// 0089cd90  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0089cd96  50                   push eax
// 0089cd97  8d4c2460             lea ecx, [esp + 0x60]
// 0089cd9b  ff1580de9800         call dword ptr [0x98de80]
// 0089cda1  8b5608               mov edx, dword ptr [esi + 8]
// 0089cda4  50                   push eax
// 0089cda5  52                   push edx
// 0089cda6  ff156cb19800         call dword ptr [0x98b16c]
// 0089cdac  8b442460             mov eax, dword ptr [esp + 0x60]
// 0089cdb0  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0089cdb4  8b542468             mov edx, dword ptr [esp + 0x68]
// 0089cdb8  8b5c246c             mov ebx, dword ptr [esp + 0x6c]
// 0089cdbc  83c102               add ecx, 2
// 0089cdbf  89442424             mov dword ptr [esp + 0x24], eax
// 0089cdc3  83c003               add eax, 3
// 0089cdc6  894c2428             mov dword ptr [esp + 0x28], ecx
// 0089cdca  83ea03               sub edx, 3
// 0089cdcd  83eb02               sub ebx, 2
// 0089cdd0  8bcd                 mov ecx, ebp
// 0089cdd2  89442424             mov dword ptr [esp + 0x24], eax
// 0089cdd6  8954242c             mov dword ptr [esp + 0x2c], edx
// 0089cdda  895c2430             mov dword ptr [esp + 0x30], ebx
// 0089cdde  e8adacf8ff           call 0x827a90
// 0089cde3  85c0                 test eax, eax
// 0089cde5  7446                 je 0x89ce2d
// 0089cde7  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0089cdeb  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0089cdef  2b442424             sub eax, dword ptr [esp + 0x24]
// 0089cdf3  83c306               add ebx, 6
// 0089cdf6  3bc3                 cmp eax, ebx
// 0089cdf8  7e33                 jle 0x89ce2d
// 0089cdfa  8bcd                 mov ecx, ebp
// 0089cdfc  e88facf8ff           call 0x827a90
// 0089ce01  a802                 test al, 2
// 0089ce03  740a                 je 0x89ce0f
// 0089ce05  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0089ce09  2bcb                 sub ecx, ebx
// 0089ce0b  894c2424             mov dword ptr [esp + 0x24], ecx
// 0089ce0f  8bcd                 mov ecx, ebp
// 0089ce11  e87aacf8ff           call 0x827a90
// 0089ce16  a801                 test al, 1
// 0089ce18  7413                 je 0x89ce2d
// 0089ce1a  8b442424             mov eax, dword ptr [esp + 0x24]
// 0089ce1e  2bc3                 sub eax, ebx
// 0089ce20  0344242c             add eax, dword ptr [esp + 0x2c]
// 0089ce24  99                   cdq 
// 0089ce25  2bc2                 sub eax, edx
// 0089ce27  d1f8                 sar eax, 1
// 0089ce29  89442424             mov dword ptr [esp + 0x24], eax
// 0089ce2d  83bfa802000000       cmp dword ptr [edi + 0x2a8], 0
// 0089ce34  7579                 jne 0x89ceaf
// 0089ce36  8bcd                 mov ecx, ebp
// 0089ce38  e853acf8ff           call 0x827a90
// 0089ce3d  a810                 test al, 0x10
// 0089ce3f  746e                 je 0x89ceaf
// 0089ce41  8b442428             mov eax, dword ptr [esp + 0x28]
// 0089ce45  8b542424             mov edx, dword ptr [esp + 0x24]
// 0089ce49  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0089ce4d  8b3e                 mov edi, dword ptr [esi]
// 0089ce4f  89442418             mov dword ptr [esp + 0x18], eax
// 0089ce53  89542414             mov dword ptr [esp + 0x14], edx
// 0089ce57  8b542430             mov edx, dword ptr [esp + 0x30]
// 0089ce5b  68108c0000           push 0x8c10
// 0089ce60  8d442418             lea eax, [esp + 0x18]
// 0089ce64  894c2420             mov dword ptr [esp + 0x20], ecx
// 0089ce68  50                   push eax
// 0089ce69  8d4c2460             lea ecx, [esp + 0x60]
// 0089ce6d  bb10880000           mov ebx, 0x8810
// 0089ce72  89542428             mov dword ptr [esp + 0x28], edx
// 0089ce76  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0089ce7c  50                   push eax
// 0089ce7d  8d4c2464             lea ecx, [esp + 0x64]
// 0089ce81  ff1580de9800         call dword ptr [0x98de80]
// 0089ce87  8b5770               mov edx, dword ptr [edi + 0x70]
// 0089ce8a  50                   push eax
// 0089ce8b  8bce                 mov ecx, esi
// 0089ce8d  ffd2                 call edx
// 0089ce8f  8b442418             mov eax, dword ptr [esp + 0x18]
// 0089ce93  2b442420             sub eax, dword ptr [esp + 0x20]
// 0089ce97  2b442428             sub eax, dword ptr [esp + 0x28]
// 0089ce9b  03442430             add eax, dword ptr [esp + 0x30]
// 0089ce9f  83f801               cmp eax, 1
// 0089cea2  7e10                 jle 0x89ceb4
// 0089cea4  99                   cdq 
// 0089cea5  2bc2                 sub eax, edx
// 0089cea7  d1f8                 sar eax, 1
// 0089cea9  01442428             add dword ptr [esp + 0x28], eax
// 0089cead  eb05                 jmp 0x89ceb4
// 0089ceaf  bb24880000           mov ebx, 0x8824
// 0089ceb4  8d4c2458             lea ecx, [esp + 0x58]
// 0089ceb8  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0089cebe  85c0                 test eax, eax
// 0089cec0  7e2f                 jle 0x89cef1
// 0089cec2  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0089cec6  3b442424             cmp eax, dword ptr [esp + 0x24]
// 0089ceca  7e25                 jle 0x89cef1
// 0089cecc  8b3e                 mov edi, dword ptr [esi]
// 0089cece  53                   push ebx
// 0089cecf  8d4c2428             lea ecx, [esp + 0x28]
// 0089ced3  51                   push ecx
// 0089ced4  8d4c2460             lea ecx, [esp + 0x60]
// 0089ced8  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0089cede  50                   push eax
// 0089cedf  8d4c2464             lea ecx, [esp + 0x64]
// 0089cee3  ff1580de9800         call dword ptr [0x98de80]
// 0089cee9  8b5770               mov edx, dword ptr [edi + 0x70]
// 0089ceec  50                   push eax
// 0089ceed  8bce                 mov ecx, esi
// 0089ceef  ffd2                 call edx
// 0089cef1  8d4c2458             lea ecx, [esp + 0x58]
// 0089cef5  ff15c0de9800         call dword ptr [0x98dec0]
// 0089cefb  8d4c2434             lea ecx, [esp + 0x34]
// 0089ceff  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 0089cf07  e8d4e7faff           call 0x84b6e0
// 0089cf0c  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0089cf10  64890d00000000       mov dword ptr fs:[0], ecx
// 0089cf17  59                   pop ecx
// 0089cf18  5f                   pop edi
// 0089cf19  5e                   pop esi
// 0089cf1a  5d                   pop ebp
// 0089cf1b  5b                   pop ebx
// 0089cf1c  83c43c               add esp, 0x3c
// 0089cf1f  c21c00               ret 0x1c
// copied from an identical function in another client (function ?DrawColumnFooter@CXTPReportPaintManager@@UAEXPAVCDC@@PAVCXTPReportColumn@@PAVCXTPReportHeader@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/ReportControl/XTPReportPaintManager.cpp