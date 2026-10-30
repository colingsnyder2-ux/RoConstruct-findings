// roc 2011-06 00883170  unit: CXTPControlGalleryPaintManager  size: 303 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00883170
//
// 00883170  6aff                 push -1
// 00883172  68a197a000           push 0xa097a1
// 00883177  64a100000000         mov eax, dword ptr fs:[0]
// 0088317d  50                   push eax
// 0088317e  83ec20               sub esp, 0x20
// 00883181  53                   push ebx
// 00883182  56                   push esi
// 00883183  57                   push edi
// 00883184  a12058c900           mov eax, dword ptr [0xc95820]
// 00883189  33c4                 xor eax, esp
// 0088318b  50                   push eax
// 0088318c  8d442430             lea eax, [esp + 0x30]
// 00883190  64a300000000         mov dword ptr fs:[0], eax
// 00883196  8b792c               mov edi, dword ptr [ecx + 0x2c]
// 00883199  6a38                 push 0x38
// 0088319b  8bcf                 mov ecx, edi
// 0088319d  e80ec4f8ff           call 0x80f5b0
// 008831a2  8b742440             mov esi, dword ptr [esp + 0x40]
// 008831a6  50                   push eax
// 008831a7  8d44244c             lea eax, [esp + 0x4c]
// 008831ab  50                   push eax
// 008831ac  8bce                 mov ecx, esi
// 008831ae  e86d7cf8ff           call 0x80ae20
// 008831b3  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 008831b7  2b5c2448             sub ebx, dword ptr [esp + 0x48]
// 008831bb  6a34                 push 0x34
// 008831bd  8bcf                 mov ecx, edi
// 008831bf  e8ecc3f8ff           call 0x80f5b0
// 008831c4  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008831c8  8b542448             mov edx, dword ptr [esp + 0x48]
// 008831cc  50                   push eax
// 008831cd  6a01                 push 1
// 008831cf  53                   push ebx
// 008831d0  49                   dec ecx
// 008831d1  51                   push ecx
// 008831d2  52                   push edx
// 008831d3  8bce                 mov ecx, esi
// 008831d5  e8fc931400           call 0x9cc5d6
// 008831da  8d87f8000000         lea eax, [edi + 0xf8]
// 008831e0  50                   push eax
// 008831e1  56                   push esi
// 008831e2  8d4c2428             lea ecx, [esp + 0x28]
// 008831e6  e8359ffdff           call 0x85d120
// 008831eb  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 008831ef  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008831f3  8b442450             mov eax, dword ptr [esp + 0x50]
// 008831f7  6a00                 push 0
// 008831f9  89542418             mov dword ptr [esp + 0x18], edx
// 008831fd  894c2414             mov dword ptr [esp + 0x14], ecx
// 00883201  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00883205  6af6                 push -0xa
// 00883207  8d542418             lea edx, [esp + 0x18]
// 0088320b  52                   push edx
// 0088320c  c744244400000000     mov dword ptr [esp + 0x44], 0
// 00883214  89442424             mov dword ptr [esp + 0x24], eax
// 00883218  894c2428             mov dword ptr [esp + 0x28], ecx
// 0088321c  ff15e41ba400         call dword ptr [0xa41be4]
// 00883222  8b1e                 mov ebx, dword ptr [esi]
// 00883224  6a2c                 push 0x2c
// 00883226  8bcf                 mov ecx, edi
// 00883228  e883c3f8ff           call 0x80f5b0
// 0088322d  50                   push eax
// 0088322e  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00883231  8bce                 mov ecx, esi
// 00883233  ffd0                 call eax
// 00883235  8d4c2440             lea ecx, [esp + 0x40]
// 00883239  51                   push ecx
// 0088323a  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0088323e  e82de3ffff           call 0x881570
// 00883243  8bf8                 mov edi, eax
// 00883245  8b1e                 mov ebx, dword ptr [esi]
// 00883247  6824800000           push 0x8024
// 0088324c  8d542414             lea edx, [esp + 0x14]
// 00883250  52                   push edx
// 00883251  8bcf                 mov ecx, edi
// 00883253  c644244001           mov byte ptr [esp + 0x40], 1
// 00883258  ff15a826a400         call dword ptr [0xa426a8]
// 0088325e  50                   push eax
// 0088325f  8bcf                 mov ecx, edi
// 00883261  ff15c82da400         call dword ptr [0xa42dc8]
// 00883267  50                   push eax
// 00883268  8b4370               mov eax, dword ptr [ebx + 0x70]
// 0088326b  8bce                 mov ecx, esi
// 0088326d  ffd0                 call eax
// 0088326f  8d4c2440             lea ecx, [esp + 0x40]
// 00883273  ff15082ea400         call dword ptr [0xa42e08]
// 00883279  8d4c2420             lea ecx, [esp + 0x20]
// 0088327d  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00883285  e8169ffdff           call 0x85d1a0
// 0088328a  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0088328e  64890d00000000       mov dword ptr fs:[0], ecx
// 00883295  59                   pop ecx
// 00883296  5f                   pop edi
// 00883297  5e                   pop esi
// 00883298  5b                   pop ebx
// 00883299  83c42c               add esp, 0x2c
// 0088329c  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawLabel@CXTPControlGalleryPaintManager@@UAEXPAVCDC@@PAVCXTPControlGalleryItem@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen-rtm Source/CommandBars/XTPControlGallery.cpp