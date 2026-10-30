// roc 2009-12 0081bc10  unit: CInstanceRecord::CNameItem  size: 455 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081bc10
//
// 0081bc10  83ec4c               sub esp, 0x4c
// 0081bc13  56                   push esi
// 0081bc14  8b742454             mov esi, dword ptr [esp + 0x54]
// 0081bc18  57                   push edi
// 0081bc19  8bf9                 mov edi, ecx
// 0081bc1b  897c2408             mov dword ptr [esp + 8], edi
// 0081bc1f  85f6                 test esi, esi
// 0081bc21  0f84a8010000         je 0x81bdcf
// 0081bc27  8b4604               mov eax, dword ptr [esi + 4]
// 0081bc2a  8b17                 mov edx, dword ptr [edi]
// 0081bc2c  89442458             mov dword ptr [esp + 0x58], eax
// 0081bc30  8b8024020000         mov eax, dword ptr [eax + 0x224]
// 0081bc36  8944240c             mov dword ptr [esp + 0xc], eax
// 0081bc3a  8b82ac000000         mov eax, dword ptr [edx + 0xac]
// 0081bc40  ffd0                 call eax
// 0081bc42  85c0                 test eax, eax
// 0081bc44  0f8485010000         je 0x81bdcf
// 0081bc4a  8b17                 mov edx, dword ptr [edi]
// 0081bc4c  8b8240010000         mov eax, dword ptr [edx + 0x140]
// 0081bc52  56                   push esi
// 0081bc53  8bcf                 mov ecx, edi
// 0081bc55  ffd0                 call eax
// 0081bc57  85c0                 test eax, eax
// 0081bc59  0f8470010000         je 0x81bdcf
// 0081bc5f  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0081bc62  53                   push ebx
// 0081bc63  55                   push ebp
// 0081bc64  51                   push ecx
// 0081bc65  8bcf                 mov ecx, edi
// 0081bc67  e844f8ffff           call 0x81b4b0
// 0081bc6c  8b5614               mov edx, dword ptr [esi + 0x14]
// 0081bc6f  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0081bc72  8be8                 mov ebp, eax
// 0081bc74  8b4618               mov eax, dword ptr [esi + 0x18]
// 0081bc77  8944241c             mov dword ptr [esp + 0x1c], eax
// 0081bc7b  8b4604               mov eax, dword ptr [esi + 4]
// 0081bc7e  89542418             mov dword ptr [esp + 0x18], edx
// 0081bc82  8b5620               mov edx, dword ptr [esi + 0x20]
// 0081bc85  894c2420             mov dword ptr [esp + 0x20], ecx
// 0081bc89  50                   push eax
// 0081bc8a  8d4c242c             lea ecx, [esp + 0x2c]
// 0081bc8e  89542428             mov dword ptr [esp + 0x28], edx
// 0081bc92  e839f60200           call 0x84b2d0
// 0081bc97  8b5534               mov edx, dword ptr [ebp + 0x34]
// 0081bc9a  33db                 xor ebx, ebx
// 0081bc9c  33ff                 xor edi, edi
// 0081bc9e  33c0                 xor eax, eax
// 0081bca0  85d2                 test edx, edx
// 0081bca2  7e2c                 jle 0x81bcd0
// 0081bca4  85c0                 test eax, eax
// 0081bca6  0f8cb5000000         jl 0x81bd61
// 0081bcac  3bc2                 cmp eax, edx
// 0081bcae  0f8dad000000         jge 0x81bd61
// 0081bcb4  8b4d30               mov ecx, dword ptr [ebp + 0x30]
// 0081bcb7  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 0081bcba  83b98400000000       cmp dword ptr [ecx + 0x84], 0
// 0081bcc1  7405                 je 0x81bcc8
// 0081bcc3  03597c               add ebx, dword ptr [ecx + 0x7c]
// 0081bcc6  eb03                 jmp 0x81bccb
// 0081bcc8  03797c               add edi, dword ptr [ecx + 0x7c]
// 0081bccb  40                   inc eax
// 0081bccc  3bc2                 cmp eax, edx
// 0081bcce  7cd4                 jl 0x81bca4
// 0081bcd0  8b442420             mov eax, dword ptr [esp + 0x20]
// 0081bcd4  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0081bcd8  8d1438               lea edx, [eax + edi]
// 0081bcdb  3bd1                 cmp edx, ecx
// 0081bcdd  7e08                 jle 0x81bce7
// 0081bcdf  2bcf                 sub ecx, edi
// 0081bce1  8bc1                 mov eax, ecx
// 0081bce3  89442420             mov dword ptr [esp + 0x20], eax
// 0081bce7  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0081bcea  8b542428             mov edx, dword ptr [esp + 0x28]
// 0081bcee  3bd1                 cmp edx, ecx
// 0081bcf0  7e02                 jle 0x81bcf4
// 0081bcf2  8bca                 mov ecx, edx
// 0081bcf4  8bd0                 mov edx, eax
// 0081bcf6  2bd3                 sub edx, ebx
// 0081bcf8  3bd1                 cmp edx, ecx
// 0081bcfa  7d07                 jge 0x81bd03
// 0081bcfc  8d0419               lea eax, [ecx + ebx]
// 0081bcff  89442420             mov dword ptr [esp + 0x20], eax
// 0081bd03  89442418             mov dword ptr [esp + 0x18], eax
// 0081bd07  8b4534               mov eax, dword ptr [ebp + 0x34]
// 0081bd0a  33ff                 xor edi, edi
// 0081bd0c  85c0                 test eax, eax
// 0081bd0e  7e37                 jle 0x81bd47
// 0081bd10  85ff                 test edi, edi
// 0081bd12  7c4d                 jl 0x81bd61
// 0081bd14  3bf8                 cmp edi, eax
// 0081bd16  7d49                 jge 0x81bd61
// 0081bd18  8b4530               mov eax, dword ptr [ebp + 0x30]
// 0081bd1b  8b1cb8               mov ebx, dword ptr [eax + edi*4]
// 0081bd1e  8d4c2418             lea ecx, [esp + 0x18]
// 0081bd22  51                   push ecx
// 0081bd23  56                   push esi
// 0081bd24  8bcb                 mov ecx, ebx
// 0081bd26  e885610800           call 0x8a1eb0
// 0081bd2b  8b542460             mov edx, dword ptr [esp + 0x60]
// 0081bd2f  8b8a28020000         mov ecx, dword ptr [edx + 0x228]
// 0081bd35  8b4108               mov eax, dword ptr [ecx + 8]
// 0081bd38  53                   push ebx
// 0081bd39  50                   push eax
// 0081bd3a  e831ef0400           call 0x86ac70
// 0081bd3f  8b4534               mov eax, dword ptr [ebp + 0x34]
// 0081bd42  47                   inc edi
// 0081bd43  3bf8                 cmp edi, eax
// 0081bd45  7cc9                 jl 0x81bd10
// 0081bd47  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0081bd4b  41                   inc ecx
// 0081bd4c  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0081bd4f  837d2000             cmp dword ptr [ebp + 0x20], 0
// 0081bd53  7411                 je 0x81bd66
// 0081bd55  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0081bd59  56                   push esi
// 0081bd5a  e8416a0800           call 0x8a27a0
// 0081bd5f  eb20                 jmp 0x81bd81
// 0081bd61  e8a67dfdff           call 0x7f3b0c
// 0081bd66  8b4534               mov eax, dword ptr [ebp + 0x34]
// 0081bd69  85c0                 test eax, eax
// 0081bd6b  7e14                 jle 0x81bd81
// 0081bd6d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0081bd71  8b4530               mov eax, dword ptr [ebp + 0x30]
// 0081bd74  8b11                 mov edx, dword ptr [ecx]
// 0081bd76  8b00                 mov eax, dword ptr [eax]
// 0081bd78  8b923c010000         mov edx, dword ptr [edx + 0x13c]
// 0081bd7e  50                   push eax
// 0081bd7f  ffd2                 call edx
// 0081bd81  8b4e08               mov ecx, dword ptr [esi + 8]
// 0081bd84  8b560c               mov edx, dword ptr [esi + 0xc]
// 0081bd87  33c0                 xor eax, eax
// 0081bd89  89442444             mov dword ptr [esp + 0x44], eax
// 0081bd8d  89442448             mov dword ptr [esp + 0x48], eax
// 0081bd91  8944244c             mov dword ptr [esp + 0x4c], eax
// 0081bd95  89442438             mov dword ptr [esp + 0x38], eax
// 0081bd99  8944243c             mov dword ptr [esp + 0x3c], eax
// 0081bd9d  89442440             mov dword ptr [esp + 0x40], eax
// 0081bda1  89442450             mov dword ptr [esp + 0x50], eax
// 0081bda5  89442454             mov dword ptr [esp + 0x54], eax
// 0081bda9  89442458             mov dword ptr [esp + 0x58], eax
// 0081bdad  8b442410             mov eax, dword ptr [esp + 0x10]
// 0081bdb1  89442448             mov dword ptr [esp + 0x48], eax
// 0081bdb5  8d442438             lea eax, [esp + 0x38]
// 0081bdb9  50                   push eax
// 0081bdba  894c2448             mov dword ptr [esp + 0x48], ecx
// 0081bdbe  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0081bdc2  6ab2                 push -0x4e
// 0081bdc4  89542454             mov dword ptr [esp + 0x54], edx
// 0081bdc8  e8a3740000           call 0x823270
// 0081bdcd  5d                   pop ebp
// 0081bdce  5b                   pop ebx
// 0081bdcf  5f                   pop edi
// 0081bdd0  5e                   pop esi
// 0081bdd1  83c44c               add esp, 0x4c
// 0081bdd4  c20400               ret 4
// copied from an identical function in another client (function ?OnBeginEdit@CXTPReportRecordItem@@MAEXPAUXTP_REPORTRECORDITEM_ARGS@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRecordItem.cpp