// roc 2010-06 0081d330  unit: CXTPPropertyGridView  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0081d330
//
// 0081d330  83ec08               sub esp, 8
// 0081d333  837c241001           cmp dword ptr [esp + 0x10], 1
// 0081d338  56                   push esi
// 0081d339  8bf1                 mov esi, ecx
// 0081d33b  754b                 jne 0x81d388
// 0081d33d  8d442404             lea eax, [esp + 4]
// 0081d341  50                   push eax
// 0081d342  ff1574bc9e00         call dword ptr [0x9ebc74]
// 0081d348  8b5620               mov edx, dword ptr [esi + 0x20]
// 0081d34b  8d4c2404             lea ecx, [esp + 4]
// 0081d34f  51                   push ecx
// 0081d350  52                   push edx
// 0081d351  ff1578bc9e00         call dword ptr [0x9ebc78]
// 0081d357  8b442408             mov eax, dword ptr [esp + 8]
// 0081d35b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0081d35f  50                   push eax
// 0081d360  51                   push ecx
// 0081d361  8bce                 mov ecx, esi
// 0081d363  e878ffffff           call 0x81d2e0
// 0081d368  3d00010000           cmp eax, 0x100
// 0081d36d  7519                 jne 0x81d388
// 0081d36f  8b96d4000000         mov edx, dword ptr [esi + 0xd4]
// 0081d375  52                   push edx
// 0081d376  ff15b4bb9e00         call dword ptr [0x9ebbb4]
// 0081d37c  b801000000           mov eax, 1
// 0081d381  5e                   pop esi
// 0081d382  83c408               add esp, 8
// 0081d385  c20c00               ret 0xc
// 0081d388  8bce                 mov ecx, esi
// 0081d38a  e8e1abf8ff           call 0x7a7f70
// 0081d38f  5e                   pop esi
// 0081d390  83c408               add esp, 8
// 0081d393  c20c00               ret 0xc
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?OnSetCursor@CXTPPropertyGridView@@IAEHPAVCWnd@@II@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
