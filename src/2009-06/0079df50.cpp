// roc 2009-06 0079df50  unit: CXTPControlGalleryPaintManager  size: 303 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0079df50
//
// 0079df50  6aff                 push -1
// 0079df52  6811c08700           push 0x87c011
// 0079df57  64a100000000         mov eax, dword ptr fs:[0]
// 0079df5d  50                   push eax
// 0079df5e  83ec20               sub esp, 0x20
// 0079df61  53                   push ebx
// 0079df62  56                   push esi
// 0079df63  57                   push edi
// 0079df64  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0079df69  33c4                 xor eax, esp
// 0079df6b  50                   push eax
// 0079df6c  8d442430             lea eax, [esp + 0x30]
// 0079df70  64a300000000         mov dword ptr fs:[0], eax
// 0079df76  8b792c               mov edi, dword ptr [ecx + 0x2c]
// 0079df79  6a38                 push 0x38
// 0079df7b  8bcf                 mov ecx, edi
// 0079df7d  e8fe47f8ff           call 0x722780
// 0079df82  8b742440             mov esi, dword ptr [esp + 0x40]
// 0079df86  50                   push eax
// 0079df87  8d44244c             lea eax, [esp + 0x4c]
// 0079df8b  50                   push eax
// 0079df8c  8bce                 mov ecx, esi
// 0079df8e  e83db8f7ff           call 0x7197d0
// 0079df93  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 0079df97  2b5c2448             sub ebx, dword ptr [esp + 0x48]
// 0079df9b  6a34                 push 0x34
// 0079df9d  8bcf                 mov ecx, edi
// 0079df9f  e8dc47f8ff           call 0x722780
// 0079dfa4  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0079dfa8  8b542448             mov edx, dword ptr [esp + 0x48]
// 0079dfac  50                   push eax
// 0079dfad  6a01                 push 1
// 0079dfaf  53                   push ebx
// 0079dfb0  49                   dec ecx
// 0079dfb1  51                   push ecx
// 0079dfb2  52                   push edx
// 0079dfb3  8bce                 mov ecx, esi
// 0079dfb5  e876df0a00           call 0x84bf30
// 0079dfba  8d87f8000000         lea eax, [edi + 0xf8]
// 0079dfc0  50                   push eax
// 0079dfc1  56                   push esi
// 0079dfc2  8d4c2428             lea ecx, [esp + 0x28]
// 0079dfc6  e89528fdff           call 0x770860
// 0079dfcb  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0079dfcf  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0079dfd3  8b442450             mov eax, dword ptr [esp + 0x50]
// 0079dfd7  6a00                 push 0
// 0079dfd9  89542418             mov dword ptr [esp + 0x18], edx
// 0079dfdd  894c2414             mov dword ptr [esp + 0x14], ecx
// 0079dfe1  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0079dfe5  6af6                 push -0xa
// 0079dfe7  8d542418             lea edx, [esp + 0x18]
// 0079dfeb  52                   push edx
// 0079dfec  c744244400000000     mov dword ptr [esp + 0x44], 0
// 0079dff4  89442424             mov dword ptr [esp + 0x24], eax
// 0079dff8  894c2428             mov dword ptr [esp + 0x28], ecx
// 0079dffc  ff15bced8900         call dword ptr [0x89edbc]
// 0079e002  8b1e                 mov ebx, dword ptr [esi]
// 0079e004  6a2c                 push 0x2c
// 0079e006  8bcf                 mov ecx, edi
// 0079e008  e87347f8ff           call 0x722780
// 0079e00d  50                   push eax
// 0079e00e  8b4338               mov eax, dword ptr [ebx + 0x38]
// 0079e011  8bce                 mov ecx, esi
// 0079e013  ffd0                 call eax
// 0079e015  8d4c2440             lea ecx, [esp + 0x40]
// 0079e019  51                   push ecx
// 0079e01a  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0079e01e  e82de3ffff           call 0x79c350
// 0079e023  8bf8                 mov edi, eax
// 0079e025  8b1e                 mov ebx, dword ptr [esi]
// 0079e027  6824800000           push 0x8024
// 0079e02c  8d542414             lea edx, [esp + 0x14]
// 0079e030  52                   push edx
// 0079e031  8bcf                 mov ecx, edi
// 0079e033  c644244001           mov byte ptr [esp + 0x40], 1
// 0079e038  ff1554fb8900         call dword ptr [0x89fb54]
// 0079e03e  50                   push eax
// 0079e03f  8bcf                 mov ecx, edi
// 0079e041  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0079e047  50                   push eax
// 0079e048  8b4370               mov eax, dword ptr [ebx + 0x70]
// 0079e04b  8bce                 mov ecx, esi
// 0079e04d  ffd0                 call eax
// 0079e04f  8d4c2440             lea ecx, [esp + 0x40]
// 0079e053  ff1510fd8900         call dword ptr [0x89fd10]
// 0079e059  8d4c2420             lea ecx, [esp + 0x20]
// 0079e05d  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 0079e065  e87628fdff           call 0x7708e0
// 0079e06a  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0079e06e  64890d00000000       mov dword ptr fs:[0], ecx
// 0079e075  59                   pop ecx
// 0079e076  5f                   pop edi
// 0079e077  5e                   pop esi
// 0079e078  5b                   pop ebx
// 0079e079  83c42c               add esp, 0x2c
// 0079e07c  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawLabel@CXTPControlGalleryPaintManager@@UAEXPAVCDC@@PAVCXTPControlGalleryItem@@VCRect@@@Z)

// from server: 100% by colin
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lang: cpp
// roc-lib: xtp-11.2.2-lib-strlen-rtm Source/CommandBars/XTPControlGallery.cpp