// roc 2012-06 00a5de90  unit: CXTPPropertyGridInplaceList  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a5de90
//
// 00a5de90  83ec10               sub esp, 0x10
// 00a5de93  56                   push esi
// 00a5de94  8bf1                 mov esi, ecx
// 00a5de96  56                   push esi
// 00a5de97  8d4c2408             lea ecx, [esp + 8]
// 00a5de9b  e80073f7ff           call 0x9d51a0
// 00a5dea0  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a5dea4  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a5dea8  50                   push eax
// 00a5dea9  51                   push ecx
// 00a5deaa  8d54240c             lea edx, [esp + 0xc]
// 00a5deae  52                   push edx
// 00a5deaf  ff15483bb200         call dword ptr [0xb23b48]
// 00a5deb5  85c0                 test eax, eax
// 00a5deb7  8b06                 mov eax, dword ptr [esi]
// 00a5deb9  8bce                 mov ecx, esi
// 00a5debb  740f                 je 0xa5decc
// 00a5debd  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 00a5dec3  ffd2                 call edx
// 00a5dec5  5e                   pop esi
// 00a5dec6  83c410               add esp, 0x10
// 00a5dec9  c20c00               ret 0xc
// 00a5decc  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 00a5ded2  ffd2                 call edx
// 00a5ded4  5e                   pop esi
// 00a5ded5  83c410               add esp, 0x10
// 00a5ded8  c20c00               ret 0xc
// library xtp-15.2.1-shared-mfc/Source\PropertyGrid\XTPPropertyGridInplaceList.cpp (function ?OnLButtonUp@CXTPPropertyGridInplaceList@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/PropertyGrid/XTPPropertyGridInplaceList.cpp
