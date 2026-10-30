// roc 2011-06 0087c3f0  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087c3f0
//
// 0087c3f0  56                   push esi
// 0087c3f1  8bf1                 mov esi, ecx
// 0087c3f3  e8185e0700           call 0x8f2210
// 0087c3f8  83780800             cmp dword ptr [eax + 8], 0
// 0087c3fc  7416                 je 0x87c414
// 0087c3fe  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0087c402  ff00                 inc dword ptr [eax]
// 0087c404  ff4004               inc dword ptr [eax + 4]
// 0087c407  83c9ff               or ecx, 0xffffffff
// 0087c40a  014808               add dword ptr [eax + 8], ecx
// 0087c40d  01480c               add dword ptr [eax + 0xc], ecx
// 0087c410  5e                   pop esi
// 0087c411  c20800               ret 8
// 0087c414  8bce                 mov ecx, esi
// 0087c416  e813e2f8ff           call 0x80a62e
// 0087c41b  5e                   pop esi
// 0087c41c  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTColorPopup.cpp (function ?OnNcCalcSize@CXTColorPopup@@IAEXHPAUtagNCCALCSIZE_PARAMS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPopup.cpp
