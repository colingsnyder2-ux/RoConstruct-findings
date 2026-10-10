// roc 2008-06 007534f0  unit: CXTPReportNavigator  size: 250 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007534f0
//
// 007534f0  56                   push esi
// 007534f1  8bf1                 mov esi, ecx
// 007534f3  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007534f6  85c9                 test ecx, ecx
// 007534f8  0f84e8000000         je 0x7535e6
// 007534fe  57                   push edi
// 007534ff  e8ac7bf7ff           call 0x6cb0b0
// 00753504  837e2400             cmp dword ptr [esi + 0x24], 0
// 00753508  8bf8                 mov edi, eax
// 0075350a  8b4620               mov eax, dword ptr [esi + 0x20]
// 0075350d  742d                 je 0x75353c
// 0075350f  8b542410             mov edx, dword ptr [esp + 0x10]
// 00753513  8b88f8000000         mov ecx, dword ptr [eax + 0xf8]
// 00753519  8b80d4010000         mov eax, dword ptr [eax + 0x1d4]
// 0075351f  52                   push edx
// 00753520  8b542410             mov edx, dword ptr [esp + 0x10]
// 00753524  52                   push edx
// 00753525  8b11                 mov edx, dword ptr [ecx]
// 00753527  8b5274               mov edx, dword ptr [edx + 0x74]
// 0075352a  50                   push eax
// 0075352b  57                   push edi
// 0075352c  ffd2                 call edx
// 0075352e  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00753531  50                   push eax
// 00753532  e879f0f7ff           call 0x6d25b0
// 00753537  5f                   pop edi
// 00753538  5e                   pop esi
// 00753539  c20800               ret 8
// 0075353c  837e2800             cmp dword ptr [esi + 0x28], 0
// 00753540  743f                 je 0x753581
// 00753542  8b88fc000000         mov ecx, dword ptr [eax + 0xfc]
// 00753548  8b80d4010000         mov eax, dword ptr [eax + 0x1d4]
// 0075354e  8b11                 mov edx, dword ptr [ecx]
// 00753550  8b5274               mov edx, dword ptr [edx + 0x74]
// 00753553  50                   push eax
// 00753554  57                   push edi
// 00753555  ffd2                 call edx
// 00753557  3bf8                 cmp edi, eax
// 00753559  750e                 jne 0x753569
// 0075355b  6a00                 push 0
// 0075355d  8bce                 mov ecx, esi
// 0075355f  e81cfdffff           call 0x753280
// 00753564  5f                   pop edi
// 00753565  5e                   pop esi
// 00753566  c20800               ret 8
// 00753569  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0075356d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00753571  51                   push ecx
// 00753572  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00753575  52                   push edx
// 00753576  50                   push eax
// 00753577  e834f0f7ff           call 0x6d25b0
// 0075357c  5f                   pop edi
// 0075357d  5e                   pop esi
// 0075357e  c20800               ret 8
// 00753581  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 00753587  8b80d4010000         mov eax, dword ptr [eax + 0x1d4]
// 0075358d  8b11                 mov edx, dword ptr [ecx]
// 0075358f  8b5274               mov edx, dword ptr [edx + 0x74]
// 00753592  50                   push eax
// 00753593  57                   push edi
// 00753594  ffd2                 call edx
// 00753596  8bf8                 mov edi, eax
// 00753598  85ff                 test edi, edi
// 0075359a  7449                 je 0x7535e5
// 0075359c  8b07                 mov eax, dword ptr [edi]
// 0075359e  8b506c               mov edx, dword ptr [eax + 0x6c]
// 007535a1  53                   push ebx
// 007535a2  8b5e20               mov ebx, dword ptr [esi + 0x20]
// 007535a5  8bcf                 mov ecx, edi
// 007535a7  ffd2                 call edx
// 007535a9  39831c010000         cmp dword ptr [ebx + 0x11c], eax
// 007535af  7521                 jne 0x7535d2
// 007535b1  83bbf401000000       cmp dword ptr [ebx + 0x1f4], 0
// 007535b8  742a                 je 0x7535e4
// 007535ba  83bb0802000000       cmp dword ptr [ebx + 0x208], 0
// 007535c1  7421                 je 0x7535e4
// 007535c3  6a01                 push 1
// 007535c5  8bce                 mov ecx, esi
// 007535c7  e8b4fcffff           call 0x753280
// 007535cc  5b                   pop ebx
// 007535cd  5f                   pop edi
// 007535ce  5e                   pop esi
// 007535cf  c20800               ret 8
// 007535d2  8b442414             mov eax, dword ptr [esp + 0x14]
// 007535d6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007535da  50                   push eax
// 007535db  51                   push ecx
// 007535dc  57                   push edi
// 007535dd  8bcb                 mov ecx, ebx
// 007535df  e8cceff7ff           call 0x6d25b0
// 007535e4  5b                   pop ebx
// 007535e5  5f                   pop edi
// 007535e6  5e                   pop esi
// 007535e7  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportNavigator.cpp (function ?MoveUp@CXTPReportNavigator@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportNavigator.cpp
