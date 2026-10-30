// roc 2009-06 0078e480  unit: CXTPPropertyGridView  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0078e480
//
// 0078e480  6aff                 push -1
// 0078e482  6878a38700           push 0x87a378
// 0078e487  64a100000000         mov eax, dword ptr fs:[0]
// 0078e48d  50                   push eax
// 0078e48e  83ec2c               sub esp, 0x2c
// 0078e491  56                   push esi
// 0078e492  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0078e497  33c4                 xor eax, esp
// 0078e499  50                   push eax
// 0078e49a  8d442434             lea eax, [esp + 0x34]
// 0078e49e  64a300000000         mov dword ptr fs:[0], eax
// 0078e4a4  8bf1                 mov esi, ecx
// 0078e4a6  56                   push esi
// 0078e4a7  8d4c2424             lea ecx, [esp + 0x24]
// 0078e4ab  e84ada0b00           call 0x84befa
// 0078e4b0  8bce                 mov ecx, esi
// 0078e4b2  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0078e4ba  e891e4ffff           call 0x78c950
// 0078e4bf  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0078e4c3  8b10                 mov edx, dword ptr [eax]
// 0078e4c5  8b520c               mov edx, dword ptr [edx + 0xc]
// 0078e4c8  51                   push ecx
// 0078e4c9  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0078e4cd  51                   push ecx
// 0078e4ce  8bc8                 mov ecx, eax
// 0078e4d0  ffd2                 call edx
// 0078e4d2  50                   push eax
// 0078e4d3  8d442424             lea eax, [esp + 0x24]
// 0078e4d7  50                   push eax
// 0078e4d8  8d4c2418             lea ecx, [esp + 0x18]
// 0078e4dc  e87f23feff           call 0x770860
// 0078e4e1  8b742448             mov esi, dword ptr [esp + 0x48]
// 0078e4e5  8d4c2408             lea ecx, [esp + 8]
// 0078e4e9  51                   push ecx
// 0078e4ea  8bce                 mov ecx, esi
// 0078e4ec  ff1554fb8900         call dword ptr [0x89fb54]
// 0078e4f2  50                   push eax
// 0078e4f3  8bce                 mov ecx, esi
// 0078e4f5  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0078e4fb  8b542430             mov edx, dword ptr [esp + 0x30]
// 0078e4ff  50                   push eax
// 0078e500  52                   push edx
// 0078e501  ff1550e18900         call dword ptr [0x89e150]
// 0078e507  8b742444             mov esi, dword ptr [esp + 0x44]
// 0078e50b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0078e50f  8b442408             mov eax, dword ptr [esp + 8]
// 0078e513  894e04               mov dword ptr [esi + 4], ecx
// 0078e516  8d4c2410             lea ecx, [esp + 0x10]
// 0078e51a  8906                 mov dword ptr [esi], eax
// 0078e51c  e8bf23feff           call 0x7708e0
// 0078e521  8d4c2420             lea ecx, [esp + 0x20]
// 0078e525  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 0078e52d  e8c2d90b00           call 0x84bef4
// 0078e532  8bc6                 mov eax, esi
// 0078e534  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0078e538  64890d00000000       mov dword ptr fs:[0], ecx
// 0078e53f  59                   pop ecx
// 0078e540  5e                   pop esi
// 0078e541  83c438               add esp, 0x38
// 0078e544  c21000               ret 0x10
// copied from an identical function in another client (function ?_GetTextExtent@CXTPPropertyGridView@@AAE?AVCSize@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PAVCXTPPropertyGridItem@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/PropertyGrid/XTPPropertyGridView.cpp