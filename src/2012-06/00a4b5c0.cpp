// roc 2012-06 00a4b5c0  unit: CXTPTabManager::CNavigateButtonArrowLeft  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4b5c0
//
// 00a4b5c0  83ec08               sub esp, 8
// 00a4b5c3  56                   push esi
// 00a4b5c4  8bf1                 mov esi, ecx
// 00a4b5c6  837e0802             cmp dword ptr [esi + 8], 2
// 00a4b5ca  7551                 jne 0xa4b61d
// 00a4b5cc  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00a4b5cf  8b01                 mov eax, dword ptr [ecx]
// 00a4b5d1  8b5048               mov edx, dword ptr [eax + 0x48]
// 00a4b5d4  ffd2                 call edx
// 00a4b5d6  85c0                 test eax, eax
// 00a4b5d8  742d                 je 0xa4b607
// 00a4b5da  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00a4b5dd  8b01                 mov eax, dword ptr [ecx]
// 00a4b5df  8b5048               mov edx, dword ptr [eax + 0x48]
// 00a4b5e2  ffd2                 call edx
// 00a4b5e4  83f802               cmp eax, 2
// 00a4b5e7  741e                 je 0xa4b607
// 00a4b5e9  8b06                 mov eax, dword ptr [esi]
// 00a4b5eb  8b5008               mov edx, dword ptr [eax + 8]
// 00a4b5ee  8d4c2404             lea ecx, [esp + 4]
// 00a4b5f2  51                   push ecx
// 00a4b5f3  8bce                 mov ecx, esi
// 00a4b5f5  ffd2                 call edx
// 00a4b5f7  8b4804               mov ecx, dword ptr [eax + 4]
// 00a4b5fa  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a4b5fe  2908                 sub dword ptr [eax], ecx
// 00a4b600  5e                   pop esi
// 00a4b601  83c408               add esp, 8
// 00a4b604  c20400               ret 4
// 00a4b607  8b16                 mov edx, dword ptr [esi]
// 00a4b609  8b5208               mov edx, dword ptr [edx + 8]
// 00a4b60c  8d442404             lea eax, [esp + 4]
// 00a4b610  50                   push eax
// 00a4b611  8bce                 mov ecx, esi
// 00a4b613  ffd2                 call edx
// 00a4b615  8b08                 mov ecx, dword ptr [eax]
// 00a4b617  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a4b61b  2908                 sub dword ptr [eax], ecx
// 00a4b61d  5e                   pop esi
// 00a4b61e  83c408               add esp, 8
// 00a4b621  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?AdjustWidth@CNavigateButtonArrow@CXTPTabManager@@MAEXAAH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
