// roc 2009-12 00827ce0  unit: CXTPReportColumn  size: 296 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00827ce0
//
// 00827ce0  6aff                 push -1
// 00827ce2  684ab79500           push 0x95b74a
// 00827ce7  64a100000000         mov eax, dword ptr fs:[0]
// 00827ced  50                   push eax
// 00827cee  53                   push ebx
// 00827cef  55                   push ebp
// 00827cf0  56                   push esi
// 00827cf1  57                   push edi
// 00827cf2  a10052b600           mov eax, dword ptr [0xb65200]
// 00827cf7  33c4                 xor eax, esp
// 00827cf9  50                   push eax
// 00827cfa  8d442414             lea eax, [esp + 0x14]
// 00827cfe  64a300000000         mov dword ptr fs:[0], eax
// 00827d04  8bf1                 mov esi, ecx
// 00827d06  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00827d0a  8b442424             mov eax, dword ptr [esp + 0x24]
// 00827d0e  51                   push ecx
// 00827d0f  8d4e20               lea ecx, [esi + 0x20]
// 00827d12  89462c               mov dword ptr [esi + 0x2c], eax
// 00827d15  ff155cde9800         call dword ptr [0x98de5c]
// 00827d1b  8b542428             mov edx, dword ptr [esp + 0x28]
// 00827d1f  52                   push edx
// 00827d20  8d4e24               lea ecx, [esi + 0x24]
// 00827d23  ff155cde9800         call dword ptr [0x98de5c]
// 00827d29  8b442438             mov eax, dword ptr [esp + 0x38]
// 00827d2d  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00827d31  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00827d35  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 00827d39  89465c               mov dword ptr [esi + 0x5c], eax
// 00827d3c  bf01000000           mov edi, 1
// 00827d41  8d466c               lea eax, [esi + 0x6c]
// 00827d44  50                   push eax
// 00827d45  c7868c0000000a000000 mov dword ptr [esi + 0x8c], 0xa
// 00827d4f  894e60               mov dword ptr [esi + 0x60], ecx
// 00827d52  895644               mov dword ptr [esi + 0x44], edx
// 00827d55  897e48               mov dword ptr [esi + 0x48], edi
// 00827d58  897e4c               mov dword ptr [esi + 0x4c], edi
// 00827d5b  897e64               mov dword ptr [esi + 0x64], edi
// 00827d5e  896e68               mov dword ptr [esi + 0x68], ebp
// 00827d61  ff159cca9800         call dword ptr [0x98ca9c]
// 00827d67  83c8ff               or eax, 0xffffffff
// 00827d6a  33db                 xor ebx, ebx
// 00827d6c  898698000000         mov dword ptr [esi + 0x98], eax
// 00827d72  89869c000000         mov dword ptr [esi + 0x9c], eax
// 00827d78  8b442430             mov eax, dword ptr [esp + 0x30]
// 00827d7c  6a4c                 push 0x4c
// 00827d7e  895e58               mov dword ptr [esi + 0x58], ebx
// 00827d81  897e40               mov dword ptr [esi + 0x40], edi
// 00827d84  897e54               mov dword ptr [esi + 0x54], edi
// 00827d87  897e50               mov dword ptr [esi + 0x50], edi
// 00827d8a  899e90000000         mov dword ptr [esi + 0x90], ebx
// 00827d90  899e94000000         mov dword ptr [esi + 0x94], ebx
// 00827d96  897e3c               mov dword ptr [esi + 0x3c], edi
// 00827d99  89aea8000000         mov dword ptr [esi + 0xa8], ebp
// 00827d9f  8986a0000000         mov dword ptr [esi + 0xa0], eax
// 00827da5  8986a4000000         mov dword ptr [esi + 0xa4], eax
// 00827dab  89beac000000         mov dword ptr [esi + 0xac], edi
// 00827db1  89beb0000000         mov dword ptr [esi + 0xb0], edi
// 00827db7  89beb4000000         mov dword ptr [esi + 0xb4], edi
// 00827dbd  89beb8000000         mov dword ptr [esi + 0xb8], edi
// 00827dc3  899ebc000000         mov dword ptr [esi + 0xbc], ebx
// 00827dc9  e892bafcff           call 0x7f3860
// 00827dce  83c404               add esp, 4
// 00827dd1  89442424             mov dword ptr [esp + 0x24], eax
// 00827dd5  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00827dd9  3bc3                 cmp eax, ebx
// 00827ddb  740f                 je 0x827dec
// 00827ddd  8bc8                 mov ecx, eax
// 00827ddf  e81c35ffff           call 0x81b300
// 00827de4  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 00827dea  eb06                 jmp 0x827df2
// 00827dec  899ec0000000         mov dword ptr [esi + 0xc0], ebx
// 00827df2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00827df6  64890d00000000       mov dword ptr fs:[0], ecx
// 00827dfd  59                   pop ecx
// 00827dfe  5f                   pop edi
// 00827dff  5e                   pop esi
// 00827e00  5d                   pop ebp
// 00827e01  5b                   pop ebx
// 00827e02  83c40c               add esp, 0xc
// 00827e05  c22000               ret 0x20
// copied from an identical function in another client (function ?_initData@CXTPReportColumn@@AAEXHPBD0HHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportColumn.cpp