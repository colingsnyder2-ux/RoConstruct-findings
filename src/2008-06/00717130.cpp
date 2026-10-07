// roc 2008-06 00717130  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00717130
//
// 00717130  56                   push esi
// 00717131  8bf1                 mov esi, ecx
// 00717133  e8309bf8ff           call 0x6a0c68
// 00717138  837c240800           cmp dword ptr [esp + 8], 0
// 0071713d  751b                 jne 0x71715a
// 0071713f  8bce                 mov ecx, esi
// 00717141  e8fa750700           call 0x78e740
// 00717146  84c0                 test al, al
// 00717148  7510                 jne 0x71715a
// 0071714a  8b4620               mov eax, dword ptr [esi + 0x20]
// 0071714d  6a00                 push 0
// 0071714f  6a00                 push 0
// 00717151  6a10                 push 0x10
// 00717153  50                   push eax
// 00717154  ff150c2e8000         call dword ptr [0x802e0c]
// 0071715a  5e                   pop esi
// 0071715b  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTColorPopup.cpp (function ?OnActivate@CXTColorPopup@@IAEXIPAVCWnd@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPopup.cpp
