// from server: 100% by auto
// roc 2008-06 0077adb0  unit: CXTPTabClientWnd::CNavigateButtonActiveFiles  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077adb0
//
// 0077adb0  83ec08               sub esp, 8
// 0077adb3  56                   push esi
// 0077adb4  8bf1                 mov esi, ecx
// 0077adb6  8b4608               mov eax, dword ptr [esi + 8]
// 0077adb9  83f802               cmp eax, 2
// 0077adbc  7414                 je 0x77add2
// 0077adbe  83f801               cmp eax, 1
// 0077adc1  7560                 jne 0x77ae23
// 0077adc3  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0077adc6  8b01                 mov eax, dword ptr [ecx]
// 0077adc8  8b505c               mov edx, dword ptr [eax + 0x5c]
// 0077adcb  56                   push esi
// 0077adcc  ffd2                 call edx
// 0077adce  85c0                 test eax, eax
// 0077add0  7451                 je 0x77ae23
// 0077add2  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0077add5  8b01                 mov eax, dword ptr [ecx]
// 0077add7  8b5048               mov edx, dword ptr [eax + 0x48]
// 0077adda  ffd2                 call edx
// 0077addc  85c0                 test eax, eax
// 0077adde  742d                 je 0x77ae0d
// 0077ade0  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0077ade3  8b01                 mov eax, dword ptr [ecx]
// 0077ade5  8b5048               mov edx, dword ptr [eax + 0x48]
// 0077ade8  ffd2                 call edx
// 0077adea  83f802               cmp eax, 2
// 0077aded  741e                 je 0x77ae0d
// 0077adef  8b06                 mov eax, dword ptr [esi]
// 0077adf1  8b5008               mov edx, dword ptr [eax + 8]
// 0077adf4  8d4c2404             lea ecx, [esp + 4]
// 0077adf8  51                   push ecx
// 0077adf9  8bce                 mov ecx, esi
// 0077adfb  ffd2                 call edx
// 0077adfd  8b4804               mov ecx, dword ptr [eax + 4]
// 0077ae00  8b442410             mov eax, dword ptr [esp + 0x10]
// 0077ae04  2908                 sub dword ptr [eax], ecx
// 0077ae06  5e                   pop esi
// 0077ae07  83c408               add esp, 8
// 0077ae0a  c20400               ret 4
// 0077ae0d  8b16                 mov edx, dword ptr [esi]
// 0077ae0f  8b5208               mov edx, dword ptr [edx + 8]
// 0077ae12  8d442404             lea eax, [esp + 4]
// 0077ae16  50                   push eax
// 0077ae17  8bce                 mov ecx, esi
// 0077ae19  ffd2                 call edx
// 0077ae1b  8b08                 mov ecx, dword ptr [eax]
// 0077ae1d  8b442410             mov eax, dword ptr [esp + 0x10]
// 0077ae21  2908                 sub dword ptr [eax], ecx
// 0077ae23  5e                   pop esi
// 0077ae24  83c408               add esp, 8
// 0077ae27  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?AdjustWidth@CXTPTabManagerNavigateButton@@UAEXAAH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
