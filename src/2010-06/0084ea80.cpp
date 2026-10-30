// roc 2010-06 0084ea80  unit: CXTPReportPaintManager  size: 289 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0084ea80
//
// 0084ea80  83ec08               sub esp, 8
// 0084ea83  56                   push esi
// 0084ea84  8b742410             mov esi, dword ptr [esp + 0x10]
// 0084ea88  85f6                 test esi, esi
// 0084ea8a  0f840a010000         je 0x84eb9a
// 0084ea90  8b06                 mov eax, dword ptr [esi]
// 0084ea92  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 0084ea98  8bce                 mov ecx, esi
// 0084ea9a  ffd2                 call edx
// 0084ea9c  33c9                 xor ecx, ecx
// 0084ea9e  89442408             mov dword ptr [esp + 8], eax
// 0084eaa2  894c2404             mov dword ptr [esp + 4], ecx
// 0084eaa6  85c0                 test eax, eax
// 0084eaa8  0f8eec000000         jle 0x84eb9a
// 0084eaae  53                   push ebx
// 0084eaaf  55                   push ebp
// 0084eab0  57                   push edi
// 0084eab1  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0084eab5  8b06                 mov eax, dword ptr [esi]
// 0084eab7  8b90bc000000         mov edx, dword ptr [eax + 0xbc]
// 0084eabd  51                   push ecx
// 0084eabe  8bce                 mov ecx, esi
// 0084eac0  ffd2                 call edx
// 0084eac2  8bd8                 mov ebx, eax
// 0084eac4  85db                 test ebx, ebx
// 0084eac6  0f84b8000000         je 0x84eb84
// 0084eacc  8b7330               mov esi, dword ptr [ebx + 0x30]
// 0084eacf  8bcf                 mov ecx, edi
// 0084ead1  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0084ead7  48                   dec eax
// 0084ead8  3bf0                 cmp esi, eax
// 0084eada  7d04                 jge 0x84eae0
// 0084eadc  8bc6                 mov eax, esi
// 0084eade  eb09                 jmp 0x84eae9
// 0084eae0  8bcf                 mov ecx, edi
// 0084eae2  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0084eae8  48                   dec eax
// 0084eae9  85c0                 test eax, eax
// 0084eaeb  7d04                 jge 0x84eaf1
// 0084eaed  33f6                 xor esi, esi
// 0084eaef  eb1b                 jmp 0x84eb0c
// 0084eaf1  8b7330               mov esi, dword ptr [ebx + 0x30]
// 0084eaf4  8bcf                 mov ecx, edi
// 0084eaf6  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0084eafc  48                   dec eax
// 0084eafd  3bf0                 cmp esi, eax
// 0084eaff  7c0b                 jl 0x84eb0c
// 0084eb01  8bcf                 mov ecx, edi
// 0084eb03  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0084eb09  8bf0                 mov esi, eax
// 0084eb0b  4e                   dec esi
// 0084eb0c  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 0084eb0f  8b4334               mov eax, dword ptr [ebx + 0x34]
// 0084eb12  8d2c08               lea ebp, [eax + ecx]
// 0084eb15  8bcf                 mov ecx, edi
// 0084eb17  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0084eb1d  3be8                 cmp ebp, eax
// 0084eb1f  7d04                 jge 0x84eb25
// 0084eb21  8bc5                 mov eax, ebp
// 0084eb23  eb08                 jmp 0x84eb2d
// 0084eb25  8bcf                 mov ecx, edi
// 0084eb27  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0084eb2d  85c0                 test eax, eax
// 0084eb2f  7d04                 jge 0x84eb35
// 0084eb31  33db                 xor ebx, ebx
// 0084eb33  eb1f                 jmp 0x84eb54
// 0084eb35  8b5334               mov edx, dword ptr [ebx + 0x34]
// 0084eb38  8b4330               mov eax, dword ptr [ebx + 0x30]
// 0084eb3b  8bcf                 mov ecx, edi
// 0084eb3d  8d1c02               lea ebx, [edx + eax]
// 0084eb40  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0084eb46  3bd8                 cmp ebx, eax
// 0084eb48  7c0a                 jl 0x84eb54
// 0084eb4a  8bcf                 mov ecx, edi
// 0084eb4c  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0084eb52  8bd8                 mov ebx, eax
// 0084eb54  3bf3                 cmp esi, ebx
// 0084eb56  7d28                 jge 0x84eb80
// 0084eb58  eb06                 jmp 0x84eb60
// 0084eb5a  8d9b00000000         lea ebx, [ebx]
// 0084eb60  56                   push esi
// 0084eb61  8bcf                 mov ecx, edi
// 0084eb63  ff15bcc79e00         call dword ptr [0x9ec7bc]
// 0084eb69  3c20                 cmp al, 0x20
// 0084eb6b  750e                 jne 0x84eb7b
// 0084eb6d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0084eb71  51                   push ecx
// 0084eb72  56                   push esi
// 0084eb73  8bcf                 mov ecx, edi
// 0084eb75  ff1540cc9e00         call dword ptr [0x9ecc40]
// 0084eb7b  46                   inc esi
// 0084eb7c  3bf3                 cmp esi, ebx
// 0084eb7e  7ce0                 jl 0x84eb60
// 0084eb80  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0084eb84  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0084eb88  41                   inc ecx
// 0084eb89  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 0084eb8d  894c2410             mov dword ptr [esp + 0x10], ecx
// 0084eb91  0f8c1effffff         jl 0x84eab5
// 0084eb97  5f                   pop edi
// 0084eb98  5d                   pop ebp
// 0084eb99  5b                   pop ebx
// 0084eb9a  5e                   pop esi
// 0084eb9b  83c408               add esp, 8
// 0084eb9e  c20c00               ret 0xc
// copied from an identical function in another client (function ?ReplaceInHyperLinks@CXTPReportPaintManager@@UAEXPAVCXTPReportRecordItem@@AAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportPaintManager.cpp