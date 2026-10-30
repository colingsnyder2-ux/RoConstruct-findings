// roc 2011-06 008a17e0  unit: CXTPDockContext  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a17e0
//
// 008a17e0  8b442404             mov eax, dword ptr [esp + 4]
// 008a17e4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008a17e8  53                   push ebx
// 008a17e9  8b1d5c1ca400         mov ebx, dword ptr [0xa41c5c]
// 008a17ef  56                   push esi
// 008a17f0  8bf1                 mov esi, ecx
// 008a17f2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008a17f6  57                   push edi
// 008a17f7  894608               mov dword ptr [esi + 8], eax
// 008a17fa  8b4604               mov eax, dword ptr [esi + 4]
// 008a17fd  894e0c               mov dword ptr [esi + 0xc], ecx
// 008a1800  895610               mov dword ptr [esi + 0x10], edx
// 008a1803  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008a1806  8d7e40               lea edi, [esi + 0x40]
// 008a1809  57                   push edi
// 008a180a  51                   push ecx
// 008a180b  ffd3                 call ebx
// 008a180d  8b16                 mov edx, dword ptr [esi]
// 008a180f  8b4210               mov eax, dword ptr [edx + 0x10]
// 008a1812  8bce                 mov ecx, esi
// 008a1814  ffd0                 call eax
// 008a1816  8b4e04               mov ecx, dword ptr [esi + 4]
// 008a1819  8b5120               mov edx, dword ptr [ecx + 0x20]
// 008a181c  57                   push edi
// 008a181d  52                   push edx
// 008a181e  ffd3                 call ebx
// 008a1820  8b4604               mov eax, dword ptr [esi + 4]
// 008a1823  83b80001000004       cmp dword ptr [eax + 0x100], 4
// 008a182a  750b                 jne 0x8a1837
// 008a182c  8b0f                 mov ecx, dword ptr [edi]
// 008a182e  8b5704               mov edx, dword ptr [edi + 4]
// 008a1831  894e28               mov dword ptr [esi + 0x28], ecx
// 008a1834  89562c               mov dword ptr [esi + 0x2c], edx
// 008a1837  8b4f08               mov ecx, dword ptr [edi + 8]
// 008a183a  2b0f                 sub ecx, dword ptr [edi]
// 008a183c  5f                   pop edi
// 008a183d  5e                   pop esi
// 008a183e  8988c8000000         mov dword ptr [eax + 0xc8], ecx
// 008a1844  5b                   pop ebx
// 008a1845  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPDockContext.cpp (function ?StartResize@CXTPDockContext@@UAEXHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockContext.cpp
