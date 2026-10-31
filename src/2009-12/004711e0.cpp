// roc 2009-12 004711e0  unit: CSettingsDialog  size: 332 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004711e0
//
// 004711e0  55                   push ebp
// 004711e1  8bec                 mov ebp, esp
// 004711e3  6aff                 push -1
// 004711e5  6838719200           push 0x927138
// 004711ea  64a100000000         mov eax, dword ptr fs:[0]
// 004711f0  50                   push eax
// 004711f1  64892500000000       mov dword ptr fs:[0], esp
// 004711f8  51                   push ecx
// 004711f9  53                   push ebx
// 004711fa  56                   push esi
// 004711fb  57                   push edi
// 004711fc  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 004711ff  33f6                 xor esi, esi
// 00471201  3bfe                 cmp edi, esi
// 00471203  750a                 jne 0x47120f
// 00471205  b803400080           mov eax, 0x80004003
// 0047120a  e907010000           jmp 0x471316
// 0047120f  89750c               mov dword ptr [ebp + 0xc], esi
// 00471212  8b1d18b29800         mov ebx, dword ptr [0x98b218]
// 00471218  57                   push edi
// 00471219  8975fc               mov dword ptr [ebp - 4], esi
// 0047121c  ffd3                 call ebx
// 0047121e  56                   push esi
// 0047121f  40                   inc eax
// 00471220  99                   cdq 
// 00471221  6a02                 push 2
// 00471223  52                   push edx
// 00471224  50                   push eax
// 00471225  e846383800           call 0x7f4a70
// 0047122a  8bf0                 mov esi, eax
// 0047122c  0500000080           add eax, 0x80000000
// 00471231  83d200               adc edx, 0
// 00471234  85d2                 test edx, edx
// 00471236  7745                 ja 0x47127d
// 00471238  7205                 jb 0x47123f
// 0047123a  83f8ff               cmp eax, -1
// 0047123d  773e                 ja 0x47127d
// 0047123f  81fe00040000         cmp esi, 0x400
// 00471245  7f18                 jg 0x47125f
// 00471247  56                   push esi
// 00471248  e8a328f9ff           call 0x403af0
// 0047124d  83c404               add esp, 4
// 00471250  84c0                 test al, al
// 00471252  740b                 je 0x47125f
// 00471254  8bc6                 mov eax, esi
// 00471256  e8e5373800           call 0x7f4a40
// 0047125b  8bc4                 mov eax, esp
// 0047125d  eb09                 jmp 0x471268
// 0047125f  56                   push esi
// 00471260  8d4d0c               lea ecx, [ebp + 0xc]
// 00471263  e8282ef9ff           call 0x404090
// 00471268  6a03                 push 3
// 0047126a  d1ee                 shr esi, 1
// 0047126c  56                   push esi
// 0047126d  57                   push edi
// 0047126e  50                   push eax
// 0047126f  e85c18f9ff           call 0x402ad0
// 00471274  8bc8                 mov ecx, eax
// 00471276  894df0               mov dword ptr [ebp - 0x10], ecx
// 00471279  85c9                 test ecx, ecx
// 0047127b  7512                 jne 0x47128f
// 0047127d  8d4d0c               lea ecx, [ebp + 0xc]
// 00471280  e8fb25f9ff           call 0x403880
// 00471285  b80e000780           mov eax, 0x8007000e
// 0047128a  e987000000           jmp 0x471316
// 0047128f  8b7d14               mov edi, dword ptr [ebp + 0x14]
// 00471292  33c0                 xor eax, eax
// 00471294  85ff                 test edi, edi
// 00471296  7459                 je 0x4712f1
// 00471298  57                   push edi
// 00471299  ffd3                 call ebx
// 0047129b  40                   inc eax
// 0047129c  6a02                 push 2
// 0047129e  50                   push eax
// 0047129f  894514               mov dword ptr [ebp + 0x14], eax
// 004712a2  8d4514               lea eax, [ebp + 0x14]
// 004712a5  50                   push eax
// 004712a6  e8d517f9ff           call 0x402a80
// 004712ab  83c40c               add esp, 0xc
// 004712ae  85c0                 test eax, eax
// 004712b0  7ccb                 jl 0x47127d
// 004712b2  8b7514               mov esi, dword ptr [ebp + 0x14]
// 004712b5  81fe00040000         cmp esi, 0x400
// 004712bb  7f18                 jg 0x4712d5
// 004712bd  56                   push esi
// 004712be  e82d28f9ff           call 0x403af0
// 004712c3  83c404               add esp, 4
// 004712c6  84c0                 test al, al
// 004712c8  740b                 je 0x4712d5
// 004712ca  8bc6                 mov eax, esi
// 004712cc  e86f373800           call 0x7f4a40
// 004712d1  8bc4                 mov eax, esp
// 004712d3  eb09                 jmp 0x4712de
// 004712d5  56                   push esi
// 004712d6  8d4d0c               lea ecx, [ebp + 0xc]
// 004712d9  e8b22df9ff           call 0x404090
// 004712de  6a03                 push 3
// 004712e0  d1ee                 shr esi, 1
// 004712e2  56                   push esi
// 004712e3  57                   push edi
// 004712e4  50                   push eax
// 004712e5  e8e617f9ff           call 0x402ad0
// 004712ea  85c0                 test eax, eax
// 004712ec  748f                 je 0x47127d
// 004712ee  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 004712f1  8b551c               mov edx, dword ptr [ebp + 0x1c]
// 004712f4  6a00                 push 0
// 004712f6  52                   push edx
// 004712f7  8b5518               mov edx, dword ptr [ebp + 0x18]
// 004712fa  52                   push edx
// 004712fb  50                   push eax
// 004712fc  8b4510               mov eax, dword ptr [ebp + 0x10]
// 004712ff  50                   push eax
// 00471300  51                   push ecx
// 00471301  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00471304  51                   push ecx
// 00471305  e80633fbff           call 0x424610
// 0047130a  8d4d0c               lea ecx, [ebp + 0xc]
// 0047130d  8bf0                 mov esi, eax
// 0047130f  e86c25f9ff           call 0x403880
// 00471314  8bc6                 mov eax, esi
// 00471316  8d65e4               lea esp, [ebp - 0x1c]
// 00471319  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0047131c  64890d00000000       mov dword ptr fs:[0], ecx
// 00471323  5f                   pop edi
// 00471324  5e                   pop esi
// 00471325  5b                   pop ebx
// 00471326  8be5                 mov esp, ebp
// 00471328  5d                   pop ebp
// 00471329  c21800               ret 0x18
// copied from an identical function in another client (function ?AtlReportError@ATL@@YGJABU_GUID@@PBDK10J@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll roc_espeon_atlreporterrorunwind59eab001a8c0d0a3.cpp