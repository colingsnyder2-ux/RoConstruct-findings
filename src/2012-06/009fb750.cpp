// roc 2012-06 009fb750  unit: CXTPControlGalleryPaintManager  size: 303 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009fb750
//
// 009fb750  6aff                 push -1
// 009fb752  68c133ae00           push 0xae33c1
// 009fb757  64a100000000         mov eax, dword ptr fs:[0]
// 009fb75d  50                   push eax
// 009fb75e  83ec20               sub esp, 0x20
// 009fb761  53                   push ebx
// 009fb762  56                   push esi
// 009fb763  57                   push edi
// 009fb764  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009fb769  33c4                 xor eax, esp
// 009fb76b  50                   push eax
// 009fb76c  8d442430             lea eax, [esp + 0x30]
// 009fb770  64a300000000         mov dword ptr fs:[0], eax
// 009fb776  8b792c               mov edi, dword ptr [ecx + 0x2c]
// 009fb779  6a38                 push 0x38
// 009fb77b  8bcf                 mov ecx, edi
// 009fb77d  e80ec1f8ff           call 0x987890
// 009fb782  8b742440             mov esi, dword ptr [esp + 0x40]
// 009fb786  50                   push eax
// 009fb787  8d44244c             lea eax, [esp + 0x4c]
// 009fb78b  50                   push eax
// 009fb78c  8bce                 mov ecx, esi
// 009fb78e  e81977f8ff           call 0x982eac
// 009fb793  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 009fb797  2b5c2448             sub ebx, dword ptr [esp + 0x48]
// 009fb79b  6a34                 push 0x34
// 009fb79d  8bcf                 mov ecx, edi
// 009fb79f  e8ecc0f8ff           call 0x987890
// 009fb7a4  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 009fb7a8  8b542448             mov edx, dword ptr [esp + 0x48]
// 009fb7ac  50                   push eax
// 009fb7ad  6a01                 push 1
// 009fb7af  53                   push ebx
// 009fb7b0  49                   dec ecx
// 009fb7b1  51                   push ecx
// 009fb7b2  52                   push edx
// 009fb7b3  8bce                 mov ecx, esi
// 009fb7b5  e8d6dd0900           call 0xa99590
// 009fb7ba  8d87f8000000         lea eax, [edi + 0xf8]
// 009fb7c0  50                   push eax
// 009fb7c1  56                   push esi
// 009fb7c2  8d4c2428             lea ecx, [esp + 0x28]
// 009fb7c6  e8659dfdff           call 0x9d5530
// 009fb7cb  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 009fb7cf  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 009fb7d3  8b442450             mov eax, dword ptr [esp + 0x50]
// 009fb7d7  6a00                 push 0
// 009fb7d9  89542418             mov dword ptr [esp + 0x18], edx
// 009fb7dd  894c2414             mov dword ptr [esp + 0x14], ecx
// 009fb7e1  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 009fb7e5  6af6                 push -0xa
// 009fb7e7  8d542418             lea edx, [esp + 0x18]
// 009fb7eb  52                   push edx
// 009fb7ec  c744244400000000     mov dword ptr [esp + 0x44], 0
// 009fb7f4  89442424             mov dword ptr [esp + 0x24], eax
// 009fb7f8  894c2428             mov dword ptr [esp + 0x28], ecx
// 009fb7fc  ff154c3bb200         call dword ptr [0xb23b4c]
// 009fb802  8b1e                 mov ebx, dword ptr [esi]
// 009fb804  6a2c                 push 0x2c
// 009fb806  8bcf                 mov ecx, edi
// 009fb808  e883c0f8ff           call 0x987890
// 009fb80d  50                   push eax
// 009fb80e  8b4338               mov eax, dword ptr [ebx + 0x38]
// 009fb811  8bce                 mov ecx, esi
// 009fb813  ffd0                 call eax
// 009fb815  8d4c2440             lea ecx, [esp + 0x40]
// 009fb819  51                   push ecx
// 009fb81a  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 009fb81e  e85de3ffff           call 0x9f9b80
// 009fb823  8bf8                 mov edi, eax
// 009fb825  8b1e                 mov ebx, dword ptr [esi]
// 009fb827  6824800000           push 0x8024
// 009fb82c  8d542414             lea edx, [esp + 0x14]
// 009fb830  52                   push edx
// 009fb831  8bcf                 mov ecx, edi
// 009fb833  c644244001           mov byte ptr [esp + 0x40], 1
// 009fb838  ff155846b200         call dword ptr [0xb24658]
// 009fb83e  50                   push eax
// 009fb83f  8bcf                 mov ecx, edi
// 009fb841  ff159847b200         call dword ptr [0xb24798]
// 009fb847  50                   push eax
// 009fb848  8b4370               mov eax, dword ptr [ebx + 0x70]
// 009fb84b  8bce                 mov ecx, esi
// 009fb84d  ffd0                 call eax
// 009fb84f  8d4c2440             lea ecx, [esp + 0x40]
// 009fb853  ff15d047b200         call dword ptr [0xb247d0]
// 009fb859  8d4c2420             lea ecx, [esp + 0x20]
// 009fb85d  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 009fb865  e8469dfdff           call 0x9d55b0
// 009fb86a  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 009fb86e  64890d00000000       mov dword ptr fs:[0], ecx
// 009fb875  59                   pop ecx
// 009fb876  5f                   pop edi
// 009fb877  5e                   pop esi
// 009fb878  5b                   pop ebx
// 009fb879  83c42c               add esp, 0x2c
// 009fb87c  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawLabel@CXTPControlGalleryPaintManager@@UAEXPAVCDC@@PAVCXTPControlGalleryItem@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen-rtm Source/CommandBars/XTPControlGallery.cpp