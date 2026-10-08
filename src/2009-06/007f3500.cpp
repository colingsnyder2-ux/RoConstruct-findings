// roc 2009-06 007f3500  unit: CXTPTabClientWnd::CNavigateButtonActiveFiles  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f3500
//
// 007f3500  83ec08               sub esp, 8
// 007f3503  56                   push esi
// 007f3504  8bf1                 mov esi, ecx
// 007f3506  8b4608               mov eax, dword ptr [esi + 8]
// 007f3509  83f802               cmp eax, 2
// 007f350c  7414                 je 0x7f3522
// 007f350e  83f801               cmp eax, 1
// 007f3511  7560                 jne 0x7f3573
// 007f3513  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 007f3516  8b01                 mov eax, dword ptr [ecx]
// 007f3518  8b505c               mov edx, dword ptr [eax + 0x5c]
// 007f351b  56                   push esi
// 007f351c  ffd2                 call edx
// 007f351e  85c0                 test eax, eax
// 007f3520  7451                 je 0x7f3573
// 007f3522  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 007f3525  8b01                 mov eax, dword ptr [ecx]
// 007f3527  8b5048               mov edx, dword ptr [eax + 0x48]
// 007f352a  ffd2                 call edx
// 007f352c  85c0                 test eax, eax
// 007f352e  742d                 je 0x7f355d
// 007f3530  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 007f3533  8b01                 mov eax, dword ptr [ecx]
// 007f3535  8b5048               mov edx, dword ptr [eax + 0x48]
// 007f3538  ffd2                 call edx
// 007f353a  83f802               cmp eax, 2
// 007f353d  741e                 je 0x7f355d
// 007f353f  8b06                 mov eax, dword ptr [esi]
// 007f3541  8b5008               mov edx, dword ptr [eax + 8]
// 007f3544  8d4c2404             lea ecx, [esp + 4]
// 007f3548  51                   push ecx
// 007f3549  8bce                 mov ecx, esi
// 007f354b  ffd2                 call edx
// 007f354d  8b4804               mov ecx, dword ptr [eax + 4]
// 007f3550  8b442410             mov eax, dword ptr [esp + 0x10]
// 007f3554  2908                 sub dword ptr [eax], ecx
// 007f3556  5e                   pop esi
// 007f3557  83c408               add esp, 8
// 007f355a  c20400               ret 4
// 007f355d  8b16                 mov edx, dword ptr [esi]
// 007f355f  8b5208               mov edx, dword ptr [edx + 8]
// 007f3562  8d442404             lea eax, [esp + 4]
// 007f3566  50                   push eax
// 007f3567  8bce                 mov ecx, esi
// 007f3569  ffd2                 call edx
// 007f356b  8b08                 mov ecx, dword ptr [eax]
// 007f356d  8b442410             mov eax, dword ptr [esp + 0x10]
// 007f3571  2908                 sub dword ptr [eax], ecx
// 007f3573  5e                   pop esi
// 007f3574  83c408               add esp, 8
// 007f3577  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?AdjustWidth@CXTPTabManagerNavigateButton@@UAEXAAH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
