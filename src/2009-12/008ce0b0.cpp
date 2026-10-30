// roc 2009-12 008ce0b0  unit: CXTPTabClientWnd::CNavigateButtonActiveFiles  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ce0b0
//
// 008ce0b0  83ec08               sub esp, 8
// 008ce0b3  56                   push esi
// 008ce0b4  8bf1                 mov esi, ecx
// 008ce0b6  8b4608               mov eax, dword ptr [esi + 8]
// 008ce0b9  83f802               cmp eax, 2
// 008ce0bc  7414                 je 0x8ce0d2
// 008ce0be  83f801               cmp eax, 1
// 008ce0c1  7560                 jne 0x8ce123
// 008ce0c3  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008ce0c6  8b01                 mov eax, dword ptr [ecx]
// 008ce0c8  8b505c               mov edx, dword ptr [eax + 0x5c]
// 008ce0cb  56                   push esi
// 008ce0cc  ffd2                 call edx
// 008ce0ce  85c0                 test eax, eax
// 008ce0d0  7451                 je 0x8ce123
// 008ce0d2  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008ce0d5  8b01                 mov eax, dword ptr [ecx]
// 008ce0d7  8b5048               mov edx, dword ptr [eax + 0x48]
// 008ce0da  ffd2                 call edx
// 008ce0dc  85c0                 test eax, eax
// 008ce0de  742d                 je 0x8ce10d
// 008ce0e0  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008ce0e3  8b01                 mov eax, dword ptr [ecx]
// 008ce0e5  8b5048               mov edx, dword ptr [eax + 0x48]
// 008ce0e8  ffd2                 call edx
// 008ce0ea  83f802               cmp eax, 2
// 008ce0ed  741e                 je 0x8ce10d
// 008ce0ef  8b06                 mov eax, dword ptr [esi]
// 008ce0f1  8b5008               mov edx, dword ptr [eax + 8]
// 008ce0f4  8d4c2404             lea ecx, [esp + 4]
// 008ce0f8  51                   push ecx
// 008ce0f9  8bce                 mov ecx, esi
// 008ce0fb  ffd2                 call edx
// 008ce0fd  8b4804               mov ecx, dword ptr [eax + 4]
// 008ce100  8b442410             mov eax, dword ptr [esp + 0x10]
// 008ce104  2908                 sub dword ptr [eax], ecx
// 008ce106  5e                   pop esi
// 008ce107  83c408               add esp, 8
// 008ce10a  c20400               ret 4
// 008ce10d  8b16                 mov edx, dword ptr [esi]
// 008ce10f  8b5208               mov edx, dword ptr [edx + 8]
// 008ce112  8d442404             lea eax, [esp + 4]
// 008ce116  50                   push eax
// 008ce117  8bce                 mov ecx, esi
// 008ce119  ffd2                 call edx
// 008ce11b  8b08                 mov ecx, dword ptr [eax]
// 008ce11d  8b442410             mov eax, dword ptr [esp + 0x10]
// 008ce121  2908                 sub dword ptr [eax], ecx
// 008ce123  5e                   pop esi
// 008ce124  83c408               add esp, 8
// 008ce127  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?AdjustWidth@CXTPTabManagerNavigateButton@@UAEXAAH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
