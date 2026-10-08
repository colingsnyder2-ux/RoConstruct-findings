// roc 2010-06 0081ec40  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0081ec40
//
// 0081ec40  56                   push esi
// 0081ec41  8bf1                 mov esi, ecx
// 0081ec43  e818220000           call 0x820e60
// 0081ec48  83780800             cmp dword ptr [eax + 8], 0
// 0081ec4c  7416                 je 0x81ec64
// 0081ec4e  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0081ec52  ff00                 inc dword ptr [eax]
// 0081ec54  ff4004               inc dword ptr [eax + 4]
// 0081ec57  83c9ff               or ecx, 0xffffffff
// 0081ec5a  014808               add dword ptr [eax + 8], ecx
// 0081ec5d  01480c               add dword ptr [eax + 0xc], ecx
// 0081ec60  5e                   pop esi
// 0081ec61  c20800               ret 8
// 0081ec64  8bce                 mov ecx, esi
// 0081ec66  e80593f8ff           call 0x7a7f70
// 0081ec6b  5e                   pop esi
// 0081ec6c  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTColorPopup.cpp (function ?OnNcCalcSize@CXTColorPopup@@IAEXHPAUtagNCCALCSIZE_PARAMS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPopup.cpp
