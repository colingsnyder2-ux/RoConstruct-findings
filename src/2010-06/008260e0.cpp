// roc 2010-06 008260e0  unit: CXTPControlGalleryPaintManager  size: 303 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008260e0
//
// 008260e0  6aff                 push -1
// 008260e2  68a1669b00           push 0x9b66a1
// 008260e7  64a100000000         mov eax, dword ptr fs:[0]
// 008260ed  50                   push eax
// 008260ee  83ec20               sub esp, 0x20
// 008260f1  53                   push ebx
// 008260f2  56                   push esi
// 008260f3  57                   push edi
// 008260f4  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 008260f9  33c4                 xor eax, esp
// 008260fb  50                   push eax
// 008260fc  8d442430             lea eax, [esp + 0x30]
// 00826100  64a300000000         mov dword ptr fs:[0], eax
// 00826106  8b792c               mov edi, dword ptr [ecx + 0x2c]
// 00826109  6a38                 push 0x38
// 0082610b  8bcf                 mov ecx, edi
// 0082610d  e8fe6ff8ff           call 0x7ad110
// 00826112  8b742440             mov esi, dword ptr [esp + 0x40]
// 00826116  50                   push eax
// 00826117  8d44244c             lea eax, [esp + 0x4c]
// 0082611b  50                   push eax
// 0082611c  8bce                 mov ecx, esi
// 0082611e  e81b26f8ff           call 0x7a873e
// 00826123  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 00826127  2b5c2448             sub ebx, dword ptr [esp + 0x48]
// 0082612b  6a34                 push 0x34
// 0082612d  8bcf                 mov ecx, edi
// 0082612f  e8dc6ff8ff           call 0x7ad110
// 00826134  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00826138  8b542448             mov edx, dword ptr [esp + 0x48]
// 0082613c  50                   push eax
// 0082613d  6a01                 push 1
// 0082613f  53                   push ebx
// 00826140  49                   dec ecx
// 00826141  51                   push ecx
// 00826142  52                   push edx
// 00826143  8bce                 mov ecx, esi
// 00826145  e8406c1500           call 0x97cd8a
// 0082614a  8d87f8000000         lea eax, [edi + 0xf8]
// 00826150  50                   push eax
// 00826151  56                   push esi
// 00826152  8d4c2428             lea ecx, [esp + 0x28]
// 00826156  e84595fdff           call 0x7ff6a0
// 0082615b  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0082615f  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00826163  8b442450             mov eax, dword ptr [esp + 0x50]
// 00826167  6a00                 push 0
// 00826169  89542418             mov dword ptr [esp + 0x18], edx
// 0082616d  894c2414             mov dword ptr [esp + 0x14], ecx
// 00826171  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00826175  6af6                 push -0xa
// 00826177  8d542418             lea edx, [esp + 0x18]
// 0082617b  52                   push edx
// 0082617c  c744244400000000     mov dword ptr [esp + 0x44], 0
// 00826184  89442424             mov dword ptr [esp + 0x24], eax
// 00826188  894c2428             mov dword ptr [esp + 0x28], ecx
// 0082618c  ff15dcbb9e00         call dword ptr [0x9ebbdc]
// 00826192  8b1e                 mov ebx, dword ptr [esi]
// 00826194  6a2c                 push 0x2c
// 00826196  8bcf                 mov ecx, edi
// 00826198  e8736ff8ff           call 0x7ad110
// 0082619d  50                   push eax
// 0082619e  8b4338               mov eax, dword ptr [ebx + 0x38]
// 008261a1  8bce                 mov ecx, esi
// 008261a3  ffd0                 call eax
// 008261a5  8d4c2440             lea ecx, [esp + 0x40]
// 008261a9  51                   push ecx
// 008261aa  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008261ae  e82de3ffff           call 0x8244e0
// 008261b3  8bf8                 mov edi, eax
// 008261b5  8b1e                 mov ebx, dword ptr [esi]
// 008261b7  6824800000           push 0x8024
// 008261bc  8d542414             lea edx, [esp + 0x14]
// 008261c0  52                   push edx
// 008261c1  8bcf                 mov ecx, edi
// 008261c3  c644244001           mov byte ptr [esp + 0x40], 1
// 008261c8  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 008261ce  50                   push eax
// 008261cf  8bcf                 mov ecx, edi
// 008261d1  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 008261d7  50                   push eax
// 008261d8  8b4370               mov eax, dword ptr [ebx + 0x70]
// 008261db  8bce                 mov ecx, esi
// 008261dd  ffd0                 call eax
// 008261df  8d4c2440             lea ecx, [esp + 0x40]
// 008261e3  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 008261e9  8d4c2420             lea ecx, [esp + 0x20]
// 008261ed  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 008261f5  e82695fdff           call 0x7ff720
// 008261fa  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008261fe  64890d00000000       mov dword ptr fs:[0], ecx
// 00826205  59                   pop ecx
// 00826206  5f                   pop edi
// 00826207  5e                   pop esi
// 00826208  5b                   pop ebx
// 00826209  83c42c               add esp, 0x2c
// 0082620c  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawLabel@CXTPControlGalleryPaintManager@@UAEXPAVCDC@@PAVCXTPControlGalleryItem@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen-rtm Source/CommandBars/XTPControlGallery.cpp