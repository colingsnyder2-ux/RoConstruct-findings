// roc 2009-12 00897b90  unit: CXTPRibbonBar  size: 328 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00897b90
//
// 00897b90  53                   push ebx
// 00897b91  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00897b95  8b430c               mov eax, dword ptr [ebx + 0xc]
// 00897b98  56                   push esi
// 00897b99  57                   push edi
// 00897b9a  8b787c               mov edi, dword ptr [eax + 0x7c]
// 00897b9d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00897ba1  8bf1                 mov esi, ecx
// 00897ba3  3d86250000           cmp eax, 0x2586
// 00897ba8  0f8591000000         jne 0x897c3f
// 00897bae  e81dc9f6ff           call 0x8044d0
// 00897bb3  8bc8                 mov ecx, eax
// 00897bb5  e826e3f7ff           call 0x815ee0
// 00897bba  8b8e64020000         mov ecx, dword ptr [esi + 0x264]
// 00897bc0  6a01                 push 1
// 00897bc2  6aff                 push -1
// 00897bc4  57                   push edi
// 00897bc5  c786a401000001000000 mov dword ptr [esi + 0x1a4], 1
// 00897bcf  e8dcf6faff           call 0x8472b0
// 00897bd4  8bf8                 mov edi, eax
// 00897bd6  8b17                 mov edx, dword ptr [edi]
// 00897bd8  8b4264               mov eax, dword ptr [edx + 0x64]
// 00897bdb  33db                 xor ebx, ebx
// 00897bdd  53                   push ebx
// 00897bde  8bcf                 mov ecx, edi
// 00897be0  ffd0                 call eax
// 00897be2  6a01                 push 1
// 00897be4  8bcf                 mov ecx, edi
// 00897be6  e8b5e7f5ff           call 0x7f63a0
// 00897beb  8b87fc000000         mov eax, dword ptr [edi + 0xfc]
// 00897bf1  8d4b02               lea ecx, [ebx + 2]
// 00897bf4  83f80a               cmp eax, 0xa
// 00897bf7  7414                 je 0x897c0d
// 00897bf9  3bc1                 cmp eax, ecx
// 00897bfb  7410                 je 0x897c0d
// 00897bfd  399f48010000         cmp dword ptr [edi + 0x148], ebx
// 00897c03  741d                 je 0x897c22
// 00897c05  899f48010000         mov dword ptr [edi + 0x148], ebx
// 00897c0b  eb0e                 jmp 0x897c1b
// 00897c0d  398f48010000         cmp dword ptr [edi + 0x148], ecx
// 00897c13  740d                 je 0x897c22
// 00897c15  898f48010000         mov dword ptr [edi + 0x148], ecx
// 00897c1b  8bcf                 mov ecx, edi
// 00897c1d  e89ee0f5ff           call 0x7f5cc0
// 00897c22  899ea4010000         mov dword ptr [esi + 0x1a4], ebx
// 00897c28  8b16                 mov edx, dword ptr [esi]
// 00897c2a  8b8284010000         mov eax, dword ptr [edx + 0x184]
// 00897c30  8bce                 mov ecx, esi
// 00897c32  ffd0                 call eax
// 00897c34  5f                   pop edi
// 00897c35  5e                   pop esi
// 00897c36  b801000000           mov eax, 1
// 00897c3b  5b                   pop ebx
// 00897c3c  c20800               ret 8
// 00897c3f  3d85250000           cmp eax, 0x2585
// 00897c44  7510                 jne 0x897c56
// 00897c46  8b8e64020000         mov ecx, dword ptr [esi + 0x264]
// 00897c4c  8b11                 mov edx, dword ptr [ecx]
// 00897c4e  8b4258               mov eax, dword ptr [edx + 0x58]
// 00897c51  57                   push edi
// 00897c52  ffd0                 call eax
// 00897c54  ebd2                 jmp 0x897c28
// 00897c56  3d87250000           cmp eax, 0x2587
// 00897c5b  754c                 jne 0x897ca9
// 00897c5d  e86ec8f6ff           call 0x8044d0
// 00897c62  8bc8                 mov ecx, eax
// 00897c64  e877e2f7ff           call 0x815ee0
// 00897c69  8bce                 mov ecx, esi
// 00897c6b  e880f4f6ff           call 0x8070f0
// 00897c70  8b3dc4cb9800         mov edi, dword ptr [0x98cbc4]
// 00897c76  53                   push ebx
// 00897c77  6887250000           push 0x2587
// 00897c7c  8bf0                 mov esi, eax
// 00897c7e  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00897c81  6862280000           push 0x2862
// 00897c86  51                   push ecx
// 00897c87  ffd7                 call edi
// 00897c89  85c0                 test eax, eax
// 00897c8b  75a7                 jne 0x897c34
// 00897c8d  8b5620               mov edx, dword ptr [esi + 0x20]
// 00897c90  50                   push eax
// 00897c91  6887250000           push 0x2587
// 00897c96  6811010000           push 0x111
// 00897c9b  52                   push edx
// 00897c9c  ffd7                 call edi
// 00897c9e  5f                   pop edi
// 00897c9f  5e                   pop esi
// 00897ca0  b801000000           mov eax, 1
// 00897ca5  5b                   pop ebx
// 00897ca6  c20800               ret 8
// 00897ca9  3d8c250000           cmp eax, 0x258c
// 00897cae  7520                 jne 0x897cd0
// 00897cb0  8b16                 mov edx, dword ptr [esi]
// 00897cb2  e829d5ffff           call 0x8951e0
// 00897cb7  f7d8                 neg eax
// 00897cb9  1bc0                 sbb eax, eax
// 00897cbb  40                   inc eax
// 00897cbc  50                   push eax
// 00897cbd  8b8224020000         mov eax, dword ptr [edx + 0x224]
// 00897cc3  ffd0                 call eax
// 00897cc5  5f                   pop edi
// 00897cc6  5e                   pop esi
// 00897cc7  b801000000           mov eax, 1
// 00897ccc  5b                   pop ebx
// 00897ccd  c20800               ret 8
// 00897cd0  5f                   pop edi
// 00897cd1  5e                   pop esi
// 00897cd2  33c0                 xor eax, eax
// 00897cd4  5b                   pop ebx
// 00897cd5  c20800               ret 8
// copied from an identical function in another client (function ?OnCustomizeCommand@CXTPRibbonBar@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonBar.cpp