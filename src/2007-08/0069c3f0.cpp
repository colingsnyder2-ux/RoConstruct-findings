// roc 2007-08 0069c3f0  unit: CXTPPropertyGridView  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069c3f0
//
// 0069c3f0  6aff                 push -1
// 0069c3f2  68083e7600           push 0x763e08
// 0069c3f7  64a100000000         mov eax, dword ptr fs:[0]
// 0069c3fd  50                   push eax
// 0069c3fe  83ec2c               sub esp, 0x2c
// 0069c401  56                   push esi
// 0069c402  a188518b00           mov eax, dword ptr [0x8b5188]
// 0069c407  33c4                 xor eax, esp
// 0069c409  50                   push eax
// 0069c40a  8d442434             lea eax, [esp + 0x34]
// 0069c40e  64a300000000         mov dword ptr fs:[0], eax
// 0069c414  8bf1                 mov esi, ecx
// 0069c416  56                   push esi
// 0069c417  8d4c2424             lea ecx, [esp + 0x24]
// 0069c41b  e88cbf0900           call 0x7383ac
// 0069c420  8bce                 mov ecx, esi
// 0069c422  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0069c42a  e801e7ffff           call 0x69ab30
// 0069c42f  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0069c433  8b10                 mov edx, dword ptr [eax]
// 0069c435  8b520c               mov edx, dword ptr [edx + 0xc]
// 0069c438  51                   push ecx
// 0069c439  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0069c43d  51                   push ecx
// 0069c43e  8bc8                 mov ecx, eax
// 0069c440  ffd2                 call edx
// 0069c442  50                   push eax
// 0069c443  8d442424             lea eax, [esp + 0x24]
// 0069c447  50                   push eax
// 0069c448  8d4c2418             lea ecx, [esp + 0x18]
// 0069c44c  e8ff40feff           call 0x680550
// 0069c451  8b742448             mov esi, dword ptr [esp + 0x48]
// 0069c455  8d4c2408             lea ecx, [esp + 8]
// 0069c459  51                   push ecx
// 0069c45a  8bce                 mov ecx, esi
// 0069c45c  ff15c8dc7700         call dword ptr [0x77dcc8]
// 0069c462  50                   push eax
// 0069c463  8bce                 mov ecx, esi
// 0069c465  ff1598dd7700         call dword ptr [0x77dd98]
// 0069c46b  8b542430             mov edx, dword ptr [esp + 0x30]
// 0069c46f  50                   push eax
// 0069c470  52                   push edx
// 0069c471  ff15b8d07700         call dword ptr [0x77d0b8]
// 0069c477  8b742444             mov esi, dword ptr [esp + 0x44]
// 0069c47b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0069c47f  8b442408             mov eax, dword ptr [esp + 8]
// 0069c483  894e04               mov dword ptr [esi + 4], ecx
// 0069c486  8d4c2410             lea ecx, [esp + 0x10]
// 0069c48a  8906                 mov dword ptr [esi], eax
// 0069c48c  e83f41feff           call 0x6805d0
// 0069c491  8d4c2420             lea ecx, [esp + 0x20]
// 0069c495  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 0069c49d  e804bf0900           call 0x7383a6
// 0069c4a2  8bc6                 mov eax, esi
// 0069c4a4  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0069c4a8  64890d00000000       mov dword ptr fs:[0], ecx
// 0069c4af  59                   pop ecx
// 0069c4b0  5e                   pop esi
// 0069c4b1  83c438               add esp, 0x38
// 0069c4b4  c21000               ret 0x10
// copied from an identical function in another client (function ?_GetTextExtent@CXTPPropertyGridView@@AAE?AVCSize@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PAVCXTPPropertyGridItem@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridView.cpp