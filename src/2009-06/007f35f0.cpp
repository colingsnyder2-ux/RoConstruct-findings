// roc 2009-06 007f35f0  unit: CXTPTabManager::CNavigateButtonArrowLeft  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f35f0
//
// 007f35f0  83ec08               sub esp, 8
// 007f35f3  56                   push esi
// 007f35f4  8bf1                 mov esi, ecx
// 007f35f6  837e0802             cmp dword ptr [esi + 8], 2
// 007f35fa  7551                 jne 0x7f364d
// 007f35fc  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 007f35ff  8b01                 mov eax, dword ptr [ecx]
// 007f3601  8b5048               mov edx, dword ptr [eax + 0x48]
// 007f3604  ffd2                 call edx
// 007f3606  85c0                 test eax, eax
// 007f3608  742d                 je 0x7f3637
// 007f360a  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 007f360d  8b01                 mov eax, dword ptr [ecx]
// 007f360f  8b5048               mov edx, dword ptr [eax + 0x48]
// 007f3612  ffd2                 call edx
// 007f3614  83f802               cmp eax, 2
// 007f3617  741e                 je 0x7f3637
// 007f3619  8b06                 mov eax, dword ptr [esi]
// 007f361b  8b5008               mov edx, dword ptr [eax + 8]
// 007f361e  8d4c2404             lea ecx, [esp + 4]
// 007f3622  51                   push ecx
// 007f3623  8bce                 mov ecx, esi
// 007f3625  ffd2                 call edx
// 007f3627  8b4804               mov ecx, dword ptr [eax + 4]
// 007f362a  8b442410             mov eax, dword ptr [esp + 0x10]
// 007f362e  2908                 sub dword ptr [eax], ecx
// 007f3630  5e                   pop esi
// 007f3631  83c408               add esp, 8
// 007f3634  c20400               ret 4
// 007f3637  8b16                 mov edx, dword ptr [esi]
// 007f3639  8b5208               mov edx, dword ptr [edx + 8]
// 007f363c  8d442404             lea eax, [esp + 4]
// 007f3640  50                   push eax
// 007f3641  8bce                 mov ecx, esi
// 007f3643  ffd2                 call edx
// 007f3645  8b08                 mov ecx, dword ptr [eax]
// 007f3647  8b442410             mov eax, dword ptr [esp + 0x10]
// 007f364b  2908                 sub dword ptr [eax], ecx
// 007f364d  5e                   pop esi
// 007f364e  83c408               add esp, 8
// 007f3651  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?AdjustWidth@CNavigateButtonArrow@CXTPTabManager@@MAEXAAH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
