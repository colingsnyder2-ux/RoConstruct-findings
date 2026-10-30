// roc 2012-06 009eff50  unit: CXTPPropertyGridView  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009eff50
//
// 009eff50  6aff                 push -1
// 009eff52  682810ae00           push 0xae1028
// 009eff57  64a100000000         mov eax, dword ptr fs:[0]
// 009eff5d  50                   push eax
// 009eff5e  83ec2c               sub esp, 0x2c
// 009eff61  56                   push esi
// 009eff62  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009eff67  33c4                 xor eax, esp
// 009eff69  50                   push eax
// 009eff6a  8d442434             lea eax, [esp + 0x34]
// 009eff6e  64a300000000         mov dword ptr fs:[0], eax
// 009eff74  8bf1                 mov esi, ecx
// 009eff76  56                   push esi
// 009eff77  8d4c2424             lea ecx, [esp + 0x24]
// 009eff7b  e81c960a00           call 0xa9959c
// 009eff80  8bce                 mov ecx, esi
// 009eff82  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 009eff8a  e821e4ffff           call 0x9ee3b0
// 009eff8f  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 009eff93  8b10                 mov edx, dword ptr [eax]
// 009eff95  8b520c               mov edx, dword ptr [edx + 0xc]
// 009eff98  51                   push ecx
// 009eff99  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 009eff9d  51                   push ecx
// 009eff9e  8bc8                 mov ecx, eax
// 009effa0  ffd2                 call edx
// 009effa2  50                   push eax
// 009effa3  8d442424             lea eax, [esp + 0x24]
// 009effa7  50                   push eax
// 009effa8  8d4c2418             lea ecx, [esp + 0x18]
// 009effac  e87f55feff           call 0x9d5530
// 009effb1  8b742448             mov esi, dword ptr [esp + 0x48]
// 009effb5  8d4c2408             lea ecx, [esp + 8]
// 009effb9  51                   push ecx
// 009effba  8bce                 mov ecx, esi
// 009effbc  ff155846b200         call dword ptr [0xb24658]
// 009effc2  50                   push eax
// 009effc3  8bce                 mov ecx, esi
// 009effc5  ff159847b200         call dword ptr [0xb24798]
// 009effcb  8b542430             mov edx, dword ptr [esp + 0x30]
// 009effcf  50                   push eax
// 009effd0  52                   push edx
// 009effd1  ff154021b200         call dword ptr [0xb22140]
// 009effd7  8b742444             mov esi, dword ptr [esp + 0x44]
// 009effdb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 009effdf  8b442408             mov eax, dword ptr [esp + 8]
// 009effe3  894e04               mov dword ptr [esi + 4], ecx
// 009effe6  8d4c2410             lea ecx, [esp + 0x10]
// 009effea  8906                 mov dword ptr [esi], eax
// 009effec  e8bf55feff           call 0x9d55b0
// 009efff1  8d4c2420             lea ecx, [esp + 0x20]
// 009efff5  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 009efffd  e894950a00           call 0xa99596
// 009f0002  8bc6                 mov eax, esi
// 009f0004  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 009f0008  64890d00000000       mov dword ptr fs:[0], ecx
// 009f000f  59                   pop ecx
// 009f0010  5e                   pop esi
// 009f0011  83c438               add esp, 0x38
// 009f0014  c21000               ret 0x10
// copied from an identical function in another client (function ?_GetTextExtent@CXTPPropertyGridView@@AAE?AVCSize@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PAVCXTPPropertyGridItem@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridView.cpp