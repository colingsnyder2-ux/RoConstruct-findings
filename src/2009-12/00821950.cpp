// roc 2009-12 00821950  unit: CXTPReportControl  size: 482 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00821950
//
// 00821950  6aff                 push -1
// 00821952  68e3b09500           push 0x95b0e3
// 00821957  64a100000000         mov eax, dword ptr fs:[0]
// 0082195d  50                   push eax
// 0082195e  83ec34               sub esp, 0x34
// 00821961  53                   push ebx
// 00821962  55                   push ebp
// 00821963  56                   push esi
// 00821964  57                   push edi
// 00821965  a10052b600           mov eax, dword ptr [0xb65200]
// 0082196a  33c4                 xor eax, esp
// 0082196c  50                   push eax
// 0082196d  8d442448             lea eax, [esp + 0x48]
// 00821971  64a300000000         mov dword ptr fs:[0], eax
// 00821977  8bf1                 mov esi, ecx
// 00821979  8974242c             mov dword ptr [esp + 0x2c], esi
// 0082197d  33db                 xor ebx, ebx
// 0082197f  8d4c2414             lea ecx, [esp + 0x14]
// 00821983  895c2430             mov dword ptr [esp + 0x30], ebx
// 00821987  ff1574de9800         call dword ptr [0x98de74]
// 0082198d  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 00821993  895c2450             mov dword ptr [esp + 0x50], ebx
// 00821997  894c2424             mov dword ptr [esp + 0x24], ecx
// 0082199b  3bcb                 cmp ecx, ebx
// 0082199d  7516                 jne 0x8219b5
// 0082199f  8b742458             mov esi, dword ptr [esp + 0x58]
// 008219a3  6856fd9900           push 0x99fd56
// 008219a8  8bce                 mov ecx, esi
// 008219aa  ff15b8de9800         call dword ptr [0x98deb8]
// 008219b0  e95b010000           jmp 0x821b10
// 008219b5  e846ba0400           call 0x86d400
// 008219ba  8bbe28010000         mov edi, dword ptr [esi + 0x128]
// 008219c0  89442418             mov dword ptr [esp + 0x18], eax
// 008219c4  897c241c             mov dword ptr [esp + 0x1c], edi
// 008219c8  3bfb                 cmp edi, ebx
// 008219ca  0f842f010000         je 0x821aff
// 008219d0  8bcf                 mov ecx, edi
// 008219d2  e869d10000           call 0x82eb40
// 008219d7  85c0                 test eax, eax
// 008219d9  0f8e20010000         jle 0x821aff
// 008219df  8bcf                 mov ecx, edi
// 008219e1  e89ad10000           call 0x82eb80
// 008219e6  89442420             mov dword ptr [esp + 0x20], eax
// 008219ea  3bc3                 cmp eax, ebx
// 008219ec  0f840d010000         je 0x821aff
// 008219f2  bb01000000           mov ebx, 1
// 008219f7  8d442420             lea eax, [esp + 0x20]
// 008219fb  50                   push eax
// 008219fc  8bcf                 mov ecx, edi
// 008219fe  e8add10000           call 0x82ebb0
// 00821a03  85c0                 test eax, eax
// 00821a05  0f84f4000000         je 0x821aff
// 00821a0b  8b10                 mov edx, dword ptr [eax]
// 00821a0d  8bc8                 mov ecx, eax
// 00821a0f  8b4260               mov eax, dword ptr [edx + 0x60]
// 00821a12  ffd0                 call eax
// 00821a14  8be8                 mov ebp, eax
// 00821a16  85ed                 test ebp, ebp
// 00821a18  0f84d6000000         je 0x821af4
// 00821a1e  8d4c2434             lea ecx, [esp + 0x34]
// 00821a22  e89d4c1000           call 0x9266c4
// 00821a27  33ff                 xor edi, edi
// 00821a29  397c2418             cmp dword ptr [esp + 0x18], edi
// 00821a2d  885c2450             mov byte ptr [esp + 0x50], bl
// 00821a31  7e55                 jle 0x821a88
// 00821a33  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00821a37  57                   push edi
// 00821a38  e8c3ba0400           call 0x86d500
// 00821a3d  8bf0                 mov esi, eax
// 00821a3f  56                   push esi
// 00821a40  8bcd                 mov ecx, ebp
// 00821a42  e8f9920000           call 0x82ad40
// 00821a47  85c0                 test eax, eax
// 00821a49  7431                 je 0x821a7c
// 00821a4b  8b10                 mov edx, dword ptr [eax]
// 00821a4d  8b526c               mov edx, dword ptr [edx + 0x6c]
// 00821a50  56                   push esi
// 00821a51  8d4c242c             lea ecx, [esp + 0x2c]
// 00821a55  51                   push ecx
// 00821a56  8bc8                 mov ecx, eax
// 00821a58  ffd2                 call edx
// 00821a5a  50                   push eax
// 00821a5b  8b442440             mov eax, dword ptr [esp + 0x40]
// 00821a5f  50                   push eax
// 00821a60  8d4c243c             lea ecx, [esp + 0x3c]
// 00821a64  c644245802           mov byte ptr [esp + 0x58], 2
// 00821a69  e80e4c1000           call 0x92667c
// 00821a6e  8d4c2428             lea ecx, [esp + 0x28]
// 00821a72  885c2450             mov byte ptr [esp + 0x50], bl
// 00821a76  ff15c0de9800         call dword ptr [0x98dec0]
// 00821a7c  03fb                 add edi, ebx
// 00821a7e  3b7c2418             cmp edi, dword ptr [esp + 0x18]
// 00821a82  7caf                 jl 0x821a33
// 00821a84  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00821a88  8b16                 mov edx, dword ptr [esi]
// 00821a8a  8b92f8010000         mov edx, dword ptr [edx + 0x1f8]
// 00821a90  8d442434             lea eax, [esp + 0x34]
// 00821a94  50                   push eax
// 00821a95  55                   push ebp
// 00821a96  8bce                 mov ecx, esi
// 00821a98  ffd2                 call edx
// 00821a9a  85c0                 test eax, eax
// 00821a9c  7544                 jne 0x821ae2
// 00821a9e  68ccb79a00           push 0x9ab7cc
// 00821aa3  8d442438             lea eax, [esp + 0x38]
// 00821aa7  50                   push eax
// 00821aa8  8d4c2438             lea ecx, [esp + 0x38]
// 00821aac  51                   push ecx
// 00821aad  e88ed8ffff           call 0x81f340
// 00821ab2  83c40c               add esp, 0xc
// 00821ab5  50                   push eax
// 00821ab6  8d4c2418             lea ecx, [esp + 0x18]
// 00821aba  c644245403           mov byte ptr [esp + 0x54], 3
// 00821abf  ff1588d79800         call dword ptr [0x98d788]
// 00821ac5  8d4c2430             lea ecx, [esp + 0x30]
// 00821ac9  885c2450             mov byte ptr [esp + 0x50], bl
// 00821acd  ff15c0de9800         call dword ptr [0x98dec0]
// 00821ad3  6828fd9900           push 0x99fd28
// 00821ad8  8d4c2418             lea ecx, [esp + 0x18]
// 00821adc  ff1574d29800         call dword ptr [0x98d274]
// 00821ae2  8d4c2434             lea ecx, [esp + 0x34]
// 00821ae6  c644245000           mov byte ptr [esp + 0x50], 0
// 00821aeb  e8ce4b1000           call 0x9266be
// 00821af0  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00821af4  837c242000           cmp dword ptr [esp + 0x20], 0
// 00821af9  0f85f8feffff         jne 0x8219f7
// 00821aff  8b742458             mov esi, dword ptr [esp + 0x58]
// 00821b03  8d542414             lea edx, [esp + 0x14]
// 00821b07  52                   push edx
// 00821b08  8bce                 mov ecx, esi
// 00821b0a  ff1594de9800         call dword ptr [0x98de94]
// 00821b10  8d4c2414             lea ecx, [esp + 0x14]
// 00821b14  ff15c0de9800         call dword ptr [0x98dec0]
// 00821b1a  8bc6                 mov eax, esi
// 00821b1c  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00821b20  64890d00000000       mov dword ptr fs:[0], ecx
// 00821b27  59                   pop ecx
// 00821b28  5f                   pop edi
// 00821b29  5e                   pop esi
// 00821b2a  5d                   pop ebp
// 00821b2b  5b                   pop ebx
// 00821b2c  83c440               add esp, 0x40
// 00821b2f  c20400               ret 4
// copied from an identical function in another client (function ?_GetSelectedRowsVisibleColsText@CXTPReportControl@@MAE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp