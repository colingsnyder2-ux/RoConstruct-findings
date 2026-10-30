// roc 2009-12 008651f0  unit: CXTPPropertyGridItem  size: 204 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008651f0
//
// 008651f0  6aff                 push -1
// 008651f2  6899e39500           push 0x95e399
// 008651f7  64a100000000         mov eax, dword ptr fs:[0]
// 008651fd  50                   push eax
// 008651fe  56                   push esi
// 008651ff  57                   push edi
// 00865200  a10052b600           mov eax, dword ptr [0xb65200]
// 00865205  33c4                 xor eax, esp
// 00865207  50                   push eax
// 00865208  8d44240c             lea eax, [esp + 0xc]
// 0086520c  64a300000000         mov dword ptr fs:[0], eax
// 00865212  8bf1                 mov esi, ecx
// 00865214  8d44241c             lea eax, [esp + 0x1c]
// 00865218  8dbea4000000         lea edi, [esi + 0xa4]
// 0086521e  50                   push eax
// 0086521f  8bcf                 mov ecx, edi
// 00865221  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00865229  ff1538d59800         call dword ptr [0x98d538]
// 0086522f  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 00865235  85c9                 test ecx, ecx
// 00865237  740b                 je 0x865244
// 00865239  8d54241c             lea edx, [esp + 0x1c]
// 0086523d  52                   push edx
// 0086523e  ff1538d59800         call dword ptr [0x98d538]
// 00865244  8b06                 mov eax, dword ptr [esi]
// 00865246  8b90d8000000         mov edx, dword ptr [eax + 0xd8]
// 0086524c  57                   push edi
// 0086524d  8bce                 mov ecx, esi
// 0086524f  ffd2                 call edx
// 00865251  8b8ed8000000         mov ecx, dword ptr [esi + 0xd8]
// 00865257  e8d45ff4ff           call 0x7ab230
// 0086525c  8bf8                 mov edi, eax
// 0086525e  83ef01               sub edi, 1
// 00865261  781d                 js 0x865280
// 00865263  8b8ed8000000         mov ecx, dword ptr [esi + 0xd8]
// 00865269  57                   push edi
// 0086526a  e8e1270600           call 0x8c7a50
// 0086526f  8b10                 mov edx, dword ptr [eax]
// 00865271  8bc8                 mov ecx, eax
// 00865273  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 00865279  ffd0                 call eax
// 0086527b  83ef01               sub edi, 1
// 0086527e  79e3                 jns 0x865263
// 00865280  8bb6bc000000         mov esi, dword ptr [esi + 0xbc]
// 00865286  85f6                 test esi, esi
// 00865288  7414                 je 0x86529e
// 0086528a  837e2000             cmp dword ptr [esi + 0x20], 0
// 0086528e  740e                 je 0x86529e
// 00865290  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00865293  6a00                 push 0
// 00865295  6a00                 push 0
// 00865297  51                   push ecx
// 00865298  ff15e8cb9800         call dword ptr [0x98cbe8]
// 0086529e  8d4c241c             lea ecx, [esp + 0x1c]
// 008652a2  ff15c0de9800         call dword ptr [0x98dec0]
// 008652a8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008652ac  64890d00000000       mov dword ptr fs:[0], ecx
// 008652b3  59                   pop ecx
// 008652b4  5f                   pop edi
// 008652b5  5e                   pop esi
// 008652b6  83c40c               add esp, 0xc
// 008652b9  c20400               ret 4
// copied from an identical function in another client (function ?SetValue@CXTPPropertyGridItem@@UAEXV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItem.cpp