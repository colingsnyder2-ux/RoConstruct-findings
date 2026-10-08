// from server: 100% by auto
// roc 2011-06 0087c070  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087c070
//
// 0087c070  56                   push esi
// 0087c071  8bf1                 mov esi, ecx
// 0087c073  e8b6e5f8ff           call 0x80a62e
// 0087c078  837c240800           cmp dword ptr [esp + 8], 0
// 0087c07d  751b                 jne 0x87c09a
// 0087c07f  8bce                 mov ecx, esi
// 0087c081  e88a260700           call 0x8ee710
// 0087c086  84c0                 test al, al
// 0087c088  7510                 jne 0x87c09a
// 0087c08a  8b4620               mov eax, dword ptr [esi + 0x20]
// 0087c08d  6a00                 push 0
// 0087c08f  6a00                 push 0
// 0087c091  6a10                 push 0x10
// 0087c093  50                   push eax
// 0087c094  ff15b419a400         call dword ptr [0xa419b4]
// 0087c09a  5e                   pop esi
// 0087c09b  c20c00               ret 0xc
// library xtp-15.2.1/Source\Controls\Popup\XTPColorPopup.cpp (function ?OnActivate@CXTPColorPopup@@IAEXIPAVCWnd@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Popup/XTPColorPopup.cpp
