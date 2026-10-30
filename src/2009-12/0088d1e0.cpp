// roc 2009-12 0088d1e0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088d1e0
//
// 0088d1e0  83ec10               sub esp, 0x10
// 0088d1e3  56                   push esi
// 0088d1e4  8bf1                 mov esi, ecx
// 0088d1e6  e8c58cf6ff           call 0x7f5eb0
// 0088d1eb  85c0                 test eax, eax
// 0088d1ed  7440                 je 0x88d22f
// 0088d1ef  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0088d1f5  6a00                 push 0
// 0088d1f7  6aff                 push -1
// 0088d1f9  e8a293f7ff           call 0x8065a0
// 0088d1fe  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0088d204  8b01                 mov eax, dword ptr [ecx]
// 0088d206  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 0088d20c  6a00                 push 0
// 0088d20e  6aff                 push -1
// 0088d210  ffd2                 call edx
// 0088d212  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0088d216  8b06                 mov eax, dword ptr [esi]
// 0088d218  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0088d21c  8b8008010000         mov eax, dword ptr [eax + 0x108]
// 0088d222  51                   push ecx
// 0088d223  52                   push edx
// 0088d224  8bce                 mov ecx, esi
// 0088d226  ffd0                 call eax
// 0088d228  5e                   pop esi
// 0088d229  83c410               add esp, 0x10
// 0088d22c  c20c00               ret 0xc
// 0088d22f  837c241800           cmp dword ptr [esp + 0x18], 0
// 0088d234  7427                 je 0x88d25d
// 0088d236  ff15eccb9800         call dword ptr [0x98cbec]
// 0088d23c  50                   push eax
// 0088d23d  e8e868f6ff           call 0x7f3b2a
// 0088d242  3b8674010000         cmp eax, dword ptr [esi + 0x174]
// 0088d248  754c                 jne 0x88d296
// 0088d24a  8b16                 mov edx, dword ptr [esi]
// 0088d24c  8b8298000000         mov eax, dword ptr [edx + 0x98]
// 0088d252  8bce                 mov ecx, esi
// 0088d254  ffd0                 call eax
// 0088d256  5e                   pop esi
// 0088d257  83c410               add esp, 0x10
// 0088d25a  c20c00               ret 0xc
// 0088d25d  8d4c2404             lea ecx, [esp + 4]
// 0088d261  51                   push ecx
// 0088d262  8bce                 mov ecx, esi
// 0088d264  e8a7e6ffff           call 0x88b910
// 0088d269  8b542420             mov edx, dword ptr [esp + 0x20]
// 0088d26d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0088d271  52                   push edx
// 0088d272  51                   push ecx
// 0088d273  50                   push eax
// 0088d274  ff155cca9800         call dword ptr [0x98ca5c]
// 0088d27a  85c0                 test eax, eax
// 0088d27c  7418                 je 0x88d296
// 0088d27e  8b542420             mov edx, dword ptr [esp + 0x20]
// 0088d282  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0088d286  52                   push edx
// 0088d287  50                   push eax
// 0088d288  8bce                 mov ecx, esi
// 0088d28a  e891f8ffff           call 0x88cb20
// 0088d28f  5e                   pop esi
// 0088d290  83c410               add esp, 0x10
// 0088d293  c20c00               ret 0xc
// 0088d296  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 0088d29c  e86169f6ff           call 0x7f3c02
// 0088d2a1  5e                   pop esi
// 0088d2a2  83c410               add esp, 0x10
// 0088d2a5  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnClick@CXTPControlEdit@@MAEXHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlEdit.cpp