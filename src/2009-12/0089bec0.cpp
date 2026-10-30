// roc 2009-12 0089bec0  unit: CXTPReportPaintManager  size: 647 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0089bec0
//
// 0089bec0  6aff                 push -1
// 0089bec2  68301c9600           push 0x961c30
// 0089bec7  64a100000000         mov eax, dword ptr fs:[0]
// 0089becd  50                   push eax
// 0089bece  83ec44               sub esp, 0x44
// 0089bed1  53                   push ebx
// 0089bed2  55                   push ebp
// 0089bed3  56                   push esi
// 0089bed4  57                   push edi
// 0089bed5  a10052b600           mov eax, dword ptr [0xb65200]
// 0089beda  33c4                 xor eax, esp
// 0089bedc  50                   push eax
// 0089bedd  8d442458             lea eax, [esp + 0x58]
// 0089bee1  64a300000000         mov dword ptr fs:[0], eax
// 0089bee7  894c2414             mov dword ptr [esp + 0x14], ecx
// 0089beeb  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0089beef  85f6                 test esi, esi
// 0089bef1  0f8438020000         je 0x89c12f
// 0089bef7  8bce                 mov ecx, esi
// 0089bef9  e892bdf8ff           call 0x827c90
// 0089befe  85c0                 test eax, eax
// 0089bf00  0f8429020000         je 0x89c12f
// 0089bf06  8bce                 mov ecx, esi
// 0089bf08  e883bdf8ff           call 0x827c90
// 0089bf0d  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 0089bf14  8b80d0010000         mov eax, dword ptr [eax + 0x1d0]
// 0089bf1a  6a00                 push 0
// 0089bf1c  51                   push ecx
// 0089bf1d  8bc8                 mov ecx, eax
// 0089bf1f  e85c3cf7ff           call 0x80fb80
// 0089bf24  8bf0                 mov esi, eax
// 0089bf26  89b42490000000       mov dword ptr [esp + 0x90], esi
// 0089bf2d  85f6                 test esi, esi
// 0089bf2f  0f84fa010000         je 0x89c12f
// 0089bf35  8bce                 mov ecx, esi
// 0089bf37  e83499c3ff           call 0x4d5870
// 0089bf3c  8be8                 mov ebp, eax
// 0089bf3e  8bce                 mov ecx, esi
// 0089bf40  896c2418             mov dword ptr [esp + 0x18], ebp
// 0089bf44  e8371dfbff           call 0x84dc80
// 0089bf49  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 0089bf50  8bbc2480000000       mov edi, dword ptr [esp + 0x80]
// 0089bf57  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 0089bf5e  8bd8                 mov ebx, eax
// 0089bf60  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 0089bf67  2bd7                 sub edx, edi
// 0089bf69  2bc1                 sub eax, ecx
// 0089bf6b  3bda                 cmp ebx, edx
// 0089bf6d  895c2424             mov dword ptr [esp + 0x24], ebx
// 0089bf71  0f8db1010000         jge 0x89c128
// 0089bf77  3be8                 cmp ebp, eax
// 0089bf79  0f8da9010000         jge 0x89c128
// 0089bf7f  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 0089bf83  85db                 test ebx, ebx
// 0089bf85  0f849d010000         je 0x89c128
// 0089bf8b  2bc5                 sub eax, ebp
// 0089bf8d  99                   cdq 
// 0089bf8e  2bc2                 sub eax, edx
// 0089bf90  8be8                 mov ebp, eax
// 0089bf92  d1fd                 sar ebp, 1
// 0089bf94  47                   inc edi
// 0089bf95  03e9                 add ebp, ecx
// 0089bf97  837b0c00             cmp dword ptr [ebx + 0xc], 0
// 0089bf9b  897c242c             mov dword ptr [esp + 0x2c], edi
// 0089bf9f  0f844c010000         je 0x89c0f1
// 0089bfa5  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0089bfa9  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 0089bfad  8b542470             mov edx, dword ptr [esp + 0x70]
// 0089bfb1  8bf5                 mov esi, ebp
// 0089bfb3  2bc1                 sub eax, ecx
// 0089bfb5  2bf1                 sub esi, ecx
// 0089bfb7  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 0089bfbb  2bca                 sub ecx, edx
// 0089bfbd  2bfa                 sub edi, edx
// 0089bfbf  33d2                 xor edx, edx
// 0089bfc1  89542434             mov dword ptr [esp + 0x34], edx
// 0089bfc5  89542438             mov dword ptr [esp + 0x38], edx
// 0089bfc9  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0089bfcd  89442440             mov dword ptr [esp + 0x40], eax
// 0089bfd1  89542420             mov dword ptr [esp + 0x20], edx
// 0089bfd5  c744241c18229a00     mov dword ptr [esp + 0x1c], 0x9a2218
// 0089bfdd  50                   push eax
// 0089bfde  51                   push ecx
// 0089bfdf  53                   push ebx
// 0089bfe0  8d4c2428             lea ecx, [esp + 0x28]
// 0089bfe4  8954246c             mov dword ptr [esp + 0x6c], edx
// 0089bfe8  e863dcf6ff           call 0x809c50
// 0089bfed  8d54241c             lea edx, [esp + 0x1c]
// 0089bff1  52                   push edx
// 0089bff2  6a00                 push 0
// 0089bff4  8d4c244c             lea ecx, [esp + 0x4c]
// 0089bff8  e883f8faff           call 0x84b880
// 0089bffd  8b4308               mov eax, dword ptr [ebx + 8]
// 0089c000  50                   push eax
// 0089c001  c644246401           mov byte ptr [esp + 0x64], 1
// 0089c006  ff15e0b09800         call dword ptr [0x98b0e0]
// 0089c00c  50                   push eax
// 0089c00d  8d4c2438             lea ecx, [esp + 0x38]
// 0089c011  51                   push ecx
// 0089c012  8d4c244c             lea ecx, [esp + 0x4c]
// 0089c016  e8e385f5ff           call 0x7f45fe
// 0089c01b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0089c01f  8b542414             mov edx, dword ptr [esp + 0x14]
// 0089c023  8b12                 mov edx, dword ptr [edx]
// 0089c025  8b92d8000000         mov edx, dword ptr [edx + 0xd8]
// 0089c02b  8d442468             lea eax, [esp + 0x68]
// 0089c02f  50                   push eax
// 0089c030  83ec10               sub esp, 0x10
// 0089c033  8bc4                 mov eax, esp
// 0089c035  8908                 mov dword ptr [eax], ecx
// 0089c037  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0089c03b  894804               mov dword ptr [eax + 4], ecx
// 0089c03e  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0089c042  894808               mov dword ptr [eax + 8], ecx
// 0089c045  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0089c049  89480c               mov dword ptr [eax + 0xc], ecx
// 0089c04c  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 0089c053  50                   push eax
// 0089c054  8d4c245c             lea ecx, [esp + 0x5c]
// 0089c058  51                   push ecx
// 0089c059  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0089c05d  c784248400000000000000 mov dword ptr [esp + 0x84], 0
// 0089c068  ffd2                 call edx
// 0089c06a  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 0089c071  83ec08               sub esp, 8
// 0089c074  8bc4                 mov eax, esp
// 0089c076  89642474             mov dword ptr [esp + 0x74], esp
// 0089c07a  c70000000000         mov dword ptr [eax], 0
// 0089c080  c7400400000000       mov dword ptr [eax + 4], 0
// 0089c087  e8b4d0f6ff           call 0x809140
// 0089c08c  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 0089c093  50                   push eax
// 0089c094  56                   push esi
// 0089c095  57                   push edi
// 0089c096  8d442458             lea eax, [esp + 0x58]
// 0089c09a  50                   push eax
// 0089c09b  e8104ef7ff           call 0x810eb0
// 0089c0a0  8b542418             mov edx, dword ptr [esp + 0x18]
// 0089c0a4  682000cc00           push 0xcc0020
// 0089c0a9  56                   push esi
// 0089c0aa  57                   push edi
// 0089c0ab  8d4c2450             lea ecx, [esp + 0x50]
// 0089c0af  51                   push ecx
// 0089c0b0  52                   push edx
// 0089c0b1  8b442438             mov eax, dword ptr [esp + 0x38]
// 0089c0b5  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0089c0b9  50                   push eax
// 0089c0ba  55                   push ebp
// 0089c0bb  51                   push ecx
// 0089c0bc  8bcb                 mov ecx, ebx
// 0089c0be  e89d20f6ff           call 0x7fe160
// 0089c0c3  8d4c2444             lea ecx, [esp + 0x44]
// 0089c0c7  c644246000           mov byte ptr [esp + 0x60], 0
// 0089c0cc  e8bff8faff           call 0x84b990
// 0089c0d1  8d4c241c             lea ecx, [esp + 0x1c]
// 0089c0d5  c7442460ffffffff     mov dword ptr [esp + 0x60], 0xffffffff
// 0089c0dd  c744241c18229a00     mov dword ptr [esp + 0x1c], 0x9a2218
// 0089c0e5  e84631b7ff           call 0x40f230
// 0089c0ea  8b442424             mov eax, dword ptr [esp + 0x24]
// 0089c0ee  40                   inc eax
// 0089c0ef  eb40                 jmp 0x89c131
// 0089c0f1  83ec08               sub esp, 8
// 0089c0f4  8bc4                 mov eax, esp
// 0089c0f6  8bce                 mov ecx, esi
// 0089c0f8  89642474             mov dword ptr [esp + 0x74], esp
// 0089c0fc  c70000000000         mov dword ptr [eax], 0
// 0089c102  c7400400000000       mov dword ptr [eax + 4], 0
// 0089c109  e832d0f6ff           call 0x809140
// 0089c10e  50                   push eax
// 0089c10f  83ec08               sub esp, 8
// 0089c112  8bc4                 mov eax, esp
// 0089c114  89a42480000000       mov dword ptr [esp + 0x80], esp
// 0089c11b  53                   push ebx
// 0089c11c  8bce                 mov ecx, esi
// 0089c11e  8938                 mov dword ptr [eax], edi
// 0089c120  896804               mov dword ptr [eax + 4], ebp
// 0089c123  e8884df7ff           call 0x810eb0
// 0089c128  8b442424             mov eax, dword ptr [esp + 0x24]
// 0089c12c  40                   inc eax
// 0089c12d  eb02                 jmp 0x89c131
// 0089c12f  33c0                 xor eax, eax
// 0089c131  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0089c135  64890d00000000       mov dword ptr fs:[0], ecx
// 0089c13c  59                   pop ecx
// 0089c13d  5f                   pop edi
// 0089c13e  5e                   pop esi
// 0089c13f  5d                   pop ebp
// 0089c140  5b                   pop ebx
// 0089c141  83c450               add esp, 0x50
// 0089c144  c22c00               ret 0x2c
// copied from an identical function in another client (function ?DrawColumnIcon@CXTPReportPaintManager@@UAEHPAVCDC@@PAVCXTPReportColumn@@VCRect@@2H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportPaintManager.cpp