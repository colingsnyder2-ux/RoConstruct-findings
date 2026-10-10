// roc 2008-06 0071da90  unit: CXTPShortcutManager  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071da90
//
// 0071da90  83792800             cmp dword ptr [ecx + 0x28], 0
// 0071da94  7f28                 jg 0x71dabe
// 0071da96  8b01                 mov eax, dword ptr [ecx]
// 0071da98  8b5074               mov edx, dword ptr [eax + 0x74]
// 0071da9b  ffd2                 call edx
// 0071da9d  85c0                 test eax, eax
// 0071da9f  741d                 je 0x71dabe
// 0071daa1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0071daa5  8b542404             mov edx, dword ptr [esp + 4]
// 0071daa9  51                   push ecx
// 0071daaa  50                   push eax
// 0071daab  52                   push edx
// 0071daac  ff15082c8000         call dword ptr [0x802c08]
// 0071dab2  85c0                 test eax, eax
// 0071dab4  7408                 je 0x71dabe
// 0071dab6  b801000000           mov eax, 1
// 0071dabb  c20800               ret 8
// 0071dabe  33c0                 xor eax, eax
// 0071dac0  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPShortcutManager.cpp (function ?TranslateAcceleratorA@CXTPShortcutManager@@QAEHPAUHWND__@@PAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPShortcutManager.cpp
