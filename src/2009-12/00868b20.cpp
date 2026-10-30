// roc 2009-12 00868b20  unit: CXTPPropertyGridView  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00868b20
//
// 00868b20  8b442408             mov eax, dword ptr [esp + 8]
// 00868b24  83ec10               sub esp, 0x10
// 00868b27  56                   push esi
// 00868b28  8bf1                 mov esi, ecx
// 00868b2a  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 00868b31  742f                 je 0x868b62
// 00868b33  50                   push eax
// 00868b34  e837fbffff           call 0x868670
// 00868b39  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 00868b3f  85c9                 test ecx, ecx
// 00868b41  740a                 je 0x868b4d
// 00868b43  8b11                 mov edx, dword ptr [ecx]
// 00868b45  8b82ac000000         mov eax, dword ptr [edx + 0xac]
// 00868b4b  ffd0                 call eax
// 00868b4d  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00868b50  6a00                 push 0
// 00868b52  6a00                 push 0
// 00868b54  51                   push ecx
// 00868b55  ff15e8cb9800         call dword ptr [0x98cbe8]
// 00868b5b  5e                   pop esi
// 00868b5c  83c410               add esp, 0x10
// 00868b5f  c20c00               ret 0xc
// 00868b62  8b542420             mov edx, dword ptr [esp + 0x20]
// 00868b66  52                   push edx
// 00868b67  50                   push eax
// 00868b68  e823ffffff           call 0x868a90
// 00868b6d  8bc8                 mov ecx, eax
// 00868b6f  33c0                 xor eax, eax
// 00868b71  85c9                 test ecx, ecx
// 00868b73  7416                 je 0x868b8b
// 00868b75  8b542420             mov edx, dword ptr [esp + 0x20]
// 00868b79  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00868b7d  52                   push edx
// 00868b7e  50                   push eax
// 00868b7f  e83cbdffff           call 0x8648c0
// 00868b84  8bc8                 mov ecx, eax
// 00868b86  e8e5d90500           call 0x8c6570
// 00868b8b  3b8658010000         cmp eax, dword ptr [esi + 0x158]
// 00868b91  743e                 je 0x868bd1
// 00868b93  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00868b96  6a00                 push 0
// 00868b98  6a00                 push 0
// 00868b9a  51                   push ecx
// 00868b9b  898658010000         mov dword ptr [esi + 0x158], eax
// 00868ba1  ff15e8cb9800         call dword ptr [0x98cbe8]
// 00868ba7  8b5620               mov edx, dword ptr [esi + 0x20]
// 00868baa  8d442404             lea eax, [esp + 4]
// 00868bae  50                   push eax
// 00868baf  c744240810000000     mov dword ptr [esp + 8], 0x10
// 00868bb7  c744240c02000000     mov dword ptr [esp + 0xc], 2
// 00868bbf  89542410             mov dword ptr [esp + 0x10], edx
// 00868bc3  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00868bcb  ff1564b09800         call dword ptr [0x98b064]
// 00868bd1  8b442420             mov eax, dword ptr [esp + 0x20]
// 00868bd5  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00868bd9  8b16                 mov edx, dword ptr [esi]
// 00868bdb  8b9260010000         mov edx, dword ptr [edx + 0x160]
// 00868be1  50                   push eax
// 00868be2  51                   push ecx
// 00868be3  8bce                 mov ecx, esi
// 00868be5  ffd2                 call edx
// 00868be7  8bce                 mov ecx, esi
// 00868be9  e842b2f8ff           call 0x7f3e30
// 00868bee  5e                   pop esi
// 00868bef  83c410               add esp, 0x10
// 00868bf2  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnMouseMove@CXTPPropertyGridView@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGridView.cpp