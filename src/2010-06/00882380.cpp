// roc 2010-06 00882380  unit: CXTPTabManager::CNavigateButtonArrowLeft  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00882380
//
// 00882380  83ec08               sub esp, 8
// 00882383  56                   push esi
// 00882384  8bf1                 mov esi, ecx
// 00882386  837e0802             cmp dword ptr [esi + 8], 2
// 0088238a  7551                 jne 0x8823dd
// 0088238c  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0088238f  8b01                 mov eax, dword ptr [ecx]
// 00882391  8b5048               mov edx, dword ptr [eax + 0x48]
// 00882394  ffd2                 call edx
// 00882396  85c0                 test eax, eax
// 00882398  742d                 je 0x8823c7
// 0088239a  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0088239d  8b01                 mov eax, dword ptr [ecx]
// 0088239f  8b5048               mov edx, dword ptr [eax + 0x48]
// 008823a2  ffd2                 call edx
// 008823a4  83f802               cmp eax, 2
// 008823a7  741e                 je 0x8823c7
// 008823a9  8b06                 mov eax, dword ptr [esi]
// 008823ab  8b5008               mov edx, dword ptr [eax + 8]
// 008823ae  8d4c2404             lea ecx, [esp + 4]
// 008823b2  51                   push ecx
// 008823b3  8bce                 mov ecx, esi
// 008823b5  ffd2                 call edx
// 008823b7  8b4804               mov ecx, dword ptr [eax + 4]
// 008823ba  8b442410             mov eax, dword ptr [esp + 0x10]
// 008823be  2908                 sub dword ptr [eax], ecx
// 008823c0  5e                   pop esi
// 008823c1  83c408               add esp, 8
// 008823c4  c20400               ret 4
// 008823c7  8b16                 mov edx, dword ptr [esi]
// 008823c9  8b5208               mov edx, dword ptr [edx + 8]
// 008823cc  8d442404             lea eax, [esp + 4]
// 008823d0  50                   push eax
// 008823d1  8bce                 mov ecx, esi
// 008823d3  ffd2                 call edx
// 008823d5  8b08                 mov ecx, dword ptr [eax]
// 008823d7  8b442410             mov eax, dword ptr [esp + 0x10]
// 008823db  2908                 sub dword ptr [eax], ecx
// 008823dd  5e                   pop esi
// 008823de  83c408               add esp, 8
// 008823e1  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?AdjustWidth@CNavigateButtonArrow@CXTPTabManager@@MAEXAAH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
