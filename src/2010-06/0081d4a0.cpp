// roc 2010-06 0081d4a0  unit: CXTPPropertyGridView  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0081d4a0
//
// 0081d4a0  6aff                 push -1
// 0081d4a2  6838459b00           push 0x9b4538
// 0081d4a7  64a100000000         mov eax, dword ptr fs:[0]
// 0081d4ad  50                   push eax
// 0081d4ae  83ec2c               sub esp, 0x2c
// 0081d4b1  56                   push esi
// 0081d4b2  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0081d4b7  33c4                 xor eax, esp
// 0081d4b9  50                   push eax
// 0081d4ba  8d442434             lea eax, [esp + 0x34]
// 0081d4be  64a300000000         mov dword ptr fs:[0], eax
// 0081d4c4  8bf1                 mov esi, ecx
// 0081d4c6  56                   push esi
// 0081d4c7  8d4c2424             lea ecx, [esp + 0x24]
// 0081d4cb  e8ccf81500           call 0x97cd9c
// 0081d4d0  8bce                 mov ecx, esi
// 0081d4d2  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0081d4da  e821e4ffff           call 0x81b900
// 0081d4df  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0081d4e3  8b10                 mov edx, dword ptr [eax]
// 0081d4e5  8b520c               mov edx, dword ptr [edx + 0xc]
// 0081d4e8  51                   push ecx
// 0081d4e9  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0081d4ed  51                   push ecx
// 0081d4ee  8bc8                 mov ecx, eax
// 0081d4f0  ffd2                 call edx
// 0081d4f2  50                   push eax
// 0081d4f3  8d442424             lea eax, [esp + 0x24]
// 0081d4f7  50                   push eax
// 0081d4f8  8d4c2418             lea ecx, [esp + 0x18]
// 0081d4fc  e89f21feff           call 0x7ff6a0
// 0081d501  8b742448             mov esi, dword ptr [esp + 0x48]
// 0081d505  8d4c2408             lea ecx, [esp + 8]
// 0081d509  51                   push ecx
// 0081d50a  8bce                 mov ecx, esi
// 0081d50c  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0081d512  50                   push eax
// 0081d513  8bce                 mov ecx, esi
// 0081d515  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0081d51b  8b542430             mov edx, dword ptr [esp + 0x30]
// 0081d51f  50                   push eax
// 0081d520  52                   push edx
// 0081d521  ff1594a19e00         call dword ptr [0x9ea194]
// 0081d527  8b742444             mov esi, dword ptr [esp + 0x44]
// 0081d52b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0081d52f  8b442408             mov eax, dword ptr [esp + 8]
// 0081d533  894e04               mov dword ptr [esi + 4], ecx
// 0081d536  8d4c2410             lea ecx, [esp + 0x10]
// 0081d53a  8906                 mov dword ptr [esi], eax
// 0081d53c  e8df21feff           call 0x7ff720
// 0081d541  8d4c2420             lea ecx, [esp + 0x20]
// 0081d545  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 0081d54d  e844f81500           call 0x97cd96
// 0081d552  8bc6                 mov eax, esi
// 0081d554  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0081d558  64890d00000000       mov dword ptr fs:[0], ecx
// 0081d55f  59                   pop ecx
// 0081d560  5e                   pop esi
// 0081d561  83c438               add esp, 0x38
// 0081d564  c21000               ret 0x10
// copied from an identical function in another client (function ?_GetTextExtent@CXTPPropertyGridView@@AAE?AVCSize@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PAVCXTPPropertyGridItem@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridView.cpp