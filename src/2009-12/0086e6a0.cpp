// roc 2009-12 0086e6a0  unit: CXTPResourceManager  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086e6a0
//
// 0086e6a0  6aff                 push -1
// 0086e6a2  682afa9500           push 0x95fa2a
// 0086e6a7  64a100000000         mov eax, dword ptr fs:[0]
// 0086e6ad  50                   push eax
// 0086e6ae  51                   push ecx
// 0086e6af  56                   push esi
// 0086e6b0  57                   push edi
// 0086e6b1  a10052b600           mov eax, dword ptr [0xb65200]
// 0086e6b6  33c4                 xor eax, esp
// 0086e6b8  50                   push eax
// 0086e6b9  8d442410             lea eax, [esp + 0x10]
// 0086e6bd  64a300000000         mov dword ptr fs:[0], eax
// 0086e6c3  8bf1                 mov esi, ecx
// 0086e6c5  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0086e6cd  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0086e6d1  8bcf                 mov ecx, edi
// 0086e6d3  ff1574de9800         call dword ptr [0x98de74]
// 0086e6d9  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0086e6dd  8b06                 mov eax, dword ptr [esi]
// 0086e6df  8b5008               mov edx, dword ptr [eax + 8]
// 0086e6e2  51                   push ecx
// 0086e6e3  57                   push edi
// 0086e6e4  8bce                 mov ecx, esi
// 0086e6e6  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0086e6ee  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0086e6f6  ffd2                 call edx
// 0086e6f8  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0086e6fc  85c9                 test ecx, ecx
// 0086e6fe  7409                 je 0x86e709
// 0086e700  33d2                 xor edx, edx
// 0086e702  85c0                 test eax, eax
// 0086e704  0f94c2               sete dl
// 0086e707  8911                 mov dword ptr [ecx], edx
// 0086e709  8bc7                 mov eax, edi
// 0086e70b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0086e70f  64890d00000000       mov dword ptr fs:[0], ecx
// 0086e716  59                   pop ecx
// 0086e717  5f                   pop edi
// 0086e718  5e                   pop esi
// 0086e719  83c410               add esp, 0x10
// 0086e71c  c20c00               ret 0xc
// copied from an identical function in another client (function ?LoadStringA@CXTPResourceManager@@UAE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@IPAH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPResourceManager.cpp