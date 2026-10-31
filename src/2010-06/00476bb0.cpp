// roc 2010-06 00476bb0  unit: CSettingsDialog  size: 332 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00476bb0
//
// 00476bb0  55                   push ebp
// 00476bb1  8bec                 mov ebp, esp
// 00476bb3  6aff                 push -1
// 00476bb5  6888da9700           push 0x97da88
// 00476bba  64a100000000         mov eax, dword ptr fs:[0]
// 00476bc0  50                   push eax
// 00476bc1  64892500000000       mov dword ptr fs:[0], esp
// 00476bc8  51                   push ecx
// 00476bc9  53                   push ebx
// 00476bca  56                   push esi
// 00476bcb  57                   push edi
// 00476bcc  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 00476bcf  33f6                 xor esi, esi
// 00476bd1  3bfe                 cmp edi, esi
// 00476bd3  750a                 jne 0x476bdf
// 00476bd5  b803400080           mov eax, 0x80004003
// 00476bda  e907010000           jmp 0x476ce6
// 00476bdf  89750c               mov dword ptr [ebp + 0xc], esi
// 00476be2  8b1d88a39e00         mov ebx, dword ptr [0x9ea388]
// 00476be8  57                   push edi
// 00476be9  8975fc               mov dword ptr [ebp - 4], esi
// 00476bec  ffd3                 call ebx
// 00476bee  56                   push esi
// 00476bef  40                   inc eax
// 00476bf0  99                   cdq 
// 00476bf1  6a02                 push 2
// 00476bf3  52                   push edx
// 00476bf4  50                   push eax
// 00476bf5  e8b61f3300           call 0x7a8bb0
// 00476bfa  8bf0                 mov esi, eax
// 00476bfc  0500000080           add eax, 0x80000000
// 00476c01  83d200               adc edx, 0
// 00476c04  85d2                 test edx, edx
// 00476c06  7745                 ja 0x476c4d
// 00476c08  7205                 jb 0x476c0f
// 00476c0a  83f8ff               cmp eax, -1
// 00476c0d  773e                 ja 0x476c4d
// 00476c0f  81fe00040000         cmp esi, 0x400
// 00476c15  7f18                 jg 0x476c2f
// 00476c17  56                   push esi
// 00476c18  e833cff8ff           call 0x403b50
// 00476c1d  83c404               add esp, 4
// 00476c20  84c0                 test al, al
// 00476c22  740b                 je 0x476c2f
// 00476c24  8bc6                 mov eax, esi
// 00476c26  e8551f3300           call 0x7a8b80
// 00476c2b  8bc4                 mov eax, esp
// 00476c2d  eb09                 jmp 0x476c38
// 00476c2f  56                   push esi
// 00476c30  8d4d0c               lea ecx, [ebp + 0xc]
// 00476c33  e8b8d4f8ff           call 0x4040f0
// 00476c38  6a03                 push 3
// 00476c3a  d1ee                 shr esi, 1
// 00476c3c  56                   push esi
// 00476c3d  57                   push edi
// 00476c3e  50                   push eax
// 00476c3f  e8dcbef8ff           call 0x402b20
// 00476c44  8bc8                 mov ecx, eax
// 00476c46  894df0               mov dword ptr [ebp - 0x10], ecx
// 00476c49  85c9                 test ecx, ecx
// 00476c4b  7512                 jne 0x476c5f
// 00476c4d  8d4d0c               lea ecx, [ebp + 0xc]
// 00476c50  e87bccf8ff           call 0x4038d0
// 00476c55  b80e000780           mov eax, 0x8007000e
// 00476c5a  e987000000           jmp 0x476ce6
// 00476c5f  8b7d14               mov edi, dword ptr [ebp + 0x14]
// 00476c62  33c0                 xor eax, eax
// 00476c64  85ff                 test edi, edi
// 00476c66  7459                 je 0x476cc1
// 00476c68  57                   push edi
// 00476c69  ffd3                 call ebx
// 00476c6b  40                   inc eax
// 00476c6c  6a02                 push 2
// 00476c6e  50                   push eax
// 00476c6f  894514               mov dword ptr [ebp + 0x14], eax
// 00476c72  8d4514               lea eax, [ebp + 0x14]
// 00476c75  50                   push eax
// 00476c76  e855bef8ff           call 0x402ad0
// 00476c7b  83c40c               add esp, 0xc
// 00476c7e  85c0                 test eax, eax
// 00476c80  7ccb                 jl 0x476c4d
// 00476c82  8b7514               mov esi, dword ptr [ebp + 0x14]
// 00476c85  81fe00040000         cmp esi, 0x400
// 00476c8b  7f18                 jg 0x476ca5
// 00476c8d  56                   push esi
// 00476c8e  e8bdcef8ff           call 0x403b50
// 00476c93  83c404               add esp, 4
// 00476c96  84c0                 test al, al
// 00476c98  740b                 je 0x476ca5
// 00476c9a  8bc6                 mov eax, esi
// 00476c9c  e8df1e3300           call 0x7a8b80
// 00476ca1  8bc4                 mov eax, esp
// 00476ca3  eb09                 jmp 0x476cae
// 00476ca5  56                   push esi
// 00476ca6  8d4d0c               lea ecx, [ebp + 0xc]
// 00476ca9  e842d4f8ff           call 0x4040f0
// 00476cae  6a03                 push 3
// 00476cb0  d1ee                 shr esi, 1
// 00476cb2  56                   push esi
// 00476cb3  57                   push edi
// 00476cb4  50                   push eax
// 00476cb5  e866bef8ff           call 0x402b20
// 00476cba  85c0                 test eax, eax
// 00476cbc  748f                 je 0x476c4d
// 00476cbe  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 00476cc1  8b551c               mov edx, dword ptr [ebp + 0x1c]
// 00476cc4  6a00                 push 0
// 00476cc6  52                   push edx
// 00476cc7  8b5518               mov edx, dword ptr [ebp + 0x18]
// 00476cca  52                   push edx
// 00476ccb  50                   push eax
// 00476ccc  8b4510               mov eax, dword ptr [ebp + 0x10]
// 00476ccf  50                   push eax
// 00476cd0  51                   push ecx
// 00476cd1  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00476cd4  51                   push ecx
// 00476cd5  e876dcfaff           call 0x424950
// 00476cda  8d4d0c               lea ecx, [ebp + 0xc]
// 00476cdd  8bf0                 mov esi, eax
// 00476cdf  e8eccbf8ff           call 0x4038d0
// 00476ce4  8bc6                 mov eax, esi
// 00476ce6  8d65e4               lea esp, [ebp - 0x1c]
// 00476ce9  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00476cec  64890d00000000       mov dword ptr fs:[0], ecx
// 00476cf3  5f                   pop edi
// 00476cf4  5e                   pop esi
// 00476cf5  5b                   pop ebx
// 00476cf6  8be5                 mov esp, ebp
// 00476cf8  5d                   pop ebp
// 00476cf9  c21800               ret 0x18
// copied from an identical function in another client (function ?AtlReportError@ATL@@YGJABU_GUID@@PBDK10J@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll roc_espeon_atlreporterrorunwind59eab001a8c0d0a3.cpp