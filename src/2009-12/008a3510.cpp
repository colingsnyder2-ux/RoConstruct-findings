// roc 2009-12 008a3510  unit: CXTPReportHyperlinks  size: 273 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a3510
//
// 008a3510  6aff                 push -1
// 008a3512  6899869500           push 0x958699
// 008a3517  64a100000000         mov eax, dword ptr fs:[0]
// 008a351d  50                   push eax
// 008a351e  51                   push ecx
// 008a351f  56                   push esi
// 008a3520  a10052b600           mov eax, dword ptr [0xb65200]
// 008a3525  33c4                 xor eax, esp
// 008a3527  50                   push eax
// 008a3528  8d44240c             lea eax, [esp + 0xc]
// 008a352c  64a300000000         mov dword ptr fs:[0], eax
// 008a3532  8bf1                 mov esi, ecx
// 008a3534  c744240800000000     mov dword ptr [esp + 8], 0
// 008a353c  837e5400             cmp dword ptr [esi + 0x54], 0
// 008a3540  0f84b5000000         je 0x8a35fb
// 008a3546  837e2000             cmp dword ptr [esi + 0x20], 0
// 008a354a  0f84ab000000         je 0x8a35fb
// 008a3550  e81d2f0800           call 0x926472
// 008a3555  a840                 test al, 0x40
// 008a3557  7453                 je 0x8a35ac
// 008a3559  8d4c2408             lea ecx, [esp + 8]
// 008a355d  ff1574de9800         call dword ptr [0x98de74]
// 008a3563  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008a3567  8d442408             lea eax, [esp + 8]
// 008a356b  50                   push eax
// 008a356c  51                   push ecx
// 008a356d  8bce                 mov ecx, esi
// 008a356f  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 008a3577  e8f02e0800           call 0x92646c
// 008a357c  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 008a3580  8d542408             lea edx, [esp + 8]
// 008a3584  52                   push edx
// 008a3585  8bce                 mov ecx, esi
// 008a3587  ff1594de9800         call dword ptr [0x98de94]
// 008a358d  8d4c2408             lea ecx, [esp + 8]
// 008a3591  ff15c0de9800         call dword ptr [0x98dec0]
// 008a3597  8bc6                 mov eax, esi
// 008a3599  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008a359d  64890d00000000       mov dword ptr fs:[0], ecx
// 008a35a4  59                   pop ecx
// 008a35a5  5e                   pop esi
// 008a35a6  83c410               add esp, 0x10
// 008a35a9  c20800               ret 8
// 008a35ac  8b442420             mov eax, dword ptr [esp + 0x20]
// 008a35b0  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a35b3  6a00                 push 0
// 008a35b5  50                   push eax
// 008a35b6  6899010000           push 0x199
// 008a35bb  51                   push ecx
// 008a35bc  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008a35c2  83f8ff               cmp eax, -1
// 008a35c5  7434                 je 0x8a35fb
// 008a35c7  8b5654               mov edx, dword ptr [esi + 0x54]
// 008a35ca  8b8aec000000         mov ecx, dword ptr [edx + 0xec]
// 008a35d0  50                   push eax
// 008a35d1  e86a9efcff           call 0x86d440
// 008a35d6  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 008a35da  85c0                 test eax, eax
// 008a35dc  7421                 je 0x8a35ff
// 008a35de  56                   push esi
// 008a35df  8bc8                 mov ecx, eax
// 008a35e1  e88a6af7ff           call 0x81a070
// 008a35e6  8bc6                 mov eax, esi
// 008a35e8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008a35ec  64890d00000000       mov dword ptr fs:[0], ecx
// 008a35f3  59                   pop ecx
// 008a35f4  5e                   pop esi
// 008a35f5  83c410               add esp, 0x10
// 008a35f8  c20800               ret 8
// 008a35fb  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 008a35ff  6856fd9900           push 0x99fd56
// 008a3604  8bce                 mov ecx, esi
// 008a3606  ff15b8de9800         call dword ptr [0x98deb8]
// 008a360c  8bc6                 mov eax, esi
// 008a360e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008a3612  64890d00000000       mov dword ptr fs:[0], ecx
// 008a3619  59                   pop ecx
// 008a361a  5e                   pop esi
// 008a361b  83c410               add esp, 0x10
// 008a361e  c20800               ret 8
// copied from an identical function in another client (function ?GetItemCaption@CXTPReportSubListControl@@QAE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportSubListControl.cpp