// from server: 100% by auto
// roc 2008-06 0077aea0  unit: CXTPTabManager::CNavigateButtonArrowLeft  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077aea0
//
// 0077aea0  83ec08               sub esp, 8
// 0077aea3  56                   push esi
// 0077aea4  8bf1                 mov esi, ecx
// 0077aea6  837e0802             cmp dword ptr [esi + 8], 2
// 0077aeaa  7551                 jne 0x77aefd
// 0077aeac  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0077aeaf  8b01                 mov eax, dword ptr [ecx]
// 0077aeb1  8b5048               mov edx, dword ptr [eax + 0x48]
// 0077aeb4  ffd2                 call edx
// 0077aeb6  85c0                 test eax, eax
// 0077aeb8  742d                 je 0x77aee7
// 0077aeba  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0077aebd  8b01                 mov eax, dword ptr [ecx]
// 0077aebf  8b5048               mov edx, dword ptr [eax + 0x48]
// 0077aec2  ffd2                 call edx
// 0077aec4  83f802               cmp eax, 2
// 0077aec7  741e                 je 0x77aee7
// 0077aec9  8b06                 mov eax, dword ptr [esi]
// 0077aecb  8b5008               mov edx, dword ptr [eax + 8]
// 0077aece  8d4c2404             lea ecx, [esp + 4]
// 0077aed2  51                   push ecx
// 0077aed3  8bce                 mov ecx, esi
// 0077aed5  ffd2                 call edx
// 0077aed7  8b4804               mov ecx, dword ptr [eax + 4]
// 0077aeda  8b442410             mov eax, dword ptr [esp + 0x10]
// 0077aede  2908                 sub dword ptr [eax], ecx
// 0077aee0  5e                   pop esi
// 0077aee1  83c408               add esp, 8
// 0077aee4  c20400               ret 4
// 0077aee7  8b16                 mov edx, dword ptr [esi]
// 0077aee9  8b5208               mov edx, dword ptr [edx + 8]
// 0077aeec  8d442404             lea eax, [esp + 4]
// 0077aef0  50                   push eax
// 0077aef1  8bce                 mov ecx, esi
// 0077aef3  ffd2                 call edx
// 0077aef5  8b08                 mov ecx, dword ptr [eax]
// 0077aef7  8b442410             mov eax, dword ptr [esp + 0x10]
// 0077aefb  2908                 sub dword ptr [eax], ecx
// 0077aefd  5e                   pop esi
// 0077aefe  83c408               add esp, 8
// 0077af01  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?AdjustWidth@CNavigateButtonArrow@CXTPTabManager@@MAEXAAH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
