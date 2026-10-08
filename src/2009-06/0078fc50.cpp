// roc 2009-06 0078fc50  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0078fc50
//
// 0078fc50  56                   push esi
// 0078fc51  8bf1                 mov esi, ecx
// 0078fc53  e818150000           call 0x791170
// 0078fc58  83780800             cmp dword ptr [eax + 8], 0
// 0078fc5c  7416                 je 0x78fc74
// 0078fc5e  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0078fc62  ff00                 inc dword ptr [eax]
// 0078fc64  ff4004               inc dword ptr [eax + 4]
// 0078fc67  83c9ff               or ecx, 0xffffffff
// 0078fc6a  014808               add dword ptr [eax + 8], ecx
// 0078fc6d  01480c               add dword ptr [eax + 0xc], ecx
// 0078fc70  5e                   pop esi
// 0078fc71  c20800               ret 8
// 0078fc74  8bce                 mov ecx, esi
// 0078fc76  e88d93f8ff           call 0x719008
// 0078fc7b  5e                   pop esi
// 0078fc7c  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTColorPopup.cpp (function ?OnNcCalcSize@CXTColorPopup@@IAEXHPAUtagNCCALCSIZE_PARAMS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPopup.cpp
