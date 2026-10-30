// roc 2009-12 008694a0  unit: CXTPPropertyGridView  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008694a0
//
// 008694a0  6aff                 push -1
// 008694a2  6828e69500           push 0x95e628
// 008694a7  64a100000000         mov eax, dword ptr fs:[0]
// 008694ad  50                   push eax
// 008694ae  83ec2c               sub esp, 0x2c
// 008694b1  56                   push esi
// 008694b2  a10052b600           mov eax, dword ptr [0xb65200]
// 008694b7  33c4                 xor eax, esp
// 008694b9  50                   push eax
// 008694ba  8d442434             lea eax, [esp + 0x34]
// 008694be  64a300000000         mov dword ptr fs:[0], eax
// 008694c4  8bf1                 mov esi, ecx
// 008694c6  56                   push esi
// 008694c7  8d4c2424             lea ecx, [esp + 0x24]
// 008694cb  e8bacf0b00           call 0x92648a
// 008694d0  8bce                 mov ecx, esi
// 008694d2  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 008694da  e871e4ffff           call 0x867950
// 008694df  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008694e3  8b10                 mov edx, dword ptr [eax]
// 008694e5  8b520c               mov edx, dword ptr [edx + 0xc]
// 008694e8  51                   push ecx
// 008694e9  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008694ed  51                   push ecx
// 008694ee  8bc8                 mov ecx, eax
// 008694f0  ffd2                 call edx
// 008694f2  50                   push eax
// 008694f3  8d442424             lea eax, [esp + 0x24]
// 008694f7  50                   push eax
// 008694f8  8d4c2418             lea ecx, [esp + 0x18]
// 008694fc  e85f21feff           call 0x84b660
// 00869501  8b742448             mov esi, dword ptr [esp + 0x48]
// 00869505  8d4c2408             lea ecx, [esp + 8]
// 00869509  51                   push ecx
// 0086950a  8bce                 mov ecx, esi
// 0086950c  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00869512  50                   push eax
// 00869513  8bce                 mov ecx, esi
// 00869515  ff1580de9800         call dword ptr [0x98de80]
// 0086951b  8b542430             mov edx, dword ptr [esp + 0x30]
// 0086951f  50                   push eax
// 00869520  52                   push edx
// 00869521  ff156cb19800         call dword ptr [0x98b16c]
// 00869527  8b742444             mov esi, dword ptr [esp + 0x44]
// 0086952b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0086952f  8b442408             mov eax, dword ptr [esp + 8]
// 00869533  894e04               mov dword ptr [esi + 4], ecx
// 00869536  8d4c2410             lea ecx, [esp + 0x10]
// 0086953a  8906                 mov dword ptr [esi], eax
// 0086953c  e89f21feff           call 0x84b6e0
// 00869541  8d4c2420             lea ecx, [esp + 0x20]
// 00869545  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 0086954d  e832cf0b00           call 0x926484
// 00869552  8bc6                 mov eax, esi
// 00869554  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00869558  64890d00000000       mov dword ptr fs:[0], ecx
// 0086955f  59                   pop ecx
// 00869560  5e                   pop esi
// 00869561  83c438               add esp, 0x38
// 00869564  c21000               ret 0x10
// copied from an identical function in another client (function ?_GetTextExtent@CXTPPropertyGridView@@AAE?AVCSize@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PAVCXTPPropertyGridItem@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridView.cpp