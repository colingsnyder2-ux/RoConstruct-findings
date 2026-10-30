// roc 2009-12 0082cc70  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082cc70
//
// 0082cc70  83ec08               sub esp, 8
// 0082cc73  53                   push ebx
// 0082cc74  55                   push ebp
// 0082cc75  56                   push esi
// 0082cc76  57                   push edi
// 0082cc77  8bd9                 mov ebx, ecx
// 0082cc79  e8a2ffffff           call 0x82cc20
// 0082cc7e  3944241c             cmp dword ptr [esp + 0x1c], eax
// 0082cc82  7e09                 jle 0x82cc8d
// 0082cc84  e897ffffff           call 0x82cc20
// 0082cc89  8944241c             mov dword ptr [esp + 0x1c], eax
// 0082cc8d  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0082cc91  8bcd                 mov ecx, ebp
// 0082cc93  e888ffffff           call 0x82cc20
// 0082cc98  33ff                 xor edi, edi
// 0082cc9a  89442410             mov dword ptr [esp + 0x10], eax
// 0082cc9e  897c2414             mov dword ptr [esp + 0x14], edi
// 0082cca2  85c0                 test eax, eax
// 0082cca4  7e77                 jle 0x82cd1d
// 0082cca6  57                   push edi
// 0082cca7  8bcd                 mov ecx, ebp
// 0082cca9  e882ffffff           call 0x82cc30
// 0082ccae  8bf0                 mov esi, eax
// 0082ccb0  8bce                 mov ecx, esi
// 0082ccb2  e83918ffff           call 0x81e4f0
// 0082ccb7  8be8                 mov ebp, eax
// 0082ccb9  395e50               cmp dword ptr [esi + 0x50], ebx
// 0082ccbc  754c                 jne 0x82cd0a
// 0082ccbe  6a01                 push 1
// 0082ccc0  55                   push ebp
// 0082ccc1  8d4b20               lea ecx, [ebx + 0x20]
// 0082ccc4  e8b7050000           call 0x82d280
// 0082ccc9  3b6c241c             cmp ebp, dword ptr [esp + 0x1c]
// 0082cccd  7d04                 jge 0x82ccd3
// 0082cccf  ff4c241c             dec dword ptr [esp + 0x1c]
// 0082ccd3  47                   inc edi
// 0082ccd4  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 0082ccd8  7d2c                 jge 0x82cd06
// 0082ccda  8d9b00000000         lea ebx, [ebx]
// 0082cce0  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0082cce4  57                   push edi
// 0082cce5  e846ffffff           call 0x82cc30
// 0082ccea  8bf0                 mov esi, eax
// 0082ccec  395e50               cmp dword ptr [esi + 0x50], ebx
// 0082ccef  750e                 jne 0x82ccff
// 0082ccf1  8bce                 mov ecx, esi
// 0082ccf3  e8f817ffff           call 0x81e4f0
// 0082ccf8  3bc5                 cmp eax, ebp
// 0082ccfa  7e03                 jle 0x82ccff
// 0082ccfc  ff4e4c               dec dword ptr [esi + 0x4c]
// 0082ccff  47                   inc edi
// 0082cd00  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 0082cd04  7cda                 jl 0x82cce0
// 0082cd06  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0082cd0a  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0082cd0e  47                   inc edi
// 0082cd0f  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 0082cd13  897c2414             mov dword ptr [esp + 0x14], edi
// 0082cd17  7c8d                 jl 0x82cca6
// 0082cd19  8b442410             mov eax, dword ptr [esp + 0x10]
// 0082cd1d  33f6                 xor esi, esi
// 0082cd1f  85c0                 test eax, eax
// 0082cd21  7e29                 jle 0x82cd4c
// 0082cd23  56                   push esi
// 0082cd24  8bcd                 mov ecx, ebp
// 0082cd26  e805ffffff           call 0x82cc30
// 0082cd2b  395850               cmp dword ptr [eax + 0x50], ebx
// 0082cd2e  7515                 jne 0x82cd45
// 0082cd30  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0082cd34  6a01                 push 1
// 0082cd36  50                   push eax
// 0082cd37  57                   push edi
// 0082cd38  8d4b20               lea ecx, [ebx + 0x20]
// 0082cd3b  e8000e0c00           call 0x8edb40
// 0082cd40  47                   inc edi
// 0082cd41  897c241c             mov dword ptr [esp + 0x1c], edi
// 0082cd45  46                   inc esi
// 0082cd46  3b742410             cmp esi, dword ptr [esp + 0x10]
// 0082cd4a  7cd7                 jl 0x82cd23
// 0082cd4c  8b03                 mov eax, dword ptr [ebx]
// 0082cd4e  8b5068               mov edx, dword ptr [eax + 0x68]
// 0082cd51  6a00                 push 0
// 0082cd53  8bcb                 mov ecx, ebx
// 0082cd55  ffd2                 call edx
// 0082cd57  5f                   pop edi
// 0082cd58  5e                   pop esi
// 0082cd59  5d                   pop ebp
// 0082cd5a  5b                   pop ebx
// 0082cd5b  83c408               add esp, 8
// 0082cd5e  c20800               ret 8
// copied from an identical function in another client (function ?Move@CXTPReportRecords@@QAEXHPAV1@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportRecords.cpp