// roc 2009-12 008a2540  unit: CXTPReportInplaceList  size: 294 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a2540
//
// 008a2540  6aff                 push -1
// 008a2542  6838239600           push 0x962338
// 008a2547  64a100000000         mov eax, dword ptr fs:[0]
// 008a254d  50                   push eax
// 008a254e  83ec24               sub esp, 0x24
// 008a2551  53                   push ebx
// 008a2552  56                   push esi
// 008a2553  57                   push edi
// 008a2554  a10052b600           mov eax, dword ptr [0xb65200]
// 008a2559  33c4                 xor eax, esp
// 008a255b  50                   push eax
// 008a255c  8d442434             lea eax, [esp + 0x34]
// 008a2560  64a300000000         mov dword ptr fs:[0], eax
// 008a2566  8bf1                 mov esi, ecx
// 008a2568  8b7e58               mov edi, dword ptr [esi + 0x58]
// 008a256b  85ff                 test edi, edi
// 008a256d  0f84e0000000         je 0x8a2653
// 008a2573  8b4620               mov eax, dword ptr [esi + 0x20]
// 008a2576  8b1dc4cb9800         mov ebx, dword ptr [0x98cbc4]
// 008a257c  6a00                 push 0
// 008a257e  6a00                 push 0
// 008a2580  6888010000           push 0x188
// 008a2585  50                   push eax
// 008a2586  ffd3                 call ebx
// 008a2588  83f8ff               cmp eax, -1
// 008a258b  0f84bb000000         je 0x8a264c
// 008a2591  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a2594  6a00                 push 0
// 008a2596  50                   push eax
// 008a2597  6899010000           push 0x199
// 008a259c  51                   push ecx
// 008a259d  c7868000000001000000 mov dword ptr [esi + 0x80], 1
// 008a25a7  ffd3                 call ebx
// 008a25a9  8b5658               mov edx, dword ptr [esi + 0x58]
// 008a25ac  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 008a25af  8bd8                 mov ebx, eax
// 008a25b1  8b465c               mov eax, dword ptr [esi + 0x5c]
// 008a25b4  89542414             mov dword ptr [esp + 0x14], edx
// 008a25b8  8b5664               mov edx, dword ptr [esi + 0x64]
// 008a25bb  89442418             mov dword ptr [esp + 0x18], eax
// 008a25bf  8b4668               mov eax, dword ptr [esi + 0x68]
// 008a25c2  894c241c             mov dword ptr [esp + 0x1c], ecx
// 008a25c6  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 008a25c9  89542420             mov dword ptr [esp + 0x20], edx
// 008a25cd  8b5670               mov edx, dword ptr [esi + 0x70]
// 008a25d0  89442424             mov dword ptr [esp + 0x24], eax
// 008a25d4  8b4674               mov eax, dword ptr [esi + 0x74]
// 008a25d7  c7442410ec479f00     mov dword ptr [esp + 0x10], 0x9f47ec
// 008a25df  894c2428             mov dword ptr [esp + 0x28], ecx
// 008a25e3  8954242c             mov dword ptr [esp + 0x2c], edx
// 008a25e7  89442430             mov dword ptr [esp + 0x30], eax
// 008a25eb  8d4c2410             lea ecx, [esp + 0x10]
// 008a25ef  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 008a25f7  e82481f7ff           call 0x81a720
// 008a25fc  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 008a25ff  8b11                 mov edx, dword ptr [ecx]
// 008a2601  8b9234010000         mov edx, dword ptr [edx + 0x134]
// 008a2607  53                   push ebx
// 008a2608  8d442414             lea eax, [esp + 0x14]
// 008a260c  50                   push eax
// 008a260d  ffd2                 call edx
// 008a260f  8bcf                 mov ecx, edi
// 008a2611  e86acef7ff           call 0x81f480
// 008a2616  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008a261a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008a261e  8b542418             mov edx, dword ptr [esp + 0x18]
// 008a2622  6aff                 push -1
// 008a2624  6a00                 push 0
// 008a2626  6ac7                 push -0x39
// 008a2628  50                   push eax
// 008a2629  51                   push ecx
// 008a262a  52                   push edx
// 008a262b  8bcf                 mov ecx, edi
// 008a262d  e8ce0cf8ff           call 0x823300
// 008a2632  8d4c2410             lea ecx, [esp + 0x10]
// 008a2636  e8757af7ff           call 0x81a0b0
// 008a263b  8d4c2410             lea ecx, [esp + 0x10]
// 008a263f  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 008a2647  e8547af7ff           call 0x81a0a0
// 008a264c  8bcf                 mov ecx, edi
// 008a264e  e8af15f5ff           call 0x7f3c02
// 008a2653  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008a2657  64890d00000000       mov dword ptr fs:[0], ecx
// 008a265e  59                   pop ecx
// 008a265f  5f                   pop edi
// 008a2660  5e                   pop esi
// 008a2661  5b                   pop ebx
// 008a2662  83c430               add esp, 0x30
// 008a2665  c3                   ret 
// copied from an identical function in another client (function ?Apply@CXTPReportInplaceList@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportInplaceControls.cpp