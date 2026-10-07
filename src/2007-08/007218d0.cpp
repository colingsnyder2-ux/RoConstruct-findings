// roc 2007-08 007218d0  unit: CXTCaptionButtonTheme  size: 321 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007218d0
//
// 007218d0  83ec14               sub esp, 0x14
// 007218d3  8b01                 mov eax, dword ptr [ecx]
// 007218d5  8b5014               mov edx, dword ptr [eax + 0x14]
// 007218d8  57                   push edi
// 007218d9  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 007218dd  57                   push edi
// 007218de  894c2408             mov dword ptr [esp + 8], ecx
// 007218e2  ffd2                 call edx
// 007218e4  85c0                 test eax, eax
// 007218e6  0f841c010000         je 0x721a08
// 007218ec  53                   push ebx
// 007218ed  55                   push ebp
// 007218ee  56                   push esi
// 007218ef  8b742428             mov esi, dword ptr [esp + 0x28]
// 007218f3  8b4618               mov eax, dword ptr [esi + 0x18]
// 007218f6  50                   push eax
// 007218f7  e8c26a0100           call 0x7383be
// 007218fc  8d4e1c               lea ecx, [esi + 0x1c]
// 007218ff  51                   push ecx
// 00721900  8d542418             lea edx, [esp + 0x18]
// 00721904  52                   push edx
// 00721905  8be8                 mov ebp, eax
// 00721907  ff15e0ed7700         call dword ptr [0x77ede0]
// 0072190d  8b4610               mov eax, dword ptr [esi + 0x10]
// 00721910  8ad8                 mov bl, al
// 00721912  c1e802               shr eax, 2
// 00721915  2401                 and al, 1
// 00721917  8bcf                 mov ecx, edi
// 00721919  80e301               and bl, 1
// 0072191c  8844242c             mov byte ptr [esp + 0x2c], al
// 00721920  be01000000           mov esi, 1
// 00721925  e85631ffff           call 0x714a80
// 0072192a  3c01                 cmp al, 1
// 0072192c  7505                 jne 0x721933
// 0072192e  be05000000           mov esi, 5
// 00721933  83bfa000000000       cmp dword ptr [edi + 0xa0], 0
// 0072193a  750b                 jne 0x721947
// 0072193c  ff1544ec7700         call dword ptr [0x77ec44]
// 00721942  3b4720               cmp eax, dword ptr [edi + 0x20]
// 00721945  7505                 jne 0x72194c
// 00721947  be02000000           mov esi, 2
// 0072194c  84db                 test bl, bl
// 0072194e  7506                 jne 0x721956
// 00721950  837f7c00             cmp dword ptr [edi + 0x7c], 0
// 00721954  7405                 je 0x72195b
// 00721956  be03000000           mov esi, 3
// 0072195b  807c242c00           cmp byte ptr [esp + 0x2c], 0
// 00721960  7405                 je 0x721967
// 00721962  be04000000           mov esi, 4
// 00721967  85ed                 test ebp, ebp
// 00721969  8b7f20               mov edi, dword ptr [edi + 0x20]
// 0072196c  7504                 jne 0x721972
// 0072196e  33db                 xor ebx, ebx
// 00721970  eb03                 jmp 0x721975
// 00721972  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00721975  57                   push edi
// 00721976  ff15f8eb7700         call dword ptr [0x77ebf8]
// 0072197c  50                   push eax
// 0072197d  e83ee8f0ff           call 0x6301c0
// 00721982  8b4020               mov eax, dword ptr [eax + 0x20]
// 00721985  57                   push edi
// 00721986  53                   push ebx
// 00721987  6835010000           push 0x135
// 0072198c  50                   push eax
// 0072198d  ff15d8ec7700         call dword ptr [0x77ecd8]
// 00721993  85c0                 test eax, eax
// 00721995  7427                 je 0x7219be
// 00721997  85ed                 test ebp, ebp
// 00721999  7511                 jne 0x7219ac
// 0072199b  50                   push eax
// 0072199c  8d542418             lea edx, [esp + 0x18]
// 007219a0  33c9                 xor ecx, ecx
// 007219a2  52                   push edx
// 007219a3  51                   push ecx
// 007219a4  ff1574ec7700         call dword ptr [0x77ec74]
// 007219aa  eb2d                 jmp 0x7219d9
// 007219ac  8b4d04               mov ecx, dword ptr [ebp + 4]
// 007219af  50                   push eax
// 007219b0  8d542418             lea edx, [esp + 0x18]
// 007219b4  52                   push edx
// 007219b5  51                   push ecx
// 007219b6  ff1574ec7700         call dword ptr [0x77ec74]
// 007219bc  eb1b                 jmp 0x7219d9
// 007219be  e8ad75f4ff           call 0x668f70
// 007219c3  6a0f                 push 0xf
// 007219c5  8bc8                 mov ecx, eax
// 007219c7  e8a46df4ff           call 0x668770
// 007219cc  50                   push eax
// 007219cd  8d442418             lea eax, [esp + 0x18]
// 007219d1  50                   push eax
// 007219d2  8bcd                 mov ecx, ebp
// 007219d4  e8d7eef0ff           call 0x6308b0
// 007219d9  85ed                 test ebp, ebp
// 007219db  7403                 je 0x7219e0
// 007219dd  8b6d04               mov ebp, dword ptr [ebp + 4]
// 007219e0  6a00                 push 0
// 007219e2  8d4c2418             lea ecx, [esp + 0x18]
// 007219e6  51                   push ecx
// 007219e7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007219eb  56                   push esi
// 007219ec  6a01                 push 1
// 007219ee  55                   push ebp
// 007219ef  83c174               add ecx, 0x74
// 007219f2  e899cef7ff           call 0x69e890
// 007219f7  5e                   pop esi
// 007219f8  f7d8                 neg eax
// 007219fa  5d                   pop ebp
// 007219fb  1bc0                 sbb eax, eax
// 007219fd  5b                   pop ebx
// 007219fe  83c001               add eax, 1
// 00721a01  5f                   pop edi
// 00721a02  83c414               add esp, 0x14
// 00721a05  c20800               ret 8
// 00721a08  33c0                 xor eax, eax
// 00721a0a  5f                   pop edi
// 00721a0b  83c414               add esp, 0x14
// 00721a0e  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Controls\XTButtonTheme.cpp (function ?DrawWinThemeBackground@CXTButtonTheme@@MAEHPAUtagDRAWITEMSTRUCT@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTButtonTheme.cpp
