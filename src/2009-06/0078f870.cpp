// roc 2009-06 0078f870  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0078f870
//
// 0078f870  56                   push esi
// 0078f871  8bf1                 mov esi, ecx
// 0078f873  e8187d0700           call 0x807590
// 0078f878  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0078f87c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0078f880  89867c010000         mov dword ptr [esi + 0x17c], eax
// 0078f886  c706dcf08f00         mov dword ptr [esi], 0x8ff0dc
// 0078f88c  c74654ccf08f00       mov dword ptr [esi + 0x54], 0x8ff0cc
// 0078f893  898e64010000         mov dword ptr [esi + 0x164], ecx
// 0078f899  c7866801000001000000 mov dword ptr [esi + 0x168], 1
// 0078f8a3  8bc6                 mov eax, esi
// 0078f8a5  5e                   pop esi
// 0078f8a6  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTColorPopup.cpp (function ??0CXTColorPopup@@QAE@HJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPopup.cpp
