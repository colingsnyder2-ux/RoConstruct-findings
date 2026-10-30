// roc 2009-12 008cdcd0  unit: CXTPPropertyGridInplaceList  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cdcd0
//
// 008cdcd0  83ec10               sub esp, 0x10
// 008cdcd3  56                   push esi
// 008cdcd4  8bf1                 mov esi, ecx
// 008cdcd6  56                   push esi
// 008cdcd7  8d4c2408             lea ecx, [esp + 8]
// 008cdcdb  e8f0d5f7ff           call 0x84b2d0
// 008cdce0  8b442420             mov eax, dword ptr [esp + 0x20]
// 008cdce4  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008cdce8  50                   push eax
// 008cdce9  51                   push ecx
// 008cdcea  8d54240c             lea edx, [esp + 0xc]
// 008cdcee  52                   push edx
// 008cdcef  ff155cca9800         call dword ptr [0x98ca5c]
// 008cdcf5  85c0                 test eax, eax
// 008cdcf7  8b06                 mov eax, dword ptr [esi]
// 008cdcf9  8bce                 mov ecx, esi
// 008cdcfb  740f                 je 0x8cdd0c
// 008cdcfd  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 008cdd03  ffd2                 call edx
// 008cdd05  5e                   pop esi
// 008cdd06  83c410               add esp, 0x10
// 008cdd09  c20c00               ret 0xc
// 008cdd0c  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 008cdd12  ffd2                 call edx
// 008cdd14  5e                   pop esi
// 008cdd15  83c410               add esp, 0x10
// 008cdd18  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnLButtonUp@CXTPPropertyGridInplaceList@@IAEXIVCPoint@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/PropertyGrid/XTPPropertyGridInplaceList.cpp