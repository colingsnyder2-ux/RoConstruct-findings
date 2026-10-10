// roc 2008-06 007a28f0  unit: CXTButtonTheme  size: 561 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a28f0
//
// 007a28f0  83ec18               sub esp, 0x18
// 007a28f3  53                   push ebx
// 007a28f4  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 007a28f8  8b4318               mov eax, dword ptr [ebx + 0x18]
// 007a28fb  55                   push ebp
// 007a28fc  56                   push esi
// 007a28fd  57                   push edi
// 007a28fe  50                   push eax
// 007a28ff  8bf1                 mov esi, ecx
// 007a2901  e822970100           call 0x7bc028
// 007a2906  8d4b1c               lea ecx, [ebx + 0x1c]
// 007a2909  51                   push ecx
// 007a290a  8d54241c             lea edx, [esp + 0x1c]
// 007a290e  52                   push edx
// 007a290f  89442434             mov dword ptr [esp + 0x34], eax
// 007a2913  ff15702d8000         call dword ptr [0x802d70]
// 007a2919  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 007a291d  837f7c00             cmp dword ptr [edi + 0x7c], 0
// 007a2921  750a                 jne 0x7a292d
// 007a2923  f6431001             test byte ptr [ebx + 0x10], 1
// 007a2927  7504                 jne 0x7a292d
// 007a2929  33ed                 xor ebp, ebp
// 007a292b  eb05                 jmp 0x7a2932
// 007a292d  bd01000000           mov ebp, 1
// 007a2932  57                   push edi
// 007a2933  8d4c2414             lea ecx, [esp + 0x14]
// 007a2937  e83451f5ff           call 0x6f7a70
// 007a293c  8b4628               mov eax, dword ptr [esi + 0x28]
// 007a293f  83f8ff               cmp eax, -1
// 007a2942  7503                 jne 0x7a2947
// 007a2944  8b4624               mov eax, dword ptr [esi + 0x24]
// 007a2947  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007a294b  50                   push eax
// 007a294c  8d44241c             lea eax, [esp + 0x1c]
// 007a2950  50                   push eax
// 007a2951  e808eaefff           call 0x6a135e
// 007a2956  8b17                 mov edx, dword ptr [edi]
// 007a2958  8b8268010000         mov eax, dword ptr [edx + 0x168]
// 007a295e  8bcf                 mov ecx, edi
// 007a2960  ffd0                 call eax
// 007a2962  8bd8                 mov ebx, eax
// 007a2964  f6c320               test bl, 0x20
// 007a2967  7432                 je 0x7a299b
// 007a2969  837f7c00             cmp dword ptr [edi + 0x7c], 0
// 007a296d  7419                 je 0x7a2988
// 007a296f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007a2973  8b542410             mov edx, dword ptr [esp + 0x10]
// 007a2977  51                   push ecx
// 007a2978  52                   push edx
// 007a2979  8d442420             lea eax, [esp + 0x20]
// 007a297d  50                   push eax
// 007a297e  ff152c2d8000         call dword ptr [0x802d2c]
// 007a2984  85c0                 test eax, eax
// 007a2986  7404                 je 0x7a298c
// 007a2988  85ed                 test ebp, ebp
// 007a298a  740f                 je 0x7a299b
// 007a298c  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 007a2990  8d4c2418             lea ecx, [esp + 0x18]
// 007a2994  51                   push ecx
// 007a2995  52                   push edx
// 007a2996  e81520f2ff           call 0x6c49b0
// 007a299b  f6c301               test bl, 1
// 007a299e  7458                 je 0x7a29f8
// 007a29a0  83bfa000000000       cmp dword ptr [edi + 0xa0], 0
// 007a29a7  7515                 jne 0x7a29be
// 007a29a9  ff15ac2d8000         call dword ptr [0x802dac]
// 007a29af  3b4720               cmp eax, dword ptr [edi + 0x20]
// 007a29b2  740a                 je 0x7a29be
// 007a29b4  85ed                 test ebp, ebp
// 007a29b6  0f8456010000         je 0x7a2b12
// 007a29bc  eb04                 jmp 0x7a29c2
// 007a29be  85ed                 test ebp, ebp
// 007a29c0  740c                 je 0x7a29ce
// 007a29c2  8d4e5c               lea ecx, [esi + 0x5c]
// 007a29c5  85ed                 test ebp, ebp
// 007a29c7  7408                 je 0x7a29d1
// 007a29c9  83c650               add esi, 0x50
// 007a29cc  eb06                 jmp 0x7a29d4
// 007a29ce  8d4e50               lea ecx, [esi + 0x50]
// 007a29d1  83c65c               add esi, 0x5c
// 007a29d4  8b4108               mov eax, dword ptr [ecx + 8]
// 007a29d7  83f8ff               cmp eax, -1
// 007a29da  7505                 jne 0x7a29e1
// 007a29dc  8b4904               mov ecx, dword ptr [ecx + 4]
// 007a29df  eb02                 jmp 0x7a29e3
// 007a29e1  8bc8                 mov ecx, eax
// 007a29e3  8b4608               mov eax, dword ptr [esi + 8]
// 007a29e6  83f8ff               cmp eax, -1
// 007a29e9  7503                 jne 0x7a29ee
// 007a29eb  8b4604               mov eax, dword ptr [esi + 4]
// 007a29ee  51                   push ecx
// 007a29ef  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007a29f3  e90f010000           jmp 0x7a2b07
// 007a29f8  f6c302               test bl, 2
// 007a29fb  744b                 je 0x7a2a48
// 007a29fd  85ed                 test ebp, ebp
// 007a29ff  7408                 je 0x7a2a09
// 007a2a01  8d4e5c               lea ecx, [esi + 0x5c]
// 007a2a04  83c650               add esi, 0x50
// 007a2a07  eb06                 jmp 0x7a2a0f
// 007a2a09  8d4e50               lea ecx, [esi + 0x50]
// 007a2a0c  83c65c               add esi, 0x5c
// 007a2a0f  8b4108               mov eax, dword ptr [ecx + 8]
// 007a2a12  83f8ff               cmp eax, -1
// 007a2a15  7505                 jne 0x7a2a1c
// 007a2a17  8b4904               mov ecx, dword ptr [ecx + 4]
// 007a2a1a  eb02                 jmp 0x7a2a1e
// 007a2a1c  8bc8                 mov ecx, eax
// 007a2a1e  8b4608               mov eax, dword ptr [esi + 8]
// 007a2a21  83f8ff               cmp eax, -1
// 007a2a24  7503                 jne 0x7a2a29
// 007a2a26  8b4604               mov eax, dword ptr [esi + 4]
// 007a2a29  51                   push ecx
// 007a2a2a  50                   push eax
// 007a2a2b  8d4c2420             lea ecx, [esp + 0x20]
// 007a2a2f  51                   push ecx
// 007a2a30  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007a2a34  e81fe9efff           call 0x6a1358
// 007a2a39  5f                   pop edi
// 007a2a3a  5e                   pop esi
// 007a2a3b  5d                   pop ebp
// 007a2a3c  b801000000           mov eax, 1
// 007a2a41  5b                   pop ebx
// 007a2a42  83c418               add esp, 0x18
// 007a2a45  c20800               ret 8
// 007a2a48  8bcf                 mov ecx, edi
// 007a2a4a  e8f1f8feff           call 0x792340
// 007a2a4f  8b3d282d8000         mov edi, dword ptr [0x802d28]
// 007a2a55  3c01                 cmp al, 1
// 007a2a57  7536                 jne 0x7a2a8f
// 007a2a59  8b4670               mov eax, dword ptr [esi + 0x70]
// 007a2a5c  83f8ff               cmp eax, -1
// 007a2a5f  7505                 jne 0x7a2a66
// 007a2a61  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 007a2a64  eb02                 jmp 0x7a2a68
// 007a2a66  8bc8                 mov ecx, eax
// 007a2a68  83f8ff               cmp eax, -1
// 007a2a6b  7503                 jne 0x7a2a70
// 007a2a6d  8b466c               mov eax, dword ptr [esi + 0x6c]
// 007a2a70  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 007a2a74  51                   push ecx
// 007a2a75  50                   push eax
// 007a2a76  8d542420             lea edx, [esp + 0x20]
// 007a2a7a  52                   push edx
// 007a2a7b  8bcb                 mov ecx, ebx
// 007a2a7d  e8d6e8efff           call 0x6a1358
// 007a2a82  6aff                 push -1
// 007a2a84  6aff                 push -1
// 007a2a86  8d442420             lea eax, [esp + 0x20]
// 007a2a8a  50                   push eax
// 007a2a8b  ffd7                 call edi
// 007a2a8d  eb04                 jmp 0x7a2a93
// 007a2a8f  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 007a2a93  85ed                 test ebp, ebp
// 007a2a95  7408                 je 0x7a2a9f
// 007a2a97  8d4e5c               lea ecx, [esi + 0x5c]
// 007a2a9a  8d5668               lea edx, [esi + 0x68]
// 007a2a9d  eb06                 jmp 0x7a2aa5
// 007a2a9f  8d4e68               lea ecx, [esi + 0x68]
// 007a2aa2  8d565c               lea edx, [esi + 0x5c]
// 007a2aa5  8b4108               mov eax, dword ptr [ecx + 8]
// 007a2aa8  83f8ff               cmp eax, -1
// 007a2aab  7505                 jne 0x7a2ab2
// 007a2aad  8b4904               mov ecx, dword ptr [ecx + 4]
// 007a2ab0  eb02                 jmp 0x7a2ab4
// 007a2ab2  8bc8                 mov ecx, eax
// 007a2ab4  8b4208               mov eax, dword ptr [edx + 8]
// 007a2ab7  83f8ff               cmp eax, -1
// 007a2aba  7503                 jne 0x7a2abf
// 007a2abc  8b4204               mov eax, dword ptr [edx + 4]
// 007a2abf  51                   push ecx
// 007a2ac0  50                   push eax
// 007a2ac1  8d4c2420             lea ecx, [esp + 0x20]
// 007a2ac5  51                   push ecx
// 007a2ac6  8bcb                 mov ecx, ebx
// 007a2ac8  e88be8efff           call 0x6a1358
// 007a2acd  6aff                 push -1
// 007a2acf  6aff                 push -1
// 007a2ad1  8d542420             lea edx, [esp + 0x20]
// 007a2ad5  52                   push edx
// 007a2ad6  ffd7                 call edi
// 007a2ad8  85ed                 test ebp, ebp
// 007a2ada  7408                 je 0x7a2ae4
// 007a2adc  8d4e44               lea ecx, [esi + 0x44]
// 007a2adf  83c650               add esi, 0x50
// 007a2ae2  eb06                 jmp 0x7a2aea
// 007a2ae4  8d4e50               lea ecx, [esi + 0x50]
// 007a2ae7  83c644               add esi, 0x44
// 007a2aea  8b4108               mov eax, dword ptr [ecx + 8]
// 007a2aed  83f8ff               cmp eax, -1
// 007a2af0  7505                 jne 0x7a2af7
// 007a2af2  8b4904               mov ecx, dword ptr [ecx + 4]
// 007a2af5  eb02                 jmp 0x7a2af9
// 007a2af7  8bc8                 mov ecx, eax
// 007a2af9  8b4608               mov eax, dword ptr [esi + 8]
// 007a2afc  83f8ff               cmp eax, -1
// 007a2aff  7503                 jne 0x7a2b04
// 007a2b01  8b4604               mov eax, dword ptr [esi + 4]
// 007a2b04  51                   push ecx
// 007a2b05  8bcb                 mov ecx, ebx
// 007a2b07  50                   push eax
// 007a2b08  8d442420             lea eax, [esp + 0x20]
// 007a2b0c  50                   push eax
// 007a2b0d  e846e8efff           call 0x6a1358
// 007a2b12  5f                   pop edi
// 007a2b13  5e                   pop esi
// 007a2b14  5d                   pop ebp
// 007a2b15  b801000000           mov eax, 1
// 007a2b1a  5b                   pop ebx
// 007a2b1b  83c418               add esp, 0x18
// 007a2b1e  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\Controls\XTButtonTheme.cpp (function ?DrawButtonThemeBackground@CXTButtonTheme@@MAEHPAUtagDRAWITEMSTRUCT@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTButtonTheme.cpp
