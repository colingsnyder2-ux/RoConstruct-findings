// roc 2007-08 006fd210  unit: CXTPTabClientWnd::CNavigateButtonActiveFiles  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fd210
//
// 006fd210  83ec08               sub esp, 8
// 006fd213  56                   push esi
// 006fd214  8bf1                 mov esi, ecx
// 006fd216  8b4608               mov eax, dword ptr [esi + 8]
// 006fd219  83f802               cmp eax, 2
// 006fd21c  7414                 je 0x6fd232
// 006fd21e  83f801               cmp eax, 1
// 006fd221  7560                 jne 0x6fd283
// 006fd223  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006fd226  8b01                 mov eax, dword ptr [ecx]
// 006fd228  8b505c               mov edx, dword ptr [eax + 0x5c]
// 006fd22b  56                   push esi
// 006fd22c  ffd2                 call edx
// 006fd22e  85c0                 test eax, eax
// 006fd230  7451                 je 0x6fd283
// 006fd232  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006fd235  8b01                 mov eax, dword ptr [ecx]
// 006fd237  8b5048               mov edx, dword ptr [eax + 0x48]
// 006fd23a  ffd2                 call edx
// 006fd23c  85c0                 test eax, eax
// 006fd23e  742d                 je 0x6fd26d
// 006fd240  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006fd243  8b01                 mov eax, dword ptr [ecx]
// 006fd245  8b5048               mov edx, dword ptr [eax + 0x48]
// 006fd248  ffd2                 call edx
// 006fd24a  83f802               cmp eax, 2
// 006fd24d  741e                 je 0x6fd26d
// 006fd24f  8b06                 mov eax, dword ptr [esi]
// 006fd251  8b5008               mov edx, dword ptr [eax + 8]
// 006fd254  8d4c2404             lea ecx, [esp + 4]
// 006fd258  51                   push ecx
// 006fd259  8bce                 mov ecx, esi
// 006fd25b  ffd2                 call edx
// 006fd25d  8b4804               mov ecx, dword ptr [eax + 4]
// 006fd260  8b442410             mov eax, dword ptr [esp + 0x10]
// 006fd264  2908                 sub dword ptr [eax], ecx
// 006fd266  5e                   pop esi
// 006fd267  83c408               add esp, 8
// 006fd26a  c20400               ret 4
// 006fd26d  8b16                 mov edx, dword ptr [esi]
// 006fd26f  8b5208               mov edx, dword ptr [edx + 8]
// 006fd272  8d442404             lea eax, [esp + 4]
// 006fd276  50                   push eax
// 006fd277  8bce                 mov ecx, esi
// 006fd279  ffd2                 call edx
// 006fd27b  8b08                 mov ecx, dword ptr [eax]
// 006fd27d  8b442410             mov eax, dword ptr [esp + 0x10]
// 006fd281  2908                 sub dword ptr [eax], ecx
// 006fd283  5e                   pop esi
// 006fd284  83c408               add esp, 8
// 006fd287  c20400               ret 4
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabManager.cpp (function ?AdjustWidth@CXTPTabManagerNavigateButton@@UAEXAAH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabManager.cpp
