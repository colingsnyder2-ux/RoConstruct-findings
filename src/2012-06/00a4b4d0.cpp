// roc 2012-06 00a4b4d0  unit: CXTPTabClientWnd::CNavigateButtonActiveFiles  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4b4d0
//
// 00a4b4d0  83ec08               sub esp, 8
// 00a4b4d3  56                   push esi
// 00a4b4d4  8bf1                 mov esi, ecx
// 00a4b4d6  8b4608               mov eax, dword ptr [esi + 8]
// 00a4b4d9  83f802               cmp eax, 2
// 00a4b4dc  7414                 je 0xa4b4f2
// 00a4b4de  83f801               cmp eax, 1
// 00a4b4e1  7560                 jne 0xa4b543
// 00a4b4e3  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00a4b4e6  8b01                 mov eax, dword ptr [ecx]
// 00a4b4e8  8b505c               mov edx, dword ptr [eax + 0x5c]
// 00a4b4eb  56                   push esi
// 00a4b4ec  ffd2                 call edx
// 00a4b4ee  85c0                 test eax, eax
// 00a4b4f0  7451                 je 0xa4b543
// 00a4b4f2  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00a4b4f5  8b01                 mov eax, dword ptr [ecx]
// 00a4b4f7  8b5048               mov edx, dword ptr [eax + 0x48]
// 00a4b4fa  ffd2                 call edx
// 00a4b4fc  85c0                 test eax, eax
// 00a4b4fe  742d                 je 0xa4b52d
// 00a4b500  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00a4b503  8b01                 mov eax, dword ptr [ecx]
// 00a4b505  8b5048               mov edx, dword ptr [eax + 0x48]
// 00a4b508  ffd2                 call edx
// 00a4b50a  83f802               cmp eax, 2
// 00a4b50d  741e                 je 0xa4b52d
// 00a4b50f  8b06                 mov eax, dword ptr [esi]
// 00a4b511  8b5008               mov edx, dword ptr [eax + 8]
// 00a4b514  8d4c2404             lea ecx, [esp + 4]
// 00a4b518  51                   push ecx
// 00a4b519  8bce                 mov ecx, esi
// 00a4b51b  ffd2                 call edx
// 00a4b51d  8b4804               mov ecx, dword ptr [eax + 4]
// 00a4b520  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a4b524  2908                 sub dword ptr [eax], ecx
// 00a4b526  5e                   pop esi
// 00a4b527  83c408               add esp, 8
// 00a4b52a  c20400               ret 4
// 00a4b52d  8b16                 mov edx, dword ptr [esi]
// 00a4b52f  8b5208               mov edx, dword ptr [edx + 8]
// 00a4b532  8d442404             lea eax, [esp + 4]
// 00a4b536  50                   push eax
// 00a4b537  8bce                 mov ecx, esi
// 00a4b539  ffd2                 call edx
// 00a4b53b  8b08                 mov ecx, dword ptr [eax]
// 00a4b53d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a4b541  2908                 sub dword ptr [eax], ecx
// 00a4b543  5e                   pop esi
// 00a4b544  83c408               add esp, 8
// 00a4b547  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?AdjustWidth@CXTPTabManagerNavigateButton@@UAEXAAH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
