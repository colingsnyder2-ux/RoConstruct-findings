// roc 2009-12 0088e210  unit: CXTPShortcutManager  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088e210
//
// 0088e210  83792800             cmp dword ptr [ecx + 0x28], 0
// 0088e214  7f28                 jg 0x88e23e
// 0088e216  8b01                 mov eax, dword ptr [ecx]
// 0088e218  8b5074               mov edx, dword ptr [eax + 0x74]
// 0088e21b  ffd2                 call edx
// 0088e21d  85c0                 test eax, eax
// 0088e21f  741d                 je 0x88e23e
// 0088e221  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0088e225  8b542404             mov edx, dword ptr [esp + 4]
// 0088e229  51                   push ecx
// 0088e22a  50                   push eax
// 0088e22b  52                   push edx
// 0088e22c  ff1594cb9800         call dword ptr [0x98cb94]
// 0088e232  85c0                 test eax, eax
// 0088e234  7408                 je 0x88e23e
// 0088e236  b801000000           mov eax, 1
// 0088e23b  c20800               ret 8
// 0088e23e  33c0                 xor eax, eax
// 0088e240  c20800               ret 8
// copied from an identical function in another client (function ?TranslateAcceleratorA@CXTPShortcutManager@@QAEHPAUHWND__@@PAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPShortcutManager.cpp