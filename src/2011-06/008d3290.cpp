// roc 2011-06 008d3290  unit: CXTPTabManager::CNavigateButtonArrowLeft  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d3290
//
// 008d3290  83ec08               sub esp, 8
// 008d3293  56                   push esi
// 008d3294  8bf1                 mov esi, ecx
// 008d3296  837e0802             cmp dword ptr [esi + 8], 2
// 008d329a  7551                 jne 0x8d32ed
// 008d329c  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008d329f  8b01                 mov eax, dword ptr [ecx]
// 008d32a1  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d32a4  ffd2                 call edx
// 008d32a6  85c0                 test eax, eax
// 008d32a8  742d                 je 0x8d32d7
// 008d32aa  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008d32ad  8b01                 mov eax, dword ptr [ecx]
// 008d32af  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d32b2  ffd2                 call edx
// 008d32b4  83f802               cmp eax, 2
// 008d32b7  741e                 je 0x8d32d7
// 008d32b9  8b06                 mov eax, dword ptr [esi]
// 008d32bb  8b5008               mov edx, dword ptr [eax + 8]
// 008d32be  8d4c2404             lea ecx, [esp + 4]
// 008d32c2  51                   push ecx
// 008d32c3  8bce                 mov ecx, esi
// 008d32c5  ffd2                 call edx
// 008d32c7  8b4804               mov ecx, dword ptr [eax + 4]
// 008d32ca  8b442410             mov eax, dword ptr [esp + 0x10]
// 008d32ce  2908                 sub dword ptr [eax], ecx
// 008d32d0  5e                   pop esi
// 008d32d1  83c408               add esp, 8
// 008d32d4  c20400               ret 4
// 008d32d7  8b16                 mov edx, dword ptr [esi]
// 008d32d9  8b5208               mov edx, dword ptr [edx + 8]
// 008d32dc  8d442404             lea eax, [esp + 4]
// 008d32e0  50                   push eax
// 008d32e1  8bce                 mov ecx, esi
// 008d32e3  ffd2                 call edx
// 008d32e5  8b08                 mov ecx, dword ptr [eax]
// 008d32e7  8b442410             mov eax, dword ptr [esp + 0x10]
// 008d32eb  2908                 sub dword ptr [eax], ecx
// 008d32ed  5e                   pop esi
// 008d32ee  83c408               add esp, 8
// 008d32f1  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?AdjustWidth@CNavigateButtonArrow@CXTPTabManager@@MAEXAAH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
