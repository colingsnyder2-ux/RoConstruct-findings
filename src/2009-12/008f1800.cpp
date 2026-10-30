// roc 2009-12 008f1800  unit: CXTPRibbonControlTab  size: 277 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f1800
//
// 008f1800  8b442408             mov eax, dword ptr [esp + 8]
// 008f1804  83ec10               sub esp, 0x10
// 008f1807  53                   push ebx
// 008f1808  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 008f180c  55                   push ebp
// 008f180d  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 008f1811  56                   push esi
// 008f1812  c70300000000         mov dword ptr [ebx], 0
// 008f1818  8bf1                 mov esi, ecx
// 008f181a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008f181e  c7450000000000       mov dword ptr [ebp], 0
// 008f1825  57                   push edi
// 008f1826  c70000000000         mov dword ptr [eax], 0
// 008f182c  8d542434             lea edx, [esp + 0x34]
// 008f1830  c70100000000         mov dword ptr [ecx], 0
// 008f1836  52                   push edx
// 008f1837  8bce                 mov ecx, esi
// 008f1839  e862a1f4ff           call 0x83b9a0
// 008f183e  8bf8                 mov edi, eax
// 008f1840  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 008f1846  85c0                 test eax, eax
// 008f1848  0f84bb000000         je 0x8f1909
// 008f184e  83782000             cmp dword ptr [eax + 0x20], 0
// 008f1852  0f84b1000000         je 0x8f1909
// 008f1858  8b46e0               mov eax, dword ptr [esi - 0x20]
// 008f185b  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 008f1861  8d4ee0               lea ecx, [esi - 0x20]
// 008f1864  6a00                 push 0
// 008f1866  ffd2                 call edx
// 008f1868  85c0                 test eax, eax
// 008f186a  0f8499000000         je 0x8f1909
// 008f1870  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 008f1876  8b8ea4000000         mov ecx, dword ptr [esi + 0xa4]
// 008f187c  8b96a8000000         mov edx, dword ptr [esi + 0xa8]
// 008f1882  89442410             mov dword ptr [esp + 0x10], eax
// 008f1886  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 008f188c  894c2414             mov dword ptr [esp + 0x14], ecx
// 008f1890  89542418             mov dword ptr [esp + 0x18], edx
// 008f1894  8944241c             mov dword ptr [esp + 0x1c], eax
// 008f1898  85ff                 test edi, edi
// 008f189a  7438                 je 0x8f18d4
// 008f189c  8d47ff               lea eax, [edi - 1]
// 008f189f  85c0                 test eax, eax
// 008f18a1  7c13                 jl 0x8f18b6
// 008f18a3  3b86c0010000         cmp eax, dword ptr [esi + 0x1c0]
// 008f18a9  7d0b                 jge 0x8f18b6
// 008f18ab  8b8ebc010000         mov ecx, dword ptr [esi + 0x1bc]
// 008f18b1  8b0481               mov eax, dword ptr [ecx + eax*4]
// 008f18b4  eb02                 jmp 0x8f18b8
// 008f18b6  33c0                 xor eax, eax
// 008f18b8  8b5044               mov edx, dword ptr [eax + 0x44]
// 008f18bb  89542410             mov dword ptr [esp + 0x10], edx
// 008f18bf  8b4848               mov ecx, dword ptr [eax + 0x48]
// 008f18c2  894c2414             mov dword ptr [esp + 0x14], ecx
// 008f18c6  8b504c               mov edx, dword ptr [eax + 0x4c]
// 008f18c9  89542418             mov dword ptr [esp + 0x18], edx
// 008f18cd  8b4050               mov eax, dword ptr [eax + 0x50]
// 008f18d0  8944241c             mov dword ptr [esp + 0x1c], eax
// 008f18d4  8d4c2410             lea ecx, [esp + 0x10]
// 008f18d8  51                   push ecx
// 008f18d9  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 008f18df  e81625f0ff           call 0x7f3dfa
// 008f18e4  8b442410             mov eax, dword ptr [esp + 0x10]
// 008f18e8  8b542424             mov edx, dword ptr [esp + 0x24]
// 008f18ec  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008f18f0  8902                 mov dword ptr [edx], eax
// 008f18f2  8b542428             mov edx, dword ptr [esp + 0x28]
// 008f18f6  890a                 mov dword ptr [edx], ecx
// 008f18f8  8b542418             mov edx, dword ptr [esp + 0x18]
// 008f18fc  2bd0                 sub edx, eax
// 008f18fe  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008f1902  2bc1                 sub eax, ecx
// 008f1904  895500               mov dword ptr [ebp], edx
// 008f1907  8903                 mov dword ptr [ebx], eax
// 008f1909  5f                   pop edi
// 008f190a  5e                   pop esi
// 008f190b  5d                   pop ebp
// 008f190c  33c0                 xor eax, eax
// 008f190e  5b                   pop ebx
// 008f190f  83c410               add esp, 0x10
// 008f1912  c22000               ret 0x20
// copied from an identical function in another client (function ?AccessibleLocation@CXTPRibbonControlTab@@MAEJPAJ000UtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonControlTab.cpp