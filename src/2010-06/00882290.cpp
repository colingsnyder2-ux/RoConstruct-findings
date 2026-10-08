// roc 2010-06 00882290  unit: CXTPTabClientWnd::CNavigateButtonActiveFiles  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00882290
//
// 00882290  83ec08               sub esp, 8
// 00882293  56                   push esi
// 00882294  8bf1                 mov esi, ecx
// 00882296  8b4608               mov eax, dword ptr [esi + 8]
// 00882299  83f802               cmp eax, 2
// 0088229c  7414                 je 0x8822b2
// 0088229e  83f801               cmp eax, 1
// 008822a1  7560                 jne 0x882303
// 008822a3  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008822a6  8b01                 mov eax, dword ptr [ecx]
// 008822a8  8b505c               mov edx, dword ptr [eax + 0x5c]
// 008822ab  56                   push esi
// 008822ac  ffd2                 call edx
// 008822ae  85c0                 test eax, eax
// 008822b0  7451                 je 0x882303
// 008822b2  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008822b5  8b01                 mov eax, dword ptr [ecx]
// 008822b7  8b5048               mov edx, dword ptr [eax + 0x48]
// 008822ba  ffd2                 call edx
// 008822bc  85c0                 test eax, eax
// 008822be  742d                 je 0x8822ed
// 008822c0  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008822c3  8b01                 mov eax, dword ptr [ecx]
// 008822c5  8b5048               mov edx, dword ptr [eax + 0x48]
// 008822c8  ffd2                 call edx
// 008822ca  83f802               cmp eax, 2
// 008822cd  741e                 je 0x8822ed
// 008822cf  8b06                 mov eax, dword ptr [esi]
// 008822d1  8b5008               mov edx, dword ptr [eax + 8]
// 008822d4  8d4c2404             lea ecx, [esp + 4]
// 008822d8  51                   push ecx
// 008822d9  8bce                 mov ecx, esi
// 008822db  ffd2                 call edx
// 008822dd  8b4804               mov ecx, dword ptr [eax + 4]
// 008822e0  8b442410             mov eax, dword ptr [esp + 0x10]
// 008822e4  2908                 sub dword ptr [eax], ecx
// 008822e6  5e                   pop esi
// 008822e7  83c408               add esp, 8
// 008822ea  c20400               ret 4
// 008822ed  8b16                 mov edx, dword ptr [esi]
// 008822ef  8b5208               mov edx, dword ptr [edx + 8]
// 008822f2  8d442404             lea eax, [esp + 4]
// 008822f6  50                   push eax
// 008822f7  8bce                 mov ecx, esi
// 008822f9  ffd2                 call edx
// 008822fb  8b08                 mov ecx, dword ptr [eax]
// 008822fd  8b442410             mov eax, dword ptr [esp + 0x10]
// 00882301  2908                 sub dword ptr [eax], ecx
// 00882303  5e                   pop esi
// 00882304  83c408               add esp, 8
// 00882307  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?AdjustWidth@CXTPTabManagerNavigateButton@@UAEXAAH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
