// roc 2012-06 009f4990  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f4990
//
// 009f4990  56                   push esi
// 009f4991  8bf1                 mov esi, ecx
// 009f4993  e808210700           call 0xa66aa0
// 009f4998  83780800             cmp dword ptr [eax + 8], 0
// 009f499c  7416                 je 0x9f49b4
// 009f499e  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009f49a2  ff00                 inc dword ptr [eax]
// 009f49a4  ff4004               inc dword ptr [eax + 4]
// 009f49a7  83c9ff               or ecx, 0xffffffff
// 009f49aa  014808               add dword ptr [eax + 8], ecx
// 009f49ad  01480c               add dword ptr [eax + 0xc], ecx
// 009f49b0  5e                   pop esi
// 009f49b1  c20800               ret 8
// 009f49b4  8bce                 mov ecx, esi
// 009f49b6  e823ddf8ff           call 0x9826de
// 009f49bb  5e                   pop esi
// 009f49bc  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTColorPopup.cpp (function ?OnNcCalcSize@CXTColorPopup@@IAEXHPAUtagNCCALCSIZE_PARAMS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPopup.cpp
