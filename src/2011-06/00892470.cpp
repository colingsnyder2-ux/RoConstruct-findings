// roc 2011-06 00892470  unit: CXTPControlGalleryOffice2007Theme  size: 296 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00892470
//
// 00892470  6aff                 push -1
// 00892472  68a197a000           push 0xa097a1
// 00892477  64a100000000         mov eax, dword ptr fs:[0]
// 0089247d  50                   push eax
// 0089247e  83ec20               sub esp, 0x20
// 00892481  53                   push ebx
// 00892482  56                   push esi
// 00892483  57                   push edi
// 00892484  a12058c900           mov eax, dword ptr [0xc95820]
// 00892489  33c4                 xor eax, esp
// 0089248b  50                   push eax
// 0089248c  8d442430             lea eax, [esp + 0x30]
// 00892490  64a300000000         mov dword ptr fs:[0], eax
// 00892496  8b792c               mov edi, dword ptr [ecx + 0x2c]
// 00892499  6a38                 push 0x38
// 0089249b  8bcf                 mov ecx, edi
// 0089249d  e80ed1f7ff           call 0x80f5b0
// 008924a2  8b742440             mov esi, dword ptr [esp + 0x40]
// 008924a6  50                   push eax
// 008924a7  8d44244c             lea eax, [esp + 0x4c]
// 008924ab  50                   push eax
// 008924ac  8bce                 mov ecx, esi
// 008924ae  e86d89f7ff           call 0x80ae20
// 008924b3  8b442448             mov eax, dword ptr [esp + 0x48]
// 008924b7  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008924bb  8b542454             mov edx, dword ptr [esp + 0x54]
// 008924bf  68c5c5c500           push 0xc5c5c5
// 008924c4  6a01                 push 1
// 008924c6  2bc8                 sub ecx, eax
// 008924c8  51                   push ecx
// 008924c9  4a                   dec edx
// 008924ca  52                   push edx
// 008924cb  50                   push eax
// 008924cc  8bce                 mov ecx, esi
// 008924ce  e803a11300           call 0x9cc5d6
// 008924d3  8d87f8000000         lea eax, [edi + 0xf8]
// 008924d9  50                   push eax
// 008924da  56                   push esi
// 008924db  8d4c2428             lea ecx, [esp + 0x28]
// 008924df  e83cacfcff           call 0x85d120
// 008924e4  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 008924e8  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008924ec  8b442450             mov eax, dword ptr [esp + 0x50]
// 008924f0  6a00                 push 0
// 008924f2  89542418             mov dword ptr [esp + 0x18], edx
// 008924f6  894c2414             mov dword ptr [esp + 0x14], ecx
// 008924fa  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008924fe  6af6                 push -0xa
// 00892500  8d542418             lea edx, [esp + 0x18]
// 00892504  52                   push edx
// 00892505  c744244400000000     mov dword ptr [esp + 0x44], 0
// 0089250d  89442424             mov dword ptr [esp + 0x24], eax
// 00892511  894c2428             mov dword ptr [esp + 0x28], ecx
// 00892515  ff15e41ba400         call dword ptr [0xa41be4]
// 0089251b  8b1e                 mov ebx, dword ptr [esi]
// 0089251d  6a2c                 push 0x2c
// 0089251f  8bcf                 mov ecx, edi
// 00892521  e88ad0f7ff           call 0x80f5b0
// 00892526  50                   push eax
// 00892527  8b4338               mov eax, dword ptr [ebx + 0x38]
// 0089252a  8bce                 mov ecx, esi
// 0089252c  ffd0                 call eax
// 0089252e  8d4c2440             lea ecx, [esp + 0x40]
// 00892532  51                   push ecx
// 00892533  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00892537  e834f0feff           call 0x881570
// 0089253c  8bf8                 mov edi, eax
// 0089253e  8b1e                 mov ebx, dword ptr [esi]
// 00892540  6824800000           push 0x8024
// 00892545  8d542414             lea edx, [esp + 0x14]
// 00892549  52                   push edx
// 0089254a  8bcf                 mov ecx, edi
// 0089254c  c644244001           mov byte ptr [esp + 0x40], 1
// 00892551  ff15a826a400         call dword ptr [0xa426a8]
// 00892557  50                   push eax
// 00892558  8bcf                 mov ecx, edi
// 0089255a  ff15c82da400         call dword ptr [0xa42dc8]
// 00892560  50                   push eax
// 00892561  8b4370               mov eax, dword ptr [ebx + 0x70]
// 00892564  8bce                 mov ecx, esi
// 00892566  ffd0                 call eax
// 00892568  8d4c2440             lea ecx, [esp + 0x40]
// 0089256c  ff15082ea400         call dword ptr [0xa42e08]
// 00892572  8d4c2420             lea ecx, [esp + 0x20]
// 00892576  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 0089257e  e81dacfcff           call 0x85d1a0
// 00892583  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00892587  64890d00000000       mov dword ptr fs:[0], ecx
// 0089258e  59                   pop ecx
// 0089258f  5f                   pop edi
// 00892590  5e                   pop esi
// 00892591  5b                   pop ebx
// 00892592  83c42c               add esp, 0x2c
// 00892595  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawLabel@CXTPControlGalleryOffice2007Theme@@UAEXPAVCDC@@PAVCXTPControlGalleryItem@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPOffice2007Theme.cpp