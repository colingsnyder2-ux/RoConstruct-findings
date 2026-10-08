// roc 2011-06 008d31a0  unit: CXTPTabClientWnd::CNavigateButtonActiveFiles  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d31a0
//
// 008d31a0  83ec08               sub esp, 8
// 008d31a3  56                   push esi
// 008d31a4  8bf1                 mov esi, ecx
// 008d31a6  8b4608               mov eax, dword ptr [esi + 8]
// 008d31a9  83f802               cmp eax, 2
// 008d31ac  7414                 je 0x8d31c2
// 008d31ae  83f801               cmp eax, 1
// 008d31b1  7560                 jne 0x8d3213
// 008d31b3  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008d31b6  8b01                 mov eax, dword ptr [ecx]
// 008d31b8  8b505c               mov edx, dword ptr [eax + 0x5c]
// 008d31bb  56                   push esi
// 008d31bc  ffd2                 call edx
// 008d31be  85c0                 test eax, eax
// 008d31c0  7451                 je 0x8d3213
// 008d31c2  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008d31c5  8b01                 mov eax, dword ptr [ecx]
// 008d31c7  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d31ca  ffd2                 call edx
// 008d31cc  85c0                 test eax, eax
// 008d31ce  742d                 je 0x8d31fd
// 008d31d0  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008d31d3  8b01                 mov eax, dword ptr [ecx]
// 008d31d5  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d31d8  ffd2                 call edx
// 008d31da  83f802               cmp eax, 2
// 008d31dd  741e                 je 0x8d31fd
// 008d31df  8b06                 mov eax, dword ptr [esi]
// 008d31e1  8b5008               mov edx, dword ptr [eax + 8]
// 008d31e4  8d4c2404             lea ecx, [esp + 4]
// 008d31e8  51                   push ecx
// 008d31e9  8bce                 mov ecx, esi
// 008d31eb  ffd2                 call edx
// 008d31ed  8b4804               mov ecx, dword ptr [eax + 4]
// 008d31f0  8b442410             mov eax, dword ptr [esp + 0x10]
// 008d31f4  2908                 sub dword ptr [eax], ecx
// 008d31f6  5e                   pop esi
// 008d31f7  83c408               add esp, 8
// 008d31fa  c20400               ret 4
// 008d31fd  8b16                 mov edx, dword ptr [esi]
// 008d31ff  8b5208               mov edx, dword ptr [edx + 8]
// 008d3202  8d442404             lea eax, [esp + 4]
// 008d3206  50                   push eax
// 008d3207  8bce                 mov ecx, esi
// 008d3209  ffd2                 call edx
// 008d320b  8b08                 mov ecx, dword ptr [eax]
// 008d320d  8b442410             mov eax, dword ptr [esp + 0x10]
// 008d3211  2908                 sub dword ptr [eax], ecx
// 008d3213  5e                   pop esi
// 008d3214  83c408               add esp, 8
// 008d3217  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?AdjustWidth@CXTPTabManagerNavigateButton@@UAEXAAH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
