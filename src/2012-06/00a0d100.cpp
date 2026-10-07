// roc 2012-06 00a0d100  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a0d100
//
// 00a0d100  56                   push esi
// 00a0d101  57                   push edi
// 00a0d102  8bf9                 mov edi, ecx
// 00a0d104  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a0d108  8b4118               mov eax, dword ptr [ecx + 0x18]
// 00a0d10b  83f8ff               cmp eax, -1
// 00a0d10e  7505                 jne 0xa0d115
// 00a0d110  8b5114               mov edx, dword ptr [ecx + 0x14]
// 00a0d113  eb02                 jmp 0xa0d117
// 00a0d115  8bd0                 mov edx, eax
// 00a0d117  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00a0d11a  83f8ff               cmp eax, -1
// 00a0d11d  7503                 jne 0xa0d122
// 00a0d11f  8b4108               mov eax, dword ptr [ecx + 8]
// 00a0d122  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a0d126  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00a0d12a  6a00                 push 0
// 00a0d12c  51                   push ecx
// 00a0d12d  52                   push edx
// 00a0d12e  50                   push eax
// 00a0d12f  8d542420             lea edx, [esp + 0x20]
// 00a0d133  52                   push edx
// 00a0d134  56                   push esi
// 00a0d135  8bcf                 mov ecx, edi
// 00a0d137  e884b0f7ff           call 0x9881c0
// 00a0d13c  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a0d140  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a0d144  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a0d148  50                   push eax
// 00a0d149  50                   push eax
// 00a0d14a  83ec10               sub esp, 0x10
// 00a0d14d  8bc4                 mov eax, esp
// 00a0d14f  8908                 mov dword ptr [eax], ecx
// 00a0d151  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a0d155  895004               mov dword ptr [eax + 4], edx
// 00a0d158  8b542434             mov edx, dword ptr [esp + 0x34]
// 00a0d15c  894808               mov dword ptr [eax + 8], ecx
// 00a0d15f  56                   push esi
// 00a0d160  8bcf                 mov ecx, edi
// 00a0d162  89500c               mov dword ptr [eax + 0xc], edx
// 00a0d165  e826a9f7ff           call 0x987a90
// 00a0d16a  5f                   pop edi
// 00a0d16b  5e                   pop esi
// 00a0d16c  c22000               ret 0x20
// library xtp-13.2.1/Source\CommandBars\XTPOffice2003Theme.cpp (function ?RectangleEx@CXTPOffice2003Theme@@IAEXPAVCDC@@VCRect@@HHAAVCXTPPaintManagerColorGradient@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/CommandBars/XTPOffice2003Theme.cpp
