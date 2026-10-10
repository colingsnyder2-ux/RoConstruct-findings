// roc 2008-06 00717340  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00717340
//
// 00717340  56                   push esi
// 00717341  8bf1                 mov esi, ecx
// 00717343  e82099f8ff           call 0x6a0c68
// 00717348  83be5801000000       cmp dword ptr [esi + 0x158], 0
// 0071734f  750e                 jne 0x71735f
// 00717351  8b06                 mov eax, dword ptr [esi]
// 00717353  8b9048010000         mov edx, dword ptr [eax + 0x148]
// 00717359  6aff                 push -1
// 0071735b  8bce                 mov ecx, esi
// 0071735d  ffd2                 call edx
// 0071735f  5e                   pop esi
// 00717360  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Controls\XTColorPopup.cpp (function ?OnKillFocus@CXTColorPopup@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTColorPopup.cpp
