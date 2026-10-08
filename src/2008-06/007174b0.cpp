// from server: 100% by auto
// roc 2008-06 007174b0  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007174b0
//
// 007174b0  56                   push esi
// 007174b1  8bf1                 mov esi, ecx
// 007174b3  e828720700           call 0x78e6e0
// 007174b8  83780800             cmp dword ptr [eax + 8], 0
// 007174bc  7416                 je 0x7174d4
// 007174be  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007174c2  ff00                 inc dword ptr [eax]
// 007174c4  ff4004               inc dword ptr [eax + 4]
// 007174c7  83c9ff               or ecx, 0xffffffff
// 007174ca  014808               add dword ptr [eax + 8], ecx
// 007174cd  01480c               add dword ptr [eax + 0xc], ecx
// 007174d0  5e                   pop esi
// 007174d1  c20800               ret 8
// 007174d4  8bce                 mov ecx, esi
// 007174d6  e88d97f8ff           call 0x6a0c68
// 007174db  5e                   pop esi
// 007174dc  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTColorPopup.cpp (function ?OnNcCalcSize@CXTColorPopup@@IAEXHPAUtagNCCALCSIZE_PARAMS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPopup.cpp
