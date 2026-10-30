// roc 2009-12 0086ac40  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086ac40
//
// 0086ac40  56                   push esi
// 0086ac41  8bf1                 mov esi, ecx
// 0086ac43  e8286c0700           call 0x8e1870
// 0086ac48  83780800             cmp dword ptr [eax + 8], 0
// 0086ac4c  7416                 je 0x86ac64
// 0086ac4e  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0086ac52  ff00                 inc dword ptr [eax]
// 0086ac54  ff4004               inc dword ptr [eax + 4]
// 0086ac57  83c9ff               or ecx, 0xffffffff
// 0086ac5a  014808               add dword ptr [eax + 8], ecx
// 0086ac5d  01480c               add dword ptr [eax + 0xc], ecx
// 0086ac60  5e                   pop esi
// 0086ac61  c20800               ret 8
// 0086ac64  8bce                 mov ecx, esi
// 0086ac66  e8c591f8ff           call 0x7f3e30
// 0086ac6b  5e                   pop esi
// 0086ac6c  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTColorPopup.cpp (function ?OnNcCalcSize@CXTColorPopup@@IAEXHPAUtagNCCALCSIZE_PARAMS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPopup.cpp
