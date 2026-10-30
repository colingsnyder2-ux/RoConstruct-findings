// roc 2009-12 008ca8a0  unit: CXTPPropertyGridPaintManager  size: 407 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ca8a0
//
// 008ca8a0  6aff                 push -1
// 008ca8a2  68794a9600           push 0x964a79
// 008ca8a7  64a100000000         mov eax, dword ptr fs:[0]
// 008ca8ad  50                   push eax
// 008ca8ae  83ec10               sub esp, 0x10
// 008ca8b1  53                   push ebx
// 008ca8b2  55                   push ebp
// 008ca8b3  56                   push esi
// 008ca8b4  57                   push edi
// 008ca8b5  a10052b600           mov eax, dword ptr [0xb65200]
// 008ca8ba  33c4                 xor eax, esp
// 008ca8bc  50                   push eax
// 008ca8bd  8d442424             lea eax, [esp + 0x24]
// 008ca8c1  64a300000000         mov dword ptr fs:[0], eax
// 008ca8c7  8bd9                 mov ebx, ecx
// 008ca8c9  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008ca8cd  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 008ca8d1  8bbd98000000         mov edi, dword ptr [ebp + 0x98]
// 008ca8d7  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008ca8db  8bb584000000         mov esi, dword ptr [ebp + 0x84]
// 008ca8e1  8b542448             mov edx, dword ptr [esp + 0x48]
// 008ca8e5  89442414             mov dword ptr [esp + 0x14], eax
// 008ca8e9  33c0                 xor eax, eax
// 008ca8eb  85ff                 test edi, edi
// 008ca8ed  0f95c0               setne al
// 008ca8f0  894c2418             mov dword ptr [esp + 0x18], ecx
// 008ca8f4  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008ca8f8  894c241c             mov dword ptr [esp + 0x1c], ecx
// 008ca8fc  49                   dec ecx
// 008ca8fd  6a00                 push 0
// 008ca8ff  894c2420             mov dword ptr [esp + 0x20], ecx
// 008ca903  03c6                 add eax, esi
// 008ca905  8d34c500000000       lea esi, [eax*8]
// 008ca90c  2bf0                 sub esi, eax
// 008ca90e  8d443603             lea eax, [esi + esi + 3]
// 008ca912  4a                   dec edx
// 008ca913  6a00                 push 0
// 008ca915  8bcd                 mov ecx, ebp
// 008ca917  8944241c             mov dword ptr [esp + 0x1c], eax
// 008ca91b  89542428             mov dword ptr [esp + 0x28], edx
// 008ca91f  e81ca6f9ff           call 0x864f40
// 008ca924  8bf8                 mov edi, eax
// 008ca926  897c2438             mov dword ptr [esp + 0x38], edi
// 008ca92a  85ff                 test edi, edi
// 008ca92c  0f849d000000         je 0x8ca9cf
// 008ca932  8b4730               mov eax, dword ptr [edi + 0x30]
// 008ca935  83f8ff               cmp eax, -1
// 008ca938  0f8489000000         je 0x8ca9c7
// 008ca93e  8b4b60               mov ecx, dword ptr [ebx + 0x60]
// 008ca941  6a00                 push 0
// 008ca943  50                   push eax
// 008ca944  e8e732f8ff           call 0x84dc30
// 008ca949  8bc8                 mov ecx, eax
// 008ca94b  e83052f4ff           call 0x80fb80
// 008ca950  8bf0                 mov esi, eax
// 008ca952  85f6                 test esi, esi
// 008ca954  7471                 je 0x8ca9c7
// 008ca956  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 008ca95a  2b7c2418             sub edi, dword ptr [esp + 0x18]
// 008ca95e  8bce                 mov ecx, esi
// 008ca960  e80bafc0ff           call 0x4d5870
// 008ca965  3bc7                 cmp eax, edi
// 008ca967  7d0b                 jge 0x8ca974
// 008ca969  8bce                 mov ecx, esi
// 008ca96b  e800afc0ff           call 0x4d5870
// 008ca970  8bd8                 mov ebx, eax
// 008ca972  eb08                 jmp 0x8ca97c
// 008ca974  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 008ca978  2b5c2418             sub ebx, dword ptr [esp + 0x18]
// 008ca97c  8bce                 mov ecx, esi
// 008ca97e  e8fd32f8ff           call 0x84dc80
// 008ca983  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008ca987  8b542418             mov edx, dword ptr [esp + 0x18]
// 008ca98b  8bf8                 mov edi, eax
// 008ca98d  8d040a               lea eax, [edx + ecx]
// 008ca990  99                   cdq 
// 008ca991  2bc2                 sub eax, edx
// 008ca993  8bc8                 mov ecx, eax
// 008ca995  8bc3                 mov eax, ebx
// 008ca997  99                   cdq 
// 008ca998  2bc2                 sub eax, edx
// 008ca99a  d1f8                 sar eax, 1
// 008ca99c  53                   push ebx
// 008ca99d  d1f9                 sar ecx, 1
// 008ca99f  2bc8                 sub ecx, eax
// 008ca9a1  8b442418             mov eax, dword ptr [esp + 0x18]
// 008ca9a5  57                   push edi
// 008ca9a6  51                   push ecx
// 008ca9a7  83c0fe               add eax, -2
// 008ca9aa  50                   push eax
// 008ca9ab  8b442444             mov eax, dword ptr [esp + 0x44]
// 008ca9af  50                   push eax
// 008ca9b0  8bce                 mov ecx, esi
// 008ca9b2  e8d966f4ff           call 0x811090
// 008ca9b7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008ca9bb  8d543905             lea edx, [ecx + edi + 5]
// 008ca9bf  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 008ca9c3  89542414             mov dword ptr [esp + 0x14], edx
// 008ca9c7  8bb794000000         mov esi, dword ptr [edi + 0x94]
// 008ca9cd  eb05                 jmp 0x8ca9d4
// 008ca9cf  be24000000           mov esi, 0x24
// 008ca9d4  8d442438             lea eax, [esp + 0x38]
// 008ca9d8  50                   push eax
// 008ca9d9  8bcd                 mov ecx, ebp
// 008ca9db  e8107cb6ff           call 0x4325f0
// 008ca9e0  8bf8                 mov edi, eax
// 008ca9e2  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008ca9e6  8b19                 mov ebx, dword ptr [ecx]
// 008ca9e8  81ce00080000         or esi, 0x800
// 008ca9ee  56                   push esi
// 008ca9ef  8d542418             lea edx, [esp + 0x18]
// 008ca9f3  52                   push edx
// 008ca9f4  8bcf                 mov ecx, edi
// 008ca9f6  c744243400000000     mov dword ptr [esp + 0x34], 0
// 008ca9fe  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008caa04  50                   push eax
// 008caa05  8bcf                 mov ecx, edi
// 008caa07  ff1580de9800         call dword ptr [0x98de80]
// 008caa0d  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008caa11  50                   push eax
// 008caa12  8b4370               mov eax, dword ptr [ebx + 0x70]
// 008caa15  ffd0                 call eax
// 008caa17  8d4c2438             lea ecx, [esp + 0x38]
// 008caa1b  ff15c0de9800         call dword ptr [0x98dec0]
// 008caa21  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008caa25  64890d00000000       mov dword ptr fs:[0], ecx
// 008caa2c  59                   pop ecx
// 008caa2d  5f                   pop edi
// 008caa2e  5e                   pop esi
// 008caa2f  5d                   pop ebp
// 008caa30  5b                   pop ebx
// 008caa31  83c41c               add esp, 0x1c
// 008caa34  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawItemCaption@CXTPPropertyGridPaintManager@@UAEXPAVCDC@@PAVCXTPPropertyGridItem@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridPaintManager.cpp