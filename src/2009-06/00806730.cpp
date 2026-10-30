// roc 2009-06 00806730  unit: CXTPOffice2007Image  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00806730
//
// 00806730  6aff                 push -1
// 00806732  68fb198800           push 0x8819fb
// 00806737  64a100000000         mov eax, dword ptr fs:[0]
// 0080673d  50                   push eax
// 0080673e  83ec08               sub esp, 8
// 00806741  56                   push esi
// 00806742  57                   push edi
// 00806743  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00806748  33c4                 xor eax, esp
// 0080674a  50                   push eax
// 0080674b  8d442414             lea eax, [esp + 0x14]
// 0080674f  64a300000000         mov dword ptr fs:[0], eax
// 00806755  8bf1                 mov esi, ecx
// 00806757  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0080675f  51                   push ecx
// 00806760  8d442430             lea eax, [esp + 0x30]
// 00806764  8bcc                 mov ecx, esp
// 00806766  89642410             mov dword ptr [esp + 0x10], esp
// 0080676a  50                   push eax
// 0080676b  c744242401000000     mov dword ptr [esp + 0x24], 1
// 00806773  ff15e4fc8900         call dword ptr [0x89fce4]
// 00806779  51                   push ecx
// 0080677a  8d542430             lea edx, [esp + 0x30]
// 0080677e  8bcc                 mov ecx, esp
// 00806780  89642418             mov dword ptr [esp + 0x18], esp
// 00806784  52                   push edx
// 00806785  c644242802           mov byte ptr [esp + 0x28], 2
// 0080678a  ff15e4fc8900         call dword ptr [0x89fce4]
// 00806790  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00806794  57                   push edi
// 00806795  8bce                 mov ecx, esi
// 00806797  c644242801           mov byte ptr [esp + 0x28], 1
// 0080679c  e8dff8ffff           call 0x806080
// 008067a1  8d4c2428             lea ecx, [esp + 0x28]
// 008067a5  ff1510fd8900         call dword ptr [0x89fd10]
// 008067ab  8d4c242c             lea ecx, [esp + 0x2c]
// 008067af  ff1510fd8900         call dword ptr [0x89fd10]
// 008067b5  8bc7                 mov eax, edi
// 008067b7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008067bb  64890d00000000       mov dword ptr fs:[0], ecx
// 008067c2  59                   pop ecx
// 008067c3  5f                   pop edi
// 008067c4  5e                   pop esi
// 008067c5  83c414               add esp, 0x14
// 008067c8  c20c00               ret 0xc
// copied from an identical function in another client (function ?GetImageString@CXTPOffice2007Images@@QAE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@V23@0@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPOffice2007Image.cpp