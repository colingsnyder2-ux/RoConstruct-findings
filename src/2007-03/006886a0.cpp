// roc 2007-03 006886a0  unit: seg_00680000  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006886a0
//
// 006886a0  6aff                 push -1
// 006886a2  68b8437600           push 0x7643b8
// 006886a7  64a100000000         mov eax, dword ptr fs:[0]
// 006886ad  50                   push eax
// 006886ae  83ec2c               sub esp, 0x2c
// 006886b1  56                   push esi
// 006886b2  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 006886b7  33c4                 xor eax, esp
// 006886b9  50                   push eax
// 006886ba  8d442434             lea eax, [esp + 0x34]
// 006886be  64a300000000         mov dword ptr fs:[0], eax
// 006886c4  8bf1                 mov esi, ecx
// 006886c6  56                   push esi
// 006886c7  8d4c2424             lea ecx, [esp + 0x24]
// 006886cb  e8ce230b00           call 0x73aa9e
// 006886d0  8bce                 mov ecx, esi
// 006886d2  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 006886da  e891e7ffff           call 0x686e70
// 006886df  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 006886e3  8b10                 mov edx, dword ptr [eax]
// 006886e5  8b520c               mov edx, dword ptr [edx + 0xc]
// 006886e8  51                   push ecx
// 006886e9  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 006886ed  51                   push ecx
// 006886ee  8bc8                 mov ecx, eax
// 006886f0  ffd2                 call edx
// 006886f2  50                   push eax
// 006886f3  8d442424             lea eax, [esp + 0x24]
// 006886f7  50                   push eax
// 006886f8  8d4c2418             lea ecx, [esp + 0x18]
// 006886fc  e8ef36feff           call 0x66bdf0
// 00688701  8b742448             mov esi, dword ptr [esp + 0x48]
// 00688705  8d4c2408             lea ecx, [esp + 8]
// 00688709  51                   push ecx
// 0068870a  8bce                 mov ecx, esi
// 0068870c  ff1520db7700         call dword ptr [0x77db20]
// 00688712  50                   push eax
// 00688713  8bce                 mov ecx, esi
// 00688715  ff1554dd7700         call dword ptr [0x77dd54]
// 0068871b  8b542430             mov edx, dword ptr [esp + 0x30]
// 0068871f  50                   push eax
// 00688720  52                   push edx
// 00688721  ff15bcd07700         call dword ptr [0x77d0bc]
// 00688727  8b742444             mov esi, dword ptr [esp + 0x44]
// 0068872b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0068872f  8b442408             mov eax, dword ptr [esp + 8]
// 00688733  894e04               mov dword ptr [esi + 4], ecx
// 00688736  8d4c2410             lea ecx, [esp + 0x10]
// 0068873a  8906                 mov dword ptr [esi], eax
// 0068873c  e82f37feff           call 0x66be70
// 00688741  8d4c2420             lea ecx, [esp + 0x20]
// 00688745  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 0068874d  e846230b00           call 0x73aa98
// 00688752  8bc6                 mov eax, esi
// 00688754  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00688758  64890d00000000       mov dword ptr fs:[0], ecx
// 0068875f  59                   pop ecx
// 00688760  5e                   pop esi
// 00688761  83c438               add esp, 0x38
// 00688764  c21000               ret 0x10
// copied from an identical function in another client (function ?_GetTextExtent@CXTPPropertyGridView@@AAE?AVCSize@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PAVCXTPPropertyGridItem@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridView.cpp