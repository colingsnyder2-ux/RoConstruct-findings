// roc 2009-12 00815470  unit: CXTPCommandBars  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00815470
//
// 00815470  83ec1c               sub esp, 0x1c
// 00815473  53                   push ebx
// 00815474  55                   push ebp
// 00815475  56                   push esi
// 00815476  57                   push edi
// 00815477  8bf9                 mov edi, ecx
// 00815479  8b0d3caeb900         mov ecx, dword ptr [0xb9ae3c]
// 0081547f  e8deedfdff           call 0x7f4262
// 00815484  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00815488  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0081548c  8bf0                 mov esi, eax
// 0081548e  33c0                 xor eax, eax
// 00815490  89be04010000         mov dword ptr [esi + 0x104], edi
// 00815496  8b97a0000000         mov edx, dword ptr [edi + 0xa0]
// 0081549c  89442410             mov dword ptr [esp + 0x10], eax
// 008154a0  8944241c             mov dword ptr [esp + 0x1c], eax
// 008154a4  89442420             mov dword ptr [esp + 0x20], eax
// 008154a8  89442424             mov dword ptr [esp + 0x24], eax
// 008154ac  89442428             mov dword ptr [esp + 0x28], eax
// 008154b0  8d4c2410             lea ecx, [esp + 0x10]
// 008154b4  51                   push ecx
// 008154b5  89442418             mov dword ptr [esp + 0x18], eax
// 008154b9  8944241c             mov dword ptr [esp + 0x1c], eax
// 008154bd  8b442438             mov eax, dword ptr [esp + 0x38]
// 008154c1  6a00                 push 0
// 008154c3  c744242401000000     mov dword ptr [esp + 0x24], 1
// 008154cb  895c2428             mov dword ptr [esp + 0x28], ebx
// 008154cf  896c242c             mov dword ptr [esp + 0x2c], ebp
// 008154d3  89742418             mov dword ptr [esp + 0x18], esi
// 008154d7  89442430             mov dword ptr [esp + 0x30], eax
// 008154db  8b4220               mov eax, dword ptr [edx + 0x20]
// 008154de  6861280000           push 0x2861
// 008154e3  50                   push eax
// 008154e4  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008154ea  55                   push ebp
// 008154eb  8d8ef4000000         lea ecx, [esi + 0xf4]
// 008154f1  ff155cde9800         call dword ptr [0x98de5c]
// 008154f7  8b16                 mov edx, dword ptr [esi]
// 008154f9  8b926c010000         mov edx, dword ptr [edx + 0x16c]
// 008154ff  8bc3                 mov eax, ebx
// 00815501  f7d8                 neg eax
// 00815503  1bc0                 sbb eax, eax
// 00815505  83e004               and eax, 4
// 00815508  50                   push eax
// 00815509  8bce                 mov ecx, esi
// 0081550b  ffd2                 call edx
// 0081550d  85c0                 test eax, eax
// 0081550f  7517                 jne 0x815528
// 00815511  8b06                 mov eax, dword ptr [esi]
// 00815513  8b5004               mov edx, dword ptr [eax + 4]
// 00815516  6a01                 push 1
// 00815518  8bce                 mov ecx, esi
// 0081551a  ffd2                 call edx
// 0081551c  5f                   pop edi
// 0081551d  5e                   pop esi
// 0081551e  5d                   pop ebp
// 0081551f  33c0                 xor eax, eax
// 00815521  5b                   pop ebx
// 00815522  83c41c               add esp, 0x1c
// 00815525  c20c00               ret 0xc
// 00815528  8b8784000000         mov eax, dword ptr [edi + 0x84]
// 0081552e  8d4f7c               lea ecx, [edi + 0x7c]
// 00815531  56                   push esi
// 00815532  50                   push eax
// 00815533  e838570500           call 0x86ac70
// 00815538  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0081553c  898ed8000000         mov dword ptr [esi + 0xd8], ecx
// 00815542  c7868801000000000000 mov dword ptr [esi + 0x188], 0
// 0081554c  899e8c010000         mov dword ptr [esi + 0x18c], ebx
// 00815552  85db                 test ebx, ebx
// 00815554  7508                 jne 0x81555e
// 00815556  53                   push ebx
// 00815557  8bcf                 mov ecx, edi
// 00815559  e842f4ffff           call 0x8149a0
// 0081555e  8b17                 mov edx, dword ptr [edi]
// 00815560  8b4278               mov eax, dword ptr [edx + 0x78]
// 00815563  56                   push esi
// 00815564  8bcf                 mov ecx, edi
// 00815566  ffd0                 call eax
// 00815568  5f                   pop edi
// 00815569  8bc6                 mov eax, esi
// 0081556b  5e                   pop esi
// 0081556c  5d                   pop ebp
// 0081556d  5b                   pop ebx
// 0081556e  83c41c               add esp, 0x1c
// 00815571  c20c00               ret 0xc
// copied from an identical function in another client (function ?AddCustomBar@CXTPCommandBars@@MAEPAVCXTPToolBar@@PBDIH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp