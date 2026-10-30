// roc 2011-06 008779d0  unit: CXTPPropertyGridView  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008779d0
//
// 008779d0  6aff                 push -1
// 008779d2  68b876a000           push 0xa076b8
// 008779d7  64a100000000         mov eax, dword ptr fs:[0]
// 008779dd  50                   push eax
// 008779de  83ec2c               sub esp, 0x2c
// 008779e1  56                   push esi
// 008779e2  a12058c900           mov eax, dword ptr [0xc95820]
// 008779e7  33c4                 xor eax, esp
// 008779e9  50                   push eax
// 008779ea  8d442434             lea eax, [esp + 0x34]
// 008779ee  64a300000000         mov dword ptr fs:[0], eax
// 008779f4  8bf1                 mov esi, ecx
// 008779f6  56                   push esi
// 008779f7  8d4c2424             lea ecx, [esp + 0x24]
// 008779fb  e8e24b1500           call 0x9cc5e2
// 00877a00  8bce                 mov ecx, esi
// 00877a02  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 00877a0a  e801e4ffff           call 0x875e10
// 00877a0f  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00877a13  8b10                 mov edx, dword ptr [eax]
// 00877a15  8b520c               mov edx, dword ptr [edx + 0xc]
// 00877a18  51                   push ecx
// 00877a19  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00877a1d  51                   push ecx
// 00877a1e  8bc8                 mov ecx, eax
// 00877a20  ffd2                 call edx
// 00877a22  50                   push eax
// 00877a23  8d442424             lea eax, [esp + 0x24]
// 00877a27  50                   push eax
// 00877a28  8d4c2418             lea ecx, [esp + 0x18]
// 00877a2c  e8ef56feff           call 0x85d120
// 00877a31  8b742448             mov esi, dword ptr [esp + 0x48]
// 00877a35  8d4c2408             lea ecx, [esp + 8]
// 00877a39  51                   push ecx
// 00877a3a  8bce                 mov ecx, esi
// 00877a3c  ff15a826a400         call dword ptr [0xa426a8]
// 00877a42  50                   push eax
// 00877a43  8bce                 mov ecx, esi
// 00877a45  ff15c82da400         call dword ptr [0xa42dc8]
// 00877a4b  8b542430             mov edx, dword ptr [esp + 0x30]
// 00877a4f  50                   push eax
// 00877a50  52                   push edx
// 00877a51  ff153801a400         call dword ptr [0xa40138]
// 00877a57  8b742444             mov esi, dword ptr [esp + 0x44]
// 00877a5b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00877a5f  8b442408             mov eax, dword ptr [esp + 8]
// 00877a63  894e04               mov dword ptr [esi + 4], ecx
// 00877a66  8d4c2410             lea ecx, [esp + 0x10]
// 00877a6a  8906                 mov dword ptr [esi], eax
// 00877a6c  e82f57feff           call 0x85d1a0
// 00877a71  8d4c2420             lea ecx, [esp + 0x20]
// 00877a75  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 00877a7d  e85a4b1500           call 0x9cc5dc
// 00877a82  8bc6                 mov eax, esi
// 00877a84  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00877a88  64890d00000000       mov dword ptr fs:[0], ecx
// 00877a8f  59                   pop ecx
// 00877a90  5e                   pop esi
// 00877a91  83c438               add esp, 0x38
// 00877a94  c21000               ret 0x10
// copied from an identical function in another client (function ?_GetTextExtent@CXTPPropertyGridView@@AAE?AVCSize@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PAVCXTPPropertyGridItem@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridView.cpp